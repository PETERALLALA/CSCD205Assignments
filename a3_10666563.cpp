#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Please enter your mark"<<endl;
    cin>>mark;
    /*
     100-80=A , 79-75=B+, 74-70=B, 69-65=C+ ,64-60=C ,59-55=D+ ,54-50=D ,49-45=E, rest is F
    */
    if(mark<=100 && mark>=80)
        cout<<" You had an A";


    else if(mark<=79 && mark>=75)
        cout<<"You had a B+";


    else if(mark<=74 && mark>=70)
        cout<<"You had a B ";


    else if (mark<=69 && mark>=65)
        cout<<"You had a C+";


    else if(mark<=64 && mark>=60)
        cout<<"You had a C";


    else if(mark<=59 && mark>=55)
        cout<<"You had D+";


    else if(mark<=54 && mark>=50)
            cout<<"You had a D";


    else if(mark<=49 && mark>=45)
            cout<<"You had an E";


    else
    cout<<"You had an F";

   return 0;
}

