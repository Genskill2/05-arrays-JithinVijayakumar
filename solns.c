/* Enter your solutions in thi s file */

  
float average(int m[], int a)
{
int sum = 0;

for(int i=0;i<a;i++)
sum = sum + m[i];

float avg = (float)sum/a;
return avg;
}  
