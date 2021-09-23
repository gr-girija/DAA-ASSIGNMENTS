/*Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key.*/

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>

using namespace std;

int Function1(int array[], int n, int key, int start)
{
	int low = 0, high = n - 1;
	int result = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (array[mid] == key)
		{
			result = mid;
			if (start)
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
		else if (array[mid] > key)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return result;
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
		int array[n];
		//cout << "\nEnter the elements in the array : ";
		for (int j = 0; j < n; j++)
		{
			cin >> array[j];
		}
		//cout << "\nEnter the key element to be found : ";
		cin >> key;
		int ft = Function1(array, n, key, 1);
		int lt = Function1(array, n, key, 0);
		int count = lt - ft + 1;
		if (ft != -1)
		{
			cout << key << "-" << count;
		}
		else
		{
			cout << "\nElement not Found"; 
		}
	}
	return 0;
}
