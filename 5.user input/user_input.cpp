#include <iostream>
using namespace std;

int main() {
	string name, collage, address, distro;
	int age;

	cout << "What is your name? ";
	getline( cin >> ws, name );
	// the getline function is used to take any characters devided with any white spaces, so that we had to use ( >> ws ) to get better user input result.
	
	cout << "What is your age? ";
	cin >> age;

	cout << "Where do you live in? ";
	getline( cin >> ws, address );

	cout << "Where do you study? ";
	getline( cin >> ws, collage );

	cout << "Which Linux distro do you use? ";
	cin >> distro;



	cout << '\n' << "Hey " << name << ", I am glad to know that you are usihg the " << distro << " Linux at the age of " << age << " and reading in the " << collage << ". You live in " << address << endl;
	return 0;
}
