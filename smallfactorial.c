#include <stdio.h>

int main(void) {
	// your code goes here
	int t,fact[50],num[100];
	//num stores testcases, t no of testcases, fact each factorial
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	    scanf("%d",&num[i]);

	for(int i=0;i<t;i++)
	    {
	       for(int z=1;z<35;z++)fact[z]=0;
	       fact[0]=1;
	       int m=1;//size of array ffact or no of digits in fact/4
	       for(int j=2;j<=num[i];j++)
	        {
	            int c=0,k;//carry
	            for(k=0;k<m;k++)
	                {
	                    int x=fact[k]*j+c;
	                    fact[k]=x%10000;
	                    c=x/10000;
	                }
	           if(c!=0)
	                {
	                    m++;
	                    fact[k]=c%10000;
	                    c/=10000;
	                }//in case carry there after m digits
	        }//end of finding fact
	        //to display
	        for(int j=m-1;j>=0;j--)
	            {
	                //to calc no of digs in each fact[]
	                int dig=1,temp=fact[j]/10;
	                while(temp!=0)
	                    {
	                        dig++;
	                        temp/=10;
	                    }
	                while(dig++<4&&j!=m-1)
	                    printf("0");//prints extra left zeroes
	                printf("%d",fact[j]);
	            }
	       printf("\n");
	    }
	return 0;
}


