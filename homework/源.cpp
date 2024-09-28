#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int all;
        cin >> all;
        vector<int> num;
        for (int j = 0; j < all; j++)
        {
            num.push_back(j + 1);
        }
        while (all)
        {
            if (all >= 2) {
                cout << num[0] << ' ';
                num.erase(num.begin());
                num.push_back(*num.begin());
                num.erase(num.begin());
                all--;
            }
            else {
                cout << num[0] << ' ';
                num.erase(num.begin());
                all--;
            }
        }
        cout << endl;
    }
}