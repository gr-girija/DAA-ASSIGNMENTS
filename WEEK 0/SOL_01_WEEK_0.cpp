/*Given an array of non-negative integers, design a linear algorithm and implement it using a program to find whether a given key element is present in the array or not. Also, find the total number of comparisons for each input case.*/

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>

using namespace std;

int main() 
{

    int n;
    //cout << "\nEnter the size of the array : ";
    cin >> n;
    int A[n];
    //cout << "\nEnter the elements in the array : ";
    for (int i = 0; i < n; i++) 
    {
        cin >> A[i];
    }
    int key;
    //cout << "\nEnter the key element to be found : ";
    cin >> key;
    bool flag = false;
    for (int i = 0; i < n; i++) // Linear Search Implementation  
    {
        if (A[i] == key) 
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "\nThe key element is present in the array! ";
    }
    else
    {
        cout << "\nThe key element is not present in the array! ";
    }
    return 0;
}
