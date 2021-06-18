/* Enter your solutions in thi s file */

  
float average(int m[], int a)
{
int sum = 0;

for(int i=0;i<a;i++)
sum = sum + m[i];

float avg = (float)sum/a;
return avg;
}  

int factors(int a, int m[])
{
int count =0;
int z=0;


for(int i = 2;i<=a;i++)
{
count =0;
for (int j=1;j<=i;j++)
{

if ((i%j)==0)
count = count +1;
}
if(count ==2)

while(a%i==0)
{
m[z]=i;
z=z+1;
a=a/i;

}



}
 ret[]=m[];
 return(z);

}
