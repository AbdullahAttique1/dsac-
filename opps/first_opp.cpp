#include <iostream>
#include <string>
using namespace std;
class Account{
    private:
      double balance;
  string password;
    public:
  string accountId;
  string userName;


};
class Teacher{
private:

double salary;
public:
string name;
int age;
string dept;
Teacher(string name, int age,string dept){
    this->name=name;
    this->age=age;
    this->dept=dept;
}
Teacher(Teacher &orgObj){
    this->name=orgObj.name;
    this->age=orgObj.age;
    this->dept=orgObj.dept;
}



void setSalaery(double s){
salary =s;
}
double getSalar(){
    return salary;
}

void getInfo(){
    cout<<name<<" " <<age<<" "<<dept;
}

};

class Student{
    public:
    string name;
    double* cgpapntr;

     Student(string name, double cgpa){
        this->name=name;
    cgpapntr=new double;
    *cgpapntr=cgpa;
    }
       Student(Student &obj){
        this->name=obj.name;
        cgpapntr=new double;
        *(cgpapntr)=*obj.cgpapntr;
    }
    void getStudentInfo(){
        cout<<"Name: "<<name <<" Cgpa: "<<*(cgpapntr);
    }
};

class Person{
    public:
string name;
int age;
Person(string name,int age){
    this->age=age;
    this->name=name;
}

Person(){
    
}

};

class StudentOfperson : public Person{
public :
int rolNo;

void getinfo(){
    cout<<"Name: " <<name<<endl;
    cout<<"Age: " <<age<<endl;
    cout<<"RolNumber: " <<rolNo<<endl;
}
};

int main() {
    // Teacher t1("Abdullah",21,"Computer Science");
    // Teacher t2(t1);
    // t2.getInfo();

    Student s1("Abdullah",21);
    Student s2(s1);
    s1.getStudentInfo();
    s2.name="Akah";
    *(s2.cgpapntr)=9.2;
    s1.getStudentInfo();


StudentOfperson a1;
a1.name="Abdullah";
a1.age=21;
a1.rolNo=25;
a1.getinfo();
   
            
    return 0;
}