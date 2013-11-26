#include "stdafx.h"
#include "std_lib_facilities.h"
//#include "combo.h"

void combine(vector<int> first, vector<int> second){
	for(size_t i = 0 ; i < second.size() ; i++){

		first.push_back(second[i]);

	}
}

int main(){

	cout << "Hello world!" << endl;

	vector<int> hello;

	hello[0] = 1;
	hello[1] = 16;

	vector<int> goodbye;

	goodbye[0] = 3;
	goodbye[1] = 9;

	combine(hello, goodbye);

	cout << hello[2];

	keep_window_open();

	return 0;
}