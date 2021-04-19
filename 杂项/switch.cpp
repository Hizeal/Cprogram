#include<iostream>
using namespace std;
int main(){
    unsigned aCnt =0,eCnt =0,iCnt=0,oCnt = 0,uCnt=0;
    char ch;
    while (cin >> ch)
    {
        switch (ch)
        {
        case 'A':
        case 'a':
            aCnt++;
            break;
        case 'e':
        case 'E':
            eCnt++;
            break;
        case 'i':
        case 'I':
            iCnt++;
            break;
        case 'o':
        case 'O':
            oCnt++;
        default:
            break;
        }/* code */
    }
    cout << aCnt<<endl;
    cout << eCnt << endl;
    cout << iCnt << endl;
    cout << oCnt << endl;
    cout << uCnt << endl;
    
}