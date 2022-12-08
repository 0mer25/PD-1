#include <stdio.h>

int main() {
    // 1
    /*
    int a , b;
    scanf("%d" , &a);
    scanf("%d" , &b);
    printf("result : %d" , (a+b));
    */

    // 2
    /*
    float r;
    scanf("%f" , &r);
    printf("%f" , ((3.14) * r * r));
    */

    // 3
    /*
    int n;
    scanf("%d" , &n);

    if(n % 2 == 0)
    {
        printf("even");
    }
    else {printf("odd");}
     */

    // 4
    /*
    int freezingPoint = 0, t;
    scanf("%d" , &t);
    if(t > freezingPoint)
    {
        printf("above");
    }
    else if(t < freezingPoint)
    {
        printf("below");
    }
    else
    {
        printf("equal");
    }
     */

    // 5
    /*
    float f;
    scanf("%f" , &f);
    float celcius = (f-32) * (5/9);
    printf("%f" , celcius);
     */

    // 6
    /*
    float feet;
    scanf("%f" , &feet);
    float cm = feet * 30.48;
    printf("%f" , cm);
    */

    // 7
    /*
    for(int i = 1 ; i <= 10 ; i++)
    {
        printf("%d , " , (i*i));
    }
    */

    // 8
    /*
    int l = 3 , h = 9 , s = 0;
    for(int i = l ; i <= h ; i++)
    {
        s += i;
    }
    printf("%d" , s);
    */

    // 9
    /*
    int l = 3 , h = 9 , n = 0;
    scanf("%d" , &n);
    for(int i = l ; i <= h ; i++)
    {
        if(i % n == 0)
        {
            printf("%d , " , i);
        }
    }
    */

    // 10
    /*
    int a = 1 , b = 2 , c = 3;

    if(a >= b && a >= c)
    {
        printf("%d" , a);
    }
    else if(b >= a && b >= c)
    {
        printf("%d" , b);
    }
    else{printf("%d" , c);}
     */

    // 11
    /*
    int x , s = 0 , p = 1;

    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d" , &x);

        s += x;
        p *= x;
    }

    printf("%d , %d" , s , p);
    */

    // 12
    /*
    int l , h , s , c = 0;
    scanf("%d" , &l);
    scanf("%d" , &h);
    scanf("%d" , &s);
    for(int i = l ; i <= h ; i += 5)
    {
        c++;
        printf("%d\t" , i);
    }
    printf("\n%d" , c);
    */

    // 13
    /*
    int x = 6;
    for(int i = 1 ; i <= 10 ; i++)
    {
        printf("%d\n" , (i * x));
    }
     */

    // 14
    /*
    int x , f = 1;
    scanf("%d" , &x);
    for(int i = 1 ; i <= x ; i++)
    {
        f *= i;
    }
    printf("%d" , f);
    */

    // 15
    /*
    int n;
    scanf("%d" , &n);
    for(int i = n ; i > 0 ; i--)
    {
        printf("%d " , i);
    }
    */

    // 16
    /*
    int s = 0;
    for(int i = 1000 ; i <= 2000 ; i++)
    {
        if((i % 2) == 0)
        {
            s += i;
            printf("%d " , i);
        }
    }
    printf("\t%d" , s);
     */

    // 17
    /*
    int n , s = 0;
    scanf("%d" , &n);
    for(int i = 1 ; i <= n ; i++)
    {
        s += 1/i;
    }
    printf("Sum = %d" , s);
     */

    // 18
    /*
    int n , bin = 0, r = 0, p = 1;
    scanf("%d", &n);
    while(n)
    {
        r   = n % 2;
        n   = n / 2;
        bin   = bin + (r * p);
        p = p * 10;
    }
    printf("%d\n", bin);
     */

    // 19
    /*
    int x;
    scanf("%d" , &x);
    for(int i = 1 ; i <= 10 ; i++)
    {
        printf("%d\n" , (i * x));
    }
     */

    // 20
    /*
    int d , n;
    scanf("%d" , &n);

    while(n > 0)
    {
        d++;
        n = n / 10;
    }
    printf("%d" , d);
    */

    // 21
    /*
    int n , l = 0 , f = 0 , k , c = 1;
    scanf("%d" , &n);

    l = n % 10;
    k = n / 10;

    while(k >= 0)
    {
        c++;
        k = k / 10;
    }

    f = n % (10^(c-1));
    printf("%d" , f);
    printf("%d" , l);
     */

    // 22
    /*
    int num, rem, temp, rev=0, noOfDigit=0, noOfDigitTemp, revNum, remTemp;
    printf("Enter the Number: ");
    scanf("%d", &num);
    temp = num;
    while(temp>0)
    {
        temp = temp/10;
        noOfDigit++;
    }
    if(noOfDigit<2)
    {
        printf("%d" , num);
    }
    else if(noOfDigit==2)
    {
        temp = num;
        while(temp>0)
        {
            rem = temp%10;
            rev = (rev*10)+rem;
            temp = temp/10;
        }
        printf("%d", rev);
    }
    else
    {
        temp = num;
        while(temp>0)
        {
            rem = temp%10;
            rev = (rev*10)+rem;
            temp = temp/10;
        }
        revNum = rev;
        rev = 0;
        temp = num;
        noOfDigitTemp = noOfDigit;
        while(temp>0)
        {
            remTemp = revNum%10;
            if(noOfDigitTemp==noOfDigit)
            {
                rem = temp%10;
                rev = (rev*10)+rem;
            }
            else if(noOfDigitTemp==1)
            {
                rem = temp%10;
                rev = (rev*10)+rem;
            }
            else
            {
                rev = (rev*10)+remTemp;
            }
            temp = temp/10;
            revNum = revNum/10;
            noOfDigitTemp--;
        }
        printf("%d", rev);
    }
     */

    // 23
    /*
    int n , s = 0 , t = 0 , x = 0;
    scanf("%d" , &n);
    t = n;

    while(n != 0)
    {
        x = n % 10;
        s = (s * 10) + x;
        n = n / 10;
    }

    if(t == s)
    {
        printf("palindrom");
    }
    else{printf("not palindrom");}
     */

    // 24
    /*
    int c , n , x = 0 , y , z;
    scanf("%d" , &n);

    while(x < 10)
    {
        y = n;
        while(y > 0)
        {
            z = y % 10;
            if(z == 1)
            {
                c++;
            }
            y = y / 10;
        }
        x = c;
        x++;
    }
    */

    // 25
    /*
    int i, num1, num2, min, hcf=1;
    printf("Enter any two numbers : ");
    scanf("%d%d", &num1, &num2);
    if(num1 < num2)
    {
        min = num1;
    }
    else{min = num2;}

    for(i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }

    printf("HCF : %d" , hcf);
    */

    return 0;
}
