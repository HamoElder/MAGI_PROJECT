set ilaExit [lsearch -exact [get_ips ila*] ila2]
if { $ilaExit <0} {
create_ip -name ila -vendor xilinx.com -library ip -version 6.2 -module_name ila2
}
set_property CONFIG.C_NUM_OF_PROBES 1 [get_ips ila2]
set_property CONFIG.C_EN_STRG_QUAL {1} [get_ips ila2]
set_property CONFIG.C_ADV_TRIGGER {true} [get_ips ila2]
set_property CONFIG.C_DATA_DEPTH 1024 [get_ips ila2]
set_property CONFIG.C_PROBE0_WIDTH {8} [get_ips ila2]
