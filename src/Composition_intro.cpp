//============================================================================
// Name        : Composition_intro.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Human.h"
using namespace std;

int main() {
	Human h1(0);	//this is the right way
	//what if I asked this human the time?
	//a human is not a watch, but he can own one
	cout<<"when asked the time h1 says: "<<h1.getTime()<<endl;

	//how about we create a watch and give it to the human
	Watch *w = new Watch;
	Human h2(w);
	w=0;	//the human owns the watch now, he is responsible for managing it
			//this is a bit simpler and more bulletproof BTW if you use unique_ptr's
	cout<<"when asked the time h2 says: "<<h2.getTime()<<endl;

	return 0;
}
