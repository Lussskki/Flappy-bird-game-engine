#ifndef ENGINE_WINDOW_H
#define ENGINE_WINDOW_H

class Window {
public:
    Window(int width, int height, const char* title);
    ~Window();
    void update();
    bool shouldClose();
    
private:
    void* glfwWindow;    
};

#endif