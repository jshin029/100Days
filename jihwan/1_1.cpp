#include <iostream>
#include <unordered_map>
using namespace std;

boolean isUnique(String word){
	if(word.length() > 128) // for ascii, it cannot be more than 128 characters 
		return false;
	bool char_set[128] = { false };
	for(int i = 0; i < word.length(); i++){
		int val = word.at(i);
		if (char_set[val]){ // if already set to true previously
			return false;
		}
		char_set[val] = true;
	}
	return true;
}
