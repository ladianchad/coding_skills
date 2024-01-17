#ifndef SINGLETON_H_
#define SINGLETON_H_

template <class T>
class Singlton
{
public:
    
    static T* getInstance(){
        return instance_;
    }

private:
    Singlton() {
    };
    static T *instance_;
};

template<class T>
T* Singlton<T>::instance_ = new T();

#endif