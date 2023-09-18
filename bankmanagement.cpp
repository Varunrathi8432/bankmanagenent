#include<iostream>
using namespace std;
class bank
{
    string name,add;
    char y;
    int balance;
    public:
        void open_account();
        void deposite_money();
        void withdraw_money();
        void display_account();
};
void bank::open_account(){
    cout<<"1) Open account "<<endl;
    cout<<"Enter your full name : ";
    cin>>name;
    cout<<"Enter your address : ";
    cin>>add;
    cout<<"What type of account you want to open saving(s) or current(c) : ";
    cin>>y;
    // if(y=='s'||y=='S'||y=='c'||y=='C'){
    // while(y!='s'||y!='S'||y!='c'||y!='C'){
    //     cout<<"Enter (s) for saving and (c) for current account : ";
    //     cin>>y;
    //     if(y=='s'||y=='S'||y=='c'||y=='C')
    //         break;
    // }}
    cout<<"Enter amount for deposite : ";
    cin>>balance;
    cout<<"your account is created "<<endl;
}
void bank::deposite_money(){
    cout<<"2) Deposite money "<<endl;
    int a;
    cout<<"Enter how much amount you deposite : ";
    cin>>a;
    balance+=a;
    cout<<"Total amount you deposite : "<<balance;
}
void bank :: display_account(){
    cout<<"4) Display account "<<endl;
    cout<<"Your full name : "<<name<<endl;
    cout<<"Your address : "<<add<<endl;
    cout<<"Type of account you open : "<<y<<endl;
    cout<<"Amount you deposite : "<<balance<<endl;
}
void bank :: withdraw_money(){
    cout<<"3) withdraw money : "<<endl;
    float amount;
    cout<<"Enter amount to withdraw : ";
    cin>>amount;
    if(amount<=balance)
        balance-=amount;
    else
        cout<<"Insuffcient balance"<<endl;
    cout<<"Now total amount is left : "<<balance<<endl;
}

int main(){
    int ch;
    char x;
    bank obj;
    do{
        cout<<"1) Open account "<<endl;
        cout<<"2) Deposite money "<<endl;
        cout<<"3) withdraw money "<<endl;
        cout<<"4) Display account "<<endl;
        cout<<"5) Exit "<<endl;
        cout<<"Select the option from above : ";
        cin>>ch;
        switch(ch){
            case 1: obj.open_account();
                    break;
            case 2: obj.deposite_money();
                    break;
            case 3: obj.withdraw_money();
                    break;
            case 4: obj.display_account();
                    break;
            case 5: exit(1);
            default:cout<<"This is not exist try again "<<endl;
        }
        cout<<"\n Do you want to select next option then press : y/n"<<endl;
        cin>>x;
        if(x=='n'||x=='N')
            exit(0);
    }while(x=='y'||x=='Y');

    return 0;
}
