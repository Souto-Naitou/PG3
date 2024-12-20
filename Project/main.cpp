#include <iostream>
#include <thread>


int main(void)
{
    using namespace std;


    std::thread th1([]() {
        cout << "thread 1" << endl;
    });
    th1.join();


    std::thread th2([]() {
        cout << "thread 2" << endl;
    });
    th2.join();


    std::thread th3([]() {
        cout << "thread 3" << endl;
    });
    th3.join();


    return 0;
}