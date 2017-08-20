
#include <iostream>
#include "../header/Menu.h"

const double AVal = 20.00;
const double BVal = 10.00;
const double CVal = 0.00;
const double DVal = 10.00;
const double FVal = 20.00;

void Menu::OpeningMsg(){
	std::cout << "Welcome to Zach's Grade Calculator v2, now in cpp" <<std::endl;
	std::cout << "\n";
}

void Menu::ClearAndHeader() {
	std::cout << "======================================" << std::endl;
	std::cout << "           GRADE CALCULATOR           " << std::endl;
	std::cout << "======================================" << std::endl;
	std::cout << "\n";
}

void Menu::MainMenu() {
	
	std::cout << "===================" << std::endl;
	std::cout << "Your Options:" << std::endl;
	std::cout << "1) Money Calculator" << std::endl;
	std::cout << "2) GPA Calculator" << std::endl;
	std::cout << "3) Exit Application" << std::endl;
	std::cout << "===================" << std::endl;
	std::cout << "\n";
	
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
	
	//quincy if you are looking at this i know its prob not the best way
	//to do it dont judge ok
	
	std::cout << "\n\n";
	
	std::cout << "Grade Money Calculated" << std::endl;
	std::cout << "\n";
	std::cout << "Total owed: $" << balance << std::endl;
	std::cout << "Cash:Savings ratios:" << std::endl;
	std::cout << "100:0 = " << balance << ":0" << std::endl;
	std::cout << "95:5 = " << balance * .95 << ":" << balance * .05 << std::endl;
	std::cout << "90:10 = " << balance * .9 << ":" << balance * .1 << std::endl;
	std::cout << "85:15 = " << balance * .85 << ":" << balance * .15 << std::endl;
	std::cout << "80:20 = " << balance * .8 << ":" << balance * .2 << std::endl;
	std::cout << "75:25 = " << balance * .75 << ":" << balance * .25 << std::endl;
	std::cout << "70:30 = " << balance * .7 << ":" << balance * .3 << std::endl;
	std::cout << "65:35 = " << balance * .65 << ":" << balance * .35 << std::endl;
	std::cout << "60:40 = " << balance * .6 << ":" << balance * .4 << std::endl;
	std::cout << "55:45 = " << balance * .55 << ":" << balance * .45 << std::endl;
	std::cout << "50:50 = " << balance / 2   << ":" << balance / 2   << std::endl;
	std::cout << "45:55 = " << balance * .45 << ":" << balance * .55 << std::endl;
	std::cout << "40:60 = " << balance * .4  << ":" << balance * .6  << std::endl;
	std::cout << "35:65 = " << balance * .35 << ":" << balance *.65 << std::endl;
	std::cout << "30:70 = " << balance * .3 << ":" << balance * .7 << std::endl;
	std::cout << "25:75 = " << balance *.25 << ":" << balance * .75 << std::endl;
	std::cout << "20:80 (minimum)  = " << balance * .2 << ":" << balance * .8 << std::endl;
	
	if(owed > 0){
		std::cout << "\n";
		std::cout << "You owe money!" << std::endl;
		std::cout << "Amount: $" << owed << std::endl;
	}
	
	Menu::MainMenu();
	
}

void Menu::GpaMenu() {
	double total = 0.0;
	double input = 0;
	std::cout << "===================" << std::endl;
	std::cout << "Enter Grade Points for first period" << std::endl;
	std::cin >> input; total += input; input = NULL;
	std::cout << "Enter Grade Points for second period" << std::endl;
	std::cin >> input; total += input; input = NULL;
	std::cout << "Enter Grade Points for third period" << std::endl;
	std::cin >> input; total += input; input = NULL;
	std::cout << "Enter Grade Points for fourth period" << std::endl;
	std::cin >> input; total += input; input = NULL;
	
	std::cout << "===================" << std::endl;
	std::cout << "GPA Calculated:" << std::endl;
	std::cout << "4 Class Weighted Gpa: " << total / 4 << std::endl;
	
	Menu::MainMenu();
}



