//
//  first_app.hpp
//  VulkanTesting
//
//  Created by Jared Henderson on 7/25/24.
//

#ifndef first_app_hpp
#define first_app_hpp

#include <stdio.h>

#include "lve_window.hpp"

namespace lve {
    class FirstApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;
        
        void run();
    private:
        LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
    };
}

#endif /* first_app_hpp */
