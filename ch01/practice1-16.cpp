#include <iostream>
using namespace std;
int main()
{
    int sum =0,value = 0;/*似乎以空格或空行区分数字*/
    while (cin >> value)
    {
        sum += value;/* code */
    }
    cout << sum << endl;
    
}