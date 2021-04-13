#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string word;
    vector<string> words;
    while(cin >> word){
        words.push_back(word);
    }
    for(string &str : words)
    {
        for(string &c : str)
        {
            c = toupper(c);
        }
    }
    for(auto c : words){
        cout << c  << endl;;
    }
    return 0;
}