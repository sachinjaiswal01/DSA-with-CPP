#include<iostream>
#include<vector>

using namespace std;

class Chai {
     public: //Access Modifier

        //Data memebrs (attr)
        string* teaName; // dynamically allocation of memory
        int servings;

        vector<string> ingredients; // List of ingredient for tea.

        // parameterised Constructor
        Chai(string name,int serv,vector<string>ingr){
            teaName =new string(name);  // new way because of dynamic allocation
            servings = serv;
            ingredients = ingr;
            cout<<"Parameter Constructor called! ---"<<endl;
        }

        //Copy constructor.
        Chai(Chai& other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients =other.ingredients;
            cout<<"Copy Constructor called! --- "<<endl;
        }
        //Destructor to free the memory.
        ~Chai(){
            delete teaName;
            cout<<"Destructor called! --"<<endl;
        }

        //memebr function.
        void displayChaiDetails(){
            cout<<"Tea Name :" <<*teaName<<endl;
            cout<<"Servings :" <<servings<<endl;
            cout<<"Ingredients: ";
            //Loop
            for(string ingridient : ingredients){
                cout<<ingridient<<" ";
            }
            cout<<endl;
        }
};


int main(){
    Chai lemonChai("Lemon tea",1,{"Water,","Tea,","Honey"}); // Default constructor invoked when we create object.
    lemonChai.displayChaiDetails();

    //Copy the object
    Chai copiedChai = lemonChai;
    copiedChai.displayChaiDetails();

    *lemonChai.teaName= "modified lemon Chai --";

    cout<<"Lemon Chai ---"<<endl;
    lemonChai.displayChaiDetails();
    cout<<"Copied chai ---"<<endl;
    copiedChai.displayChaiDetails();

    return 0;
}