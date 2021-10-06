#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of indexes in the array"<<"\n";
    cin >> n;
    int a[n];
    cout<<"enter the elements of array"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum;
    cout<<"Enter the sum\n";
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
    int s = 0;
    for (int k = i; k < n; k++)
    {

    s += a[k];

    if (s == sum)
    {
    for (int j = i; j <= k; j++)
    {
    cout << a[j] << " ";
    }
    cout << endl;
            }
        }
    }

    return 0;
}
