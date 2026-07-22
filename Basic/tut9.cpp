#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your AGE: "<<endl;
    cin>>age;
    /*if (age<18){
        cout<<"You are not eligible to vote."<<endl;
    }

    else if (age>18){
        cout<<"You are eligible to vote."<<endl;
    }
    else{
     cout<<"GHAR MEIN RAHO"<<endl;
    }*/
    







    //Switch case in C++

    switch(age)
    {
        case 18:
        cout<<"You are eligible to 19."<<endl;
        break;
    

        case 22:
        cout<<"You are eligible to 23."<<endl;
        break;
    
    
        default:
        cout<<"No special case."<<endl;
    }

    return 0;
}

