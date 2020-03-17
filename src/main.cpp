#include <GLFW/glfw3.h>

#include <iostream>
using namespace std;

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp> // + glm::perspective
using namespace glm;

int main(void) {
  if (!glfwInit()) return -1;
  GLFWwindow* window = glfwCreateWindow(640, 480, "Hello", NULL, NULL);
  if (!window) {
    glfwTerminate();
    return -1;
  }
  glfwMakeContextCurrent(window);
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

  glm::mat4 tr = glm::rotate(glm::mat4(1.f), glm::radians(30.0f), glm::vec3(1.0f, 0.0f, 0.0f));
  glm::vec4 vector(0.f, 5.f, 0.f, 0.f);
  glm::vec4 tv = tr * vector;

  for(int i = 0; i < 4; i++) {
    cout << tv[i] << ' ';
  }
  cout << endl;

  glfwTerminate();
  return 0;
}



