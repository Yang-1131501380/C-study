#include <iostream>  
#include <string>      // 引入字符串库  
#include <algorithm>   // 引入算法库（用于修改字符串）  
#include <windows.h>   // 引入Windows API以设置编码  

using namespace std;  



int main() {  
    

    // 定义一个字符串变量  
    string userInput;  

    // 提示用户输入字符串  
    cout << "请输入一个字符串：";  
    // 使用 getline 读取整行输入，包括空格  
    getline(cin, userInput);  

    // 显示输入的字符串  
    cout << "您输入的字符串是: " << userInput << endl;  

    // 获取字符串长度  
    cout << "字符串长度为: " << userInput.length() << endl;  

    // 查找特定字符在字符串中的位置  
    char ch;  
    cout << "请输入您想查找的字符: ";  
    cin >> ch;  
    size_t position = userInput.find(ch); // 使用 find 方法查找字符  
    if (position != string::npos) { // 如果找到了字符  
        cout << "字符 '" << ch << "' 在位置 " << position << " 找到。" << endl;  
    } else {  
        cout << "字符 '" << ch << "' 未找到。" << endl;  
    }  

    // 替换字符串中的字符  
    char oldChar, newChar;  
    cout << "请输入要替换的字符和新字符（用空格分开）: ";  
    cin >> oldChar >> newChar;  

    // 使用 range-based for 循环和替换字符  
    for (char &c : userInput) {  
        if (c == oldChar) {  
            c = newChar; // 替换字符  
        }  
    }  
    cout << "替换后的字符串: " << userInput << endl;  

    // 字符串连接  
    string additionalInput;  
    cout << "请输入要连接的另一个字符串: ";  
    cin.ignore(); // 清除输入缓冲区  
    getline(cin, additionalInput); // 再次读取整行输入  
    string combinedString = userInput + " " + additionalInput; // 连接字符串  
    cout << "连接后的字符串: " << combinedString << endl;  

    // 将字符串转换为大写（使用算法库中的 transform）  
    transform(combinedString.begin(), combinedString.end(), combinedString.begin(), ::toupper);  
    cout << "大写字符串: " << combinedString << endl;  

    return 0; // 程序成功结束  





}