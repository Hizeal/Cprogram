#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    const vector<string> scores{"e","D","C","B","A","A++"};
    int grade;
    while (cin >> grade)
    {
        if(grade < 50){
            cout << scores[0] << endl;
        }else{
            cout << scores[(grade-50) /10];
        }
    }
    
}