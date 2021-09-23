/*Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case*/

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>
using namespace std;

int BinSearch(int A[], int l, int r, int key)
{
	int count = 0;
	while (l <= r)
	{
		int mid = l + (r - l) / 2;
		count = count + 1;
		if (A[mid] == key)
		{
			cout << "\nPresent " << count;
			return count;
		}
		else if (A[mid] < key)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}

	}
	cout << "\nNot Present " << count;
	return count;
}

int main()
{
	int tc, n, key;
	//cout << "\nEnter the total number of test cases : ";
	cin >> tc;
	int count = 0;
	for (int i = 0; i < tc; i++)
	{
		//cout << "\nEnter the size of the array : ";
		cin >> n;
		int A[n];
		//cout << "\nEnter the elements in the array : ";
		for (int j = 0; j < n; j++)
		{
			cin >> A[j];
		}
		//cout << "\nEnter the key element to be found : ";
		cin >> key;
		int l = 0;
		int r = n;
		BinSearch(A, l, r - 1, key);

	}
	return 0;
}
