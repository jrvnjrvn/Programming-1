// Unit 3 _ progamming.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main(void){
	float input1, input2;
	char cmd;
	std::cout << "Calculate";
	std::cin >> input1 >> cmd >> input2;
	float result = 0;
	if (cmd == '*'){
		result = input1 * input2;
	}
	if (cmd == '-'){
		result = input1 - input2;
	}
	if (cmd == '/'){
		if (input2 == 0){
			std :: cout << "error / 0";
			return 1;
		}
		result = input1 / input2;
	}
	if (cmd == '+'){
		result = input1 + input2;
	}
	std::cout << input1 << cmd << input2 << " = " << result << std::endl;

	system("pause");
	return 0;
}

