#include "stdafx.h"
#include "std_lib_facilities.h"
#include "combo.h"

void combine(vector<int>& first, vector<int>& second){
	for(size_t i = 1 ; i < ( second.size() - 1 ) ; i++){

		first.push_back(second[i]);

	}
}

int main(){

	cout << "Hello world!" << endl;

	vector<int> hello;

	hello[1] = 1;
	hello[2] = 16;

	vector<int> goodbye;

	goodbye[1] = 3;
	goodbye[2] = 9;

	combine(hello, goodbye);

	cout << hello[3];

	keep_window_open();

	return 0;
}