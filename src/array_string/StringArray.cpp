#include <iostream>
#include <string>
using namespace std;

class StringArray{

public:
	string *arr = new string[3];
	int index = 0;
	
	void add(string val){
		if (index < 3){
			arr[index] =val;
			index++;
		}
	}
	
    void printArr(){
    	for (int i=0; i<4; i++){  
   	 		cout<< arr[i]<< endl;  
    	}
    }
};

// Code Access
/*
StringArray arr;
arr.add("apple");
arr.add("banana");
arr.add("cherry");
arr.printArr();
*/

// output
/*apple
banana
cherry
*/