#include"TranslationMachine.h"


void Translate::buid(int num)
{
				char from;
				char to;
				for (from='a',to = 'a';from<='z', to <= 'z';from++, to++)
				{
								dict[from][to] = true;
				}
				for (int i = 0; i < num; i++)
				{
								char from;
								char to;
								cin >> from >> to;
								dict[from][to] = true;
				}
				for (char c = 'a'; c <= 'z'; c++)
				{
								for (char from = 'a'; from <= 'z'; from++)
								{
												if (dict[from][c]&&from!=c)
												{
																for (char to = 'a'; to <= 'z'; to++)
																{
																				dict[from][to] = dict[from][to] || dict[c][to];
																}
												}
								}
				}
}

bool Translate::search(char from, char to)
{
				if (dict[from][to])
								return 1;
				return 0;
}
bool Translate::search(const string& str1,const string& str2)
{
				if (str1.length() != str2.length())
								return 0;
				if (str1 == str2)
								return 1;
				for (int i = 0; i < str1.length(); i++)
								if (search(str1[i],str2[i]) == 0)
												return 0;
				return 1;
}