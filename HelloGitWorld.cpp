#include <iostream>
using namespace std;

// Hello World with input args
int main(int argc, char** argv)
{
	string inputArgs[argc];
	
	for (int i = 0; i < argc; i++)
		inputArgs[i] = string(argv[i]);
		
	for ( auto str : inputArgs)
		cout << "Hello, " << str << " Gitword!" << endl;
	return 0;
}
