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

 return(z);

}
int max(int d[],int y)
  {
  int max=d[0];
  for(int i=0;i<y;i++)
  {
  if(d[i]>max)
  max=d[i];
  }
  
  return max;
  }
int min(int d[],int y)
  {
  int min=d[0];
  for(int i=0;i<y;i++)
  {
  if(d[i]<min)
  min=d[i];
  }
  
  return min;
  }

int mode(int z[],int p)
  {
  
  int k[100]={0};
  for (int i =0;i<p;i++)
  {
  k[z[i]]= k[z[i]]+1;
  }
 int max=k[0];
  for(int i=0;i<99;i++)
  {
  if(k[i]>max){
  max=i;
  
  }
  }
  return max;
  }
