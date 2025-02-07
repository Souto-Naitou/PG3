#include <iostream>
#include <thread>

#include <functional>
#include <chrono>
#include <string>

long long MeasureTimeFunction(std::function<void()> function)
{
    // �J�n����
    auto start = std::chrono::high_resolution_clock::now();

    function();

    // �I������
    auto end = std::chrono::high_resolution_clock::now();

    // (�I�� - �J�n) �ł����������Ԃ��v�Z
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    // �Ԃ�
    return duration.count();
}

int main(void)
{
    std::string hugeString(1000000, 'a');

    long long copyDuration = MeasureTimeFunction([&hugeString]()
    {
        std::string copy = hugeString;
    });

    long long moveDuration = MeasureTimeFunction([&hugeString]()
    {
        std::string move = std::move(hugeString);
    });

    std::cout << "�R�s�[\t: " << copyDuration << "�ʕb" << std::endl;
    std::cout << "�ړ�\t: " << moveDuration << "�ʕb" << std::endl;

    return 0;
}