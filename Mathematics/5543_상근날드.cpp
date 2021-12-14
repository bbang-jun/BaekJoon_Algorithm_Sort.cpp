#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int burger[3] = { 0, }, drink[2] = { 0, };
	int burger_min, drink_min, sum = 0;

	for (int i = 0; i < 3; i++)
		cin >> burger[i];

	sort(burger, burger + 3);

	burger_min = burger[0];

	for (int j = 0; j < 2; j++)
		cin >> drink[j];

	sort(drink, drink + 2);

	drink_min = drink[0];

	sum = burger_min + drink_min - 50;

	cout << sum << endl;

	return 0;
}