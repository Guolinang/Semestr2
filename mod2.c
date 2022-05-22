#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void task1() {
	int sum = 0;
	for (int i = 1; i < 1000; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%d", sum);
}

void task2() {
	int f1 = 2;
	int f2 = 1;
	int f3 = 0;
	long int sum = 0;
	while (f1 <= 4000000)
	{
		if (f1 % 2 == 0){sum = sum + f1;}
		f3 = f2;
		f2 = f1;
		f1 = f1 + f3;
	}
	printf("%d", sum);

}

int isprime(signed long long a) {
	int f = 1;
	for (int i = 2; i < a; ++i)
		if (a % i == 0)
		{
			f = 0;
			break;
		}
	return f;
}

long long int triang(int a)
{
	long long int num = 0;
	for (int i = 0; i <= a; i++){num += i;}
	return num;
}

void task3() {
	signed long long numb = 600851475143;
	signed long long i = 1;
	while (1) {
		if (numb% i == 0){numb = numb / i;}
		if (numb == 1) 
			break;
		i += 1;
	}	
	printf("%llu", i);
}

void task4() 
{	int pol = 0;
	int a[9];
	int maxpol = 0;
	for (int i = 100; i < 1000; ++i)
	{
		for (int j = 100; j < 1000; ++j)
		{
			pol = i * j;
			a[0] = pol / 100000;
			a[1] = (pol / 10000) % 10;
			a[2] = (pol / 1000) % 10;
			a[3] = (pol / 100) % 10;
			a[4] = (pol / 10) % 10;
			a[5] = pol % 10;
			if ((a[0] == a[5]) && (a[1] == a[4]) && (a[2] == a[3]))	{if (pol > maxpol) { maxpol = pol; }}
		}
	}

	printf("%d", maxpol);

}
    
void task5()
{
	int numb = 2;
	while(numb)
	{	int f = 1;
		for (f; f<21; f++){	if (numb % f != 0)	break;	}
		if (f == 21) break;
		numb++;
	}
	printf("%d", numb);
}

void task6()
{	signed long long mn1 = 0;
	signed long long mn2 = 0;
	for (long int i = 1; i < 101; ++i){mn1 = mn1 + i*i;}
	for (int i = 1; i < 101; ++i){mn2 = mn2+i;}
	signed long long raz = (mn2*mn2) - mn1;
	printf("%llu", raz);
}

void task7() 
{
	int i = 2;
	signed long long numb = 3;
	while (i <= 10001)	{
		int f = isprime(numb);
		if (f == 1)	{++i;}
		++numb;
	}
	printf("%llu", numb-1);
}

void task8() {

	unsigned long long mnoz = 1;
	unsigned long long maxmnoz = 1;
	int arr[1000];
	char numb[1000] =  "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450" ;
	for (int i = 0; i < 1000; i++){	arr[i] = numb[i] - 48;}
	for (int i = 0; i < 987; ++i)
	{	mnoz = 1;
		for (int j = 0; j < 13; j++){mnoz *= arr[i+j] ;	}				
		if (maxmnoz < mnoz)	{maxmnoz = mnoz;}
	}
	printf("%llu", maxmnoz);
}

void task9(){
	for (int a = 1; a < 1000; a++)
	{
		for (int b = 1; b < 1000; b++)
		{
			for (int c = 1; c < 1000; c++)
			{
				if (a * a + b * b == c * c)
					if (a + b + c == 1000){printf("%d", a * b * c);exit (0);}
			}
		}
	}
}

void task10() {

	unsigned long long Sum = 0;
	for (int i = 1; i < 2000000; i++)
	{if (isprime(i) == 1) { Sum += i; }	}
	printf("%llu", Sum);
}

void task11() {
	int matrix[20][20] = {
	 8,2,22,97,38,15,0,40,00,75,4,5,7,78,52,12,50,77,91,8,
	 49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00,
	 81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65,
	 52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91,
	 22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80,
	 24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50,
	 32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70,
	 67,26,20,68,02,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21,
	 24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72,
	 21,36,23,9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95,
	 78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14,9,53,56,92,
	 16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57,
	 86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58,
	 19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40,
	 04,52,8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66,
	 88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69,
	 04,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36,
	 20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16,
	 20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54,
	};

	int maxmnoz = 1;
	int mnoz = 1;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int vertical = 1;
			int horizontal = 1;
			int diagonalleft = 1;
			int diagrright = 1;
			if (j < 17){horizontal = matrix[i][j] * matrix[i][j + 1] * matrix[i][j + 2] * matrix[i][j + 3];}
			if (i < 17){vertical = matrix[i][j] * matrix[i + 1][j] * matrix[i + 2][j] * matrix[i + 3][j];}
			if (i < 17 && j < 17){diagrright = matrix[i][j] * matrix[i + 1][j + 1] * matrix[i + 2][j + 2] * matrix[i + 3][j + 3];}
			if (i > 3 && i < 17 && j > 3){diagonalleft = matrix[i][j] * matrix[i + 1][j - 1] * matrix[i + 2][j - 2] * matrix[i + 3][j - 3];}
			mnoz = max(mnoz, max(horizontal, max(vertical, max(diagrright, diagonalleft))));
		}
	}
	printf("%d",mnoz);
}

int delcounter(long int a)
{	int delcount = 1;
	long int del = 2;
	for (; del <= sqrt(a)+1; del++){if (a % del == 0){delcount += 2;}}
	return delcount;
}

