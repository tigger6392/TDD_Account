#include "pch.h"
#include "../Project3/account.cpp"

class AccountFixter: public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixter, CreateAccount) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixter, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixter, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}