#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);





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