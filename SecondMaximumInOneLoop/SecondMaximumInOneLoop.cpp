
#include <iostream>
#include <random>
using namespace std;
int GetSecondMax(int Nums[], int size)
{
	if (size > 1) {
		int FMax = max(Nums[0], Nums[1]);
		int SMax = min(Nums[0], Nums[1]);
		for (int i = 2; i < size; i++) {
			if (FMax < Nums[i]) {
				SMax = FMax;
				FMax = Nums[i];
			}
			else if (SMax < Nums[i] ) {
				SMax = Nums[i];
			}
			else
			{
				continue;
			}
		}
		return SMax;
	}
	else {
		return -1;
	}
}

bool TestMyCode()
{
	
	int MyValue;
	int TestValue;
	int Nums[1000];
	int CpyNums[1000];
	bool flag = true;
	for (int j = 0;j < 1000;j++)
	{
		for (int i = 0;i < 1000;i++)
		{
			CpyNums[i] = Nums[i] =rand() %100 ;
			

		}
		MyValue = GetSecondMax(Nums, 1000);
		sort(CpyNums, CpyNums + 1000);
		TestValue = CpyNums[998];
		if (TestValue != MyValue) {
			flag = false;
			break;
		}
		
	}
	

	return flag;
}
int main()
{
	
	cout << TestMyCode();
	
}

