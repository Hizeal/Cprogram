#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word1,word2;
    cin >> word1 >> word2;
    if(word1 == word2){
        cout << "Equal" << endl;
    }else if (word1 >= word2)
    {
        cout << word1 << endl;/* code */
    }else{
        cout << word2 << endl;
    }
    
}