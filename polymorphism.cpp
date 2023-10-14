//polymorphism
#include <iostream>
using namespace std;
class people{
    public:
    int height;
    int mistakes;
    string colour;

    public:
    //function overloading
    void count(){
        cout<< "mistakes " <<mistakes <<endl;
    }
    void count(int h){
        height = h;
        cout<<" height"<<height <<endl;
    }
};   

class pain{
    public:
    int a;

    public:

    // OPERATOR OVERLOADING
    void operator +(pain &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<" output is "<< value2-value1 <<endl;
        cout<<endl;
    }
};

int main(){
   people wrong;
   wrong.count();

   pain p1,p2;
   p1.a = 10;
   p2.a = 12;
   p1 + p2;
   return 0;
}
