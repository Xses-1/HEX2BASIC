#include <bits/stdc++.h>

int main () {

	std::vector<int> input;
	int input_temp = 0, len = 0, i = 0;

	std::cout << "Gimmi data!" 		<< std::endl;
	std::cout << "[Put 666 at the end]" 	<< std::endl;

	std::ofstream out_file ("BASIC.bas");
	if (out_file.is_open() == 0){

		std::cout << "Could not open the file" << std::endl;
		return -1;
	
	}

	do {
		std::cin >> std::hex >> input_temp;
		input.push_back (input_temp);
		len++;
	
	} while (input_temp != 1638); //666HEX = 1638DEC

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "10 SYS 58692" << std::endl;
	out_file  << "10 SYS 58692" << std::endl;

	for (i = 0; i < (len-1); i++){

		std::cout << 20 + (i * 10) << " POKE " << 16384 + i << ", " << input[i] << std::endl;
		out_file  << 20 + (i * 10) << " POKE " << 16384 + i << ", " << input[i] << std::endl;

	}
	
	std::cout << 20 + (i * 10) << " SYS 16384" << std::endl;
	out_file  << 20 + (i * 10) << " SYS 16384" << std::endl;
	out_file.close();
	

	return 0;

}
