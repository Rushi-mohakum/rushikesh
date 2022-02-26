#include<iostream>
using namespace std;
int main()
{
    int i;
    float mark, sum=0, avg;
    cout<<"Enter Marks obtained in 1 Subjects: ";
    for(i=0; i<1; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/1;
    cout<<"\nGrade = ";
    if(avg>=85 && avg<=100)
        cout<<"A";
    else if(avg>=70 && avg<84)
        cout<<"B";
    else if(avg>=55 && avg<69)
        cout<<"C";
    else if(avg>=40 && avg<54)
        cout<<"D";
    else if(avg<40)
        cout<<"f";
    else
    cout<<"Invalid!";
    cout<<endl;
    return 0;
}