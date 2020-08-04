#include<iostream>
using namespace std;

int sum(int a[],int low, int high)
{ int sum3=0;
    for(int k=low;k<=high;k++)
    {
        sum3= a[k]+sum3;
    }

    return sum3;
}

int main()
{
    int n,sum1,sum2;
    int a[]={1,3,5,2,2};
    n=sizeof(a)/sizeof(a[0]);

  int mid=n/2;
  while(sum1!=sum2)
  {
      sum1=sum( a,0,mid-1);
      sum2= sum(a,mid+1,n-1 );
     if (sum1==sum2)
        cout<<mid+1;
     else if (sum1< sum2)
                mid++;
      else
        mid--;
  }
  return 0;
}





