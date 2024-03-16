#include "ChaosGomokuUtils.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>
#include <cstring>

extern "C" {
    const char* getformatCurrBjTime() 
    {
        // 获取当前时间点（UTC时间）
        auto timePoint = std::chrono::system_clock::now();

        // 设置北京时间的时区偏移
        auto bjOffset = std::chrono::hours(8);

        // 将UTC时间转换为北京时间
        auto bjTimePoint = timePoint + bjOffset;

        // 将时间点转换为 time_t 类型
        std::time_t bjTime = std::chrono::system_clock::to_time_t(bjTimePoint);

        // 格式化日期时间字符串
        std::stringstream ss;
        ss << std::put_time(std::gmtime(&bjTime), "%Y/%m/%d %H:%M") << " (GMT+08:00)";
        ss << " 中国标准时间 - 北京";

        // 获取格式化后的字符串
        std::string formattedTime = ss.str();

        // 将格式化后的字符串复制到 C 风格的字符数组中
        char* cString = new char[formattedTime.length() + 1];
        std::strcpy(cString, formattedTime.c_str());

        // 返回 C 风格的字符串
        return cString;
    }

    void CTest::testFunc(int a, int b) 
    {
        std::cout << "test";
    }
}

