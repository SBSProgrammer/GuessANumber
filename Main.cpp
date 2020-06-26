#include "GeneralUtils.h"

int main() {
	string answer;

	GeneralUtils::print("Think of a number between 2 and 8, and I will try and guess it for you.");
	GeneralUtils::print("Only answer \"Higher\", \"Equal\" or \"Lower\". All words are case-sensitive.");
	GeneralUtils::print("Is this number a 5?");

	answer = GeneralUtils::input();
	if (answer == "Higher") {
		GeneralUtils::print("Is this number a 7?");
		answer = GeneralUtils::input();
		if (answer == "Higher") {
			GeneralUtils::print("This number is a 8! Am I right?");
		}
		else if (answer == "Lower") {
			GeneralUtils::print("This number is a 6! Am I right?");
		}
		else if (answer == "Equal") {
			GeneralUtils::print("I know, this number is a 7!");
		}
	}
	else if (answer == "Lower") {
		GeneralUtils::print("Is this number a 3?");
		answer = GeneralUtils::input();
		if (answer == "Higher") {
			GeneralUtils::print("This number is a 4! Am I right?");
		}
		else if (answer == "Lower") {
			GeneralUtils::print("This number is a 2! Am I right?");
		}
		else if (answer == "Equal") {
			GeneralUtils::print("I know, this number is a 3!");
		}
	}
	else if (answer == "Equal") {
		GeneralUtils::print("I know, this number is a 5!");
	}

	system("pause");
}