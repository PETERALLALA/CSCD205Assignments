#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n;
    bool condition=false;
cout<< "Please enter an integer"<<endl;
cin>> n;

for(int i=2;i<n; i++){
    if(n%i==0){
        condition= true;
        break;
    }
}
if (condition==false && n>1){

    cout<<"Number is prime "<<endl ;
}
else{
cout<<"Number is not prime    "<<endl;
}
cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
cin.get();

return 0;



}
