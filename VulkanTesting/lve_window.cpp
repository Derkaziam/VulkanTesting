//
//  lve_window.cpp
//  VulkanTesting
//
//  Created by Jared Henderson on 7/25/24.
//

#include <stdio.h>
#include "lve_window.hpp"

namespace lve {

LveWindow::LveWindow(int w, int h, std::string title) : width{w}, height{h}, windowTitle{title} {
    initWindow();
}

LveWindow::~LveWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void LveWindow::initWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    
    window = glfwCreateWindow(width, height, windowTitle.c_str(), nullptr, nullptr);
}
}
