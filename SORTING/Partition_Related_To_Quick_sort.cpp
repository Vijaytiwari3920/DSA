#include <iostream>
using namespace std;

int partition(int A[], int p, int r)
{
    int x = A[r];      // pivot
    int i = p - 1;

    for (int j = p; j <= r - 1; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

int main()
{
    int A[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(A) / sizeof(A[0]);

    int pos = partition(A, 0, n - 1);

    cout << "Array after partition:\n";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout << "\nPivot position: " << pos << endl;

    return 0;
}
