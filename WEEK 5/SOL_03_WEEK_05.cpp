/*You have been given two sorted integer arrays of size m and n. Design an algorithm and implement it using a program to find list of elements which are common to both.*/

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>

using namespace std;

int main()
{
	int A[100], B[100], m, n, i, p = 0, q = 0;
	cout << "\nEnter the size of first array : ";
	cin >> m;
	cout << "\nEnter the sorted elements in first array : ";
	for (i = 0; i < m; i++)
	{
		cin >> A[i];
	}
	cout << "\nEnter the size of second array : ";
	cin >> n;
	cout << "\nEnter the sorted elements in second array : ";
	for (i = 0; i < n; i++)
	{
		cin >> B[i];
	}
	while (p <= m && q <= n)
	{
		if (A[p] < B[q])
		{
			p++;
		}
		else if (B[q] < A[p])
		{
			q++;
		}
		else if (A[p] == B[q])
		{
			cout << " " << A[p];
			p++;
			q++;
		}
	}
	return 0;
}


