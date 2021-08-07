#include"TranslationMachine.h"

int main()
{
				Translate M;
				int letter_pare;
				int translation_pare;
				string str1;
				string str2;
				while (cin >> letter_pare)
				{
								cin >> translation_pare;
								if (letter_pare == 0 && translation_pare == 0)
												return 0;
								M.buid(letter_pare);
								for (int i = 0; i < translation_pare; i++)
								{
												cin >> str1 >> str2;
												if (M.search(str1, str2))
																cout << "yes" << endl;
												else
																cout << "no" << endl;
								}
				}
}