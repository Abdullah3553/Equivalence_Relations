#include "relations.h"


int main()
{
    int set_num=0;
    short int choose;
    char yn;
    cout << "==============Welcome==============\nHow many numbers in the set ? " << endl;
    cin>>set_num;
    int *setA=new int[set_num];
    cout<<"Enter the numbers of the set : "<<endl;
    for(int i=0;i<set_num;i++)
        cin>>setA[i];
    relation r1;
    r1.enter_r(setA,set_num);
    r1.getR();
    system("pause");
    system("CLS");
    while(true){//while loop start

    cout<<"Choose the operation you want to perform : "<<endl<<endl;
    cout<<"1)Reflexive   2)Symmetric  3)Transitive"<<endl<<endl;
    cout<<"4)Irreflexive 5)Asymmetric 6)Anti-Symmetric"<<endl<<endl;
    cout<<"7)Equivalence Relation     8)Partial-Order Relation"<<endl<<endl;
    cout<<"9)Show the Relation        10)Edit the relation"<<endl<<endl;
    cout<<"11)Show All Operations "<<endl<<endl;//properties
    cin>>choose;
    switch(choose){//switch starting
case 1 : //case 1 start
        r1.isReflexive(setA,set_num);
        break;

case 2://case 2 start
   r1.isSymmetric();
   break;

case 3://case 3 start
    r1.isTransitive();
    break;
case 4://case 4 start
    r1.isIrreflexive(setA,set_num);
    break;
case 5://case 5 start
    r1.isAsymmetric();
    break;

case 6://case 6 start
    r1.isAnti_Symmetric();
    break;

case 7://case 7 start
    r1.isEquivalence_Relation(setA,set_num);
      break;

case 8://case 8 start
    r1.isPartial_Order_Relation(setA,set_num);
    break;

case 9://case 9 start
    r1.getR();
    cout<<endl;
    break;

case 10://case 10 start
    r1.enter_r(setA,set_num);
    r1.getR();
    cout<<endl;
    break;
case 11://case 11 start
    system("CLS");
    r1.isReflexive(setA,set_num);
    r1.isSymmetric();
    r1.isTransitive();
    r1.isIrreflexive(setA,set_num);
    r1.isAsymmetric();
    r1.isAnti_Symmetric();
    r1.isEquivalence_Relation(setA,set_num);
    r1.isPartial_Order_Relation(setA,set_num);
    break;
default://default start
    cout<<"Wrong Entry try again ."<<endl;
    break;

    }//switch end
    cout<<"Do you want another operation ? (Y/N) >_ ";
        cin>>yn;
        if(yn=='N'||yn=='n')break;
        system("CLS");
    }//while loop end


return 0;}
