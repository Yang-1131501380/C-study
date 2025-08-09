#include <iostream>
#include <bitset>
#include <string>

// bitset是C++标准库中的一个模板类，用于处理固定大小的位序列
// 它提供了方便的位操作接口，比手动使用整数进行位操作更直观

int main() {
    // 1. 初始化bitset的多种方式
    // 方式1: 声明一个包含8位的bitset，默认初始化为0
    std::bitset<8> bs1;
    
    // 方式2: 用整数初始化(只使用低N位，N为bitset大小)
    std::bitset<8> bs2(42);  // 42的二进制是00101010
    
    // 方式3: 用二进制字符串初始化
    std::bitset<8> bs3(std::string("10101010"));
    
    // 方式4: 用部分字符串初始化，从位置3开始，长度为4
    std::bitset<8> bs4(std::string("0011110011"), 3, 4);  // 取"1100"
    
    std::cout << "初始化示例:\n";
    std::cout << "bs1: " << bs1 << " (默认初始化)\n";
    std::cout << "bs2: " << bs2 << " (用42初始化)\n";
    std::cout << "bs3: " << bs3 << " (用\"10101010\"初始化)\n";
    std::cout << "bs4: " << bs4 << " (用字符串部分初始化)\n\n";
    
    // 2. 访问和修改位
    std::bitset<8> bs_access;
    
    // 设置指定位(1-based索引，但bitset使用0-based)
    bs_access.set(0);       // 设置第0位为1
    bs_access.set(2, 1);    // 设置第2位为1
    bs_access.set(5);       // 设置第5位为1
    
    // 清除指定位
    bs_access.reset(2);     // 清除第2位(设为0)
    
    // 翻转指定位
    bs_access.flip(5);      // 翻转第5位
    
    // 访问位的值
    bool bit0 = bs_access[0];  // 第0位的值
    bool bit1 = bs_access.test(1);  // 第1位的值(更安全的方式)
    
    std::cout << "位访问示例:\n";
    std::cout << "bs_access: " << bs_access << "\n";
    std::cout << "第0位的值: " << std::boolalpha << bit0 << "\n";
    std::cout << "第1位的值: " << bit1 << "\n\n";
    
    // 3. 位运算
    std::bitset<8> bs_and(std::string("10101010"));
    std::bitset<8> bs_or(std::string("11001100"));
    
    std::cout << "位运算示例:\n";
    std::cout << "bs_and:   " << bs_and << "\n";
    std::cout << "bs_or:    " << bs_or << "\n";
    std::cout << "与(&):    " << (bs_and & bs_or) << "\n";  // 按位与
    std::cout << "或(|):    " << (bs_and | bs_or) << "\n";  // 按位或
    std::cout << "异或(^):  " << (bs_and ^ bs_or) << "\n";  // 按位异或
    std::cout << "非(~):    " << ~bs_and << "\n";           // 按位非
    std::cout << "左移(<<): " << (bs_and << 2) << "\n";     // 左移
    std::cout << "右移(>>): " << (bs_and >> 2) << "\n\n";   // 右移
    
    // 4. 其他常用操作
    std::bitset<8> bs_ops(std::string("10101010"));
    
    std::cout << "其他操作示例:\n";
    std::cout << "原始值: " << bs_ops << "\n";
    std::cout << "所有位都为1? " << bs_ops.all() << "\n";    // 检查是否所有位都为1
    std::cout << "至少有一位为1? " << bs_ops.any() << "\n"; // 检查是否至少有一位为1
    std::cout << "所有位都为0? " << bs_ops.none() << "\n";  // 检查是否所有位都为0
    std::cout << "为1的位数量: " << bs_ops.count() << "\n"; // 计算为1的位数量
    std::cout << "转换为unsigned long: " << bs_ops.to_ulong() << "\n"; // 转换为无符号长整数
    std::cout << "转换为字符串: " << bs_ops.to_string() << "\n";       // 转换为字符串
    
    return 0;
}
