cmake_minimum_required(VERSION 3.27.9)
project(Dry VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()



add_executable(Dry 
src/main.cpp
src/taschenrechner.hpp src/taschenrechner.cpp
src/brutto.hpp src/brutto.cpp
src/menu.hpp src/menu.cpp
src/kontakt.hpp src/kontakt.cpp
src/spiele.hpp src/spiele.cpp
src/snake.hpp src/snake.cpp
src/information.hpp src/information.cpp
)

set_target_properties(Dry PROPERTIES LINK_FLAGS "/SUBSYSTEM:CONSOLE")
set_target_properties(Dry PROPERTIES COMPILE_FLAGS "/EHsc")
include(CPack)
