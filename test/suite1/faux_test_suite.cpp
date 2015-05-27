//#define CATCH_CONFIG_MAIN // Test without main and gmock interceptor
#include "catch/catch.hpp"
#include "gmock/gmock.h"

#include "mocks.hpp"

SCENARIO("checking proper message life cycle") {
  GIVEN("an instance of the class we are testing") {
    WHEN("when intializing at startup") {
      // Want to move mock variable here but GMock executes when mock goes out of scope
      cokeley::mock mock;
      THEN("the should_be_called() will be called") {
        EXPECT_CALL(mock, should_be_called()).Times(::testing::AtLeast(1));
      }
      THEN("the wont_be_called() will NOT be called") {
    	EXPECT_CALL(mock, should_be_called()).Times(::testing::AnyNumber());
        EXPECT_CALL(mock, wont_be_called()).Times(0);
      }
        mock.initialize();
        SUCCEED();
    }
  }
}

