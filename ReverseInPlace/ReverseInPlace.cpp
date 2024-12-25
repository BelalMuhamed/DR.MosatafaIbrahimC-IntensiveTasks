

#include <iostream>
using namespace std;
void ReverseInPlace(int arr[], int Size)
{
	for (int i = 0;i < Size / 2;i++)
	{
		swap(arr[i], arr[Size-i - 1]);
	}
}
bool TestCase()
{
	bool Flag = true;
	const int Size = 100;
	int cpy[Size];
	int arr[Size];
	for (int i = 0;i < Size;i++)
	{
		cpy[i] = arr[i] = rand() % 100;
	}
	ReverseInPlace(arr, Size);
	reverse(cpy, cpy + Size);
	for (int i = 0; i < Size;i++)
	{
		Flag &= (cpy[i] == arr[i]);
	}
	return Flag;
}
int main()
{
	int numbers[5] = { 1,5,4,7,8 };
	ReverseInPlace(numbers, 5);
	for (int i = 0;i <5;i++)
	{
		cout << numbers[i] << endl;
	}

	cout << TestCase();
}

