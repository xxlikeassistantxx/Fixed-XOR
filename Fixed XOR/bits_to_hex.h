#pragma once


//st3: convert int hex[] to char XORAB through "reverse hexing" to XORab and return
//char result = bits_to_hex(std::array<int, 4> XOR_bits);

//enum hex { zero = { 0,0,0,0 }, one = {0,0,0,1} };

char bits_to_hex(std::array<int, 4> XOR_bits) {

	const std::array<int, 4> zero = { 0,0,0,0 };
	const std::array<int, 4> one = { 0,0,0,1 };
	const std::array<int, 4> two = { 0,0,1,0 };
	const std::array<int, 4> three = { 0,0,1,1 };
	const std::array<int, 4> four = { 0,1,0,0 };
	const std::array<int, 4> five = { 0,1,0,1 };
	const std::array<int, 4> six = { 0,1,1,0 };
	const std::array<int, 4> seven = { 0,1,1,1 };
	const std::array<int, 4> eight = { 1,0,0,0 };
	const std::array<int, 4> nine = { 1,0,0,1 };
	const std::array<int, 4> a = { 1,0,1,0 };
	const std::array<int, 4> b = { 1,0,1,1 };
	const std::array<int, 4> c = { 1,1,0,0 };
	const std::array<int, 4> d = { 1,1,0,1 };
	const std::array<int, 4> e = { 1,1,1,0 };
	const std::array<int, 4> f = { 1,1,1,1 };

	if (XOR_bits == zero) {
		return '0';
	}
	if (XOR_bits == one) {
		return '1';
	}
if (XOR_bits == two) {
		return '2';
	}
if (XOR_bits == three) {
		return '3';
	}
if (XOR_bits == four) {
		return '4';
	}
if (XOR_bits == five) {
		return '5';
	}
if (XOR_bits == six) {
		return '6';
	}
if (XOR_bits == seven) {
		return '7';
	}
if (XOR_bits == eight) {
		return '8';
	}
if (XOR_bits == nine) {
		return '9';
	}
if (XOR_bits == a) {
		return 'a';
	}
if (XOR_bits == b) {
		return 'b';
	}
if (XOR_bits == c) {
		return 'c';
	}
if (XOR_bits == d) {
		return 'd';
	}
if (XOR_bits == e) {
		return 'e';
	}
if (XOR_bits == f) {
		return 'f';
	}
	

return ' ';



}
