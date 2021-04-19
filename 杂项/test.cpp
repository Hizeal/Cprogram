/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string word;
    vector<string> words;
    while(cin >> word)
    {
        words.push_back(word);
    }
    for(auto i : words){
        cout << i ;
    }
}*/
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> v;
	string s;

	while (cin >> s)
	{
		v.push_back(s);
	}

	for (auto &str : v)
	{
		for (auto &c : str)
		{
			c = toupper(c);
		}
	}

	for (auto i : v)
	{
		cout << i << endl;
	}
	return 0;
}