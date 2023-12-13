#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int myAmount = 0;
mutex m; 

void addMoney() {
    m.lock();
    ++myAmount;
    cout<<"cdcdc"<<endl;
    m.unlock();
}

int main() {
    thread tl(addMoney) ;
    thread t2(addMoney) ;
    
    t1.join();// wait for t2 to finish
    t2.join(); //wait for t2 to finish
    
    // tl.detach();
    // t2.detach();
    cout<<myAmount<<endl;
    return 0;
}