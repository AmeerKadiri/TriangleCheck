#include <iostream>


using namespace std;


int main()
{
	int way;
	cout << "Enter number of highway: ";
	cin >> way;
	if (way >= 1 && way <= 99)
	{
		if (way % 2 == 0) cout << "I-" << way << " is primary, going east/west." << endl;
		else cout << "I-" << way << " is primary, going north/south." << endl;
		return 0;
	}
	if ((way >= 100 && way <= 999))
	{
		cout << "I-" << way << " is auxiliary, serving I-" << way%100 << (((way%100)%2 == 0) ? " going east/west." : " going north/south.") << endl;
		return 0;
	}
	cout << "You enter wrong highway!" << endl;
	return 0;
}
