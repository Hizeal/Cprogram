template<typename Iterator,typename Value>
Iterator find(Iterator first,Iterator last,const Value& value){
    for(;first!=last && *first != value;first++){
        return first;
    }
}