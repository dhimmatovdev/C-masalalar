    #include <stdio.h> 
    #include <math.h>

    int main() {
        int n, orginal_raqam, reminder, NumDigits=0, sum=0;
        scanf("%d", &n);

         orginal_raqam = n;

        
        for (int i=n; i!=0; i=i/10) {
            NumDigits++;
        }
        while (n!=0) {
            reminder=n%10;
            sum+=pow(reminder, NumDigits);
            n=n/=10;
        }
        if (sum==orginal_raqam) {
            printf("%d Armstrong raqami\n", orginal_raqam);
        } else {
            printf("%d Armstrong emas\n", orginal_raqam);
        }
    

        return 0;
    }