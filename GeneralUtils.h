#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace GeneralUtils {
	void print(string text, bool endline = true) {
		if (endline) cout << text << endl;
		else cout << text;
	}

	string input() {
		string temp;
		cin >> temp;
		return temp;
	}
}