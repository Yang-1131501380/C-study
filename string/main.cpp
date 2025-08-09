#include <iostream>  
#include <string>      // �����ַ�����  
#include <algorithm>   // �����㷨�⣨�����޸��ַ�����  
#include <windows.h>   // ����Windows API�����ñ���  

using namespace std;  



int main() {  
    

    // ����һ���ַ�������  
    string userInput;  

    // ��ʾ�û������ַ���  
    cout << "������һ���ַ�����";  
    // ʹ�� getline ��ȡ�������룬�����ո�  
    getline(cin, userInput);  

    // ��ʾ������ַ���  
    cout << "��������ַ�����: " << userInput << endl;  

    // ��ȡ�ַ�������  
    cout << "�ַ�������Ϊ: " << userInput.length() << endl;  

    // �����ض��ַ����ַ����е�λ��  
    char ch;  
    cout << "������������ҵ��ַ�: ";  
    cin >> ch;  
    size_t position = userInput.find(ch); // ʹ�� find ���������ַ�  
    if (position != string::npos) { // ����ҵ����ַ�  
        cout << "�ַ� '" << ch << "' ��λ�� " << position << " �ҵ���" << endl;  
    } else {  
        cout << "�ַ� '" << ch << "' δ�ҵ���" << endl;  
    }  

    // �滻�ַ����е��ַ�  
    char oldChar, newChar;  
    cout << "������Ҫ�滻���ַ������ַ����ÿո�ֿ���: ";  
    cin >> oldChar >> newChar;  

    // ʹ�� range-based for ѭ�����滻�ַ�  
    for (char &c : userInput) {  
        if (c == oldChar) {  
            c = newChar; // �滻�ַ�  
        }  
    }  
    cout << "�滻����ַ���: " << userInput << endl;  

    // �ַ�������  
    string additionalInput;  
    cout << "������Ҫ���ӵ���һ���ַ���: ";  
    cin.ignore(); // ������뻺����  
    getline(cin, additionalInput); // �ٴζ�ȡ��������  
    string combinedString = userInput + " " + additionalInput; // �����ַ���  
    cout << "���Ӻ���ַ���: " << combinedString << endl;  

    // ���ַ���ת��Ϊ��д��ʹ���㷨���е� transform��  
    transform(combinedString.begin(), combinedString.end(), combinedString.begin(), ::toupper);  
    cout << "��д�ַ���: " << combinedString << endl;  

    return 0; // ����ɹ�����  





}