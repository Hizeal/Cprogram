#include<iostream>
#include<memory>
#include<string>
using std::string;
using std::cout;
using std::shared_ptr;

struct connection //连接所需要的信息
{
    string ip;
    int port;
    connection(string i,int p):ip(i),port(p){} //默认构造函数
};
struct destination //我们正在连接什么
{
    string ip;
    int port;
    destination(string i,int p):ip(i),port(p){}//默认构造函数
};
connection connect(destination* p){ //打开连接
    shared_ptr<connection> pConn(new connection(pConn->ip,pConn->port));
    cout << "creating connection("<<pConn->ip<<" "<<pConn->port;
}
void disconnect(connection pConn){ //关闭连接
    cout << "connection close" << pConn.ip<<" : "<<pConn.port;
}
void f(destination& d){
    connection conn = connect(& d); //获得一个连接
    shared_ptr<connection> p(& conn,[](connection* p){disconnect(*p);});
    std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}
int main(){
    destination dest("220.181.111.111", 10086);
	f(dest);
}