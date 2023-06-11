#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll binarySearch(vector<ll> &v, ll low, ll high, ll key)
{
    if (low == high)
    {
        if (v[low] == key)
            return low;
        else
            return -1;
    }
    else
    {
        ll mid = (low + high) / 2;
        if (key == v[mid])
            return mid;
        if (key < v[mid])
            return binarySearch(v, low, mid - 1, key);
        else
            return binarySearch(v, mid + 1, high, key);
    }
}
int main()
{
    ll n, key = 0;
    cout << "Enter size of the list of values: ";
    cin >> n;
    vector<ll> v(n);
    cout << "Enter elements : ";
    for (ll i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end());
    cout << "Enter the value you want to find : ";
    cin >> key;
    ll index = binarySearch(v, 0, n - 1, key);
    if (index == -1)
        cout << "The value was not found in the list." << endl;
    else
        cout << "The value was found in the " << index + 1 << " th index." << endl;
    return 0;
    /*
    The time complexity of the program is O(logn)
    */
}