add_executable(carpark_tests carpark_tests.cpp carpark.cpp carpark.h parkinglot.cpp parkinglot.h)
target_link_libraries(carpark_tests Catch2::Catch2WithMain)
catch_discover_tests(carpark_tests)
