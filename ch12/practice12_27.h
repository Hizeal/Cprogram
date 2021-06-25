#ifndef CP_EX12_27_H
#define CP_EX12_27_H

#include<fstream>
#include<vector>
#include<string>
#include<memory>
#include<map>
#include<set>
using namespace std;

 class QueryResult;
 class TextQuery{
    public:
        using line_no = vector<string>::size_type;
        TextQuery(ifstream&);
        QueryResult query(const string& s) const;
    private:
        shared_ptr<vector<string>> file;
        map<string,shared_ptr<set<string>>> wm;    
 };

 class QueryResult{
     public:
        friend ostream& print(ostream&,const QueryResult&);
        QueryResult(string s,std::shared_ptr<std::set<TextQuery::line_no>> p,shared_ptr<vector<string>> f) : sought(s),lines(p),file(f){}
    private:
        string sought;
        shared_ptr<set<TextQuery::line_no>> lines;
        shared_ptr<vector<string>> file;
 };
 std::ostream& print(std::ostream&, const QueryResult&);
#endif