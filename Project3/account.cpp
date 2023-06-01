class Account
{
public:
	explicit Account(int money)
		:balance(money) {}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

	void increase5PercentInterest()
	{
		balance += (balance * 5 / 100);
	}

	void applyInterestForYears(int years)
	{
		for (int i = 0; i < years; i++)	applyInterest();
	}

	void applyInterest()
	{
		balance += (balance * interest / 100);
	}

	void setInterest(int rate)
	{
		interest = rate;
	}

private:
	int balance;
	int interest;
};