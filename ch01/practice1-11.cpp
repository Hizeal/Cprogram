#include <iostream>
int main()
{
    using namespace std;
    int val1,val2;
    cin >> val1 >> val2;
    if(val1  > val2){
        while (val2 <= val1)
        {
            cout << val2 << endl;
            val2++;/* code */
        }
        
    }
    else{
        while (val1 <= val2)
        {
            cout << val1 << endl;
            val1++;/* code */
        }
        
    }
}