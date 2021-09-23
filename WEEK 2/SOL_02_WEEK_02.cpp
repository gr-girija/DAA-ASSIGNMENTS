/*Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k]. */

/*GIRIJA RATHORE CCIS 05*/

#include <iostream>
using namespace std;

void Function2(int A[], int l, int r, int n)
{
	int flag = 0;
	for (int k = 1; k <= n; k++)
	{
		l = 1, r = n;
		while (l < r)
		{
			int sum = A[l] + A[r];
			if (sum == A[k])
			{
				cout << l << "," << r << "," << k << endl;
				return;
			}
			else if (sum < A[k])
			{
				l++;
			}
			else
			{
				r--;
			}
		}
	}
	cout << "\nSequence not found";
}

int main()
{
	int n, i, tc;
	//cout << "\nEnter the total number of test cases : ";
	cin >> tc;
	while (tc--)
	{
		//cout << "\nEnter the size of the array : ";
		cin >> n;
		int A[n];
		//cout << "\nEnter the elements in the array : ";
		for (i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		Function2(A, 1, n, n);
	}
	return 0;
}
