#include <iostream>

class Platform {
public:
  int version;

  // only constructors take member initializers
  Platform(char const * name) : version(2)
  {

  }
};

int main() {
  Platform platform("node");
  std::cout << platform.version << std::endl;
}
