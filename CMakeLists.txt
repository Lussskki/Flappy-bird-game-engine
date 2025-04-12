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

# Include local engine and GLFW headers
target_include_directories(FlappyBirdEngine PRIVATE engine engine/GLFW/include)

# Add GLFW source files manually if needed (for static build)
# Alternatively, use add_subdirectory if GLFW has its own CMakeLists.txt
file(GLOB GLFW_SRC "engine/GLFW/src/*.c")
target_sources(FlappyBirdEngine PRIVATE ${GLFW_SRC})

# Define static build for GLFW
add_definitions(-DGLFW_INCLUDE_NONE)
add_definitions(-DGLFW_STATIC)

# Link required system libraries
target_link_libraries(FlappyBirdEngine PRIVATE opengl32)
