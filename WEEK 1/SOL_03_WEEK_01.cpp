/*Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. */

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int JumpSearch(int A[], int n, int key)
{
	int step = sqrt(n);
	int prev = 0, count = 0;
	while (A[min(step, n) - 1] < key)
	{
		count = count + 1;
		prev = step;
		step = step + sqrt(n);
		if (prev >= n)
		{
			cout << "\nNot Present " ;
			return count;
		}

	}

	while (A[prev] < key)
	{

		prev = prev + 1;

		if (prev == min(step, n))
		{
			cout << "\nNot Present " << count ;
			return count;
		}
		count = count + 1;
	}

	if (A[prev] == key)
	{
		count = count + 1;
		cout << "\nPresent " << count ;
		return count;
	}
	cout << "\nNot Present " << count ;
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
		JumpSearch(A, n, key);
	}
	return 0;
}

