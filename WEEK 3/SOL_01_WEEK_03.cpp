/*Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort. Your program should be able to find number of comparisons and shifts ( shifts total number of times the array elements are shifted from their place) required for sorting the array.*/

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>
using namespace std;

void INSort(int A[], int n)
{
    int cmp = 0, sh = 0;
    for (int i = 1; i < n; i++)
    {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && key < A[j])
        {
            A[j + 1] = A[j];
            j = j - 1;
            cmp++;
            sh++;
        }
        A[j + 1] = key;
        sh++;
    }
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "\nCOMPARISIONS : " << cmp;
    cout << "\nSHIFTS : " << sh;
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
        INSort(A, n);
    }
}
