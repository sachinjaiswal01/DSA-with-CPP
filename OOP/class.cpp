#include<iostream>
#include<vector>

using namespace std;

//Class
class Chai {

    public: //Access Modifier

        //Data memebrs (attr)
        string teaName;
        int servings;

        vector<string> ingredients; // List of ingredient for tea.

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
    //object (copy of original template)
    Chai chaiOne;
    chaiOne.teaName ="Lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients= { "Water," ,"Lemon,","Honey,","Tea,","Sugar"};

    chaiOne.displayChaiDetails(); 


    Chai chaiTwo;
    chaiTwo.teaName="Mashala tea";
    chaiTwo.servings =4;
    chaiTwo.ingredients = {"Water,","Ginger,", "Milk," ,"Tea," , "Mashala," };

    chaiTwo.displayChaiDetails(); // function calls.

    return 0;

}