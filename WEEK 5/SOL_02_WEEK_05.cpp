/*Given an unsorted array of integers, design an algorithm and implement it using a program to find whether two elements exist such that their sum is equal to the given key element.*/

/*GIRIJA RATHORE CCIS 05*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	//cout << "\nEnter the total number of test cases : ";
	cin >> t;

	while (t--)
	{
		int n, i, j, flag = 0;
		//cout << "\nEnter the size of the array : ";
		cin >> n;
		int A[n];
		//cout << "\nEnter the elements in the array : ";
		for (i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		sort(A, A + n);
		i = 0;
		j = n - 1;
		int sum;
		//cout << "\nEnter the sum number : ";
		cin >> sum;
		while (i < j)
		{
			if (A[i] + A[j] == sum)
			{
				cout << A[i] << " " << A[j] << endl;
				i++;
				j--;
				flag = 1;
			}
			else if (A[i] + A[j] < sum)
			{
				i++;
			}
			else
			{
				j--;
			}
		}
		if (flag == 0)
		{
			cout << "No such pair exits" << endl;
		}
	}
}
