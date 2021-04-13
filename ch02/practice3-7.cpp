#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    while (cin >> line)
    {
        for(char &c : line){
            c = 'X';/* code */
        }
    cout << line<< endl;    
    }

    
}
