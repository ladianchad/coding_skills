#include <subscriber/echo_subscriber.h>
#include <publisher/publisher.h>

int main(int argc, char const *argv[])
{
    EchoSubscriber<int> subscriber1("subscriber 1");
    EchoSubscriber<int> subscriber2("subscriber 2");
    Publisher<int> publisher;

    publisher.addSubscriber(&subscriber1);
    publisher.addSubscriber(&subscriber2);

    publisher.publish(100);


    std::cout<<"----------- delete subscriber 1 --------------"<<std::endl;
    publisher.removeSubscriber(&subscriber1);

    publisher.publish(20);

    return 0;
}
