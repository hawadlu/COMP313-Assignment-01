# Makefile generated by CMakefileGenerator.cs (v1.2)
# *DO NOT EDIT*

cmake_minimum_required (VERSION 2.6)
project (UE4)

# CMake Flags
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_USE_RESPONSE_FILE_FOR_OBJECTS 1 CACHE BOOL "" FORCE)
set(CMAKE_CXX_USE_RESPONSE_FILE_FOR_INCLUDES 1 CACHE BOOL "" FORCE)

# Standard Includes
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-includes.cmake")
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-definitions.cmake")
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-headers-ue4.cmake")
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-headers-project.cmake")
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-sources-engine.cmake")
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-sources-project.cmake")
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-csharp-engine.cmake")
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-csharp-project.cmake")

# Optional Shader Include
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-shaders-engine.cmake")
set_source_files_properties(${ENGINE_SHADER_FILES} PROPERTIES HEADER_FILE_ONLY TRUE)
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-shaders-project.cmake")
set_source_files_properties(${PROJECT_SHADER_FILES} PROPERTIES HEADER_FILE_ONLY TRUE)
source_group("Shader Files" REGULAR_EXPRESSION .*.usf)

# Optional Config Include
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-config-engine.cmake")
set_source_files_properties(${ENGINE_CONFIG_FILES} PROPERTIES HEADER_FILE_ONLY TRUE)
include("/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Intermediate/ProjectFiles/cmake-config-project.cmake")
set_source_files_properties(${PROJECT_CONFIG_FILES} PROPERTIES HEADER_FILE_ONLY TRUE)
source_group("Config Files" REGULAR_EXPRESSION .*.ini)

add_custom_target(fpsGame-Mac-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGame Mac DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)
add_custom_target(fpsGame-IOS-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGame IOS DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGame-TVOS-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGame TVOS DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGame-Mac-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGame Mac Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)
add_custom_target(fpsGame-IOS-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGame IOS Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGame-TVOS-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGame TVOS Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGame Mac Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)

add_custom_target(fpsGame-IOS cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGame IOS Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGame-TVOS cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGame TVOS Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGameEditor-Mac-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGameEditor Mac DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)
add_custom_target(fpsGameEditor-IOS-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGameEditor IOS DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGameEditor-TVOS-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGameEditor TVOS DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGameEditor-Mac-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGameEditor Mac Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)
add_custom_target(fpsGameEditor-IOS-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGameEditor IOS Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGameEditor-TVOS-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGameEditor TVOS Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGameEditor cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGameEditor Mac Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)

add_custom_target(fpsGameEditor-IOS cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGameEditor IOS Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(fpsGameEditor-TVOS cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" fpsGameEditor TVOS Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(UE4Editor-Mac-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Editor Mac DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)
add_custom_target(UE4Editor-Mac-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Editor Mac Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)
add_custom_target(UE4Editor cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Editor Mac Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)

add_custom_target(UE4Game-Mac-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Game Mac DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)
add_custom_target(UE4Game-IOS-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Game IOS DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(UE4Game-TVOS-DebugGame cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Game TVOS DebugGame "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(UE4Game-Mac-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Game Mac Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)
add_custom_target(UE4Game-IOS-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Game IOS Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(UE4Game-TVOS-Shipping cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Game TVOS Shipping "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(UE4Game cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Game Mac Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress -buildscw VERBATIM)

add_custom_target(UE4Game-IOS cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Game IOS Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_custom_target(UE4Game-TVOS cd "/Users/Shared/Epic Games/UE_4.26" && bash "/Users/Shared/Epic Games/UE_4.26/Engine/Build/BatchFiles/Mac/Build.sh" UE4Game TVOS Development "-project=/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/fpsGame.uproject" -game -progress VERBATIM)
add_executable(FakeTarget ${ENGINE_HEADER_FILES} ${ENGINE_SOURCE_FILES} ${ENGINE_CSHARP_FILES} ${ENGINE_SHADER_FILES} ${ENGINE_CONFIG_FILES} ${PROJECT_HEADER_FILES} ${PROJECT_SOURCE_FILES} ${PROJECT_CSHARP_FILES} ${PROJECT_SHADER_FILES} ${PROJECT_CONFIG_FILES})
