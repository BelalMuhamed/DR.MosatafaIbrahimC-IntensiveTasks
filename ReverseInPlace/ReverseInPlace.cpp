

#include <iostream>
using namespace std;
void ReverseInPlace(int arr[], int Size)
{
	for (int i = 0;i < Size / 2;i++)
	{
		swap(arr[i], arr[Size - 1]);
	}
}
int main()
{
	int numbers[5] = { 1,5,4,7,8 };
	ReverseInPlace(numbers, 5);
	for (int i = 0;i <5;i++)
	{
		cout << numbers[i] << endl;
	}
}

