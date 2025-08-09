# C++ 中的 `<vector>` 使用总结  

## 简介  
`<vector>` 是 C++ 标准模板库（STL）中的一个序列容器，提供动态大小的数组功能，允许用户快速添加和删除元素。  

## 基本操作  
- **声明**：`std::vector<int> myVector;`  
- **添加元素**：`myVector.push_back(value);`  
- **访问元素**：`int value = myVector[index];`  
- **获取大小**：`size_t size = myVector.size();`  
- **删除元素**：`myVector.pop_back();`  
- **清空**：`myVector.clear();`  
- **检查是否为空**：`myVector.empty();`  
- **预分配容量**：`myVector.reserve(n);`  

## 常用成员函数  
| 函数                        | 说明                             |
| --------------------------- | -------------------------------- |
| `push_back(const T& val)`   | 在末尾添加元素                   |
| `pop_back()`                | 删除末尾元素                     |
| `at(size_t pos)`            | 返回指定位置的元素，带边界检查   |
| `operator[]`                | 返回指定位置的元素，不带边界检查 |
| `front()`                   | 返回第一个元素                   |
| `back()`                    | 返回最后一个元素                 |
| `data()`                    | 返回指向底层数组的指针           |
| `size()`                    | 返回当前元素数量                 |
| `capacity()`                | 返回当前分配的容量               |
| `reserve(size_t n)`         | 预留至少 n 个元素的存储空间      |
| `resize(size_t n)`          | 将元素数量调整为 n               |
| `clear()`                   | 清空所有元素                     |
| `insert(iterator pos, val)` | 在指定位置插入元素               |
| `erase(iterator pos)`       | 删除指定位置的元素               |
| `begin()` / `end()`         | 返回起始/结束迭代器              |

## 总结  
`<vector>` 是 C++ STL 中一个非常有用的容器，提供了动态数组的功能，使得元素的添加和删除变得更加灵活和方便。通过上述示例，初学者可以快速了解 `<vector>` 的基本用法和操作。