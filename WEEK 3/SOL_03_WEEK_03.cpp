/* Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any duplicate elements in the array or not. */

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>

using namespace std;

void sort(int A[], int n) //Merge Sort TimeComplexity = O(n log n)
{
    if (n == 0 || n == 1)
        return;
    int mid = n / 2;
    sort(A, n - mid);
    sort(A + mid, n - mid);
    int n1 = mid, n2 = n - mid, Lpart[n1], Rpart[n2];
    int i, j;
    for (i = 0; i < n1; i++)
        Lpart[i] = A[i];
    for (j = 0; j < n2; j++)
        Rpart[j] = A[mid + j];
    int k = 0;
    i = 0; j = 0;
    while (i < n1 && j < n2)
    {
        if (Lpart[i] <= Rpart[j])
        {
            A[k] = Lpart[i];
            i++; k++;
        }
        else {
            A[k] = Rpart[j];
            j++; k++;
        }
    }
    for (; i < n1; i++)
    {
        A[k] = Lpart[i];
        k++;
    }
    for (; j < n2; j++)
    {
        A[k] = Rpart[j];
        k++;
    }
}


bool dp(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
            return true;
    }
    return false;
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
        sort(A, n);
        if (dp(A, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
