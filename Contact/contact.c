//            A PROJECT BY SyefC: contact management
//             Expected realease date: 2025-4-7 OR 2025-4-8 OR more... . REALEASE: 2025-4-7
/*             This was only a representation of a saving system, and it was only for fun*/
//             WILL NOT WORK AS INTENDED AS A REAL PROJECT OR A REAL LIFE CONTACT MANAGEMENT...//
//language:  C
//Compiler: GNU GCC (MinGW 32BIT) (Free C Compiler)
//Editor: Vscode By Microsoft
/* 
Include File: (.h)



#include<stdio.h>
#include<string.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
#include<ctype.h>




*/
#include<stdio.h>
#include<string.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
#include<ctype.h>

//////////////////////////////////////////
char filebuff[65]; //SUPER IMPORTANT
char filebuffforloop[50] = "name"; //////////////SUPPER IMPORTANT
/////SUPER IMPORTANT!!!/
/////////////////////////////////////////



////////////////////
char input[100]; //i forgot
char name[65]; //input variable "ONLY" for contact...
char test[20]; //test
char test2[15]; //test2
char shownum[25]; //numbershower might not need it might need it
char delete[10]; //deletion of contact access
char indelete[10]; //inputing a deletion
char choices[5];  //inputing yes/no
char testing[9]; //just testing
int a = 1;  //i dont know what this for probably cause i dont remember adding anything with this variable
char inputexit[5]; //exiting
char choicesno[3]; //choices for no
char places[10]; //choices of the number for the contact (for save)
char numchoice[5];  //choices for numbers on the save file contact
char security[2]; //inputing
char securitys[2]; //inputing number 2
///////////////////
///////
struct contact { //structure of the first contact MIGHT copy it and make 5 of structures. 4/3/2025 Yeah im gonna do it. 4/6/2025 Nope I didnt do it 
    char name[50];
    char phone[20];
};
void checkifcharisnumberorno(struct contact b){
    int i = 0;
    int a = 1;
    for(i = 0; b.phone[i] != '\0'; i++){
if(!isdigit(b.phone[i])){
    a = 0;
        system("color 47");
    printf("\033[1;31mName: %s , Number: Theres a character in the number that is not a number position: [%d] character: '%c'\n\033[0m\n",b.name,i,b.phone[i]);
    break;
        }
     }
     if(b.phone[i] == '\0'){
        printf("Name: %s, Number: %s\n",b.name,b.phone);
     }
}
void printcontact(struct contact c){
    if(strlen(c.name) == 0 && strlen(c.phone) == 0){
        printf("Empty (No Contact was saved)\n");
    }
    else if(strlen(c.name) > 0 && strlen(c.phone) == 0){
        printf("Name: %s, Number: Undentified\n", c.name);
    }
    else if(strlen(c.name) == 0 && strlen(c.phone) > 0){
        printf("test\n");
        }
    else if(strlen(c.name) > 0 && strlen(c.phone) > 0){
       checkifcharisnumberorno(c);
    }
    else {
        system("cls");
        system("color 47");
        printf("IF CHARACTER WAS UNEXPECTEDLY WEIRD IT MEANS IT WAS A GARBAGE VALUE WHICH CAN CAUSE BY ERROR OR MISLEADING FUNCTION!");
    }
}
void disclaimer(){
    for(int countdown = 30; countdown > 0; countdown--){
        system("cls");
        printf("!!!READ BEFORE CODE RUNS!!!\n\n\n");
        printf("Dev: SyefC/Boomplay\n\n\n");
        printf("!!!DISCLAIMER!!!: RUN THE CODE IN A FOLDER, CODE WILL CREATE A .txt FILE CALLED 'name1.txt' and other .txt \nif you dont create a folder file might get lost and hard to find\n\n\n");
    printf("DISCLAIMER: This was only a project for fun and the contact maximum was 5 contacts.\nThis was all fake and will not work in real life this was only a represantation for a real contact and a\nsave file capability\n\n");
    printf("%d Seconds Until Code Runs...\n",countdown);
    printf("-----------------------------------------------------\n");
    printf("Press any key to skip countdown...\n");
    printf("-----------------------------------------------------\n");
    sleep(1);
    if(kbhit()){
        getch();
        break;
    }
    }
}
void save(int num){
    char name[50];
    char pnumber[25];
    sprintf(filebuff,"name%d.txt",num);
FILE *f = fopen(filebuff,"a");
printf("Type a New Contact Name:");
fgets(name,50,stdin);
printf("Type a New Contact Phone Number:");
fgets(pnumber,25,stdin);
fprintf(f,"%s",name);
fprintf(f,"%s",pnumber);
fclose(f);
}

