#include "BankAccount.h"


double BankAccount::Transaction::getSum()
{
	return sum;
}

int BankAccount::Transaction::getTransNum()
{
	return transNum;
}


void BankAccount::addTransaction(double sum, bool operation, int transNum)
{
	Transaction* trans = new Transaction(sum, operation, transNum);

	if (operation)
	{
		cout << "The transaction added complete successfully !\n\n";
		balance -= sum;
	}
	else {
		cout << "The transaction added complete successfully !\n\n";
		balance += sum;
	}
	transactions.push_back(trans);
}


void BankAccount::displayTransactions()
{
	cout << "Transactions:\n\n";
	for (int i = 0; i < transactions.size(); i++)
	{
		cout << "\t" << i + 1 << " Transaction: \n\t";
		cout << "Sum: " << transactions[i]->getSum();
		cout << "\n\tNumber: " << transactions[i]->getTransNum() << "\n\n";
	}
	cout << "\n\n\nBank balance: " << getBalance() << "\n\n\n\n";
}


int BankAccount::getBalance()
{
	return balance;
}