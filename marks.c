//marks to percentage 
//j joshua prakash
 #include<stdio.h>
 int main()
 {
    float mat,eng,phy,che,cs;
    printf("enter your marks in maths \n");
    scanf("%f",&mat);
    printf("enter your marks in english \n");
    scanf("%f",&eng);
    printf("enter your marks in physcis \n");
    scanf("%f",&phy);
    printf("enter your marks in chemistry \n");
    scanf("%f",&che);
    printf("enter your marks in computer science\n");
    scanf("%f",&cs);
    int per;
    per= ((mat+eng+phy+che+cs)/500)*100;
    printf("the percentage of the student is %d",per);
    return 0;
}
 
