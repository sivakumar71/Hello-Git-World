#include <iostream>
using namespace std;

// Hello World with input argsa
int main(int argc, char** argv)
{
	string inputArgs[argc];
	
	for (int i = 0; i < argc; i++)
		inputArgs[i] = string(argv[i]);
		
	// Define a lambda function that prints inputArgs
	// The [&] capture clause allows the lambda to access outside variables by reference
	auto HelloFunc = [&] () {
		for ( auto str : inputArgs)
			cout << "Hello, " << str << " Gitworld!" << endl;
	};
	
	// Invoke the Lambda 
	HelloFunc();
	
	return 0;
}
