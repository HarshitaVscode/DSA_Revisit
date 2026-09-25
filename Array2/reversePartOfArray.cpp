#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0; i<=v.size()-1;i++){
        cout<<v[i];
    }
}
void reversePart(int i, int j, vector<int>& v){
    while (i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
    
}

int main(){
    vector<int>v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter the values : ";
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    display(v);
    cout<<endl;
    reversePart(0,3,v);
    display(v);
    
}