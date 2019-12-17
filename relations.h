#include<iostream>


using namespace std;

class op{
public:
    int x,y;
bool checkP(int setA[],int set_num,int r_num){
bool result;
        for(int i=0;i<r_num;i++)
            for(int j=0;j<set_num;j++)
              if(x==setA[j]){result=1;break;}
              else result=0;
        for(int i=0;i<r_num;i++)
            for(int j=0;j<set_num;j++)
              if(y==setA[j]){result=1;break;}
              else result=0;
return result;
}

};

class relation  {
op *r;
int r_num;

public:
    void enter_r(int setA[],int set_num){
        cout<<"how many element in your relation : ";
        cin>>r_num;
        r=new op[r_num];
        system("CLS");
    cout<<" :-: Warning :-: \n<<Do NOT enter an element that \nit's x and y does not belong to\nthe SET you entered before\nalso, the repeat is not allowed >>\n";
    cout<<"\nEnter the relation : (x,y)\n>_ ";
        for(int i=0;i<r_num;i++)
            cin>>r[i].x>>r[i].y;
             checkR(setA,set_num);
            }

    void getR(){
    cout<<"R={ ";
    for(int i=0;i<r_num;i++)
    cout<<"("<<r[i].x<<','<<r[i].y<<") ";
    cout<<"} ";
    }

    void checkR(int setA[],int set_num){
        bool result;
        for(int i=0;i<r_num;i++)
            if(r[i].checkP(setA,set_num,r_num))result =1;
        else result =0;
        if(result==0){cout<<"Wrong entry ! \n";
        cout<<"Enter the elements again !!\n";
        system("pause");
        enter_r(setA,set_num);
        }
    }

    bool isReflexive(int setA[],int set_num){
        bool flag=0;
        for(int i=0;i<set_num;i++){
        for(int j=0;j<r_num;j++)
        if(r[j].x==setA[i]&&r[j].y==setA[i]){flag =1;break;}
        else flag=0;
        if(flag==0){cout<<"The Relation ";getR();
                cout<<" is Not Reflexive ."<<endl;return 0;break;}
        }
        if(flag){cout<<"The Relation ";getR();cout<<" is Reflexive ."<<endl;return 1;}

    }

    bool isSymmetric(){
    bool flag=0;
    for(int i=0;i<r_num;i++){
        for(int j=0;j<r_num;j++){
            if(r[i].x==r[j].y&&r[i].y==r[j].x){flag=1;break;}
        else flag=0;}
     if(flag==0){cout<<"The Relation ";getR();cout<<" is Not Symmetric ."<<endl;return 0;break;}
    }
    if(flag){cout<<"The Relation ";getR();cout<<" is Symmetric ."<<endl;return 1;}

    }

    bool relatedcheck(int a,int b){
    bool flag;
    for(int i=0;i<r_num;i++){
        if(r[i].x==a&&r[i].y==b)
        {flag =1;break;}
        else flag=0;}
        if(flag)return 1;
        else return 0;

    }

    bool isTransitive(){
        bool flag ;
        for(int i=0;i<r_num;i++)
        {
            for(int j=0;j<r_num;j++)
                if(r[i].y==r[j].x)
                {
                    if(relatedcheck(r[i].x,r[j].y))
                        flag =1 ;
                    else if(relatedcheck(r[i].x,r[j].y)==0)
                    {flag =0;break;}
                }
                else flag=1;
            if(flag==0)break;
        }
        if(flag){cout<<"The Relation ";getR();cout<<" is Transitive ."<<endl;return 1;}
        else {cout<<"The Relation ";getR();cout<<" is Not Transitive ."<<endl;return 0;}

    }

    void isIrreflexive(int setA[],int set_num){
        bool flag;
        for(int i=0;i<set_num;i++){
            for(int j=0;j<r_num;j++){
                if(setA[i]==r[j].x&&setA[i]==r[j].y){flag=1;break;}
                else flag =0;}
                if(flag)break;
                }
                if(flag){cout<<"The Relation ";getR();cout<<" is Not Irreflexive ."<<endl;}
                else {cout<<"The Relation ";getR();cout<<" is Irreflexive ."<<endl;}
    }

    void isAsymmetric(){
        bool flag;
        for(int i=0;i<r_num;i++){
            for(int j=0;j<r_num;j++){
                if(r[i].x==r[j].y&&r[i].y==r[j].x){flag =1; break;}
                else flag=0;
            }
            if(flag)break;
        }
         if(flag){cout<<"The Relation ";getR();cout<<" is Not Asymmetric ."<<endl;}
                else {cout<<"The Relation ";getR();cout<<" is Asymmetric ."<<endl;}

    }

    bool isAnti_Symmetric(){
        bool flag ;
        for(int i=0;i<r_num;i++){
        if(r[i].x==r[i].y){flag=1;continue;}
        else{
            if(relatedcheck(r[i].x,r[i].y)){
                if(relatedcheck(r[i].y,r[i].x)){
                    if(r[i].x!=r[i].y){flag=0;break;}
                }else {flag=1;continue;}
            }else {flag=1;continue;}
        }
        }
        if(flag){cout<<"The Relation ";getR();cout<<" is Anti Symmetric ."<<endl;return 1;}
                else {cout<<"The Relation ";getR();cout<<" is Not Anti Symmetric ."<<endl;return 0;}
    }

    void isEquivalence_Relation(int setA[],int set_num){
    if(isReflexive(setA,set_num)&&isSymmetric()&&isTransitive()){cout<<"The Relation ";getR();cout<<" So, it's Equivalence Relation ."<<endl;}
    else {cout<<"The Relation ";getR();cout<<" So, it's Not Equivalence Relation ."<<endl;}
    }
    void isPartial_Order_Relation(int setA[],int set_num){
    if(isReflexive(setA,set_num)&&isTransitive()&&isAnti_Symmetric()){cout<<"The Relation ";getR();cout<<" So, it's Partial-Order Relation ."<<endl;}
    else {cout<<"The Relation ";getR();cout<<" So, it's Not Partial-Order Relation ."<<endl;}
    }

};
