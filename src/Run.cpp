#include "../include/HelloWorld.h"
#include "../include/Add.h"
#include <iostream>

int main(int argc, char *argv[]) {
  printHello();
  std::cout << add(2,5) << std::endl;
}