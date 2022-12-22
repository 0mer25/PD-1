#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // 1
    /*
    int a , b;
    scanf("%d" , &a);
    scanf("%d" , &b);

    printf("area : %d\tperimeter : %d" , (a*b) , (a+b));
     */

    // 2
    /*
    float a , b , c;
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);

    float d = (b*b) - (4*a*c);
    float x , y;

    if(d > 0)
    {
        x = (-b + sqrtf(d)) / (2 * a);
        y = (-b - sqrtf(d)) / (2 * a);
        printf("%d , %d" , x , y);
    }
    else if(d == 0)
    {
        x = (-b + sqrtf(d)) / (2 * a);
        printf("%d , %d" , x , x);
    }
    else
    {
        printf("There is no root");
    }
     */

    // 3
    /*
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("HelloWorld\n");
    }
     */

    /*
    // 4
    int s = 0;
    for(int i = 1 ; i <= 50 ; i++)
    {
        s += i;
    }

    printf("%d" , s);
     */

    // 5
    /*
    int a = 2;
    printf("%lf" , (pow(a , 4)));
     */

    // 6
    /*
    int n1, n2, max;

    scanf("%d %d", &n1, &n2);
    if(n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
     */

    // 7
    /*
    int n;
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i++)
    {
        int x = 0;

        for(int j = 1 ; j < i ; j++)
        {
            if(i % j == 0)
            {
                x++;
            }
        }

        if(x == 1)
        {
            printf("%d\n" , i);
        }
    }
     */

    // 8
    /*
    int n , s = 0;
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i++)
    {
        int x = 0;

        for(int j = 1 ; j < i ; j++)
        {
            if(i % j == 0)
            {
                x++;
            }
        }

        if(x == 1)
        {
            s += i;
        }
    }
    printf("%d" , s);
    */

    // 9
    /*
    int n;
    scanf("%d" , &n);

    int x = n , s = 0;

    int c = 0;
    while(n > 0)
    {
        n = n / 10;
        c++;
    }

    n = x;

    while(n > 0)
    {
        int p = 1;
        int d = n % 10;
        for(int i = 0 ; i < c ; i++)
        {
            p = p * d;
        }
        s += p;
        n = n / 10;
    }
    if(x == s)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
     */


    // 10
    /*
    int n , sum = 0;
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i++)
    {
        int x = i , s = 0;

        int c = 0;
        while(i > 0)
        {
            i = i / 10;
            c++;
        }

        i = x;

        while(i > 0)
        {
            int p = 1;
            int d = i % 10;
            for(int j = 0 ; j < c ; j++)
            {
                p = p * d;
            }
            s += p;
            i = i / 10;
        }
        if(x == s)
        {
            printf("%d\n" , x);
        }
        i = x;
    }
    */

    // 11
    /*
    int n;
    scanf("%d" , &n);

    int sum = 0;

    for(int i = 1 ; i < n ; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if(sum == n)
    {
        printf("perfect");
    }
    else
    {
        printf("not perfect");
    }
     */

    // 12
    /*
    int n;
    scanf("%d" , &n);

    for(int j = 1 ; j <= n ; j++)
    {
        int sum = 0;

        for(int i = 1 ; i < j ; i++)
        {
            if(j % i == 0)
            {
                sum += i;
            }
        }
        if(sum == j)
        {
            printf("%d\n" , j);
        }
    }
     */

    // 13
    /*
    int n;
    scanf("%d" , &n);

    int sum = 0;
    int x = n;
    while(n > 0)
    {
        int d = n % 10;

        int f = 1;
        for(int i = 1 ; i <= d ; i++)
        {
            f = f * i;
        }

        sum += f;

        n = n / 10;
    }
    if(sum == x)
    {
        printf("strong");
    }
    else
    {
        printf("not");
    }
     */

    // 14
    /*
    int n;
    scanf("%d" , &n);

    for(int j = 1 ; j <= n ; j++)
    {
        int sum = 0;
        int x = j;
        while(j > 0)
        {
            int d = j % 10;

            int f = 1;
            for(int i = 1 ; i <= d ; i++)
            {
                f = f * i;
            }

            sum += f;

            j = j / 10;
        }
        if(sum == x)
        {
            printf("%d\n" , x);
        }
        j = x;
    }
     */

    // 15
    /*
    int n;
    scanf("%d" , &n);

    int x = n , s = 0;

    while(n > 0)
    {
        int d = n % 10;
        s = s * 10 + d;
        n = n / 10;
    }
    if(x == s)
    {
        printf("palindrom");
    }
    else
    {
        printf("not palindrom");
    }
     */

    // 16
    /*
    float x;
    scanf("%f" , &x);

    double sum = 0;
    for(float i = 0 ; i <= x ; i = i + 2)
    {
        float p = 1;
        for(int j = 0 ; j < i ; j++)
        {
            p = p * x;
        }

        float f = 1;
        for(float j = 1 ; j <= i ; j++)
        {
            f = f * j;
        }

        sum += p / f;
    }
    printf("%lf" , sum);
    */

    // 17
    /*
    int n;
    scanf("%d" , &n);

    float sum = 0;
    for(float i = 1 ; i <= n ; i++)
    {
        printf("1/%f + " , i);
        sum += 1/i;
    }
    printf("\nsum = %f" , sum);
    */

    // 18
    /*
    int x = 1;

    int n;
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i++)
    {
        if(i % 2 == 0)
        {
            x = 0;
        }
        else
        {
            x = 1;
        }

        for(int j = 0 ; j < i ; j++)
        {
            if(x == 1)
            {
                printf("%d" , x);
                x = 0;
            }
            else
            {
                printf("%d" , x);
                x = 1;
            }
        }
        printf("\n");
    }
     */

    // 19
    /*
    float x;
    scanf("%f" , &x);

    double sum = 0;
    for(float i = 0 ; i <= x ; i++)
    {
        float p = 1;
        for(int j = 0 ; j < i ; j++)
        {
            p = p * x;
        }

        float f = 1;
        for(float j = 1 ; j <= i ; j++)
        {
            f = f * j;
        }

        sum += p / f;
        printf("x^%f/%f + " , i , i);
    }
    printf("\n for x = %f , sum = %lf" , x , sum);
     */

    // 20
    /*
    float x;
    scanf("%f" , &x);

    double sum = 0;
    for(float i = 1 ; i <= x ; i = i + 2)
    {
        float p = 1;
        for(int j = 0 ; j < i ; j++)
        {
            p = p * x;
        }

        float f = 1;
        for(float j = 1 ; j <= i ; j++)
        {
            f = f * j;
        }

        sum += p / f;
    }
    printf("%lf" , sum);
     */

    // 21
    /*
    int n;
    scanf("%d" , &n);

    int sum = 0 , x = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        x = x * 10 + 1;
        sum += x;
    }
    printf("%d" , sum);
     */

    // 22
    /*
    int s = 0;
    for(int i = 101 ; i < 200 ; i++)
    {
        if(i % 9 == 0)
        {
            printf("%d  " , i);
            s += i;
        }
    }
    printf("\nsum = %d" , s);
     */

    // 23
    /*
    int num , sum = 0 , p , a = 1;
    scanf("%d" , &num);

    while(num>0)
    {
        p=num%2;
        sum=sum+p*a;
        num/=2;
        a*=10;
    }
    printf("binary -> %d" , sum);
     */

    // 24
    /*
    int n1 , n , p = 1;
    int dec = 0 , i = 1 , j , d;
    printf("Input a binary number : ");
    scanf("%d" , &n);

    n1 = n;

    for (j = n ; j > 0 ; j = j / 10)
    {
        d = j % 10;
        if(i==1)
            p=p*1;
        else
            p=p*2;

        dec=dec+(d*p);
        i++;
    }
    printf("number is : %d" , dec);
    */

    // 25
    /*
    int n;
    scanf("%d" , &n);
    int c = 1;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 1 ; j <= n - i ; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - j + 1) / j;
            }
            printf("%4d", c);
        }
        printf("\n");
    }
    */

    return 0;
}
