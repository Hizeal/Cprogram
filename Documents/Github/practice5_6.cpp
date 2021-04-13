#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    const vector<string> scores{"E","D","C","B","A","A++"};
    int grade;
    while (cin >> grade)
    {
        cout << (grade <= 50?scores[0] : scores[(grade-50)/10]);/* code */
    }
    
}