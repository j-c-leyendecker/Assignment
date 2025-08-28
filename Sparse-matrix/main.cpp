#include<iostream>
using namespace std;
struct ele{
    int i;
    int j;
    int x;
};
struct sparce{
    int m;
    int n;
    int num;
    struct ele *e;
};
void  create(struct sparce *s);
void display(struct sparce s);
struct sparce *add(struct sparce *s1,struct sparce *s2);
int main(){
    struct sparce s1;
    struct sparce s2;
    struct sparce *sum;
    create(&s1);
    display(s1);
    create(&s2);
    display(s2);
    sum=add(&s1,&s2);
    display(*sum);
    
    return 0;
}
void  create(struct sparce *s){
    cout<<"Enter Dimentions: "<<endl;
    cin>>s->m;
    cin>>s->n;
    cout<<"Enter Number of Non-Zero Elements: "<<endl;
    cin>>s->num;
    s->e=new ele[s->num];
    for(int i=0;i<s->num;i++){
        cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
        
    }
}
void display(struct sparce s){
    int k=0;
    for(int i=0;i<s.m;i++){
        for(int j=0;j<s.n;j++){
            if(i==s.e[k].i && j==s.e[k].j){
                cout<<s.e[k].x<<"\t";
                k++;
            }
            else{
                cout<<0<<"\t";
            }
        
        }
        cout<<endl;
    }
    cout<<"================================================="<<endl;
}
struct sparce *add(struct sparce *s1,struct sparce *s2){
    struct sparce *sum;
    int i=0;
    int j=0;
    int k=0;
    sum = new struct sparce[sizeof(struct sparce)];
    sum->e=new struct ele[(s1->num+s2->num)*sizeof(struct ele)];
    while(i<s1->num && j<s2->num){
        if(s1->e[i].i<s2->e[j].j){
            sum->e[k]=s1->e[i];
            k++;
            i++;
        }
        else if(s1->e[i].i>s2->e[j].j){
            sum->e[k]=s2->e[j];
            k++;
            j++;
        }
        else{
            if(s1->e[i].j<s2->e[j].j){
                sum->e[k]=s1->e[i];
                k++;
                i++;
            }
            else if(s1->e[i].j>s2->e[j].j){
                sum->e[k]=s2->e[j];
                k++;
                j++;
            }
            else{
                sum->e[k] = s1->e[i];
                sum->e[k].x = s1->e[i].x+s2->e[j].x;
                k++;
                i++;
                j++;
            }
        }
        for(;i<s1->num;i++)sum->e[k++]=s1->e[i];
        for(;j<s2->num;j++)sum->e[k++]=s2->e[j];
        sum->m=s1->m;
        sum->n=s1->n;
        sum->num=k;
            
            }
    return sum;
}
