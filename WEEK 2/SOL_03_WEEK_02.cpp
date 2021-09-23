/* Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.*/

/*GIRIJA RATHORE CCIS 05*/

#include <iostream>
using namespace std;

int Function3(int A[], int n, int diff)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] - A[j] == diff || A[j] - A[i] == diff)
			{
				count++;
			}
		}
	}
	return count;
}

int main()
{
	int n, i, tc, diff = 0;
	//cout << "\nEnter the total number of test cases : ";
	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		cin >> n;
		//cout << "\nEnter the size of the array : ";
		int A[n];
		//cout << "\nEnter the elements in the array : ";
		for (int j = 0; j < n; j++)
		{
			cin >> A[j];
		}
		cin >> diff;
		cout << Function3(A, n, diff) << endl;
	}
	return 0;
}
