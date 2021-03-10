using namespace std;
#include <iostream>
#include <string>

class Bank_Account {
    private: 
        int savings;
        int checking;
        string accountName;
    
    public: 
        Bank_Account(int savingsIn, int checkingIn, string accountNameIn){
            savings = savingsIn;
            checking = checkingIn;
            accountName = accountNameIn;
        }

        Bank_Account(){};

        
    
};


int main(){
    Bank_Account one(1, 2, "First Account");
    Bank_Account two(1, 2, "Second Account");
    Bank_Account three(0, 0, "Third Account");

    

}