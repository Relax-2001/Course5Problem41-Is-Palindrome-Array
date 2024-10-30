#include <iostream>

using namespace std;

void FillArrayWithNumbersHardCoded(int Arr[100], int& ArryLength)
{
	ArryLength = 6;
	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 30;
	Arr[4] = 20;
	Arr[5] = 10;
	
}

bool IsPalindromeArray(int Arr[100] , int ArrLength)
{

	for (int i = 0; i < ArrLength / 2 ; i++)
	{

		if (Arr[i] != Arr[ArrLength -i -1])
		{
			return false;
		}

	}
	return true;
}

void PrintArray(int Arr[100], int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}


int main()
{
	srand((unsigned)time(NULL));


	int Arr[100], Arr2[100], Length = 0, Length2 = 0;

	FillArrayWithNumbersHardCoded(Arr, Length);

	cout << "Array 1 elements : ";
	PrintArray(Arr, Length);

	if (!IsPalindromeArray(Arr, Length))
	{
		cout << "Array is not palindrome";
	}
	else
	{
		cout << "Array is  palindrome";

	}

	


}