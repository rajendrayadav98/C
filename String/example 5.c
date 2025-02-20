// Write a C program to combine two string in a single String.

// Sample input :
// Enter first String : Naresh
// Enter Second String : it

// Sample output :Resulting String is : Nareshit



int main() {
    char s1[100],s2[100],s[200];
    int i,j;
    printf("Enter firts string:");
    scanf("%s",s1);
    int len;
    for(len=1;s1[len]!='\0';len++){
        len++;
    }
    printf("string length:%d\n",len);
    int lenstr1=len;
    printf("Enter second string:");
    scanf("%s",s2);
    
    len=0;
    for(len=1;s2[len]!='\0';len++){
        len++;
    }
    printf("string length:%d\n",len);
    
    for( i=0;i<lenstr1+len;i++){
       if(i<lenstr1){ 
        s[i]=s1[i];}
        if(i>=lenstr1){
            s[i]=s2[i-lenstr1]; 
    }
    }
    
    printf("Resulting String is :%s",s);
    return 0;
}