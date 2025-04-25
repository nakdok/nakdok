 

#include <iostream>
#include <string>
#include <Windows.h>



void game() {

	
		std::string bot[3]{"Капмень", "Ножницы", "Дубмага"};
		
		std::string user;
	
	for (int a = 0; a < 3;) {
		
		int r = 1 + rand() % 3;
		
	
		std::cout << "камень\nножницы\nбумага\n" << std::endl;
		std::cin >> user;
		if (user == "Капмень" || user == "Ножницы" ||  user == "Дубмага" ) {
		 
			if (user == "Ножницы" && bot[r] == "Капмень" || user =="Дубмага" && bot[r] == "Ножницы" || user =="Капмень" && bot[r] == "Дубмага") {
				std::cout << "Ты Проиграл\n";

			}
			else if (user == bot[r]) {
				std::cout << "Ничья\n";
			}
			else {
				std::cout << "Выиграл\n";
				a++;
			}
		}
		else {
	
			std::cout << "ты дурной?\n";
		}
		
	}

}
int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	srand(time(NULL));
	game();



}









// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
