#pragma once


class UF
{
private:
	int *id;
	int *sz;
	int find(int);

public:
	UF(int);
	int find(int, int);
	void unite(int, int);
};


/*const int N = 5;
int p, q;
UF info(N);

while (cin >> p >> q)
{
	if (!info.find(p, q))
	{
		info.unite(p, q);
		cout << " " << p << " " << q << endl;
	}
}*/