//Authors: Madi Phillips, Motlaq Alnassafi, Sohail Alsamahi, Eisa Alkaabi 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector <string> list; 
  int numItems = 0;
  string Item;
  char input;
  
do{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item"; 
  cout<<"\n (S)how grocery list";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/S/Q): ";
  cin>>input ;

    if (input == 'a' || input == 'A'){
         
        cout << "What is the name of the item?" << endl;
        cin >> Item; 
        list.push_back(Item);
       
        numItems++;

                  
    }  
        else if(input == 's' || input == 'S') {
            for (int a = 0; a < numItems; a++) {
            cout << list[a] <<endl;
            }

        }
      
        

}

while (input != 'q' && input != 'Q' );


return 0;
}
