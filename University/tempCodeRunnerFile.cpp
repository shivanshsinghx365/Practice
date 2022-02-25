
        cin>>acnum;
        cout<<"Enter account type : ";
        cin>>type;
        cout<<"Enter amount : ";
        cin>>amount;
    }
    void add(){
        int x
        cout<<"How much money to deposit : ";
        cin>>x;
        amount+=x;
        cout<<"New amount = "<<amount<<endl;
    }
};
int main(){
    bank one;
    one.enter();
    one.add();