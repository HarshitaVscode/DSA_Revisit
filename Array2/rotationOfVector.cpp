#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i, int j, vector<int>&v){
    while(i<=j){
        // int temp = v[i];
        // v[i]= v[j];
        // v[j] = temp;
        swap(v[i], v[j]);
        i++;
        j--;
    }
}

void display(vector<int>v){
    for(int i=0; i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int>v;
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the values : ";
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    display(v);

    int k;
    cout<<"Enter the number by which you want to rotate the vector : ";
    cin>>k;

    if(k>n) k%=n;

    reversePart(0, n-k-1, v);
    reversePart(n-k, n-1, v);
    reversePart(0, n-1, v);
    display(v);
}