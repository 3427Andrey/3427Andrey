#ifndef H_CODE_CHAR
#define H_CODE_CHAR	

#include <C:\Users\AvegA\Documents\ProgramProjects\ProjectsQt\3427Andrey\Lib_char.h>
	
	
	int code_00(void)	///32 str; 6 byte memory; 18 cycle  // 12 actual data
	{
		char symbol_1;
		symbol_1 = 65;
		putchar(symbol_1);
		
		char symbol_2;
		symbol_2 = 78;
		putchar(symbol_2);
		
		char symbol_3;
		symbol_3 = 68;
		putchar(symbol_3);
		
		char symbol_4;
		symbol_4 = 82;
		putchar(symbol_4);
		
		char symbol_5;
		symbol_5 = 89;
		putchar(symbol_5);
		
		char symbol_6;
		symbol_6 = 33;
		putchar(symbol_6);
	
		return 0;			
	}

	int code_01(void)	///18 str; 1 byte memory; 13 cycle	// 12 actual data
	{
		char c;
		c = 65;				
		putchar(c);

		c = 78;				//13		
		putchar(c);
		
		c = 68;				//3
		putchar(c);
		
		c = 82;				//17
		putchar(c);
		
		c = 89;				//24		
		putchar(c);
		
		c = 33;				//32
		putchar(c);
	
		return 1;			
	}

	int code_02(void)	///12 str; 1 byte memory; 17 cycle // 11 actual data
	{
		char c = 65;
		putchar(c);    
		c = c + 13;
		putchar(c);   
		c = c - 10;
		putchar(c);   
		c = c + 14;
		putchar(c);
		c = c + 7;
		putchar(c);
		c = c - 56;
		putchar(c);
		return 2;			
	}

	int code_03(void)	///7 str; 1 byte memory; 12 cycle	// 11 actual data
	{
		char c = 65;
		putchar(c);
		putchar(c+13);  //65+13		
		putchar(c+3);	//65+3	
		putchar(c+17);	//65+17	
		putchar(c+24);	//65+24	
		putchar(c-32);	//32
	
		return 3;			
	}
	
	int code_04(void)	///9 str; 1 byte memory; 14 cycle	// 10 actual data
	{
		char c = 65;
		putchar(c);		//65
		c = c + 13;
		putchar(c);  	//78	
		putchar(c-10);	//68	
		c = c + 4;
		putchar(c);		//82	
		putchar(c+7);	//89	
		putchar(c-49);	//33
	
		return 4;			
	}

	int code_05(void)
	{
		char byte;
		byte = 0;  ///1 byte = 8 bit
    	
    	int j = 0;
    	for(j =0;j<300;j++)
    	{
    		int i = 0;
			for(i = (8*sizeof(byte) - 1);i >= 0; i--)
			{
				if(i == 3) putchar(' ');
				printBit(byte,i);
			}
			putchar('\n');
			getchar();
			byte = byte + 1;	
    	}
		return 5;
	}

	int code_06(void)
	{
		char N = 0;
		while(1)
		{
			printCharDecSigned(N);
			putchar(' ');
			putchar('-');
			putchar('-');
			putchar('-');
			putchar(' ');
			printByte(N);			
			putchar(' ');
			putchar(' ');
			putchar(N);
			putchar(' ');
			putchar(' ');
			putchar(';');			
			N++;
			getchar();			
		}
		return 6;	
	}

	int code_07(void)
	{
		unsigned char N = 0;
		while(1)
		{
			printCharDecUnsigned(N);
			putchar(' ');
			putchar('-');
			putchar('-');
			putchar('-');
			putchar(' ');
			printByte(N);			
			putchar(' ');
			putchar(' ');
			putchar(N);
			putchar(' ');
			putchar(' ');
			putchar(';');			
			N++;
			getchar();			
		}
		return 6;	
	}

	int code_08(void)
	{
		while(1)
		{
			putchar('\n');
			putchar('\n');
			putchar('e');
			putchar('n');
			putchar('t');
			putchar('e');
			putchar('r');
			putchar(' ');
			putchar('n');
			putchar('u');
			putchar('m');
			putchar('b');
			putchar('e');
			putchar('r');
			putchar(' ');
			putchar('-');
			putchar('-');
			putchar('>');
			putchar(' ');
			char number = getCharDecFromDisplay();
			putchar('\n');
			putchar('a');
			putchar('n');
			putchar('s');
			putchar(' ');
			putchar('=');
			putchar(' ');		
			printCharDecSigned(number);
			putchar(' ');
			putchar(';');
			putchar('\n');
			putchar('\n');	
		}		
		return 8;
	}

	int code_09(void)
	{
		putchar('\n');
		putchar('\n');
		putchar('\t');putchar('\t');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');
		putchar('\n');
		putchar('\n');
		putchar('\t');
		putchar('\t');
		putchar('A');putchar('D');putchar('D');putchar('I');putchar('T');putchar('I');putchar('O');putchar('N');putchar(' ');
		putchar('T');putchar('W');putchar('O');putchar(' ');
		putchar('N');putchar('U');putchar('M');putchar('B');putchar('E');putchar('R');putchar('S');
		putchar('\n');
		putchar('\n');
		putchar('\t');putchar('\t');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');putchar('=');
		putchar('\n');
		while(1)
		{
			char number_1 = 0;
			char number_2 = 0;
			char answer = 0;
					
		
			number_1 =  getCharDecFromDisplay();
			number_2 =  getCharDecFromDisplay();
			answer = number_1 + number_2;

			printCharDecSigned(answer);
			
		}
		return 9;
	}

	int code_10(void)
	{
		while(1)
		{
			char number_1 = 0;
			char number_2 = 0;
			char number_3 = 0;
			char answer = 0;					
		
			number_1 =  getCharDecFromDisplay();
			number_2 =  getCharDecFromDisplay();
			number_3 =  getCharDecFromDisplay();
			
			answer = number_1 - number_2 - number_3;

			printCharDecSigned(answer);
			
		}
		return 10;
	}

	int code_11(void)
	{
		putchar('\n');
		putchar('\n');
		putchar('\t');
		putchar('\t');
		putchar('M');		putchar('e');		putchar('e');		putchar('t');		putchar(' ');		putchar('m');		putchar('y');		putchar(' ');		putchar('f');		putchar('a');		putchar('m');		putchar('i');		putchar('l');		putchar('y');		putchar('.');		putchar(' ');		putchar('T');		putchar('h');		putchar('e');		putchar('r');		putchar('e');		putchar(' ');		putchar('a');		putchar('r');		putchar('e');		putchar(' ');		putchar('f');		putchar('i');		putchar('v');		putchar('e');		putchar(' ');		putchar('o');		putchar('f');		putchar(' ');		putchar('u');		putchar('s');		putchar(' ');		putchar('-');
		putchar('\n');		putchar('\t');		putchar(' ');		putchar('m');		putchar('y');		putchar(' ');		putchar('p');		putchar('a');		putchar('r');		putchar('e');		putchar('n');		putchar('t');		putchar('s');		putchar(',');		putchar(' ');		putchar('m');		putchar('y');		putchar(' ');		putchar('e');		putchar('l');		putchar('d');		putchar('e');		putchar('r');		putchar(' ');		putchar('b');		putchar('r');		putchar('o');		putchar('t');		putchar('h');		putchar('e');		putchar('r');		putchar(',');		putchar(' ');		putchar('m');		putchar('y');		putchar(' ');		putchar('b');		putchar('a');		putchar('b');		putchar('y');		putchar(' ');		putchar('s');		putchar('i');		putchar('s');		putchar('t');		putchar('e');		putchar('r');		putchar(' ');		putchar('a');		putchar('n');		putchar('d');
		putchar('\n');
		putchar('\t');
		putchar(' ');
		putchar('m');
		putchar('e');
		putchar('.');
		putchar('\n');
		putchar('\t');
		
		return 11;
	}
	
	int code_12(void)
	{
		while(1)
		{
			char number_1 = 0;
			char number_2 = 0;
			char number_3 = 0;
			char answer = 0;					
		
			number_1 =  getCharDecFromDisplay();
			number_2 =  getCharDecFromDisplay();
			number_3 =  getCharDecFromDisplay();
			
			answer = number_1 * number_2 * number_3;

			printCharDecSigned(answer);
			
		}
		return 12;
	}

	int code_13(void)
	{
		///Variant 4
		{
			char *str = "\n\nqweyri\nuqweyro\n qwiue \nryqiuweyriqwuyroqiwe\n qwiueryq iuwyreoq \n			\n	\0";
			char pos = 0;
			while(1)
			{
				char symbol = str[pos];
				if (symbol == '\0') break;
				putchar(symbol);
				pos++;		
			}
		}
		///Variant 3
		{
			char str[1000] = "Ivan\n char pos = 0;\nwhile(1)\n{	char symbol = str[pos];				\0";
			char pos = 0;
			while(1)
			{
				char symbol = str[pos];
				if (symbol == '\0') break;
				putchar(symbol);
				pos++;		
			}
		}
		////Variant 2
		{
			char str[10];
			str[0] = 'I';
			str[1] = 'v';
			str[2] = 'a';
			str[3] = 'n';
			str[4] = '\n';
			
			char pos = 0;
			while(1)
			{
				if (pos == 5) break;
				char symbol = str[pos];
				putchar(symbol);
				pos++;		
			}	
	
		}
		////Variant 1
		{
			char symbol_0 = 'I';
			char symbol_1 = 'v';
			char symbol_2 = 'a';
			char symbol_3 = 'n';
			char symbol_4 = '\n';
			
			putchar(symbol_0);
			putchar(symbol_1);
			putchar(symbol_2);
			putchar(symbol_3);
			putchar(symbol_4);			
	
		}
		return 13;
	}

	int code_14(void)
	{
		///Ex_05
		{
			char number = 0;
			while(number!=10)
			{
				
				putchar('\n');
				printString("\t --->");
				putchar('[');
				printCharDec(number);
				putchar(']');
				if(number%2==0) printString(" 	even ");
				else printString(" 	odd ");
				number++;
			}
			
		}
		return 14;
		
		
		
		///Ex_04
		{
			char *str_1 = "Hello World!!!\0";
			char len_of_string = char_strLen(str_1);
			while(len_of_string + 1)
			{
				putchar(str_1[len_of_string]);
				len_of_string--;
			}
		}		
		///Ex_03
		{
			char *str_1 = "qwe\0";
			char len_of_string = char_strLen(str_1);
			printCharDec(len_of_string);
		}
		///Ex_02
		{
			char *str = "- - > This is spartaaaaaa \n\0";
			char i = 0;
			while(1)
			{
				if(str[i] == '\0') break;
				if(str[i] != ' ')  putchar(str[i]);
				i = i+1;
			}
		}
		///Ex_01
		{
			char *str = "--> This is spartaaaaaa \n\0";
			char i = 0;
			while(1)
			{
				if(str[i] == '\0') break;
				putchar(str[i] + 1);
				i = i+1;
			}
		}
		///Ex_00
		{
			char *str = "--> This is spartaaaaaa \n\0";
			char i = 0;
			while(1)
			{
				if(str[i] == '\0') break;
				if((i % 2) > 0) 
				{
					i = i+1;
					continue;
				}
				putchar(str[i]);
				i = i+1;
			}
		}
		return 14;
	}

#endif

