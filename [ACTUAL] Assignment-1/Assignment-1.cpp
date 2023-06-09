#include <GLFW/glfw3.h>
#include "iostream"
#include "cmath"

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 640, "Vito Valdecantos", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);


    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        //glBegin(GL_TRIANGLES);
        //glVertex2f(0.f, 0.45f);
        //glVertex2f(-0.45f, 0.1f);
        //glVertex2f(-0.3f, -0.4f);
        //glEnd();

        //glBegin(GL_TRIANGLES);
        //glVertex2f(0.f, 0.45f);
        //glVertex2f(0.45f, 0.1f);
        //glVertex2f(0.3f, -0.4f);
        //glEnd();

        //glBegin(GL_TRIANGLES);
        //glVertex2f(0.f, 0.45f);
        //glVertex2f(0.3f, -0.4f);
        //glVertex2f(-0.3f, -0.4f);
        //glEnd();

        ///*glBegin(GL_POLYGON);
        //glVertex2f(0.2f, 0.2f);
        //glVertex2f(-0.2f, 0.2f);
        //glVertex2f(-0.2f, -0.2f);
        //glVertex2f(0.2f, -0.2f);
        //glEnd();*/

        glBegin(GL_POLYGON);

        for (int i = 0; i < 5; i++) {
            glVertex2f((0.5 * cos((360 / 5) * i * 3.1415 / 180)), (0.5 * sin((360 / 5) * i * 3.1415 / 180)));
        }
        glEnd();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}