cmake_minimum_required(VERSION 3.10)

project(TIMP)

enable_testing()
include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
	FetchContent_Populate(googletest)
	add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()



add_executable(timp src/task.cpp src/function.cpp)
add_executable(timp_test src/function.cpp test/test.cpp)
target_link_libraries(timp_test gtest_main)

add_test(NAME timp_test COMMAND timp_test)


