cmake_minimum_required (VERSION 3.0)
cmake_policy(VERSION 3.0)

project (ADS)

IF(NOT CMAKE_BUILD_TYPE)
  SET(CMAKE_BUILD_TYPE Release)
ENDIF()

MESSAGE(STATUS "Build type: " ${CMAKE_BUILD_TYPE})
if (POLICY CMP0072)
  set(OpenGL_GL_PREFERENCE LEGACY)
endif()

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake_modules/")

if(WIN32)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
endif(WIN32)

link_directories(${PROJECT_SOURCE_DIR}/lib)

list(APPEND CMAKE_CXX_FLAGS "-std=c++11")

# find the required packages
find_package(GLM REQUIRED)
message(STATUS "GLM included at ${GLM_INCLUDE_DIR}")
find_package(GLFW3 REQUIRED)
message(STATUS "Found GLFW3 in ${GLFW3_INCLUDE_DIR}")
find_package(ASSIMP REQUIRED)
message(STATUS "Found ASSIMP in ${ASSIMP_INCLUDE_DIR}")
find_package(Eigen3 REQUIRED)
message(STATUS "Found Eigen3 in ${EIGEN3_INCLUDE_DIR}")
# find_package(SOIL REQUIRED)
# message(STATUS "Found SOIL in ${SOIL_INCLUDE_DIR}")
# find_package(GLEW REQUIRED)
# message(STATUS "Found GLEW in ${GLEW_INCLUDE_DIR}")

if(WIN32)
  set(LIBS glfw3 opengl32 assimp freetype irrKlang)
elseif(UNIX AND NOT APPLE)
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
  find_package(OpenGL REQUIRED)
  add_definitions(${OPENGL_DEFINITIONS})
  find_package(X11 REQUIRED)
  # note that the order is important for setting the libs
  # use pkg-config --libs $(pkg-config --print-requires --print-requires-private glfw3) in a terminal to confirm
  set(LIBS ${GLFW3_LIBRARY} X11 Xrandr Xinerama Xi Xxf86vm Xcursor GL dl pthread freetype ${ASSIMP_LIBRARY} )
  set (CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE} -ldl")
elseif(APPLE)
  INCLUDE_DIRECTORIES(/System/Library/Frameworks)
  FIND_LIBRARY(COCOA_LIBRARY Cocoa)
  FIND_LIBRARY(OpenGL_LIBRARY OpenGL)
  FIND_LIBRARY(IOKit_LIBRARY IOKit)
  FIND_LIBRARY(CoreVideo_LIBRARY CoreVideo)
  MARK_AS_ADVANCED(COCOA_LIBRARY OpenGL_LIBRARY)
  SET(APPLE_LIBS ${COCOA_LIBRARY} ${IOKit_LIBRARY} ${OpenGL_LIBRARY} ${CoreVideo_LIBRARY})
  SET(APPLE_LIBS ${APPLE_LIBS} ${GLFW3_LIBRARY} ${ASSIMP_LIBRARY})
  set(LIBS ${LIBS} ${APPLE_LIBS})
else()
  set(LIBS )
endif(WIN32)

configure_file(${PROJECT_SOURCE_DIR}/configuration/root_directory.h.in configuration/root_directory.h)
include_directories(${CMAKE_BINARY_DIR}/configuration)

#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
add_library(STB_IMAGE "src/stb/stb_image.cpp")
set(LIBS ${LIBS} STB_IMAGE)

add_library(GLAD "3rdParty/glad/glad.c")
set(LIBS ${LIBS} GLAD)

macro(makeLink src dest target)
  add_custom_command(TARGET ${target} POST_BUILD COMMAND ${CMAKE_COMMAND} -E create_symlink ${src} ${dest}  DEPENDS  ${dest} COMMENT "mklink ${src} -> ${dest}")
endmacro()

include_directories(${PROJECT_SOURCE_DIR}/includes
        ${PROJECT_SOURCE_DIR}/3rdParty
        ${EIGEN3_INCLUDE_DIR}
        )

add_subdirectory(${PROJECT_SOURCE_DIR}/3rdParty)
include_directories(${IMGUI_INC_DIR})
add_library(MAGI_ENGINE
        ${PROJECT_SOURCE_DIR}/src/engine/shader.cpp
        )
set(LIBS ${LIBS} MAGI_ENGINE)
add_subdirectory(App/editor)
add_subdirectory(App/DI)
add_subdirectory(App/FSR)
# then create a project file per tutorial
#foreach(CHAPTER ${CHAPTERS})
#    foreach(DEMO ${${CHAPTER}})
#        file(GLOB SOURCE
#            "src/${CHAPTER}/${DEMO}/*.h"
#            "src/${CHAPTER}/${DEMO}/*.cpp"
#            "src/${CHAPTER}/${DEMO}/*.vs"
#            "src/${CHAPTER}/${DEMO}/*.fs"
#            "src/${CHAPTER}/${DEMO}/*.gs"
#        )
#        set(NAME "${CHAPTER}__${DEMO}")
#        add_executable(${NAME} ${SOURCE})
#        target_link_libraries(${NAME} ${LIBS})
#        if(WIN32)
#            set_target_properties(${NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/${CHAPTER}")
#            set_target_properties(${NAME} PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/${CHAPTER}/Debug")
#        elseif(UNIX AND NOT APPLE)
#            set_target_properties(${NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/${CHAPTER}")
#        elseif(APPLE)
#            set_target_properties(${NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/${CHAPTER}")
#            set_target_properties(${NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/bin/${CHAPTER}")
#            set_target_properties(${NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/bin/${CHAPTER}")
#        endif(WIN32)
#        # copy shader files to build directory
#        file(GLOB SHADERS
#                 "src/${CHAPTER}/${DEMO}/*.vs"
#                 # "src/${CHAPTER}/${DEMO}/*.frag"
#                 "src/${CHAPTER}/${DEMO}/*.fs"
#                 "src/${CHAPTER}/${DEMO}/*.gs"
#        )
#        foreach(SHADER ${SHADERS})
#            if(WIN32)
#                # configure_file(${SHADER} "test")
#                add_custom_command(TARGET ${NAME} PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SHADER} $<TARGET_FILE_DIR:${NAME}>)
#            elseif(UNIX AND NOT APPLE)
#                file(COPY ${SHADER} DESTINATION ${CMAKE_SOURCE_DIR}/bin/${CHAPTER})
#            elseif(APPLE)
#                # create symbolic link for *.vs *.fs *.gs
#                get_filename_component(SHADERNAME ${SHADER} NAME)
#                makeLink(${SHADER} ${CMAKE_SOURCE_DIR}/bin/${CHAPTER}/${SHADERNAME} ${NAME})
#            endif(WIN32)
#        endforeach(SHADER)
#        # if compiling for visual studio, also use configure file for each project (specifically to set up working directory)
#        if(MSVC)
#            configure_file(${CMAKE_SOURCE_DIR}/configuration/visualstudio.vcxproj.user.in ${CMAKE_CURRENT_BINARY_DIR}/${NAME}.vcxproj.user @ONLY)
#        endif(MSVC)
#    endforeach(DEMO)
#endforeach(CHAPTER)



