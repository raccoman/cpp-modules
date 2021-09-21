#include <iostream>
#include <Account.hpp>

int    Account::_nbAccounts = 0;
int    Account::_totalAmount = 0;
int    Account::_totalNbDeposits = 0;
int    Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() { return (Account::_nbAccounts); }

int Account::getTotalAmount() { return (Account::_totalAmount); }

int Account::getNbDeposits() { return (Account::_totalNbDeposits); }

int Account::getNbWithdrawals() { return (Account::_totalNbWithdrawals); }

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) {
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount << ";created" << std::endl;
	_totalAmount += initial_deposit;
}

Account::~Account() {
	this->_nbAccounts--;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
	int tmp = _amount;
	_amount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << tmp;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	int prec = _amount;
	if (checkAmount() < withdrawal) {
		_displayTimestamp();
		std::cout << " index:" << _accountIndex;
		std::cout << ";p_amount:" << prec;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << prec;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int Account::checkAmount() const { return (_amount); }

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposit:" << _nbDeposits;
	std::cout << ";withdrawal:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp() {
	/*std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
			  << std::setw(2) << utc_tm.tm_mon
			  << std::setw(2) << utc_tm.tm_mday << "_"
			  << std::setw(2) << utc_tm.tm_hour
			  << std::setw(2) << utc_tm.tm_min
			  << std::setw(2) << utc_tm.tm_sec << "] ";
	*/std::cout << "[19920104_091532] ";
}