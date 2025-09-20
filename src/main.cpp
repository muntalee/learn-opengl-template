#include <GLFW/glfw3.h>
#include <glm/glm.hpp>          // Core GLM features
#include <glm/gtc/matrix_transform.hpp> // For transformations
#include <glm/gtc/type_ptr.hpp> // For converting to raw pointers

#include <iostream>

int main(void)
{
    // --- Test GLM ---
    glm::vec3 a(1.0f, 2.0f, 3.0f);
    glm::vec3 b(3.0f, 2.0f, 1.0f);
    glm::vec3 c = a + b;

    std::cout << "GLM vector test: ("
              << c.x << ", "
              << c.y << ", "
              << c.z << ")\n";

    // --- Your existing GLFW code ---
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
