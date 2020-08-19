//Michael Duenas & Nathan Tran
//Description: Hello World in C++
//===========================================================

#include <iostream>
using namespace std;
int hello1Function(string name1);
int hello2Function(string name2);

int main(){
	string name1 = "Michael Duenas";
	hello1Function(name1);	//calls hello world function
	string name2 = "Nathan Tran";
	hello2Function(name2);	//calls hello world function 2
	return 0;
}
