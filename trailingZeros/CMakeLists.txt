cmake_minimum_required(VERSION 3.5)
project( foo )

include_directories( include )

set( LIB_SOURCES
  src/other.c
)

set( MAIN_SOURCES
  src/main.c
)


add_library( greetings STATIC ${LIB_SOURCES} )

add_executable( foo ${HEADERS} ${MAIN_SOURCES} )

target_link_libraries( foo greetings )

install( TARGETS greetings
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib)

install( FILES ${CMAKE_CURRENT_SOURCE_DIR}/greetings.h DESTINATION include )
###############################################################################
# Subdirectories
#add_subdirectory(src)
add_subdirectory(tests)

###############################################################################
# Unit tests
enable_testing()
add_test( NAME myTest COMMAND unitTests )
