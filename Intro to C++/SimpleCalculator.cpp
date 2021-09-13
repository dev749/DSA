#include <iostream>
using namespace std;
int main(){
    cout<<"List of operations : \n"<<" 1 : add \n"<<" 2: sub \n"<<" 3: mul \n"<<" 4 :div \n"<<endl;
    int a;
    cout<<"Choose one: "<<endl;
    cin>>a;
    cout<<"Enter 2 nos : ";
    int b,c;
    cin>>b>>c;
    if (a == 1)
    {
        cout<<" Sum is : "<<b+c<<endl;
    }
    
}