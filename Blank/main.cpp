#include <iostream>

#include "GL/glew.h"
#include "GLFW/glfw3.h"

int main()
{
	if (!glfwInit())
	{
		std::cerr << "GLFW Initialization failed." << std::endl;

		return -1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // OpenGL 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);

	GLFWwindow* window = glfwCreateWindow(1280, 720, "Title", nullptr, nullptr);
	if (window == nullptr)
	{
		std::cerr << "GLFW Window creation failed." << std::endl;
		glfwTerminate();

		return -2;
	}

	glfwMakeContextCurrent(window);

	glewExperimental = GLFW_TRUE;
	if (glewInit() != GLEW_OK)
	{
		std::cerr << "Glew Initialization failed." << std::endl;
		glfwDestroyWindow(window);
		glfwTerminate();

		return -3;
	}

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glfwSwapBuffers(window);
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}