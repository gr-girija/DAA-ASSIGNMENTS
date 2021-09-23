/*WEEK 04 QUESTION 01 */

/*GIRIJA RATHORE CCIS 05*/

#include<iostream>
using namespace std;

int c = 0;
int inv = 0;
void MERSort(int A[], int n)
{
    if (n == 0 || n == 1)
        return;
    int mid = n / 2;
    MERSort(A, n - mid);
    MERSort(A + mid, n - mid);
    int n1 = mid, n2 = n - mid, Lpart[n1], Rpart[n2];

    for (int i = 0; i < n1; i++)
        Lpart[i] = A[i];
    for (int j = 0; j < n2; j++)
        Rpart[j] = A[mid + j];
    
    int k = 0, i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (Lpart[i] <= Rpart[j])
        {
            A[k] = Lpart[i];
            k++; i++;
            c++;
        }
        else {
            A[k] = Rpart[j];
            j++; k++;
            c++;
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

int main()
{
    int t;
    //cout << "\nEnter the total number of test cases : ";
    cin >> t;
    while (t--)
    {
        int n;
        //cout << "\nEnter the size of the array : ";
        cin >> n;
        int* A = new int[n];
        //cout << "\nEnter the elements in the array : ";
        for (int i = 0; i < n; i++)
            cin >> A[i];
        MERSort(A, n);
        for (int i = 0; i < n; i++)
            cout << A[i] << " ";
        cout << endl;
        cout << "\nCOMPARISIONS : " << c ;
        //cout << "\nINVERSIONS : " << inv ;
    }
}
