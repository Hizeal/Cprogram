#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> ivel(10,42);
    for(auto it = ivel.begin();it != ivel.end() ;++it){
        *it *= 2;
    }
    for(auto w:ivel){
        cout << w;
    }
}