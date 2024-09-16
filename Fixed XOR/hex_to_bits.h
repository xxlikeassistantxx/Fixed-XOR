#pragma once
#include <array>
#include <iostream>

std::array<int, 4> hex_to_bits(char hex) {

	switch (hex) {
	case '0':
		return { 0,0,0,0 };
		break;
	case '1':
		return { 0,0,0,1 };
		break;
	case '2':
		return { 0,0,1,0 };
		break;
	case '3':
		return { 0,0,1,1 };
		break;
	case '4':
		return { 0,1,0,0 };
		break;
	case '5':
		return { 0,1,0,1 };
		break;
	case '6':
		return { 0,1,1,0 };
		break;
	case '7':
		return { 0,1,1,1 };
		break;
	case '8':
		return { 1,0,0,0 };
		break;
	case '9':
		return { 1,0,0,1 };
		break;
	case 'a':
		return { 1,0,1,0 };
		break;
	case 'b':
		return { 1,0,1,1 };
		break;
	case 'c':
		return { 1,1,0,0 };
		break;
	case 'd':
		return { 1,1,0,1 };
		break;
	case 'e':
		return { 1,1,1,0 };
		break;
	case 'f':
		return { 1,1,1,1 };
		break;
	case 'A':
		return { 1,0,1,0 };
		break;
	case 'B':
		return { 1,0,1,1 };
		break;
	case 'C':
		return { 1,1,0,0 };
		break;
	case 'D':
		return { 1,1,0,1 };
		break;
	case 'E':
		return { 1,1,1,0 };
		break;
	case 'F':
		return { 1,1,1,1 };
		break;
	default:
		std::cout << "DEFAULT CASE" << std::endl;
		return { 999,999,999,999 };
	}

}




void hex_to_bits_unit_test() {
	//tests for hex_bit

	std::array<int, 4> zero_bits = hex_to_bits('0');
	std::array<int, 4> one_bits = hex_to_bits('1');
	std::array<int, 4> two_bits = hex_to_bits('2');
	std::array<int, 4> three_bits = hex_to_bits('3');
	std::array<int, 4> four_bits = hex_to_bits('4');
	std::array<int, 4> five_bits = hex_to_bits('5');
	std::array<int, 4> six_bits = hex_to_bits('6');
	std::array<int, 4> seven_bits = hex_to_bits('7');
	std::array<int, 4> eight_bits = hex_to_bits('8');
	std::array<int, 4> nine_bits = hex_to_bits('9');
	std::array<int, 4> a_bits = hex_to_bits('a');
	std::array<int, 4> b_bits = hex_to_bits('b');
	std::array<int, 4> c_bits = hex_to_bits('c');
	std::array<int, 4> d_bits = hex_to_bits('d');
	std::array<int, 4> e_bits = hex_to_bits('e');
	std::array<int, 4> f_bits = hex_to_bits('f');

	std::array<int, 4> A_bits = hex_to_bits('A');
	std::array<int, 4> B_bits = hex_to_bits('C');
	std::array<int, 4> C_bits = hex_to_bits('C');
	std::array<int, 4> D_bits = hex_to_bits('D');
	std::array<int, 4> E_bits = hex_to_bits('E');
	std::array<int, 4> F_bits = hex_to_bits('F');

	std::cout << "0: ";
	for (int i = 0; i < 4; i++) {
		std::cout << zero_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "1: ";
	for (int i = 0; i < 4; i++) {
		std::cout << one_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "2: ";
	for (int i = 0; i < 4; i++) {
		std::cout << two_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "3: ";
	for (int i = 0; i < 4; i++) {
		std::cout << three_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "4: ";
	for (int i = 0; i < 4; i++) {
		std::cout << four_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "5: ";
	for (int i = 0; i < 4; i++) {
		std::cout << five_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "6: ";
	for (int i = 0; i < 4; i++) {
		std::cout << six_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "7: ";
	for (int i = 0; i < 4; i++) {
		std::cout << seven_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "8: ";
	for (int i = 0; i < 4; i++) {
		std::cout << eight_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "9: ";
	for (int i = 0; i < 4; i++) {
		std::cout << nine_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "a: ";
	for (int i = 0; i < 4; i++) {
		std::cout << a_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "b: ";
	for (int i = 0; i < 4; i++) {
		std::cout << b_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "c: ";
	for (int i = 0; i < 4; i++) {
		std::cout << c_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "d: ";
	for (int i = 0; i < 4; i++) {
		std::cout << d_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "e: ";
	for (int i = 0; i < 4; i++) {
		std::cout << e_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "f: ";
	for (int i = 0; i < 4; i++) {
		std::cout << f_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "A: ";
	for (int i = 0; i < 4; i++) {
		std::cout << A_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "B: ";
	for (int i = 0; i < 4; i++) {
		std::cout << B_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "C: ";
	for (int i = 0; i < 4; i++) {
		std::cout << C_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "D: ";
	for (int i = 0; i < 4; i++) {
		std::cout << D_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "E: ";
	for (int i = 0; i < 4; i++) {
		std::cout << E_bits[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "F: ";
	for (int i = 0; i < 4; i++) {
		std::cout << F_bits[i] << " ";
	}
	std::cout << std::endl;

}