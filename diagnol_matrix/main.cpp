#include<iostream>
using namespace std;
struct matrix{
    int arr[10];
    int n;
};
void set(struct matrix *m,int x,int y,int val);
int get(struct matrix *m,int x,int y);
void display(struct matrix *m);
int main(){
    struct matrix m;
    m.n=4;
    set(&m,1,1,2);
    set(&m,2,2,2);
    set(&m,3,3,2);
    set(&m,4,4,2);
    set(&m,5,5,2);
    cout<<get(&m,1,1)<<endl;
    cout<<get(&m,1,2)<<endl;
    display(&m);
    
    return 0;
}
void set(struct matrix *m,int x,int y,int val){
    if(x==y){
        m->arr[x-1]=val;
    }
}
int get(struct matrix *m,int x,int y){
    if(x==y){
        return m->arr[x-1];
    }
    else return 0;
    return 0;
}
void display(struct matrix *m){
    for(int i=0;i<m->n;i++){
        for(int j=0;j<m->n;j++){
            if(i==j){
                cout<<m->arr[i]<<"\t";
            }
            else{
                cout<<0<<"\t";
            }
        }
        cout<<endl;
    }
}
