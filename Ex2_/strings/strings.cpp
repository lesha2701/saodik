#include <iostream>
using namespace std;

void string_copy(char *d, char* s) {
	for (int i = 0; *d++ = *s++;);
}

int len(const char *s) {
	int l;
	for (int i = 0; s[i]; i++)
		l = i;
	return ++l;
}

int compare(const char* s, const char* t) {
	cout << s << endl;
	cout << t << endl;
	for ((*t == *s) && *s; t++, s++;) {
		return *s - *t;
	}
}

int main()
{
	char str[] = "hello!";
	cout << str << endl;
	cout << strlen(str) << ' ' << sizeof(str) << endl;
	char t[32];
	char l[32] = "saod";
	char* pl = l;
	char* pd = t;
	char* ps = str;
	string_copy(pd, ps);

	cout << len(ps) << endl;

	cout << compare(ps, pl) << endl;
}