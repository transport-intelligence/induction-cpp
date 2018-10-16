cmake_minimum_required(VERSION 3.0.0)
project(hello)
set(CMAKE_BUILD_TYPE Release)

#Bring the headers, such as Utility.h into the project
include_directories(include)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB LIB_SOURCES "src/lib/*.cpp")

#Generate the shared library from the sources
add_library(hellolib SHARED ${LIB_SOURCES})

#Set the location for library installation -- i.e., /usr/lib64 in this case
# not really necessary in this example. Use "sudo make install" to apply
install(TARGETS hellolib DESTINATION /usr/lib64)

#For the shared library:
set (PROJECT_LINK_LIBS libhello.so)
link_directories(~/dev/induction-cpp/manual-build/build)

include_directories(~/dev/induction-cpp/manual-build/include)

add_executable(hellobin src/bin/hello.cpp)
target_link_libraries(hellobin ${PROJECT_LINK_LIBS})

