#include <iostream>
#include <string>
#include "header/Menu.h"

void StopClose();

bool End;

int main() {
	
	Menu::MainMenu();
	
	StopClose();
	return 0;
}

void StopClose(){
	std::cout << "Enter any Character to exit..." << std::endl;
	std::string result;
	std::cin >> result;
	if(!result.empty())
		std::exit(0);
}