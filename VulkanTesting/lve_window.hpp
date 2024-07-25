//
//  lve_window.h
//  VulkanTesting
//
//  Created by Derkaziam on 7/25/24.
//

#ifndef lve_window_h
#define lve_window_h

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace lve {
    class LveWindow {
    public:
        LveWindow(int x, int h, std::string title);
        ~LveWindow();
        
        LveWindow(const LveWindow &) = delete;
        LveWindow &operator=(const LveWindow &) = delete;
        
        bool shouldClose() { return glfwWindowShouldClose(window); }
        
    private:
        void initWindow();
        const int width;
        const int height;
        
        std::string windowTitle;
        
        GLFWwindow *window;
    };
}

#endif /* lve_window_h */
