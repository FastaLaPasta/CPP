template<typename T>
void    Whatever<T>::swap(T &argOne, T &argTwo) {
    T tmp;

    tmp = argOne;
    argOne = argTwo;
    argTwo = tmp;
}

template<typename T>
T   Whatever<T>::min(T argOne, T argTwo) {
    return ( argOne < argTwo ? argOne : argTwo);
}

template<typename T>
T   Whatever<T>::max(T argOne, T argTwo) {
    return (argOne > argTwo ? argOne : argTwo);
}