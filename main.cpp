#include <iostream>

using namespace std;

int main()
{
    int b=0;
    int c=0;
    int t=0;
    int input;
    int amount=0, total=0;
    //menu
    while(true){
    cout << "Press 1 for Bike" << endl;
    cout << "Press 2 for Car" << endl;
    cout << "Press 3 for Truck" << endl;
    cout << "Press 4 for show Record" << endl;
    cout << "Press 5 for Del Record" << endl;
    cin>>input;
    if (input==1)
    {
      if(input<=50){


        amount = amount+20;
        total =total+1;
        b++;

    }
    else{
        cout<<"Full parking"<<endl;
    }}
    else if (input==2)
    {
        amount = amount+50;
        total =total+1;
        c++;
    }
  else if   (input==3)
    {
        amount = amount+100;
        total =total+1;
        t++;
    }
    else if (input==4)
    {
        cout<<"----------------------------------"<<endl;
        cout <<"Amount of all Vehicle "<<amount<<endl ;
        cout<<"Total Vehicle parked "<<total <<endl;
        cout<<"Total bike parked "<<b <<endl;
         cout<<"Total car parked "<<c <<endl;
          cout<<"Total truck parked "<<t <<endl;
        cout<<"----------------------------------"<<endl;
    }
    else if(input==5)
    {
        amount = 0;
        total =0;
        b=0;
        c=0;
        t=0;

    }
    else{
        cout<<"Invalid number"<<endl;
    }

}
}
