#include <C:\Users\AvegA\Documents\ProgramProjects\ProjectsQt\3427Andrey\code_char.h>

	
	void putString(char*str)
	{
		char nL = 0;
		if (str != NULL)
		{
			while(1)
			{
				if(str[nL]=='\0')  break;
				else
				{
					putchar(str[nL]);
					nL++;
				}
			}
		}
		else 	putString("\nstring is NULL!!!!\n\0");
		return;
	}

	void putString_2(char*str)
	{
		if (str != NULL)	while(*str) putchar(*str++);
		else 	putString("\nstring is NULL!!!!\n\0");
		return;
	}

	char* getString(void)
	{
		char *NewString = NULL;
		NewString = (char*)malloc(sizeof(char));
		char strLen = 0;
		while(1)
		{
			NewString = (char*)realloc(NewString,strLen + 2);
			char c = getchar();			
			NewString[strLen] = c;
			NewString[strLen + 1] = '\0';
			if(c == '\n')
			{
				NewString[strLen] = '\0';
				return NewString; 
			}
			strLen++;
		}			
	}

	char strLenght(char* str)
	{
		char strLen = 0;
		while(1)			
		{
			if(str[strLen] == '\0') break;
			strLen++;
		}
		return strLen;
	}


	char* inverseString(char* str)
	{
		char* invStr = NULL;
		char strlen = strLenght(str);
		invStr = (char*)malloc(strlen*sizeof(char));
		strlen--;
		char i = 0;
		while(1)
		{
			if(strlen == -1) break;
			invStr[i] = str[strlen];
			i++;
			strlen--;
		}
		invStr[i] = '\0';
		return invStr;
	}


	int code_15(void)
	{
		char *s = "hello world!!!\0";
	
		putString_2(s);
		putString_2("\nThis is Sparta!!!!!!\0");
		
		char *s2 = NULL;
		
		putString_2(s2);
	
		char* ptrTest = getString();
		putString("\n");
		putString(ptrTest);
		putString("\n");
		putString_2(ptrTest);
		return 15;
	}


	int code_16(void)
	{
		putString("\nThis is Code 16 ! \0");
		
	
		char* ptrTest = getString();
		char* ptrTest2;
		putString("\n");
		putString(ptrTest);
		putString("\n");

		ptrTest2 = inverseString(ptrTest);
		putString(ptrTest2);
		putString("\n");
		return 16;

	}


	char * appendCharToString(char *str,char bukva)
	{
		if (str == NULL) 
		{
			str = (char*)malloc(sizeof(char));
			str[0] = '\0';	
		}
		
		char strLen = strLenght(str);
		str = (char*)realloc(str,strLen + 1);
		
		str[strLen] = bukva;
		str[strLen + 1] = '\0';
		
		return str;
	}


	int code_17(void)
	{
		char * strInput = NULL;
		char * strOutput = NULL;
			
		///1. input string from screeen
		///2. put str in to memory
		{
			strInput = getString();
			putString("\n------------>");
			
			char strLen = strLenght(strInput);
			char tuda = 0;
			char obratno = strLen-1;
			while(1)
			{
				if(tuda == strLen) break;
				if(tuda == -1) break;
				if(tuda == obratno) 
				{
					///putchar(strInput[tuda]);
					///putString("\n");
					strOutput = appendCharToString(strOutput,strInput[tuda]);
					break;
				}
				if(obratno - tuda == 1) 
				{
					///putchar(strInput[tuda]);
					///putchar(strInput[obratno]);
					strOutput = appendCharToString(strOutput,strInput[tuda]);
					strOutput = appendCharToString(strOutput,strInput[obratno]);
					///putString("\n");
					break;
				}
				///putchar(strInput[tuda]);
				///putchar(strInput[obratno]);

				strOutput = appendCharToString(strOutput,strInput[tuda]);
				strOutput = appendCharToString(strOutput,strInput[obratno]);
				tuda++;
				obratno--;
				///putString("\n");
			}
			
			putString(strInput);
			putString("\n");
			putString("Lenght of string is ");
			printCharDec(strLen);
			putString("\n");
			putString("New string is :");
			putString(strOutput);			
		}
		
		///3. form new string
		///4. new string to string		
		return 17;
	}


	void swap (char *x, char *y)
	{
		char temp;
		temp = *x; 
		*x = *y; 
		*y = temp; 
	}






	char * sortString(char *str)
	{
		char * sortingString = NULL;
		char pos = 0;
		while(1)
		{
			if (str[pos] == '\0')
			{
				sortingString = appendCharToString(sortingString,str[pos]);
				break;
			}
			sortingString = appendCharToString(sortingString,str[pos]);
			pos++;
		}
		char curent = 0;
		char next = curent + 1;
		char strlen = strLen(sortingString);
		while(1)
		{
			if (strlen == 0) break;
			if (sortingString[next] == '\0') 
			{
				curent = 0;
				next = curent + 1;
				strlen--;	
			}
			
			char bukva = sortingString[curent];
			char sled_bukva = sortingString[next];
			
			if(sled_bukva < bukva) 
			{
				swap(&bukva,&sled_bukva);
				sortingString[curent] = bukva;
				sortingString[next]  = sled_bukva;
			}			
			curent++;
			next = curent + 1;
	
		}	
		

		
		return sortingString;	
	}






	int code_18(void)
	{
		putString("========================================================\n");
		putString("\t \t \t SORT STRING\n");
		putString("========================================================\n");
		putString("\t Please write a string and then press Enter: \n \n \t ");
		
		
		char * string = NULL;
		string = getString();
		putString("\n\t This is Your String: \t \t");
		putString(string);
		
		putString("\n\n\t Do you realy want to sort your String? (Y/N) \t \t");
		
		while(1)
		{
			char c = getchar();
			if (c == 'Y' || c == 'y')
			{
				string = sortString(string);
				putString("\n\t This is Your Sorting String: \t \t");
				putString(string);
				
				putString("\n\n========================================================\n");
				putString("\t \t \t Thank you for \n \t \t using our program PROGRAMM!!!\n");
				putString("========================================================\n");
	
			}
			if (c == 'N' || c == 'n')
			{
				break;
			}
		}
		putString("\n========================================================\n");
		putString("\t \t \t END PROGRAMM\n");
		putString("========================================================\n");
		getchar();
		return 18;
	}








	int main(void)
	{
		return code_18();
		///return code_17();
		///return code_16();
		///return code_15();
		//return code_14();
		///return code_13();
		///return code_12();
		///return code_11();
		///return code_10();
		///return code_09();
		///return code_08();
		///return code_07();
		///return code_06();
		///return code_05();
		///return code_04();
		///return code_03();
		///return code_02();
		///return code_01();
     	///return code_00();		
	}























		
		

















