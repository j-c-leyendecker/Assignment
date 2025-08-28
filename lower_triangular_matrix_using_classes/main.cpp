#include<iostream>
using namespace std;
class Lower_triangular{
private:
    int *arr;
    int n;
public:
    Lower_triangular(){
        arr=NULL;
        n=0;
    }
    Lower_triangular(int n){
        this->n=n;
        arr=new int [n*(n+1)/2];
    }
    void set();
    int get(int i,int j);
    void display();
    ~Lower_triangular(){
        delete []arr;
    }
};
int main(){
    
    Lower_triangular m(5);
    m.set();

    m.display();
    
    return 0;
}
void Lower_triangular::set(){
    int val;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cin>>val;
                arr[i*(i-1)/2+j-1]=val;
            }
        }
    }
}
int Lower_triangular::get(int i,int j){
    if(i>=j){
        return arr[i*(i-1)/2+j-1];
    }
    else{
        return 0;
    }
}
void Lower_triangular::display(){
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(i>=j){
                cout<<arr[i*(i-1)/2+j-1]<<"\t";
            }
            else{
                cout<<0<<"\t";
            }
        }
        cout<<endl;
    }
}

