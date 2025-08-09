#include <iostream>
#include <queue> // 包含队列库以使用std::queue

// 示例函数，演示 std::queue 的基本操作
void queueExample() {
    // 创建一个空的整数队列
    std::queue<int> q; 

    // 向队列中添加元素（入队操作）
    q.push(10); // 将元素 10 插入队列
    q.push(20); // 将元素 20 插入队列
    q.push(30); // 将元素 30 插入队列

    // 打印当前队列的大小
    std::cout << "当前队列大小: " << q.size() << std::endl; // 应显示 3

    // 访问并打印队列的第一个元素（即队头元素）
    std::cout << "队头元素: " << q.front() << std::endl; // 应显示 10

    // 访问并打印队列的最后一个元素（即队尾元素）
    std::cout << "队尾元素: " << q.back() << std::endl; // 应显示 30

    // 从队列中删除元素（出队操作）
    q.pop(); // 删除队头元素（10）
    std::cout << "删除队头元素后，当前队列大小: " << q.size() << std::endl; // 应显示 2

    // 再次访问并打印新的队头元素
    std::cout << "新的队头元素: " << q.front() << std::endl; // 应显示 20

    // 清空队列，释放所有元素
    while (!q.empty()) {
        q.pop(); // 不断出队，直到队列为空
    }
    std::cout << "清空队列后，当前队列大小: " << q.size() << std::endl; // 应显示 0
}

int main() {
    queueExample(); // 调用示例函数以演示队列操作
    return 0; // 程序成功结束
}