#include "hex_to_bits.h"
#include "bits_to_hex.h"
#include "XOR_bits.h"
#include <array>
#include <iostream>
#include <string>



// FUNCTION: XOR_Char
// XOR 1 element against another
// inputs: char a, char b
// outputs: char XORab;
// logic:
	//st1: convert a and b into a string value of eachs bit representation (can use an array of ints 0 and 1) called string/int array a_bits and b_bits
	//st2: XOR (in the correct order) these two bit representation strings(or int array[]) by iterating through each a and b element one at a time and storing the resulting 1/0 in int hex_bits[]
	//st3: convert int hex[] to char XORAB through "reverse hexing" to XORab and return
		
char XOR_Char(char a, char b) {
	//st1: convert a and b into a string value of eachs bit representation (can use an array of ints 0 and 1) called string/int array a_bits and b_bits
	std::array<int, 4> array_a = hex_to_bits(a);
	std::array<int, 4> array_b = hex_to_bits(b);

	//st2: XOR (in the correct order) these two bit representation strings(or int array[]) by iterating through each a and b element one at a time and storing the resulting 1/0 in int hex_bits[]
	std::array<int, 4> XOR_hex = XOR_bits(array_a, array_b);

	//st3: convert int hex[] to char XORAB through "reverse hexing" to XORab and return
	char result = bits_to_hex(XOR_hex);
	return result;

}

// FUNCTION: XOR_String
// XOR entire string
// inputs: string A, string B
// outputs: string XORAB
// logic: 
	//st0: make sure A and B are of the same length
	//st1: make a string called XORAB && make string_length = A.length()
	//st2: iterate through string A and B from i = 0 to string_length - 1 (for loop should work since we can know the length of the string and therefore how many times XOR_Char needs to be called)
		//st3: inside called XOR_Char( A[i], B[i] ); and store it in XORAB[i]

std::string XOR_strings(std::string A, std::string B) {
	if (A.length() != B.length()) {
		std::cout << "ERROR (in XOR-Strings) --> Fixed XOR must have two strings of the same length" << std::endl;
	}

	int s_size = A.length();
	std::string XOR_AB = "";

	



	//XOR_AB = new std::string[s_size];

	for (int i = 0; i < s_size; i++) {
		char next_char = XOR_Char(A[i], B[i]);

		XOR_AB += next_char;
	}

	//std::string XOR_AB_result = *XOR_AB;

	return XOR_AB;
}


void TEST(std::string hex_first, std::string hex_second, std::string expected) {

	std::string result_XOR_String = XOR_strings(hex_first, hex_second);


	if (result_XOR_String == expected) {
		return;
	} 
	else
	{
		std::cout << "ERROR (in TEST) --> result_XOR_String != expected" << std::endl;
		std::cout << "expected: " << expected << std::endl;
		std::cout << "result_XOR_String: " << result_XOR_String << std::endl;
		return;
	}

}


int main() {

	// tests for hex_to_bit.h
	// hex_to_bits_unit_test();

	// tests for XOR_bits.h
	// XOR_bits_unit_test();

	// TODO tests for bits_to_hex.h 
	// TODO bits_to_hex_unit_test();



	// tests for XOR_Char
	char a = 'f';	//REPLACE THESE TO TEST
	char b = '1';	//REPLACE THESE TO TEST
	char result_XOR_Char = XOR_Char(a, b);

	std::cout << result_XOR_Char << std::endl;

	std::string first =		"02ef27b40";
	std::string second =	"047a228ff";
	std::string result_XOR_String = XOR_strings(first, second);
	std::cout << "XOR_strings(first, second) when first = " << first << " and second = " << second << " --> " << result_XOR_String << std::endl;

	//unit tests for for failure

	//TEST("0a", "b2", "B8");
	//TEST("a", "b2", "b8");

	// unit tests for size 1
	TEST("a", "0", "a");
	TEST("a", "1", "b");
	TEST("a", "2", "8");
	TEST("a", "3", "9");
	TEST("a", "4", "e");
	TEST("a", "5", "f");
	TEST("a", "6", "c");
	TEST("a", "7", "d");
	TEST("a", "8", "2");
	TEST("a", "9", "3");
	TEST("a", "a", "0");
	TEST("a", "b", "1");
	TEST("a", "c", "6");
	TEST("a", "d", "7");
	TEST("a", "e", "4");
	TEST("a", "f", "5");
	TEST("0", "0", "0");
	TEST("0", "1", "1");
	TEST("0", "2", "2");
	TEST("0", "3", "3");
	TEST("0", "4", "4");
	TEST("0", "5", "5");
	TEST("0", "6", "6");
	TEST("0", "7", "7");
	TEST("0", "8", "8");
	TEST("0", "9", "9");
	TEST("0", "a", "a");
	TEST("0", "b", "b");
	TEST("0", "c", "c");
	TEST("0", "d", "d");
	TEST("0", "e", "e");
	TEST("0", "f", "f");
	TEST("1", "0", "1");
	TEST("1", "1", "0");
	TEST("1", "2", "3");
	TEST("1", "3", "2");
	TEST("1", "4", "5");
	TEST("1", "5", "4");
	TEST("1", "6", "7");
	TEST("1", "7", "6");
	TEST("1", "8", "9");
	TEST("1", "9", "8");
	TEST("1", "a", "b");
	TEST("1", "b", "a");
	TEST("1", "c", "d");
	TEST("1", "d", "c");
	TEST("1", "e", "f");
	TEST("1", "f", "e");
	TEST("2", "0", "2");
	TEST("2", "1", "3");
	TEST("2", "2", "0");
	TEST("2", "3", "1");
	TEST("2", "4", "6");
	TEST("2", "5", "7");
	TEST("2", "6", "4");
	TEST("2", "7", "5");
	TEST("2", "8", "a");
	TEST("2", "9", "b");
	TEST("2", "a", "8");
	TEST("2", "b", "9");
	TEST("2", "c", "e");
	TEST("2", "d", "f");
	TEST("2", "e", "c");
	TEST("2", "f", "d");
	TEST("3", "0", "3");
	TEST("3", "1", "2");
	TEST("3", "2", "1");
	TEST("3", "3", "0");
	TEST("3", "4", "7");
	TEST("3", "5", "6");
	TEST("3", "6", "5");
	TEST("3", "7", "4");
	TEST("3", "8", "b");
	TEST("3", "9", "a");
	TEST("3", "a", "9");
	TEST("3", "b", "8");
	TEST("3", "c", "f");
	TEST("3", "d", "e");
	TEST("3", "e", "d");
	TEST("3", "f", "c");

	// unit tests for size 2





}