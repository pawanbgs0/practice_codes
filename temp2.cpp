#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> temp = {54,15,465,15,15,45,15,4,15,48,48,5};

    sort(temp.begin(), temp.end());

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}