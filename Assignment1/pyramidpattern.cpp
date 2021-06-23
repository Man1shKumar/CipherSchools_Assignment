#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n) {
        while (k < (n - i - 1)) {
            cout << " ";
            k++;
        }
        k = 0;
        while (j <= i) {
            cout << "*";
            j++;
        }
    
        j = 0;
        i++;
        cout << endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern(n);
    return 0;
}