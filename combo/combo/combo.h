#include "stdafx.h"
#include "std_lib_facilities.h"

class combo
{
public:
	void combine(vector<int> first, vector<int> second){
		for(size_t i = 0 ; i < second.size() ; i++){
		
		first.push_back(second[i]);
		
		}
	}

}