#include <iostream>

static struct {
  int* version_;

  void setVersion(int version) {
    version_ = &version;
  }
} platform;

int main() {
  platform.setVersion(1);
  std::cout << *platform.version_ << std::endl;
  platform.setVersion(2);
  std::cout << *platform.version_ << std::endl;
}
