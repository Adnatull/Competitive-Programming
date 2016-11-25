    #include <stdio.h>
    #include <math.h>
    #define pi 2*acos(0.0)
     
    int main()
    {
        int a,b;
        scanf("%d",&a);
        for(b=1;b<=a;b++){
            double c,d,e,f;
            scanf("%lf",&c);
            d=4*c*c;
            e=pi*c*c;
            f=d-e;
            printf("Case %d: %0.2lf\n",b,f);
        }
        return 0;
    }