#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;


string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}



TEST_CASE("Bad input") {
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%'));
    CHECK_THROWS(mat(17, 3, '$', '%')); 


  
}



