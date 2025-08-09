#include <iostream>
#include <bitset>
#include <string>

// bitset��C++��׼���е�һ��ģ���࣬���ڴ���̶���С��λ����
// ���ṩ�˷����λ�����ӿڣ����ֶ�ʹ����������λ������ֱ��

int main() {
    // 1. ��ʼ��bitset�Ķ��ַ�ʽ
    // ��ʽ1: ����һ������8λ��bitset��Ĭ�ϳ�ʼ��Ϊ0
    std::bitset<8> bs1;
    
    // ��ʽ2: ��������ʼ��(ֻʹ�õ�Nλ��NΪbitset��С)
    std::bitset<8> bs2(42);  // 42�Ķ�������00101010
    
    // ��ʽ3: �ö������ַ�����ʼ��
    std::bitset<8> bs3(std::string("10101010"));
    
    // ��ʽ4: �ò����ַ�����ʼ������λ��3��ʼ������Ϊ4
    std::bitset<8> bs4(std::string("0011110011"), 3, 4);  // ȡ"1100"
    
    std::cout << "��ʼ��ʾ��:\n";
    std::cout << "bs1: " << bs1 << " (Ĭ�ϳ�ʼ��)\n";
    std::cout << "bs2: " << bs2 << " (��42��ʼ��)\n";
    std::cout << "bs3: " << bs3 << " (��\"10101010\"��ʼ��)\n";
    std::cout << "bs4: " << bs4 << " (���ַ������ֳ�ʼ��)\n\n";
    
    // 2. ���ʺ��޸�λ
    std::bitset<8> bs_access;
    
    // ����ָ��λ(1-based��������bitsetʹ��0-based)
    bs_access.set(0);       // ���õ�0λΪ1
    bs_access.set(2, 1);    // ���õ�2λΪ1
    bs_access.set(5);       // ���õ�5λΪ1
    
    // ���ָ��λ
    bs_access.reset(2);     // �����2λ(��Ϊ0)
    
    // ��תָ��λ
    bs_access.flip(5);      // ��ת��5λ
    
    // ����λ��ֵ
    bool bit0 = bs_access[0];  // ��0λ��ֵ
    bool bit1 = bs_access.test(1);  // ��1λ��ֵ(����ȫ�ķ�ʽ)
    
    std::cout << "λ����ʾ��:\n";
    std::cout << "bs_access: " << bs_access << "\n";
    std::cout << "��0λ��ֵ: " << std::boolalpha << bit0 << "\n";
    std::cout << "��1λ��ֵ: " << bit1 << "\n\n";
    
    // 3. λ����
    std::bitset<8> bs_and(std::string("10101010"));
    std::bitset<8> bs_or(std::string("11001100"));
    
    std::cout << "λ����ʾ��:\n";
    std::cout << "bs_and:   " << bs_and << "\n";
    std::cout << "bs_or:    " << bs_or << "\n";
    std::cout << "��(&):    " << (bs_and & bs_or) << "\n";  // ��λ��
    std::cout << "��(|):    " << (bs_and | bs_or) << "\n";  // ��λ��
    std::cout << "���(^):  " << (bs_and ^ bs_or) << "\n";  // ��λ���
    std::cout << "��(~):    " << ~bs_and << "\n";           // ��λ��
    std::cout << "����(<<): " << (bs_and << 2) << "\n";     // ����
    std::cout << "����(>>): " << (bs_and >> 2) << "\n\n";   // ����
    
    // 4. �������ò���
    std::bitset<8> bs_ops(std::string("10101010"));
    
    std::cout << "��������ʾ��:\n";
    std::cout << "ԭʼֵ: " << bs_ops << "\n";
    std::cout << "����λ��Ϊ1? " << bs_ops.all() << "\n";    // ����Ƿ�����λ��Ϊ1
    std::cout << "������һλΪ1? " << bs_ops.any() << "\n"; // ����Ƿ�������һλΪ1
    std::cout << "����λ��Ϊ0? " << bs_ops.none() << "\n";  // ����Ƿ�����λ��Ϊ0
    std::cout << "Ϊ1��λ����: " << bs_ops.count() << "\n"; // ����Ϊ1��λ����
    std::cout << "ת��Ϊunsigned long: " << bs_ops.to_ulong() << "\n"; // ת��Ϊ�޷��ų�����
    std::cout << "ת��Ϊ�ַ���: " << bs_ops.to_string() << "\n";       // ת��Ϊ�ַ���
    
    return 0;
}
