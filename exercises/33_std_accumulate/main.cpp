﻿#include "../exercise.h"
#include <numeric>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

int main(int argc, char **argv) {
    using DataType = float;
    int shape[]{1, 3, 224, 224};
    // TODO: 调用 `std::accumulate` 计算：
    //       - 数据类型为 float；
    //       - 形状为 shape；
    //       - 连续存储；
    //       的张量占用的字节数
    // int size =
    // 使用 std::accumulate 计算总元素数量
    int total_elements = std::accumulate(std::begin(shape), std::end(shape), 1, std::multiplies<int>());

    // 计算张量占用的字节数
    int size = total_elements * sizeof(DataType);// 总字节数
    ASSERT(size == 602112, "4x1x3x224x224 = 602112");
    return 0;
}
