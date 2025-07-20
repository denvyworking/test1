#include <iostream>
#include <string>
class NewReatures{
private:
    std::string message;
public:
    NewReatures(std::string str){
        message = str;
    }
    
    void Print(){
        std::cout << this->message << std:: endl;
    }
};

int main(){
    std::cout << "Test repository in Git" << std::endl;
    std::cout << "I want working with git" << std::endl;
    std::cout << "У меня получилось закоммитить !!!" << std::endl;
    NewReatures s = NewReatures("help");
    s.Print();
    return 0;
}

