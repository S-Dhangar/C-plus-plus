#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec1;
    vector<int>::iterator it;
    int element;
    cout<<"enter the vector ";
    for(int i=0;i<5;i++){
        cin>>element;
        vec1.push_back(element);
    }
   
    it=vec1.begin();
    vec1.insert(it+3,2);
    vec1.insert(it+6,2);
    cout<<"vector is ";
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    return 0;
}