#include "class_under_testing.hpp"

#include <cstdio>

namespace cokeley {
  class_under_testing::class_under_testing() {
  }
  class_under_testing::~class_under_testing() {
  }
  void class_under_testing::initialize() {
    should_be_called();
  }
  void class_under_testing::should_be_called() {
    printf("Thanks for coming!\n");
  }
  void class_under_testing::wont_be_called() {
    printf("What are you doing here!\n");
  }
}

