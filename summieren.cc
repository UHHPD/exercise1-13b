#include<iostream>
#include<fstream>
using namespace std;
int main() 
{
int numbers;
/*printing 2 numbers */
ifstream fin1("daten.txt"); /*used to read an existing file*/
fin1 >> numbers;  /* data in file is fed to our declared variable "numbers" */
cout << numbers <<"\n"; /* cout gives output */
fin1 >> numbers;
cout << numbers <<"\n";
fin1.close();

/*printing all numbers*/
ifstream fin2("daten.txt");
int i,j;
for(int i=0;i<234;i++)
{
char numbers[2]; /*we have to print all the numbers form daten.txt in 2 columns*/
for(int j=0;j<2;j++)
{fin2 >> numbers ;
cout << numbers ;
}
cout << numbers;
}
fin2.close();

/* finding sum of every row*/

ifstream fin3("daten.txt");
int k,l,sum=0;

for(k=0;k<234;k++) 
{
char s1[234];
for(l=0;l<2;l++)
{
  char s2[2];
sum=s1[k]+s2[l];
}
}
cout << sum <<"\n"; 
fin3.close();

/*opening a text file and transferring the data*/ 

ofstream fout;
fout.open("datensumme.txt");
fout << sum <<"\n";
fout.close();

ofstream fout("datensumme.txt")
fout.open("datensumme.txt")
fout.close();
}



tu push pull wala kelas?