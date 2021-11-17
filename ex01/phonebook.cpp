#include <iostream>
#include <sstream>

class PHONEBOOK {
	public:
		PHONEBOOK(std::string fname, std::string lname, std::string nickname, std::string darksecret, std::string phone){
			_Fname = fname;
			_Lname = lname;
			_Nickname = nickname;
			_Darksecret = darksecret;
			_Phone = phone;
		}
		std::string getFName(){
			return _Fname;
		}
		std::string getLName(){
			return _Lname;
		}
		std::string getNickname(){
			return _Nickname;
		}
		std::string getDarksecret(){
			return _Darksecret;
		}
		std::string getPhone(){
			return _Phone;
		}
		~PHONEBOOK(){}
		std::string toString(){
			std::stringstream s;
			s << "First Name: " << _Fname << std::endl;
			s << "last Name: " << _Lname << std::endl;
			s << "Nickname: " << _Nickname << std::endl;
			s << "Dark Secret: " << _Darksecret << std::endl;
			s << "Phone: " << _Phone << std::endl;
			return s.str();
		}

	private:
		std::string _Fname;
		std::string _Lname;
		std::string _Nickname;
		std::string _Darksecret;
		std::string	_Phone;
};

int main(){
	std::string command = " ";
	while (command != "EXIT")
	{
		std::cout << "Command: ";
		std::cin >> command;
		if (command == "EXIT")
			exit(0);
		if (command == "ADD"){}
		if (command == "SEARCH"){}
	}
	return 0;
}