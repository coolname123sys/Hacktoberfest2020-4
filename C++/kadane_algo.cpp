#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here += arr[i];
        max_so_far = max(max_so_far, max_ending_here);
        if (max_so_far < 0)
        {
            max_so_far = 0;
        }
    }
    cout << max_ending_here << endl;
}
