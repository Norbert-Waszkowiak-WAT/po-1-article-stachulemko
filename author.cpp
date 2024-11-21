#include <iostream>
#include <string>
using namespace std;
class Author{
    private:
    string name;
    string surname;
    public:
    Author() {};
    Author(string name_,string surname_){
        name=name_;
        surname=surname_;
    }
    void print(){
        cout<<name;
        cout<<" ";
        cout<<surname << endl;
    }
    string toString(){
        return name+" "+surname;
    }
    string getName(){
        return name;
    }
    string getSurname(){
        return surname;
    }
};