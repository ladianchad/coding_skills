#ifndef PUBLISHER_H
#define PUBLISHER_H
#include <subscriber/subscriber.h>
#include <set>

template<class T>
class Publisher{
public:
    Publisher(){};
    void addSubscriber(Subscriber<T> * subscriber){
        subscribers_.insert(subscriber);
    }

    void removeSubscriber(Subscriber<T> * subscriber){
        subscribers_.erase(subscribers_.find(subscriber));
    }

    void publish(const T &data){
        for(auto subscriber: subscribers_){
            subscriber->update(data);
        }
    };
protected:
    std::set<Subscriber<T> *> subscribers_;
};

#endif