#include "ramzi_and_mahdi.h"
//function that check if the number is from the base
//-----------------function-that-check-if-the-entered-number-is-under-the-base-or-no--------------------------
int verif_rest(int number,int base)
{
    int r,v;
    r=0;
    do{
        if ((number%10)>=base){
            r=r+1;}
            number=number/10;
    }while(number>0);
    if (r==0){v=1;}
    else{v=0;}
    return v;
}
//-------------function that convert from decimal to any base under the decimal what we need from this function is the base 2 and 8--------------
int Dec_to_base(int base , int n) {
int num=0;
int q=n,r;
int i;
while (q!=0) {
    r=q%base;
    q=q/base;
    num=num+(r*pow(10,i));
    i++;
}
return num;}

//-----------------------------------------function that convert from any base to decimal--------------------------------------------------------
int to_dec (int b,int nbr)
{
    int i,deci,nmbr;
    deci=0;
    nmbr=nbr;
    i=0;
    do
    {   deci=deci+((nmbr%10)*pow(b,i));
        i++;
        nmbr=nmbr/10;}while (nmbr>0);
 return deci;
}

//-----------------------------------------function that convert from decimal to hexadecimal---------------------------------------------------
void dec_hex(int num)
{   int temp,rem,i=1,j;
    char hexa[50];
    temp=num;
    while(temp!=0) {
        rem=temp%16;
        if (rem<10) {
            rem=rem+48;
        }
        else
            rem=rem+55;
        hexa[i++]=rem;
        temp=temp/16;}
    printf("the number in hexadecimal is :");
    for  (j=i-1;j>0;j--){
        printf("%c",hexa[j]);
    }
    return 0;
}
//---------------------------------------------function that convert from hexadecimal to decimal---------------------------------------------------------
void hh(char hex[])
{
    int decimal = 0, base = 1;
    int i = 0, length;
    length = strlen(hex);
    for(i = length-1; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {decimal = decimal +(hex[i] - 48) * base;
            base =base * 16;}
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {   decimal = decimal +(hex[i] - 55) * base;
            base = base* 16;}
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {  decimal = decimal +(hex[i] - 87) * base;
            base =base * 16;}
    }
    printf("Decimal number = %d\n", decimal);
    return 0;
}
//-----------function that check the entered number if it is under the base----------------------
int v(char c[])
{
    int k,i,j;
    j=0;
    for(i=0;i<strlen(c);i++)
    {
    if((c[i]>='0'&&c[i]<='9')||(c[i]>='A' && c[i]<='F')||(c[i]>='a' && c[i]<='f'))
        {j=j+1;}
    }
    if (j==strlen(c)){
        k=1;
    }
    else{k=0;}
    return k;
}
