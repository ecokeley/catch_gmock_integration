SET(SRCS ../../src/class_under_testing.cpp)
SET(TEST_SRCS faux_test_suite.cpp  gmock_catch_interceptor.cpp  main.cpp)

add_executable(faux_test ${SRCS} ${TEST_SRCS})

target_link_libraries(faux_test
  libgtest
  libgmock
)

add_test(NAME faux_test COMMAND faux_test)
