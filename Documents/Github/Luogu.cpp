/*#include<iostream>
using namespace std;
int main(){
    char ch;
    scanf("%c",&ch);
    printf("%c",char(int(ch)-32));
    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string num;
    cin >> num;
    int n = num.size();
    for(int i = n-1;i>=0;i--){
        cout << num[i];
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    float a;
    int b;
    cin >> a>> b;
    cout << setprecision(3)<< fixed << a/b<<endl<<2*b;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a>>b>>c>>d;
    int time = (c-a)*60+d-b;
    cout<<time/60<<" "<<time%60;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int apples;
    int minutes;
    int sum;
    cin >> apples>>minutes>>sum;
    if(minutes == 0){
        cout<<0<<endl;
        return 0;
    }
    if((sum%minutes) ==0){
        cout<<max(apples-sum/minutes,0);
    }else{
        cout<<max(apples-sum/minutes-1,0);
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    bool a=0,b=0,c=0,d=0;
    int num;
    cin >> num;
    if(num %2==0 && (num>4 &&num <=12)) a=1;
    if(num%2 ==0 || (num>4 &&num <=12)) b =1;
    if(num%2 ==0 ^ (num>4 &&num <=12)) c =1;
    if(num%2!=0 && (num<=4 || num >12)) d=1;
    cout << a<<" "<<b<<" "<<c<<" "<< d <<" ";
}