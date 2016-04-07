cmake_minimum_required( VERSION 3.5.1 )
project( trailingZeros )

include_directories( include )

file( GLOB SOURCES "src/*.c" )

#set(SOURCES
#  src/main.c
#)

add_executable(foo ${SOURCES})
