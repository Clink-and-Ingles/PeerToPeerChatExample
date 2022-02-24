#
# Copyright (C) 2022  Kevin Ingles
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# Author: Kevin Ingles
# File: CMakeLists.txt
# Description: Top CMakeLists for PeerToPeerChat project

cmake_minimum_required(VERSION 3.17)
set(CMAKE_FIND_DEBUG_MODE FALSE)        # Tells us where if found files from `find_package`
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE) # Generates `compiler_commands.json` for lang serv

project(
    PeerToPeerChat
    VERSION 0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    PeerToPeerChat
    EntryPoint.cpp
)
