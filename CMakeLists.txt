cmake_minimum_required(VERSION 3.23)
project(cowsay)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(cowsay
        Cow.cpp
        Cow.h
        cowsay.cpp
        Dragon.cpp
        Dragon.h
        IceDragon.cpp
        IceDragon.h
        HeiferGenerator.cpp
        HeiferGenerator.h)