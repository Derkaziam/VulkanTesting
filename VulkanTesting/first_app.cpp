//
//  first_app.cpp
//  VulkanTesting
//
//  Created by Derkaziam on 7/25/24.
//

#include "first_app.hpp"

namespace lve {
    void FirstApp::run() {
        while (!lveWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
}
