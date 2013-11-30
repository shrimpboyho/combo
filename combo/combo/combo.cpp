// combo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "combo.h"
#include "std_lib_facilities.h"

void combo::concat(int first [], int second []){
	int sizeFirst = sizeof(first);
	int sizeSecond = sizeof(second);

	for(size_t i = 0 ; i <= ( sizeSecond - 1 ) ; i++){

		first[i + sizeFirst] = second[i];

	}

}