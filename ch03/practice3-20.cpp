#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string a;
    vector<string> s;
    while (cin >> a)
    {
        s.push_back(a);/* code */
    }
    for(int i = 0 ; i < s.size()-1;i++){
        cout << s[i]+s[i+1] << endl;
    }
    
}

int m = 0;
int n = s.size() -1;
while (m < n)
{
    cout << s[m] + s[n] << endl;
    ++m;
    --n;/* code */
}
