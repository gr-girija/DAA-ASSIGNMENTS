/*Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and implement it using a program to find which alphabet has maximum number of occurrences and print it.*/

/*GIRIJA RATHORE CCIS 05*/

#include <bits/stdc++.h>

using namespace std;

void func() 
{
    int n;
    //cout << "\nEnter the size of the character array : ";
    cin >> n;
    char A[n];
    int count[26] = { 0 };
    for (int i = 0; i < n; i++) 
    {
        cin >> A[i];
        count[A[i] - 'a']++;
    }

    char ch;
    int count_ch = 1;
    for (int i = 0; i < 26; i++) 
    {
        if (count[i] > count_ch) 
        {
            ch = (char)(i + 'a');
            count_ch = count[i];
        }
    }
    
    if (count_ch == 1) 
    {
        cout << "\nNo duplicates are present!";
    }
    
    else 
    {
        cout << ch << " " << count_ch;
    }
}

int main() 
{
    int tc;
    //cout << "\nEnter the total number of test cases : ";
    cin >> tc;
    
    while (tc--) 
    {
        func();
    }
    
    return 0;
}
