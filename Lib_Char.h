#include <stdio.h>

	void printBit(char byte,char input) 
	{
		char bit  = 0;
		char shift  = 0;
		
		shift  = byte >> input;
		bit = shift & 1;
	
		if(bit == 0) putchar('0');
		if(bit == 1) putchar('1');
		return;
	}




	void print_char(char n)  
    {
    	if (n == 0) putchar('0');
    	if (n == 1) putchar('1');
    	if (n == 2) putchar('2');
    	if (n == 3) putchar('3');
    	if (n == 4) putchar('4');
    	if (n == 5) putchar('5');
    	if (n == 6) putchar('6');
    	if (n == 7) putchar('7');
    	if (n == 8) putchar('8');
    	if (n == 9) putchar('9');
    }


	char dim(char n)
	{
		char dim = 0;
		while(1)
		{
			dim = dim + 1;
			n = n / 10;
			if(n == 0) break;
		}
		return dim;
	}


	char print_final_digit(char number)
	{
		char ostatok = 0;
		char cel = 0;
		while(1)
		{
			ostatok = number % 10;
			cel = number / 10;
			if(cel == 0) break;
			number = cel;
		}
		return ostatok;
	}
	

	char f(char a) /// ans f(1)
	{
		char ans;
		ans = 1;
		
		char count;
		count = 0;
		
		while(1)
		{
			if (count < a)
			{
				ans = ans * 10;
				count++;	
			}
			else break;  
		}		
		return ans;	
	}
	
	
	
	char getNumber(char number,char pos)
	{
		char ostatok = 0;
		char cel = 0;
		char i = 0;

		while(1)
		{
			ostatok = number % 10;
			cel = number / 10;
		
			if(cel == 0) break;
			if(i == pos) break;
			
			number = cel;
			i++;
		}
		return ostatok;
	}
	
	
	
	
	
	
	void printCharDec(char number)
	{
		char dimention = dim(number)-1;
		while(1)
		{
			char n = getNumber(number,dimention);
			print_char(n);
			if (dimention == 0) break;
			dimention--;			
		}		
	}
	
	
	void printByte(char byte)
	{
		char i = 0;
		for(i = (8*sizeof(byte) - 1);i >= 0; i--)
		{
			if(i == 3) putchar(' ');
			printBit(byte,i);
		}
	}


	void printCharDecSigned(char N)
	{
		if(N<0)
		{
			N = N*(-1);
			putchar('-');
			putchar(' ');
		}
		printCharDec(N);
	}





	char dimUnsigned(unsigned char n)
	{
		unsigned char dim = 0;
		while(1)
		{
			dim = dim + 1;
			n = n / 10;
			if(n == 0) break;
		}
		return dim;
	}
	

	void print_char_unsigned(unsigned char n)  
    {
    	if (n == 0) putchar('0');
    	if (n == 1) putchar('1');
    	if (n == 2) putchar('2');
    	if (n == 3) putchar('3');
    	if (n == 4) putchar('4');
    	if (n == 5) putchar('5');
    	if (n == 6) putchar('6');
    	if (n == 7) putchar('7');
    	if (n == 8) putchar('8');
    	if (n == 9) putchar('9');
    }

	
	char getNumberUnsigned(unsigned char number,unsigned char pos)
	{
		unsigned char ostatok = 0;
		unsigned char cel = 0;
		unsigned char i = 0;

		while(1)
		{
			ostatok = number % 10;
			cel = number / 10;
		
			if(cel == 0) break;
			if(i == pos) break;
			
			number = cel;
			i++;
		}
		return ostatok;
	}

	
	void printCharDecUnsigned(unsigned char number)
	{
		unsigned char dimention = dimUnsigned(number)-1;
		while(1)
		{
			unsigned char n = getNumberUnsigned(number,dimention);
			print_char(n);
			if (dimention == 0) break;
			dimention--;			
		}		
	}


	char getCharDecFromDisplay(void)
	{
		char answer = 0;
		char memory = 0;
		char minus = 1;
		while(1)
		{
			memory = getchar();
		    if (memory == '\n') break;
			if (memory == '-') 
			{				
				minus = -1;
				continue;	
			}
		    
			answer = answer*10;
			memory = memory - 48;
			answer = answer + memory;
		}
		answer = answer*minus;
		return answer;
	}


	

	



	









	char char_strLen(char *str)
	{
		char len = 0;
		while(1)
		{
			if(str[len] == '\0') break;
			len = len+1;
		}
		return len;	
	}
	void printString(char*str)
	{
		while(*str) putchar(*str++);
	}

