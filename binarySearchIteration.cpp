#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void binarySearch()
{
    ll n;
    cout << "Enter the size of the list: ";
    cin >> n;
    vector<ll> v(n);
    cout << "Enter the elements of the list : ";
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    ll key;
    cout << "Enter the value you want to search : ";
    cin >> key;
    ll low = 0, high = n - 1, mid = 0;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (key == v[mid])
        {
            cout << "The value was found at " << mid + 1 << " th index." << endl;
            return;
        }
        else if (key > v[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "The value was not found in the list." << endl;
}
int main()
{
    binarySearch(); // The  time complexity of this program is O(logn)
    return 0;
}