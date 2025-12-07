#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace cboost {
class Engine {
public:
     Engine();
     ~Engine();
     void run();
private:
     GLFWwindow* window;
};
}