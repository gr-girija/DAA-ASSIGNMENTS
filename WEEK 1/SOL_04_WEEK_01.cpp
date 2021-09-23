/*For an array arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on. Once the interval (arr[2k]< key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key. */

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>

using namespace std;

int  LinearSearch(int A[], int s, int n, int key, int count);

int ExponentialSearch(int A[], int n, int key)
{
	int count = 1;
	if (A[0] == key)
	{
		cout << "\nPresent" << count ;
		return count;
	}
	int i = 1;
	while (i < n && A[i] <= key)
	{
		i = i * 2;
		count = count + 1;
	}
	return LinearSearch(A, int(i / 2), n, key, count);
}

int  LinearSearch(int A[], int s, int n, int key, int count)
{
	int i = 0;
	for (i = s; i < n; i++)
	{
		count = count + 1;
		if (A[i] == key)
		{
			cout << "\nPresent " << count ;
			return count;
		}
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
		int l = 0;
		int r = n;
		ExponentialSearch(A, n, key);
	}
	return 0;
}
