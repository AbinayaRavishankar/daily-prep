#include <stdio.h>

void main(){
    char a[200],b[200]; 
    int n=0,m=0,j=0,cmp = 0,count=0,ans;
    printf("String operations without standard library.\n");
    printf("Enter the string  or word: ");
    scanf(" %[^\n]s",a);
    while(a[n]!='\0'){
        n++;
    }
    printf("\nThe length of the entered string is %d.\n",n);
    
    printf("\nThe reverse of the string is: ");
    for(int i = n-1;i>=0;i--){
        printf("%c",a[i]);
    }
    printf("\nEnter another string: ");
    scanf(" %[^\n]",b);
    while(b[m]!='\0'){
        m++;
    }
    char c[m];
    printf("\nString Copy operations\n");
    while(b[j]!='\0'){
        c[j] = b[j];
        j++;
    }
    c[j] = '\0';
    printf("String copied to another variable: %s\n",c);
    printf("\nString Comparison operaiton\n");
    if(m!=n) printf("Both the strings are not of same length. cannot be compared.\n");
    else{
        while(a[cmp] != '\0'){
            if (a[cmp] == b[cmp]) count++;
            else{
                ans = a[cmp]-b[cmp];
            }
            cmp++;
        }
        if(count == n) printf("Both the strings are identical.\n");
        else printf("The ascii value difference between the two strings are %d.\n",ans);
    }
    
    printf("\nString Concatenation\n");
    char d[m+n+1];
    for(int i=0;i<m+n;i++){
        if(i<n) d[i]=a[i];
        else d[i] = b[i-n];
    }
    d[m+n] = '\0';
    printf("The concatenated string is : %s\n",d);
    
    printf("\nSwitching Cases of the first string");
    for(int i=0;i<n;i++){
        if(a[i]>=97 && a[i]<=122) a[i] -= 32;
        else if(a[i]>=65 && a[i]<=90) a[i] += 32;
    }
    printf("Case switched to %s.\n",a);
}
