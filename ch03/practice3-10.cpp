#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    string results;
    while (cin >> line)
    {
        for(auto c : line){
            if(!ispunct(c))
                results += c;
        }    /* code */
        cout << results << endl;
    }
    
}