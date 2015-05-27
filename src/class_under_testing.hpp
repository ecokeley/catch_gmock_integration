#ifndef COKELEY_CLASS_UNDER_TESTING_HPP_
#define COKELEY_CLASS_UNDER_TESTING_HPP_

namespace cokeley {
  class class_under_testing {
    public:
      class_under_testing();
      virtual ~class_under_testing();
      void initialize();
    protected:
      virtual void should_be_called();
      virtual void wont_be_called();
  };
}

#endif /*  COKELEY_CLASS_UNDER_TESTING_HPP_ */
