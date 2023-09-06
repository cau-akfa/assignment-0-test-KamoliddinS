// 020-TestCase-2.cpp
// Source: https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp
// #define CATCH_CONFIG_MAIN
// #include "catch.hpp"

// std::string HelloWorld() {
    
//     return "Hello, World!";
// }

// TEST_CASE( "Hello, World!", "[lesson:1]" ) {
//     REQUIRE( HelloWorld() == "Hello, World!" );
// }
#include <iostream>
#include <string>
#include <algorithm>

std::string ReverseString(const std::string& input) {
    std::string reversed = input;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    std::string input;
    std::getline(std::cin, input); // Read the entire line of input, including spaces
    std::string reversed = ReverseString(input);
    std::cout << reversed << std::endl;
    return 0;
}
