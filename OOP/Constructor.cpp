#include<iostream>
#include<vector>

using namespace std;

class Chai {
     public: //Access Modifier

        //Data memebrs (attr)
        string teaName;
        int servings;

        vector<string> ingredients; // List of ingredient for tea.

        // Default Constructor
        Chai(){
            teaName = "Unknown Tea";
            servings = 1;
            ingredients = {"Water," ,"Tea"};
            cout<<"Constructor called!"<<endl;
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
    Chai defaultChai; // Default constructor invoked when we create object.

    defaultChai.displayChaiDetails();
}