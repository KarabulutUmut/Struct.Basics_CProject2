#include <iostream>
#include <string>

int main()
{
	struct Person
	{
		std::string surname;
		std::string name;
		int birthyear;
		int age;
	};

	Person user;

	std::cout << "Your name: ";
	std::cin >> user.name;

	std::cout << "Your surname: ";
	std::cin >> user.surname;

	std::cout << "Your birthyear: ";
	std::cin >> user.birthyear;

	std::cout << "Your age: ";
	std::cin >> user.age;

	std::cout << "Name of the user is " << user.name + " " + user.surname << "." << " He/She was born in " << user.birthyear << ". " << "He/She is "
			<< user.age << " years old" << "\n";

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	Person copysingle;
	copysingle.name = user.name;
	copysingle.surname = user.surname;
	copysingle.birthyear = user.birthyear;
	copysingle.age = user.age;

	Person copyall;
	copyall = user;

	std::cout << "Name of the copysingle is " << copysingle.name + " " + copysingle.surname << "." << " He/She was born in " << copysingle.birthyear << ". " << "He/She is "
		<< copysingle.age << " years old" << "\n";

	std::cout << "Name of the copyall is " << copyall.name + " " + copyall.surname << "." << " He/She was born in " << copyall.birthyear << ". " << "He/She is "
		<< copyall.age << " years old" << "\n";

	return 0;


}