void task12() {
	int f = 1;
	long int res = 0;
	for (int i = 1; f; i++)
	{
		long int res = triang(i);
		if (delcounter(res) >= 500){printf("%lu",res);	f = 0;}
	}
}

void task15() {
	unsigned long long numb = 0;
	unsigned long long maxnumb = 0;
	int tmplen = 0;	
	int maxlen = 0;

	for (int i = 999999; i > 1; i--)
	{
		numb = i;
		tmplen = 1;
		while (numb != 1)
		{
			if (numb % 2 != 0)
				numb = numb * 3 + 1;
				
			else
				numb = numb/2;

			tmplen++;
		}

		if (maxlen < tmplen)
		{
			maxnumb = i;
			maxlen = tmplen;
		}
	}
	printf("%llu", maxnumb);
	
}

struct BigNumber
{
	short* mas;
	int size;
};

struct BigNumber* constructor(char* num)
{
	struct BigNumber* obj = malloc(sizeof(struct BigNumber));
	if (!obj)
		return NULL;
	int size = strlen(num);
	obj->mas = malloc(size * sizeof(short));
	if (!obj->mas)
	{
		perror("ERROR");
		free(obj);
		return NULL;
	}
	obj->size = size;
	for (int i = 0; i < obj->size; ++i)
		obj->mas[i] = num[i] - 48;
	return obj;
}

int PrintBigNumber(struct BigNumber* obj)
{
	for (int i = 0; i < obj->size; i++)	{printf("%hi", obj->mas[i]);}
	return 0;
}

int SumBigNumber(struct BigNumber* obj1, struct BigNumber* obj2)// working properly
{
	int maxlen = 0;
	if (obj1->size > obj2->size)
		maxlen = obj1->size;
	else
		maxlen = obj2->size;

	struct BigNumber* sum = malloc(sizeof(struct BigNumber));
	sum->size = maxlen + 1;
	sum->mas = malloc(sum->size * sizeof(short));
	for (int i = 0; i < sum->size; ++i)
	{
		sum->mas[i] = 0;
	}
	int temp = 0;	
	int i;
	for ( i = 0; i < min(obj1->size, obj2->size); i++)
	{
		sum->mas[sum->size - i - 1] += temp;
		temp = 0;
		if (sum->mas[sum->size - i - 1] + obj1->mas[obj1->size - i - 1] + obj2->mas[obj2->size - i - 1] < 10)
			sum->mas[sum->size - i - 1] += obj1->mas[obj1->size - i - 1] + obj2->mas[obj2->size - i - 1];
		else
		{
			temp = 1;
			sum->mas[sum->size - i - 1] = (sum->mas[sum->size - i - 1] + obj1->mas[obj1->size - i - 1] + obj2->mas[obj2->size - i - 1]) % 10;
		}
	}

	if (temp) sum->mas[sum->size - i - 1] += temp;
	if (obj1->size != obj2->size)
	{
		for (int j = i; j < (max(obj1->size, obj2->size)); j++)
		{
			if (obj1->size > obj2->size) sum->mas[sum->size - j - 1] += obj1->mas[obj1->size - j - 1];
			else sum->mas[sum->size - j - 1] += obj2->mas[obj2->size - j - 1];
		}
	}
	struct BigNumber* buffer = NULL;
	if (sum->mas[0] == 0)
	{
		buffer = malloc(sizeof(struct BigNumber));
		buffer->size = maxlen;
		buffer->mas = malloc(buffer->size * sizeof(short));
		int i = 1;
		int j = 0;
		for (; i < sum->size; i++, j++)
		{
			buffer->mas[j] = sum->mas[i];
		}
		free(sum);
		return buffer;
	}
	return sum;
}

void strnumb1() {
	char str[100];	
	gets(str);
	int k = 0; int last = 0;
	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '('){k++;}
		else if (str[i] == ')') { k--; last = i + 1; }
	}
	if (k < 0) { printf("%d", last);}
	else if (k>0) { printf("-1");}
		else { printf("0"); }
}

struct date
{
	int day;
	int month;
	int year;
}array[10];

void strnumb2()
{
	FILE* f = NULL;
	f = fopen("ddate.txt", "rt");
	int i = 0;
	if (f == NULL) {
		printf("Error opening file");		
		exit(1);
	}
	FILE* fnew;
	fnew = fopen("sortdate.txt", "w");
	while (!feof(f))
	{
		fscanf(f, "%d.%d.%d", &array[i].day, &array[i].month, &array[i].year);
		i++;
	}
	int n = i + 1;

	for (int k = 0; k < n-1; k++)
	{
		for (int j = (n-1); j > k; j--) 
		{
			if ((array[j-1].year> array[j].year)&& (array[j-1].month > array[j].month)&& (array[j-1].day > array[j].day))
			{
				int temp1 = array[j - 1].year;
				int temp2 = array[j - 1].month;
				int temp3 = array[j - 1].day;
				array[j - 1].year = array[j].year;
				array[j - 1].month = array[j].month;
				array[j - 1].day = array[j].day;
				array[j].year = temp1;
				array[j].month = temp2;
				array[j].day = temp3;
			}
		}
	}
	for (int k = 0; k < n - 1; k++)
		fprintf(fnew, " % d. % d. % d\n", array[i].day, array[i].month, array[i].year);
	return 0;
}

int main() {
	strnumb1();

	return 0;
}


