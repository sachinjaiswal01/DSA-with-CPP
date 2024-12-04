#include<iostream>
#include<vector>

using namespace std;

class Chai {
     public: //Access Modifier

        //Data memebrs (attr)
        string teaName;
        int servings;

        vector<string> ingredients; // List of ingredient for tea.

        // parameterised Constructor
        Chai(string name,int serv,vector<string>ingr){
            teaName = name;
            servings = serv;
            ingredients = ingr;
            cout<<"Parameter Constructor called!"<<endl;
        }

        //memebr functions

        void displayChaiDetails(){
            cout<<"Tea Name :" <<teaName<<endl;
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

    lemonChai.teaName= "modified lemon Chai";

    cout<<"Lemon Chai"<<endl;
    lemonChai.displayChaiDetails();
    cout<<"Copied chai"<<endl;
    copiedChai.displayChaiDetails();



}