#include <iostream>
#include <fstream>  
#include <clocale>  
#include <cstdlib>  

int main(int argc, char * argv[]) {
	setlocale(LC_ALL, "Rus");
	char file_name[24];
	std::cout << "Âגוהטעו טלÿ פאיכא: "; 
	std::cin >> file_name;
	std::ifstream file;
	do {
		std::cout << "\nÔאיכ םו בûכ םאיהום!\n"	<< "Âגוהטעו טלÿ פאיכא: ";
		std::cin >> file_name;
		file.open(file_name);
		if (file.good())
			break;
	} while (true);

	char *str = new char[1024];
	int i = 0;
	while (!file.eof()) {
		file.getline(str, 1024, '\n');
		i++;
	}
	file.close();
	delete str;
	std::cout << i << '\n';
	system("pause");
	return 0;
}