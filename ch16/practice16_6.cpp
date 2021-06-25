template<typename T,unsigned N>
T* begin(const T (&arr)[N]){
    return arr;
}

template<typename T,unsigned N> //每定义一个函数，需要加上这个
T* end(const T (&arr)[N]){
    return arr+N;
}