#include <iostream>

#include <functional>
#include <chrono>
#include <string>

long long MeasureTimeFunction(std::function<void()> function)
{
    // 開始時間
    auto start = std::chrono::high_resolution_clock::now();

    function();

    // 終了時間
    auto end = std::chrono::high_resolution_clock::now();

    // (終了 - 開始) でかかった時間を計算
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    // 返す
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

    std::cout << "コピー\t: " << copyDuration << "μ秒" << std::endl;
    std::cout << "移動\t: " << moveDuration << "μ秒" << std::endl;

    return 0;
}