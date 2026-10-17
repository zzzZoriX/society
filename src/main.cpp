#include <iostream>
#include <string>
#include <string_view>

class Person {
    std::string name;
    int age;

public:
    Person(const std::string_view name, const int age)
    :   name(name)
    ,   age(age) {}

    void print() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    std::cout << "hello world" << std::endl;

    std::string name{"loh"};

    Person p{name, 20};
    p.print();

    return 0;
}