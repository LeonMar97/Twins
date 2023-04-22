#include <iostream>
#include <cstdlib>
#include <vector>
#include<string>
#include<valarray>
using namespace std;
string numOfTwins(string num){
int counter=0;
int n=stoi(num);
while(n){
    if(!(n%16 ^6))
    counter++;
    n=n>>1;
}

return counter?to_string(counter):"NULL";
}
vector<int> bin(int num){
    vector <int> binNum;
    int r;
    while(num){
        binNum.insert(binNum.begin(), num%2);
        num = num/2;
    }
    if (binNum.size()<32){
        binNum.insert(binNum.begin(),0);
    }
    return binNum;
}
int main(){
    string x="57068748";
    //cin>>x;
    auto v =bin(stoi(x));
    valarray<int>twins={0,1,1,0};
    unsigned int counter=0; 
    // vector<int>twins={0,1,1,0};
    for(int i=0;i<v.size()-3;i++){
        // vector<int> cur(v.begin()+i,v.begin()+4+i);
        std::valarray<int> cur(v.data()+i, 4);
        
        if((cur^twins).sum()==0){
            counter+=1;
        }
        
    }
    if(counter)
        cout<<counter;
    else
        cout<<"NULL";
    cout<<endl<<"second_version"<<endl;
    cout<<numOfTwins(x);

}

