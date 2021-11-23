#include<iostream>
#include<set>
using namespace std;

class A{
public:
    int x;
    A(int x=0):x{x} {cout<<"Constructor"<<endl;}
    A(const A& rhs){x=rhs.x ; cout<<"Copy"<<endl;}
};

bool operator< (const A& lhs,const A& rhs) { return lhs.x<rhs.x ;}

int main(){
    set<A> S;
    A a(10);
    S.insert(a);
    //S.emplace(10);
    for(auto & elm : S){
        cout<< elm.x<<endl;
    }
}