int main(){
    while(1){
        system("color 60");
   if(a == 1){
    system("cls");
    printf("REMINDER: PLEASE RUN THIS PROGRAM ON A FOLDER BECAUSE:\n\n");
    printf("A FILE WILL BE CREATED CALLED: name1.txt, name2.txt, name3.txt, name4.txt, name5.txt\n\n");
    printf("IF YOU DID NOT RUN THE PROGRAM IN A FOLDER. FILE WILL BE LOST OR CORRUPTED!!!\n\n");
    printf("DELETE FILE IN OPTION 2\n\n\n");
    printf("Press Enter To Continue:");
    fgets(security,2,stdin);
    if(strcmp(security,"\n") == 0){
    disclaimer();
    a--;
    a = 0;
    }
   }
   else if(a > 0){
    printf("Error 02: Variable Decremented Wrongly Or a Unexpected/Unknown Error\n (Restart Program and Try Again)\n");
    return 0;
   }
    system("cls");
   struct contact info1 = {"",""};
   struct contact info2 = {"",""};
   struct contact info3 = {"",""};
   struct contact info4 = {"",""};
   struct contact info5 = {"",""};
   for(int f = 0; f < 6; f++){
sprintf(filebuffforloop,"name%d.txt",f);
FILE *readf = fopen(filebuffforloop,"r");
    if(f == 1){
        fscanf(readf,"%[^\n]",info1.name);
        fgetc(readf);
        fscanf(readf,"%[^\n]",info1.phone);
        rewind(readf);
        if(strlen(info1.name) == 0 && strlen(info1.phone) == 0){
            printf("----------------------------------------------------------------\n\n\n");
            printf(" - - - - - - - List Of Contacts which empty or not - - - - - - -\n");
            printf("1.Is empty\n");
                 }
                 fclose(readf);
        }
    else if(f == 2){
        rewind(readf);
     fscanf(readf,"%[^\n]",info2.name);
    fgetc(readf);
    fscanf(readf,"%[^\n]",info2.phone);
    if(strlen(info2.name) == 0 && strlen(info2.phone) == 0){
        printf("2.Is empty\n");
             }
             fclose(readf);
    }
    else if(f == 3){
        rewind(readf);        
        fscanf(readf,"%[^\n]",info3.name);
    fgetc(readf);
    fscanf(readf,"%[^\n]",info3.phone);
    if(strlen(info3.name) == 0 && strlen(info3.phone) == 0){
        printf("3.Is empty\n");
             }
             fclose(readf);
    }
    else if(f == 4){
        rewind(readf);    
        fscanf(readf,"%[^\n]",info4.name);
    fgetc(readf);
    fscanf(readf,"%[^\n]",info4.phone);
    if(strlen(info4.name) == 0 && strlen(info4.phone) == 0){
        printf("4.Is empty\n");
             }
             fclose(readf);
    }
    else if(f == 5){
        rewind(readf);    
        fscanf(readf,"%[^\n]",info5.name);
    fgetc(readf);
    fscanf(readf,"%[^\n]",info5.phone);
    if(strlen(info5.name) == 0 && strlen(info5.phone) == 0){
        printf("5.Is empty\n");\
        printf("----------------------------------------------------------------\n\n\n");
             }
             fclose(readf);
    }
   }
   printf("   -----------------------------------------------\n");
    printf("                      Contact                      \n");
    printf("   -----------------------------------------------\n");
printf("Your Contact:\n");
printf("1. Contact: %s, Phone Number: %s\n",info1.name,info1.phone);
printf("2. Contact: %s, Phone Number: %s\n",info2.name,info2.phone);
printf("3. Contact: %s, Phone Number: %s\n",info3.name,info3.phone);
printf("4. Contact: %s, Phone Number: %s\n",info4.name,info4.phone);
printf("5. Contact: %s, Phone Number: %s\n",info5.name,info5.phone);
    printf("----------------------------------------------\n");
    printf("Press 1 To Make a new Contact.\n");
    printf("Press 2 To Empty Content of a Contact (Empty the file contect)\n");
    printf("Press 3 To Exit\n");
    printf("Press 4 To See Credits\n");
    printf(": ");
    fgets(input, 50, stdin);
    if(strcmp(input, "1\n") == 0){
        system("cls");
        printf("choose a place to save your contact:\n");
        printf("1. ");
        printcontact(info1);
        printf("\n");
        printf("2. ");
        printcontact(info2);
        printf("\n");
        printf("3. ");
        printcontact(info3);
        printf("\n");
        printf("4. ");
        printcontact(info4);
        printf("\n");
        printf("5. ");
        printcontact(info5);
        printf("\n");
        printf("?. No more Contact place available for this placement...\n");
        printf("Type The Number Above Of Which Place That You Want To Save:");
        fgets(numchoice,10,stdin);
        if(strcmp(numchoice,"1\n") == 0){
            save(1);
        }
        else if(strcmp(numchoice,"2\n") == 0){
            save(2);
        }
        else if(strcmp(numchoice,"3\n") == 0){
            save(3);
        }
        else if(strcmp(numchoice,"4\n") == 0){
            save(4);
        }
        else if(strcmp(numchoice,"5\n") == 0){
            save(5);
        }
        else{
            printf("Error 03: You Have Entered A Invalid Choice Or You Have Entered A Choice That Is Not Avaible In The Section Or You Might Break The Input Buffer.\n");
            return 0;
        }
printf("Would You Like To Go Back To The Menu? (type: yes or no : to continue) : ");
fgets(choices,5,stdin);
if(strcmp(choices, "yes\n") == 0){
      for(int counti = 3; counti > 0; counti--){
        system("cls");
        printf("%d Seconds Until Going Back To The Menu...\n",counti);
        sleep(1);
      }
      continue;
    }
    else if(strcmp(choices,"no\n") == 0){
        system("cls");
        printf("Press Enter To Exit:");
        fgets(choicesno,3,stdin);
        if(strcmp(choicesno,"\n") == 0){
return 0;
        }
    }
else{
printf("Error 01: You might enter the wrong input (Restart Program and Try Again)\n");
return 0;
}
    }
    else if(strcmp(input,"2\n") == 0){
        system("cls");
        printf("Which contact do you want to emptied and delete?\n");
        printf("1. %s\n",info1.name);
        printf("2. %s\n",info2.name);
        printf("3. %s\n",info3.name);
        printf("4. %s\n",info4.name);
        printf("5. %s\n",info5.name);
        fgets(delete,10,stdin);
        if(strcmp(delete,"1\n") == 0){
            FILE *rf = fopen("name1.txt","w");
            fclose(rf);
            remove("name1.txt");
            system("cls");
            printf("WARNING: Emptied/Deleted Contect of a contact will be gone forever!!! But you still can add it again\n");
            printf("Would You Still Like To Empty and Delete %s Contact? (type yes/no to proceed) ",info1.name);
            fgets(indelete,10,stdin);
            if(strcmp(indelete,"yes\n") == 0){
                system("cls");
                printf("Contact Emptied and Deleted\n");
                printf("(REMINDER DELETE .TXT FILE IF DONT NEED IT AND RUN PROGRAM BACK TO CONTINUE...)\n");
                printf("Press Enter To exit:");
                fgets(indelete,10,stdin);
                if(strcmp(indelete,"\n") == 0){
                    printf("Exited And Deleted Successfully\n");
                }
                    return 0; 
            }
        }
                if(strcmp(delete,"2\n") == 0){
            system("cls");
            printf("WARNING: Emptied/Deleted Contect of a contact will be gone forever!!! But you still can add it again\n");
            printf("Would You Still Like To Empty and Delete %s Contact? (type yes/no to proceed) ",info1.name);
            fgets(indelete,10,stdin);
            if(strcmp(indelete,"yes\n") == 0){
               FILE *rf = fopen("name2.txt","w");
                fclose(rf);
                remove("name2.txt");
                 system("cls");
                 printf("Contact Emptied and Deleted\n");
                 printf("(REMINDER DELETE .TXT FILE IF DONT NEED IT AND RUN PROGRAM BACK TO CONTINUE...)\n");
                 printf("Press Enter To exit:");
                 fgets(indelete,10,stdin);
                 if(strcmp(indelete,"\n") == 0){
                    remove("name2.txt");
                     printf("Exited And Deleted Successfully\n");
                 }
                }
                     return 0; 
             }
        }
        if(strcmp(delete,"3\n") == 0){
            system("cls");
            printf("WARNING: Emptied/Deleted Contect of a contact will be gone forever!!! But you still can add it again\n");
            printf("Would You Still Like To Empty and Delete %s Contact? (type yes/no to proceed) ",info1.name);
            fgets(indelete,10,stdin);
            if(strcmp(indelete,"yes\n") == 0){
                FILE *rf = fopen("name3.txt","w");
                fclose(rf);
                remove("name3.txt");
                 system("cls");
                 printf("Contact Deleted\n");
                 printf("(REMINDER DELETE .TXT FILE IF DONT NEED IT AND RUN PROGRAM BACK TO CONTINUE...)\n");
                 printf("Press Enter To exit:");
                 fgets(indelete,10,stdin);
                 if(strcmp(indelete,"\n") == 0){
                     printf("Exited And Deleted/Emptied Successfully\n");
                 }
                     return 0; 
             }
            }
        if(strcmp(delete,"4\n") == 0){
            system("cls");
            printf("WARNING: Emptied/Deleted Contect of a contact will be gone forever!!! But you still can add it again\n");
            printf("Would You Still Like To Empty and Delete %s Contact? (type yes/no to proceed) ",info1.name);
            fgets(indelete,10,stdin);
            if(strcmp(indelete,"yes\n") == 0){
                FILE *rf = fopen("name4.txt","w");
                fclose(rf);
                remove("name4.txt");
                    system("cls");
                    printf("Contact Deleted\n");
                    printf("(REMINDER DELETE .TXT FILE IF DONT NEED IT AND RUN PROGRAM BACK TO CONTINUE...)\n");
                    printf("Press Enter To exit:");
                    fgets(indelete,10,stdin);
                    if(strcmp(indelete,"\n") == 0){
                        printf("Exited And Deleted/Emptied Successfully\n");
                    }
                     return 0; 
             }
        }
        if(strcmp(delete,"5\n") == 0){
            system("cls");
            printf("WARNING: Emptied and Deleted Contact of a contact will be gone forever!!! But you still can add it again\n");
            printf("Would You Still Like To Empty and Delete %s Contact? (type yes/no to proceed) ",info1.name);
            fgets(indelete,10,stdin);
            if(strcmp(indelete,"yes\n") == 0){
                FILE *rf = fopen("name5.txt","w");
                fclose(rf);
                remove("name5.txt");
                 system("cls");
                 printf("Contact Deleted\n");
                 printf("(REMINDER DELETE .TXT FILE IF DONT NEED IT AND RUN PROGRAM BACK TO CONTINUE...)\n");
                 printf("Press Enter To exit:");
                 fgets(indelete,10,stdin);
                 if(strcmp(indelete,"\n") == 0){
                     printf("Exited And Deleted/Emptied Successfully\n");
                 }
                     return 0; 
        }
    else if(strcmp(input, "3\n") == 0){
        system("cls");
        printf("Exiting...\n");
        printf("Press Enter To Exit:");
        fgets(inputexit,5,stdin);
        if(strcmp(inputexit, "\n") == 0){
            return 0;
        }
    }
    printf("exited or back to menu....\n");
}
else if(strcmp(input,"4\n") == 0){
    system("cls");
    system("color 0F"); // Back to default color (Black And White)
    printf("Developer: SyefC/Boomplay\n");
    printf("Programming Language That Made This Program: C\n");
    printf("Programming Language Professions: C, Javascript (JS only a bit)\n");
    printf("Compiler: MinGW32 (GCC)\n");
    printf("Code Source Uploaded In: Github\n");
    printf("Project made in OS: Windows 11 Home Single Language\n");
    printf("OS Version: 24H2\n");
    printf("OS Build: 26100.3775");
    printf("Device: Desktop");
    printf("Helper: AI (only asking how to do this and do that and explain how do the functions/it work so its learning and knowing)\n");
    printf("Time Spend Making this: 1 Month and 11 days :) \n");
    printf("Line Of Code: 400+ Lines\n");
    printf("Code Editor: VsCode\n");
    printf("press enter to go back to menu:");
    fgets(securitys,2,stdin);
    if(strcmp(securitys,"\n") == 0){
        continue;
    }
}
return 0;
}
}