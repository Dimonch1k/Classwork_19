#pragma once
#include <iostream>
#include <vector>
using namespace std;


class BankAccount
{
private:
	int balance;
	int idNumber;
	

	class Transaction 
	{
	private:
		bool operation;
		double sum;
		int transNum;

	public:
		Transaction(double sum_, bool operation_, int transNum_) 
			: sum(sum_), operation(operation_), transNum(transNum_){}
			
		double getSum();
		int getTransNum();
	};
	
	vector<Transaction*> transactions;

public:
	BankAccount(int balance_, int idNumber_)
		: balance(balance_), idNumber(idNumber_){}

	void addTransaction(double sum, bool operation, int transNum);

	void displayTransactions();

	int getBalance();
};

