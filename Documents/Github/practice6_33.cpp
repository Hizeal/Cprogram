#include<iostream>
#include<vector>
using namespace std;
using Iter = vector<int>::const_iterator;
void print(Iter first,Iter last){
    if(first == last){
        cout << "OVer!" << endl;
        return;
    }
    cout << * first << " ";
    print(++first,last);
}
int main(){
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    print(vec.cbegin(),vec.cend());
    return 0;
}
    string maskPII(string S) {
        string res = "";
        int pos;
        if((pos = S.find("@")) != string::npos){
            for(int i=0; i<S.size(); i++) S[i] = tolower(S[i]);
            res = res + S[0] + "*****" + S.substr(pos-1);
            return res;
        }
        string num;
        for(int i=0; i<S.size(); i++) if(isdigit(S[i])) num += S[i];
        if(num.size()==10) res+="***-***-"+num.substr(6);
        if(num.size()==11) res+="+*-***-***-"+num.substr(7);
        if(num.size()==12) res+="+**-***-***-"+num.substr(8);
        if(num.size()==13) res+="+***-***-***-"+num.substr(9);
        return res;