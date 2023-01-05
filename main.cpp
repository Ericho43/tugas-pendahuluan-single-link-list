
#include "hello.h"

int main(){
    cout<<"Test procedure Greeting"<<endl;
    string name = "Eicho Marozi";
    string id = "1301213366";
    greetings_1301213366(name,id);
    cout<<"please answer Question 1"<<endl<<endl;

    cout<<"Test procedure swap_1 and swap_2"<<endl;
    int a = 15, b =30, c = 75;
    swap_1_1301213366(a,b,c);
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    a = 15, b =30, c = 75;
    swap_2_1301213366(a,b,c);
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    cout<<"please answer Question 2"<<endl<<endl;

    cout<<"Test procedure confused"<<endl;
    confused_1301213366();
    cout<<"please answer Question 3"<<endl<<endl;

    cout<<"Test procedure confused"<<endl;
    remove_inside_1301213366(5);
    cout<<"please answer Question 4"<<endl<<endl;

    cout<<"Test procedure indexing"<<endl;
    cout<<"example 1 : "<<indexing_1301213366(70,75,60)<<endl;
    cout<<"example 2 : "<<indexing_1301213366(45,70,50)<<endl;
    cout<<"example 3 : "<<indexing_1301213366(75,80,82)<<endl;
    cout<<"please answer Question 5"<<endl<<endl;

    return 0;
}
