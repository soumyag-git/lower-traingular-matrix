#include <iostream>
//row major approach

using namespace std;

class lowertaingular2{
    int *a;
    int n;
    public:
    lowertaingular2(int n){
        this->n=n;
        a= new int[n*(n+1)/2];
    }
    void set(int i,int j,int key);
    int get(int i,int j);
    void display();
    ~lowertaingular2();
};

void lowertaingular2::set(int i,int j,int key){
    if(i>=j){
        a[i*(i-1)/2+j-1]=key;
    }
}

int lowertaingular2::get(int i,int j){
    if(i>=j){
        return a[i*(i-1)/2+j-1];
    }
}

void lowertaingular2::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<a[i*(i-1)/2+j-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

}

lowertaingular2::~lowertaingular2(){
    delete []a;
}


int main(){
    lowertaingular2 a(5);
    int x;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>x;
            a.set(i,j,x);
        }
    }
    a.display();
}