#include <iostream>;
using namespace std;

class Pets 
{
protected:
	string name;
	string character;
	string sound ,type;
public: 
	Pets() = default;
	void Info(const string n, const string c, const string t)
	{
		name = n;
		character = c;
		type = t;
	}
	
	virtual void Show() const {
		cout << "Error - ---------------------" << endl;
	}
	void Sound()   {
		cout << "Enter the sound of your pet () > " << endl;
		cin >> sound;

	}
	void Type() const {
		cout << "| Your type - " << type << endl;
	}
	
};

class Dog : public Pets {
public:
	void Show() const {
		cout << " @ Dog -> " << endl;
		cout << "*  Name - " << name << endl
			<< "* Character - " << character << endl;
	}
};

class Cat : public Pets {
public:
	void Show() const {
		cout << " @ CAt -> " << endl;
		cout << "*  Name - " << name << endl
			<< "* Character - " << character << endl;
	}
};

class Parrot : public Pets {
public:
	void Show() const {
		cout << " @ Parrot -> " << endl;
		cout << "*  Name - " << name << endl
			<< "* Character - " << character << endl;
	}
};

class Hamster : public Pets {
public:
	void Show() const {
		cout << " @ Hamster -> " << endl;
		cout << "*  Name - " << name << endl
			<< "* Character - " << character << endl;
	}
};




int main()
{
	Dog dog;
	Cat cat;
	Parrot parrot;
	Hamster hamster;

	Pets* ptr = nullptr;
	int choice;
	cout << "1 - Dog\n2 - Cat\n3 - PArrot\n4 - Hamster\n-->";
	cin >> choice;
	switch (choice)
	{
	case 1:
		ptr = new Dog();
		break;
	case 2:
		ptr = new Cat();
		break;
	case 3:
		ptr = new Parrot();
		break;
	case 4:
		ptr = new Hamster();
		break;
	default:
		cout << "Error" << endl;
		break;
	}
	
	ptr->Info("Nic", "Cool", "Home");
	ptr->Show();
	ptr->Sound();
	ptr->Type();
	delete ptr;



}

















