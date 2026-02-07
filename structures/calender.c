#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// structure
struct day{
    char *dayname;
    char *activity;
    int date;
};

//function to create calendar 
struct day* create(){
    struct day *week;
    week = malloc( 7 * sizeof(struct day));
    return week;
}
// function to read the calender
struct day *read(struct day *week){
    for(int i=0;i<7;i++){
        week[i].dayname = malloc(40 * sizeof(char));
        week[i].activity = malloc(40* sizeof(char));

        printf("Enter the details for the day %d\n->",i+1);
        printf("Date : ");
        scanf("%d",&week[i].date);

        printf("Day name :");
        scanf("%s",week[i].dayname);

        printf("Activity : ");
        scanf("%s",week[i].activity);
        
    }
}

//function to display calendar
void display(struct day *week){
    printf("----Weekly Activity Calendar -----");
    for(int i=0;i<7;i++){
    printf("\nDate %d ",week[i].date);
    printf("\nDay name %s ",week[i].dayname);
    printf("\nActivity %s ",week[i].activity);
    }

}

int main(){
    struct day *calender;
    calender=create();
    read(calender);
    display(calender);
    return 0;
}