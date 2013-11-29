#include "stdafx.h"
#include "std_lib_facilities.h"
#include "combo.h"



int main(){

	cout << "Hello world!" << endl;

	int hello [4];

	hello[0] = 1;
	hello[1] = 16;

	int goodbye [2];

	goodbye[0] = 3;
	goodbye[1] = 9;

	combo objectification;

	objectification.combine(hello, goodbye);

	cout << hello[3];

	keep_window_open();

	return 0;
}