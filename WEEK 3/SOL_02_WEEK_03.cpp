/*Given an unsorted array of integers, design an algorithmand implement a program to sort this array using selection sort. Your program should also find number of comparisons and number of swaps required*/

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>
using namespace std;

void SELSort(int A[], int n)
{
    int minm, pos, cmp = 0, sw = 0;
    for (int i = 0; i < n - 1; i++)
    {
        minm = A[i];
        pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < minm)
            {
                minm = A[j];
                pos = j;
            }
            cmp++;
        }
        if (pos != i)
        {
            int temp = A[i];
            A[i] = A[pos];
            A[pos] = temp;
            sw++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "\nCOMPARISONS : " << cmp;
    cout << "\nSWAPS : " << sw;
}

int main()
{
    int tc;
    //cout << "\nEnter the total number of test cases : ";
    cin >> tc;
    while (tc--)
    {
        int n;
        //cout << "\nEnter the size of the array : ";
        cin >> n;
        int* A = new int[n];
        //cout << "\nEnter the elements in the array : ";
        for (int i = 0; i < n; i++)
            cin >> A[i];
        SELSort(A, n);
    }
}
