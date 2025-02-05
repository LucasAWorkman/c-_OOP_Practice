

#include <iostream>

class Student {
  private:
   std::string name;

  public:

   Student(){
     name = "Lucas";
   }
   Student(std::string tName){
      name = tName;
    }

   void setName(std::string tName){
      name = tName;
   }
   std::string getName(){
      return name;
   }
};

int main(){
  Student s1;
  std::cout << s1.getName() << std::endl;
  s1.setName("Kayden Jefferson");
  std::cout << "Name" << s1.getName() << std::endl;
  Student s2;
  std::cout << s2.getName() << std::endl;
}
