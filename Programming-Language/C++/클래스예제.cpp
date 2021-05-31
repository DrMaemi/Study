#include <iostream>
#include <vector>
#include <string>
using namespace std;

class People {
private:
    string name;
    int age;
    string belong;
public:
    void set(int _age, string _name, string _belong);
    void show();
    People() {
        cout << "=== �⺻ ������ ȣ�� ===" << endl;
        age = 27;
        name = "�̻���";
        belong = "kakao";
    }
    People(int _age, string _name, string _belong) {
        cout << "=== ������ ȣ�� ===" << endl;
        age = _age;
        name = _name;
        belong = _belong;
    }
};

void People::set(int _age, string _name, string _belong) {
    age = _age;
    name = _name;
    belong = _belong;
}

void People::show() {
    cout << "����: " << age << endl;
    cout << "�̸�: " << name << endl;
    cout << "�Ҽ�: " << belong << endl;
}

vector<People> peoples;

int main(void) {
    // �⺻ ������ ���
    People* p = new People();
    //p[0].show();
    peoples.push_back(p[0]);
    for (int i=0; i<peoples.size(); i++) {
        peoples[i].show();  
    }
    return 0;
}