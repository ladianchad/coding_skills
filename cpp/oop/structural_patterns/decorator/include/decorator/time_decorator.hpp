#ifndef TIME_DECORATOR_H
#define TIME_DECORATOR_H
#include <chrono>
#include <iostream>

using Time = std::chrono::system_clock::time_point;

template <class T>
class TimeDecorator : public T
{
public:
    
    TimeDecorator() : T() {};

    template<class Type>
    TimeDecorator(Type arg) : T(arg) {}

    template<class Type, typename... Types>
    TimeDecorator(Type arg, Types... args) : T(arg, args...) {}
    
    void execute();

    template<class Type>
    void execute(Type arg);
    
    template<class Type, typename... Types>
    void execute(Type arg, Types... args);
private:
    void printDiffTime(Time &start);
};

template <class T>
void
TimeDecorator<T>::printDiffTime(Time &start){
    Time end = std::chrono::system_clock::now();
    std::chrono::nanoseconds diff = end - start;
    std::time_t start_time = std::chrono::system_clock::to_time_t(start);
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout<<"end.."<<std::endl
    <<"-----summmery-----"<<std::endl
    <<"start time : "<<start_time<<"ns"<<std::endl
    <<"end time : "<<end_time<<"ns"<<std::endl
    <<"take time : "<< diff.count()<<"ns"<<std::endl
    <<"------------------"<<std::endl;
}


template <class T>
void 
TimeDecorator<T>::execute(){
    std::cout<<"start.."<<std::endl;
    Time start = std::chrono::system_clock::now();
    T::execute();
    printDiffTime(start);
}

template <class T>
template<class Type>
void 
TimeDecorator<T>::execute(Type arg){
    std::cout<<"start.."<<std::endl;
    Time start = std::chrono::system_clock::now();
    T::execute(arg);
    printDiffTime(start);
}

template <class T>
template<class Type, typename... Types>
void TimeDecorator<T>::execute(Type arg, Types... args){
    std::cout<<"start.."<<std::endl;
    Time start = std::chrono::system_clock::now();
    T::execute(arg, args...);
    printDiffTime(start);
}
#endif