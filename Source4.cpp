#include <iostream>
#include <vector>
using namespace std;

void schimbare(vector<int>& vect)
{
int v = vect.size();
bool aranjat;

for (int i = 0; i < v - 1; i++)
{
	aranjat = false;
	for (int j = 0; j < v - i - 1; j++)
	{
		if (vect[j] > vect[j + 1])
		{
			swap(vect[j], vect[j + 1]);
			aranjat = true;
		}
	}
	if (!aranjat)
	{
		break;
	}
}
}

int main()
{
	int n, i;
	cout << "Introduceti numarul de elemente ale vectorului: ";
	cin >> n;

	vector<int> vect(n);
	cout << "Introduceti elementele vectorului: " <<endl;
	for (i = 0; i < n; i++)
	{
		cin >> vect[i];
	}

	schimbare(vect);
	cout << "Vectorul sortat: " <<endl;
	for (i = 0; i < n; i++)
	{
		cout << vect[i] << " ";
	}
	cout << endl;
	return 0;
}