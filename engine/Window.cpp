#include "Window.h"
#include <GLFW/glfw3.h>

Window::Window(int width, int height, const char* title) {
    glfwInit();
    glfwWindow = glfwCreateWindow(width, height, title, nullptr, nullptr);
    glfwMakeContextCurrent((GLFWwindow*)glfwWindow);
}

Window::~Window() {
    glfwDestroyWindow((GLFWwindow*)glfwWindow);
    glfwTerminate();
}

void Window::update() {
    glfwPollEvents();
    glfwSwapBuffers((GLFWwindow*)glfwWindow);
}

bool Window::shouldClose() {
    return glfwWindowShouldClose((GLFWwindow*)glfwWindow);
}