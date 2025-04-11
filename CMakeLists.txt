cmake_minimum_required(VERSION 3.10)
project(FlappyBirdEngine)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add source files
set(SOURCES
    main.cpp
    engine/Window.cpp
)

# Create executable
add_executable(FlappyBirdEngine ${SOURCES})

# Include header files
target_include_directories(FlappyBirdEngine PRIVATE engine)

# Manually specify GLFW path (adjust if needed)
set(GLFW_ROOT "C:/libs/glfw")  # Change this to your actual GLFW path

# Include GLFW headers
target_include_directories(FlappyBirdEngine PRIVATE ${GLFW_ROOT}/include)

# Link GLFW precompiled library
target_link_libraries(FlappyBirdEngine PRIVATE ${GLFW_ROOT}/lib-vc2022/glfw3.lib)

# Also link OpenGL (required by GLFW)
target_link_libraries(FlappyBirdEngine PRIVATE opengl32)

# Set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
