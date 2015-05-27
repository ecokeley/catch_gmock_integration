# catch_gmock_integration
A dumping ground for code that allows for EXPECT_CALL and other gmock functions to work when using the catch.hpp testing framework. https://github.com/philsquared/Catch

Feel free to steal from this repo. I do not care about licenses and will take pull requests.

This is a proof of concept and not a library.

TO RUN
======
git clone
mkdir build && cd build
cmake .. && make && make test

WHERE IS THE MEAT?
==================
./test/suite1/gmock_catch_interceptor.cpp
./test/suite1/main.cpp

Notice the main still inits google test. GMock has dependencies on GTest to compile, no clue why. I removed the default listener which prints to the screen/output file.

A listener is installed to have hook points for GMock. GMock executes at teardown of the mocked object and then the listener is notified as part of the life-cycle.

DOWNSIDES
=========
Structuring of the Catch test is important. Do to how GMock works it needs the mocked object to go out of scope. If it goes out of scope to late/early the output wont be what you expect.
Also you need to call the SUCCEED() method in GMock or you wont get an assert in the passing case. This is fine if you only care about failures but if you are tracking coverage make sure you have a SUCCEED().
