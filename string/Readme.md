# C++ 字符串操作示例

本程序演示了 C++ 中 `string` 类的基本用法，包括字符串的输入、查找、替换、连接和字符转换等操作。

## 程序细节

### 1. 引入所需头文件

```cpp
#include <iostream>
#include <string> // 引入字符串库
#include <algorithm> // 引入算法库（用于修改字符串）
```

- `iostream`：用于输入输出操作。
- `string`：提供 `string` 类的功能。
- `algorithm`：包含算法相关的函数，如字符转换。

### 2. 主函数

```cpp
int main() {
    string userInput; // 创建字符串变量
    // ...
}
```

### 3. 输入字符串

程序提示用户输入一个字符串，并使用 `getline` 从标准输入读取整行内容：

```cpp
cout << "请输入一个字符串：";
getline(cin, userInput); // 读取整行输入，包括空格
```

### 4. 获取字符串长度

使用 `length()` 方法获取并输出字符串的长度：

```cpp
cout << "字符串长度为: " << userInput.length() << endl;
```

### 5. 查找字符

程序提示用户输入要查找的字符，使用 `find()` 方法找到字符在字符串中的位置。如果找到，输出位置；否则提示未找到：

```cpp
size_t position = userInput.find(ch);
if (position != string::npos) {
    cout << "字符 '" << ch << "' 在位置 " << position << " 找到。" << endl;
}
```

### 6. 替换字符

程序提示输入要替换的字符和新字符，使用范围基于的循环遍历字符串进行替换：

```cpp
for (char &c : userInput) {
    if (c == oldChar) {
        c = newChar; // 替换字符
    }
}
```

### 7. 字符串连接

程序允许用户输入另一个字符串，并将其连接到原字符串中：

```cpp
string combinedString = userInput + " " + additionalInput; // 连接字符串
```

### 8. 字符串转换为大写

使用 `std::transform()` 将字符串中的所有字符转换为大写：

```cpp
transform(combinedString.begin(), combinedString.end(), combinedString.begin(), ::toupper);
```

## 结论

该示例展示了 C++ 中 `string` 类的常用功能，使得字符串操作变得简单明了。
```

在这个示例中，Markdown 格式的说明清晰地阐述了程序的结构和功能，适合用于学习和参考。你可以将此说明放入一个 Markdown 编辑器（如 GitHub、Typora 或其他 Markdown 编辑器）中查看格式化后的效果。

如果你有任何问题或需要进一步的修改，请告诉我！
```