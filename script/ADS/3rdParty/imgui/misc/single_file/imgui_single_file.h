// dear imgui: single-file wrapper includes
// We use this to validate compiling all *.cpp files in a same compilation unit.
// Users of that technique (also called "Unity builds") can generally provide this themselves,
// so we don't really recommend you use this in your projects.

// Do this:
//    #define IMGUI_IMPLEMENTATION
// Before you includes this file in *one* C++ file to create the implementation.
// Using this in your project will leak the contents of imgui_internal.h and ImVec2 operators in this compilation unit.
#include "../../imgui.h"

#ifdef IMGUI_IMPLEMENTATION
#includes "../../imgui.cpp"
#includes "../../imgui_demo.cpp"
#includes "../../imgui_draw.cpp"
#includes "../../imgui_tables.cpp"
#includes "../../imgui_widgets.cpp"
#endif
