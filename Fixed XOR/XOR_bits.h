#pragma once

std::array<int, 4> XOR_bits(std::array<int, 4> a, std::array<int, 4> b) {

	std::array<int, 4> XOR_bits;

	for (int i = 0; i < 4; i++) {
		if (a[i] == b[i]) {
			XOR_bits[i] = 0;
		}
		if (a[i] != b[i]) {
			XOR_bits[i] = 1;
		}
	}

	return XOR_bits;

}




void XOR_bits_unit_test() {
	const std::array<int, 4> zero	= { 0,0,0,0 };
	const std::array<int, 4> one	= { 0,0,0,1 };
	const std::array<int, 4> two	= { 0,0,1,0 };
	const std::array<int, 4> three	= { 0,0,1,1 };
	const std::array<int, 4> four	= { 0,1,0,0 };
	const std::array<int, 4> five	= { 0,1,0,1 };
	const std::array<int, 4> six	= { 0,1,1,0 };
	const std::array<int, 4> seven	= { 0,1,1,1 };
	const std::array<int, 4> eight	= { 1,0,0,0 };
	const std::array<int, 4> nine	= { 1,0,0,1 };
	const std::array<int, 4> a		= { 1,0,1,0 };
	const std::array<int, 4> b		= { 1,0,1,1 };
	const std::array<int, 4> c		= { 1,1,0,0 };
	const std::array<int, 4> d		= { 1,1,0,1 };
	const std::array<int, 4> e		= { 1,1,1,0 };
	const std::array<int, 4> f		= { 1,1,1,1 };

	std::array<std::array<int, 4>, 16> XOR_bits_array = { zero, one, two, three, four, five, six, seven, eight, nine, a, b, c, d, e, f };


	for (int i = 0; i < 16; i++) {
		std::cout << "XORs with " << i << std::endl;
		for (int j = 0; j < 16; j++) {
			std::array<int, 4> result = XOR_bits(XOR_bits_array[i], XOR_bits_array[j]);

			std::cout << i << " and " << j << std::endl;
			for (int k = 0; k < 4; k++) {
				std::cout << result[k] << " ";
			}
			std::cout << std::endl <<std::endl;
		}
	}
}