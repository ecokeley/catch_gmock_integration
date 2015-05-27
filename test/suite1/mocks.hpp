#ifndef TEST_MOCKS_HPP_
#define TEST_MOCKS_HPP_

#include "../../src/class_under_testing.hpp"

namespace cokeley {

  class mock : public class_under_testing {
    public:
      virtual ~mock() {
      }
      MOCK_METHOD0(should_be_called, void());
      MOCK_METHOD0(wont_be_called, void());
  };

} /* namespace cokeley */

#endif /* TEST_MOCKS_HPP_ */
