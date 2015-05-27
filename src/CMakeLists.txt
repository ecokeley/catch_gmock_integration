#do nothing
set(Main_SRCS
  main.cpp
  class_under_testing.cpp
)

add_executable(myApp
  ${Main_SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(myApp
)

install(TARGETS myApp DESTINATION bin)
