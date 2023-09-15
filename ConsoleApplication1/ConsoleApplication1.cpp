#include <iostream>
using namespace std;


#include "BankAccount.h"


int main()
{
	BankAccount bank(1000, 1234);

	bank.addTransaction(100, 0, 123321);
	bank.addTransaction(200, 1, 54321);
	bank.addTransaction(300, 0, 78906);
	bank.addTransaction(400, 1, 59432);

	bank.displayTransactions();
}
