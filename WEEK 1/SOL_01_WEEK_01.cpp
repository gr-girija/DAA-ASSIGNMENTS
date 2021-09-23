/*Given an array of non-negative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. */

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>

using namespace std;

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
		bool flag = false;
		for (int j = 0; j < n; j++) // Linear Search Implementation
		{
			if (A[j] == key)
			{
				count = j + 1;
				flag = true;
				break;

			}
		}
		if (flag)
		{
			cout << "Present " << count << endl;;
		}
		else
		{
			cout << "Not Present " << n << endl;
		}
	}
}
