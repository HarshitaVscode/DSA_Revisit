// Given an array of marks of students, if te
// marks of any student is less then 35 print its roll
// number.[roll no. here refers to the index of the array.]

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    int marks[n] ;
    cout<<"Enter the marks : ";
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    for(int i=0 ; i<n; i++){
        if(marks[i]<35){
            cout<<i<<endl;
        }
    }
}
