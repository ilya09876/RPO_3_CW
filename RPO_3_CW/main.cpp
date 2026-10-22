#define NOMINMAX
#include <iostream>
#include <Windows.h>
#include <string>
#include <limits>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::string login;
	std::string password;

	while (true)
	{
		system("cls");
		std::cout << "-----Регистрация-----\n";

		std::cout << "Введите логин(От 5 до 15 символов): ";
		std::getline(std::cin, login);
		if (login.size() < 5 || login.size() > 15)
		{
			std::cout << "Неверное колличество символов!\n";
			system("pause");
			continue;
		}

		std::cout << "Введите пароль(От 5 до 15 символов): ";
		std::getline(std::cin, password);
		if (password.size() < 5 || password.size() > 15)
		{
			std::cout << "Неверное колличество символов!\n";
			system("pause");
			continue;
		}
		break;
	}

	while (true)
	{
		std::string enteredlogin;
		std::string enteredpassword;

		system("cls");
		std::cout << "-----Авторизация-----\n";

		std::cout << "Введите логин: ";
		std::getline(std::cin, enteredlogin);

		std::cout << "Введите пароль: ";
		std::getline(std::cin, enteredpassword);
		if (enteredlogin != login || enteredpassword != password)
		{
			std::cout << "Неверный логин или пароль!\n";
			system("pause");
			continue;
		}

		std::cout << "Успешная авторизация!\n";
		break;
	}

	return 0;
}






/*
int a = 5;
int b = 10;
int* ptr = nullptr;

ptr = &a;

Plus(ptr);

std::cout << a << "\n";
std::cout << &a << "\n";
std::cout << *ptr << "\n";
std::cout << &ptr << "\n";

ptr = nullptr;
*/

/*
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int one = 10, two = 15;

	std::cout << one << " " << two << "\n";
	MySwap(&one, &two);
	// std::swap(one, two);
	std::cout << one << " " << two << "\n";


	return 0;
}

void MySwap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void MySwap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
*/

/*
const int size = 5;
	int arr[size]{ 3,4,1,5,6 };

	std::cout << arr << "\n";
	std::cout << *arr << "\n";
	std::cout << arr + 2 << "\n";
	std::cout << *(arr + 2) << "\n";
*/

/*
void FillArray(int *arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 101;
		std::cout << *(arr + i) << "\n";
	}
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	const int size = 5;
	int arr[size]{};

	FillArray(arr, size);


	return 0;
}
*/

/*
int* Mda()
{
	int* ptrA = new int;

	//delete ptrA;
	return ptrA;
}


int* ptrA = new int;

*ptrA = 1000;

delete ptrA;

ptrA = nullptr;
*/

/*
int size = 0;
std::cin >> size;

int* ptr = new int[5];



*(ptr + 1);

delete[] ptr;
ptr = nullptr;
*/

/*
int row = 3, col = 4;

int** arr = new int* [row];
for (int i = 0; i < row; i++)
{
	arr[i] = new int[col];
}

arr[1][2] = 12321;

for (int i = 0; i < row; i++)
{
	delete[] arr[i];
	arr[i] = nullptr;
}
delete[] arr;
arr = nullptr;
*/

/*
int side = 2, row = 4, col1 = 4, col2 = 3;

int*** arr = new int** [side];
for (int i = 0; i < side; i++)
{
	arr[i] = new int* [row];
}
for (int i = 0; i < row; i++)
{
	arr[0][i] = new int[col1];
}
arr[1][0] = new int[2];
for (int i = 1; i < row; i++)
{
	arr[1][i] = new int[col2];
}
*/

/*
void PushArray(int *&arr, int &size)
{
	size++;
	int* temp = new int[size]{};
	for (int i = 0; i < size--; i++)
	{
		temp[i] = arr[i];
	}

	temp[size--] = 100;

	delete[] arr;
	arr = temp;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int size = 5;
	int* name = new int[size]{3, 1, 2, 6, 9};

	PushArray(name, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << name[i] << " ";
	}


	return 0;
}
*/

/*
void SetMemory(int *&ptr, int &size)
{
	if (ptr != nullptr)
	{
		delete[] ptr;
	}
	ptr = new int[size]{};
}

void FillArray(int *&ptr, int &size)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 101 - 50;
	}
}

void DelArray(int *&ptr)
{
	if (ptr = nullptr)
	{
		return;
	}
	delete[] ptr;
	ptr = nullptr;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int size = 5;
	int* ptr = nullptr;

	SetMemory(ptr, size);
	FillArray(ptr, size);

	for (size_t i = 0; i < size; i++)
	{
		std::cout << ptr[i] << " ";
	}

	DelArray(ptr);


	return 0;
}
*/

/*
	std::string name = "text 1";
	std::string one = "\nNew text " + name;

	std::string* ptr = nullptr;
	ptr = new std::string[5];
	delete[] ptr;

	std::string arr[5]{ "Apple", "Garlic", "Ivan", "Farit", "Cola" };

	// auto lol = std::find(arr->begin(), arr->end(), "Ivan");

	// name.erase(1);

	std::string test = "Text";
	std::string text2 = "Иван Иван";

	for (int i = 0; i < test.size(); i++)
	{
		if (test[i] == 'T')
		{
			std::cout << 't';
		}
		else
		{
			std::cout << test[i];
		}
	}

	std::cout << name;
	*/

/*
	std::string one;
	int num = 0;

	while (true)
	{
		system("cls");

		// std::getline(откуда_взять_текст, куда_его_положить)
		std::getline(std::cin, one);
		std::cout << one << std::endl;

		std::getline(std::cin, one, "u");
		std::cout << one << std::endl;

		//std::cin >> num;
		//std::cout << num << std::endl;

		//std::cin.ignore(32767, '\n'); // Способ 1, не самый лучший

		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // лучший способ



		system("pause");
	}
	*/

/*
	// ОТЛАДКА

	int num = 0;
	int num2;
	std::string text;
	std::string text2 = "Info";

	std::cout << text;
	std::cout << text2 << "\n";

	for (int i = 0; i < text2.size(); i++)
	{
		std::cout << text2[i];
	}

	std::cin >> num2;
	std::cout << num2 << "\n";
	PrintInfo(num, num2);
*/