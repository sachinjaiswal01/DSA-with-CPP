#include<iostream>
using namespace std;

//Creating class.
class Hello{

    private:
    int health =20;

    public:
    int getHealth(){  ///to access the private data member
        return health;
    }

    Hello (){
        cout<<"constructore called "<<endl;
    }
     
    //Parametrised constructore.
    Hello (int health){
        this-> health = health;
    }
    void setHealth(char ch){
        health =ch;
    }
};

int main(){

    // //Creating insatnce of class (object).
    // Hello sachin;  //statically
    // Hello *b = new Hello;  //dynamically 

    // Hello *h = new Hello;
    

    // // cout<<"Sachin health is"<<sachin.health<<endl;
    // cout<<"Sachin health is "<<sachin.getHealth()<<endl;
    // sachin.setHealth(70);
    // cout<<"Sachin health is "<<sachin.getHealth()<<endl;

    cout<<"hi"<<endl;
    Hello ramesh;
    cout<<endl;
    cout<<"hello"<<endl;


}