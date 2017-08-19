
#include <iostream>
#include <string>
#include <stdlib.h>
#include "../header/Menu.h"

const double AVal = 20.00;
const double BVal = 10.00;
const double CVal = 0.00;
const double DVal = 10.00;
const double FVal = 20.00;

void Menu::OpeningMsg(){
	ClearAndHeader();
	
	std::cout << "Welcome to Zach's Grade Calculator v2, now in cpp" <<std::endl;
	std::cout << "\n";
}

void Menu::ClearAndHeader() {
	system("cls");
	std::cout << "======================================" << std::endl;
	std::cout << "           GRADE CALCULATOR           " << std::endl;
	std::cout << "======================================" << std::endl;
	std::endl;
}

void Menu::MainMenu() {
	ClearAndHeader();
	
	std::cout << "===================" << std::endl;
	std::cout << "Your Options:" << std::endl;
	std::cout << "1) Money Calculator" << std::endl;
	std::cout << "2) GPA Calculator" << std::endl;
	std::cout << "3) Exit Application" << std::endl;
	std::cout << "===================" << std::endl;
	std::endl;
	
	std::string input;
	std::cin >> input;
	
	if(input == "1")
		Menu::MoneyMenu();
	else if(input == "2")
		Menu::GpaMenu();
	else if(input == "3")
		std::exit(0);
	else
		Menu::MainMenu();
}

void Menu::MoneyMenu() {
	ClearAndHeader();
	
	auto balance = 0;
	auto owed = 0;
	int input;
	
	std::cout << "===================" << std::endl;
	std::cout << "How many a's did you receive from classes?" << std::endl;
	std::cin >> input;
	balance += input * AVal;
	
	std::cout << "How many b's did you receive from classes?" << std::endl;
	input = NULL;
	std::cin >> input;
	balance += input * BVal;
	
	std::cout << "How many c's did you receive from classes?" << std::endl;
	input = NULL;
	std::cin >> input;
	input = NULL;
	
	std::cout << "How many d's did you receive from classes?" << std::endl;
	std::cin >> input;
	owed += input * DVal;
	
	std::cout << "How many f's did you receive from classes?" << std::endl;
	input = NULL;
	std::cin >> input;
	owed += input * FVal;
	
	//do math regarding savings to cash payout and then output the values to console.
	
	
	
}



