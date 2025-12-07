cmake_minimum_required(VERSION 3.10)
project(CBoost VERSION 1.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find OpenSSL
find_package(OpenSSL REQUIRED)

# Include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${GLFW_INCLUDE_DIR}
    ${GLAD_INCLUDE_DIR}
)

# Source files
file(GLOB_RECURSE CBOOST_SRC "src/*.cpp")

# Create library
add_library(cboost STATIC ${CBOOST_SRC})
target_link_libraries(cboost PUBLIC OpenSSL::SSL ${GLFW_LIBRARY} ${GLAD_LIBRARY})

# Install
install(TARGETS cboost
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin)

install(DIRECTORY include/ DESTINATION include)

# Optional example
add_executable(example examples/example.cpp)
target_link_libraries(example PRIVATE cboost ${GLFW_LIBRARY} ${GLAD_LIBRARY})
install(TARGETS example DESTINATION bin)