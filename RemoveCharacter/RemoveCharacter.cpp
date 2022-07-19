#include <iostream>
using namespace std;
int main()
{
	char s[] = "Ha,Ha,Ha this letter H must disappear";
	char* p = new char[1000];
	*p = NULL;
	char c = 'H'; //the character to be removed
	int i, j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != c)
		{
			p[j] = s[i];
			*(s + j) = *(p + j);
			j++;
		}
	}
	s[j] = NULL;
	delete[] p;
	cout << s;
	return 0;
}