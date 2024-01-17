#include <sample.h>

Sample::Sample() {
    data_ = 0;
}

void Sample::setData(int data){
    data_ = data;
}

int Sample::getData(){
    return data_;
}

