    #include<stdio.h>

    #include<math.h>

    int determinant(int [][25], int);

    void cofactor(int [][25], int);

    void transpose(int [][25], int [][25], int);
    
    int m_inverse(int,int);
    
    int findRemainder(int,int);
    int main()

    {

      int a[25][25], k, d;

      int i, j;
      i=findRemainder(26,26);
      printf("Answer=%d\n",i);
      printf("Enter the order of the Matrix : ");

      scanf("%d", &k);

      printf("Enter the elements of %.0fX%.0f Matrix : \n", k, k);

      for (i = 0;i < k; i++)

        {

         for (j = 0;j < k; j++)

           {

            scanf("%d", &a[i][j]);

            }

        }

      d = determinant(a, k);
      printf("D=%d",d);

      if (d == 0)

       printf("\nInverse of Entered Matrix is not possible\n");

      else

       cofactor(a, k);
       


    }

     

    /*For calculating Determinant of the Matrix */

    int determinant(int a[25][25], int k)

    {

      int s = 1, det = 0, b[25][25];

      int i, j, m, n, c;

      if (k == 1)

        {

         return (a[0][0]);

        }

      else

        {

         det = 0;

         for (c = 0; c < k; c++)

           {

            m = 0;

            n = 0;

            for (i = 0;i < k; i++)

              {

                for (j = 0 ;j < k; j++)

                  {

                    b[i][j] = 0;

                    if (i != 0 && j != c)

                     {

                       b[m][n] = a[i][j];

                       if (n < (k - 2))

                        n++;

                       else

                        {

                         n = 0;

                         m++;

                         }

                       }

                   }

                 }

              det = det + s * (a[0][c] * determinant(b, k - 1));

              s = -1 * s;

              }

        }

     

        return (det);

    }

     

    void cofactor(int num[25][25], int f)

    {

     int b[25][25], fac[25][25];

     int p, q, m, n, i, j;

     for (q = 0;q < f; q++)

     {

       for (p = 0;p < f; p++)

        {

         m = 0;

         n = 0;

         for (i = 0;i < f; i++)

         {

           for (j = 0;j < f; j++)

            {

              if (i != q && j != p)

              {

                b[m][n] = num[i][j];

                if (n < (f - 2))

                 n++;

                else

                 {

                   n = 0;

                   m++;

                   }

                }

            }

          }

          fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);

        }

      }

      transpose(num, fac, f);

    }

    /*Finding transpose of matrix*/ 

    void transpose(int num[25][25], int fac[25][25], int r)

    {

      int i, j,d1;

      int b[25][25], inverse[25][25], d;

     

      for (i = 0;i < r; i++)

        {

         for (j = 0;j < r; j++)

           {

             b[i][j] = fac[j][i];

            }

        }

    d = determinant(num, r);
    d=findRemainder(d,26);
    d1=m_inverse(26,d);
    printf("M_INV=%d\n",d1);
    int temp;
      for (i = 0;i < r; i++)

        {

         for (j = 0;j < r; j++)

           {

             temp= d1*b[i][j];
             if(temp>0)
             {
                 inverse[i][j]=temp%26;
             }
             else
             {
             inverse[i][j]=findRemainder(temp,26);
             }
             

            }

        }

       printf("\n\n\nThe inverse of matrix is : \n");

     

       for (i = 0;i < r; i++)

        {

         for (j = 0;j < r; j++)

           {

             printf("\t%d", inverse[i][j]);

            }

        printf("\n");

         }
         

    }
 
 int m_inverse(int a,int b)
{
        int r,t,t1=0,t2=1;
	int r1=a;
	int r2=b;
	int q;
	
	while(r2>0)
	{
	  q=r1/r2;
	  r=r1-q*r2;
	  r1=r2;
	  r2=r;
	  t=t1-q*t2;
	  t1=t2;
	  t2=t;
	  
	}
	t1=findRemainder(t1,26);
	return t1;
}
int findRemainder(int dividend,int divisor)
{ 
    int q,r;
    q=dividend/divisor;
    r=dividend%divisor;   
    
   if(q<=0 && dividend<0)
   {
      q=q-1;
      r=dividend-q*divisor;
   }
  printf("Quotient=%d\n",q);
   return r;
 }
