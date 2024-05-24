cmake_minimum_required(VERSION 3.15)

# Project name and version
project(GitForWindows VERSION 2.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source directories
include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/compat/win32)
include_directories(${PROJECT_SOURCE_DIR}/compat/poll)

# Specify the executable and source files
# This should be updated with the actual source files
set(SOURCES
    common-main.c
    # compat/win32/syslog.h
    # Add all other necessary source files here
)

# Add executable target
add_executable(git-for-windows ${SOURCES})

# Include subdirectories if needed
# add_subdirectory(submodule)

# Find packages required
find_package(OpenSSL REQUIRED)
find_package(CURL REQUIRED)
find_package(ZLIB REQUIRED)

# Link libraries to the executable
target_link_libraries(git-for-windows OpenSSL::SSL OpenSSL::Crypto CURL::libcurl ZLIB::ZLIB compat syslog)

# Optionally, specify other linker and compiler options
target_compile_options(git-for-windows PRIVATE -Wall -Wextra)

# Add custom commands if needed
# For example, to handle custom build steps from the Makefile
# add_custom_command(
#     TARGET git-for-windows POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy_if_different
#         "${CMAKE_CURRENT_BINARY_DIR}/$<TARGET_FILE:git-for-windows>"
#         "${CMAKE_BINARY_DIR}/bin"
# )

# Define installation rules
install(TARGETS git-for-windows DESTINATION bin)
install(DIRECTORY include/ DESTINATION include)

# Optionally, handle external dependencies that the Makefile might have managed
# ExternalProject_Add(
#     some_external_project
#     PREFIX ${CMAKE_BINARY_DIR}/external
#     GIT_REPOSITORY https://github.com/some/repo.git
#     GIT_TAG master
#     CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
# )

# Set any necessary build flags
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -some_flag")
