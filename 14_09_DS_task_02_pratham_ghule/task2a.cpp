#include<iostream>
using namespace std;

struct Customer
{
    string name;
    int acc_no;
    int balance;
};

void print_details_balanceLess100(struct Customer cus[10],int n)
{
    cout << "\nCustomers details who has Balance less than 100 " << endl;
    for(int i=0;i<n;i++){
        if(cus[i].balance < 100){
            cout<<"\n\nName :"<<cus[i].name;
            cout<<"\nAccount no. :"<<cus[i].acc_no;
            cout<<"\nAccount Balance :"<<cus[i].balance;
        }
    }
}

void customers_list(struct Customer cus[10],int n)
{
    cout << "\nList of all customers " << endl;
    for(int i=0;i<n;i++){
        cout<<"\n\nName :"<<cus[i].name;
        cout<<"\nAccount no. :"<<cus[i].acc_no;
        cout<<"\nAccount Balance :"<<cus[i].balance;
    }
}

int search_account(struct Customer cus[10],int n,int account_no)
{
    int i;
    for (i = 0; i < n; i++) {
        if (cus[i].acc_no == account_no)
            return i;
    }
    return  - 1;
}
void withdraw_money(struct Customer cus[10],int n,int amount,int account_no)
{
    int index=search_account(cus,n,account_no);
    if(index==-1){
        cout<<"\nNo account found";
        return;
    }

    if(cus[index].balance>=amount){
        cus[index].balance-=amount;
        cout<<"\nAmount Withdrawed Done Successfully";
        return;
    }

    cout<<"\nAccount does'nt have sufficient money";
}

void deposit_money(struct Customer cus[10],int n,int amount,int account_no)
{
    int index=search_account(cus,n,account_no);
    if(index==-1){
        cout<<"\nNo account found";
        return;
    }


    cus[index].balance+=amount;
    cout<<"\nAmount Withdrawed Done Successfully";

}

int main()
{
    struct Customer cus[10]={
        {"pratham",1,100},
        {"yash",2,99},
        {"Ram",3,80},
        {"omkar",4,103},
        {"kartik",5,2000},
        {"shyam",6,320},
        {"prem",7,56},
    };

    int n=7;
    int choice,c,accNo,amt,in;

    do{
        cout<<"\t\t*******************MENU*****************\n\n";       //Menu of bank
        cout<<"\t\t|\t1)CUSTOMERS WITH BALANCE \t|\n";
        cout<<"\t\t|\t  LESS THAN 100\t\t\t|\n";
        cout<<"\t\t|\t2)LIST OF CUSTOMERS\t\t|\n";
        cout<<"\t\t|\t3)WITHDRAW AMOUNT\t\t|\n";
        cout<<"\t\t|\t4)DEPOSIT AMOUNT\t\t|\n";
        cout<<"\t\t|\t5)SEARCH CUSTOMER\t\t|\n\n";


        cout<<"\t\t****************************************\n";
        cout<<"\n\tPress required KEY to perform a operation\n\t";   // Asking for choice from user to do certain operations
        cin>>choice;

        switch(choice)
        {
            case 1:
                print_details_balanceLess100(cus,n);
                break;

            case 2:
                customers_list(cus,n);
                break;

            case 3:
                cout << "\nEnter the Account number ";
                cin >> accNo;
                cout << "\nEnter the amount you want to Withdraw ";
                cin >> amt;
                withdraw_money(cus,n,amt,accNo);
                break;

            case 4:
                cout << "\nEnter the Account number ";
                cin >> accNo;
                cout << "\nEnter the amount you want to Deposit ";
                cin >> amt;
                deposit_money(cus,n,amt,accNo);
                break;

            case 5:
                cout << "\nEnter the Account number ";
                cin >> accNo;
                int in=search_account(cus,n,accNo);
                if(in==-1){
                    cout<<"\nNo account found";
                }
                else{
                    cout<<"\n\nName :"<<cus[in].name;
                    cout<<"\nAccount no. :"<<cus[in].acc_no;
                    cout<<"\nAccount Balance :"<<cus[in].balance;
                }
                break;

            //default:
                //cout<<"\n\tPlease enter correct option";

        }

        cout<<"\n\tPress 1 to continue and 0 to exit.........  :";        //Press 0 to exit the loop
        cin>>c;
        cout<<"\n";

    }while(c);
}
