#include <iostream>
#include <Windows.h>

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