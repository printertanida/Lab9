#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    double loan,rate,amount,remain,prevBalance;
    int year = 1;
    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> amount;

    
    cout << setw(13) << left << "EndOfYear#"; 
    cout << setw(13) << left << "PrevBalance"; 
    cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    remain = loan;
    prevBalance = loan;
        while (remain > 0) {
        double interest = remain * (rate / 100);
        double total = remain + interest;
        double payment = (total <= amount) ? total : amount;
        remain = total - payment;
    cout << fixed << setprecision(2); 
    cout << setw(13) << left << year; 
    cout << setw(13) << left << prevBalance;
    cout << setw(13) << left << interest;
    cout << setw(13) << left << total;
    cout << setw(13) << left << payment;
    cout << setw(13) << left << remain;
    cout << "\n";	
        prevBalance = remain;
        year++;
    }

        
    return 0;
}