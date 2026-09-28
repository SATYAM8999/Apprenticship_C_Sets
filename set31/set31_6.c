#include <stdio.h>
#include <math.h>

struct dt {
    float mean;
    float variance;
};
typedef struct dt data;

data getMeanDeviation(int[], int);

int main()
  {
    int n = 10;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Given array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d, ", a[i]);
   }

    data d = getMeanDeviation(a, n);

    printf("\nMean = %f\n", d.mean);
    printf("Standard Deviation = %f\n", d.variance);

    return 0;
}

data getMeanDeviation(int x[], int n) {
    float sum = 0, variance = 0;

    for (int i=0;i<n;i++)
    {
        sum=sum+x[i];
    }

    float mean=sum/n;

    for (int i = 0; i < n; i++) {
        variance =variance+pow(x[i]-mean, 2);
    }

    variance=variance/n;
    float final_variance=sqrt(variance);

    data d;
    d.mean=mean;
    d.variance=final_variance;

    return d;
}
