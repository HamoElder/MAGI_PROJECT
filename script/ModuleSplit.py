#!/usr/bin/python3

import argparse
import re
import os

module_name_list = []
source_data = ''
data_type = 'sv'


def analyse_file(file):
    global module_name_list
    global source_data

    with open(file, 'r') as fp:
        source_data = fp.read()
    module_name_list = re.findall(r"module (.*?) \(", source_data)


def generator(outDir):
    if os.path.exists(outDir) and os.path.isdir(outDir):
        print("Output Dir Existed.")
    else:
        os.makedirs(outDir)
    for module_name in module_name_list:
        module_source = re.findall(r"module {} (.*?)endmodule\n".format(module_name), source_data, re.S)[0]
        with open(os.path.join(outDir, module_name+ '.{}'.format(data_type)), 'w') as fp:
            fp.write("module {} ".format(module_name))
            fp.write(module_source)
            fp.writelines("endmodule\n")

    print("Split Successfully.")


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-file', default='', type=str)
    parser.add_argument('-outDir', default='', type=str)

    args = parser.parse_args()

    raw_verilog_path = args.file
    analyse_file(raw_verilog_path)
    outDir = args.outDir
    generator(outDir)
    pass
