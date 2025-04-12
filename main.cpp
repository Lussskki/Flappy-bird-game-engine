#include "engine/Window.h"


int main() {
  Window window(800, 600, "Flappy bird engine start");

  while (!window.shouldClose()) {
    window.update();
  }

  return 0;
  
}
