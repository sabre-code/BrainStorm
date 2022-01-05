
// Menu Driven Program for To do List
#include <stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp, *ft;
    char another, choice,stater;
    char task[40];
    char found = 'n';
    long int size;
    int taskd;
    struct todolist
    {
        int taskId;
        char task[50];
        int stat;
    }todo;
    
    fp = fopen("fileToDoList.DAT", "rb+");
    if (fp == NULL)
    {
        fp = fopen("fileToDoList.DAT", "wb+");

        if (fp == NULL)
        {
            puts("Cannot open file");
            exit(0);
        }
    }
    size = sizeof(todo);
    while (1)
    {
        
        printf("\n\t......................................................");
        printf("\n\n\t\t      To-do List Application");
        printf("\n\t......................................................");
        printf("\n\t................ M A I N  M E N U ....................");
        printf("\n\n\t   1. Add Task to List");
        printf("\n\t   2. Display the To-do List");
        printf("\n\t   3. Mark Task as Done");
        printf("\n\t   4. Modify Task");
        printf("\n\t   5. Delete Task");
        printf("\n\t   6. Exit From Menu");
        printf("\n\t......................................................");
        printf("\n\n\tEnter Choice: ");
        fflush(stdin);
        choice = getchar();

        switch (choice)
        { // Add Task
        case '1':
            fseek(fp, 0, SEEK_END);
            another = 'Y';

            while (another == 'Y' || another == 'y')
            {
                printf("\n\tEnter Task No : ");
                scanf("%d", &todo.taskId);
                fflush(stdin);
                printf("\n\tEnter task : ");
                scanf("%[^\n]%*c", todo.task);
                //gets(todo.task);
                todo.stat = 0;
                fwrite(&todo,size,1, fp);

                printf("\n\tAdd another Task (Y/N): ");
                fflush(stdin);
                another = getchar();
            }
            break;

        case '2': // /List/ Display Record

            rewind(fp); // Sets pointer at begining of file

            printf("\n\t--------------------------------------------------------------------");
            printf("\n\t                          To-do List");
            printf("\n\t--------------------------------------------------------------------");
            printf("\n\t Task Id |                   Task                   |    Status");
            printf("\n\t--------------------------------------------------------------------");
            while (fread(&todo,size,1, fp) == 1)
            {
                if(todo.stat == 0)
                    printf("\n\t   %d\t |  %-37s   |  Incomplete", todo.taskId, todo.task);
                else
                    printf("\n\t   %d\t |  %-37s   |  Done", todo.taskId, todo.task);
            }
            printf("\n\t-------------------------------------------------------------------");
            fflush(stdin);
            printf("\n\n\n\tPRESS ENTER TO CONTINUE.......");
            getchar();
            break;


        case '3': // Mark as Done

            rewind(fp);

            printf("\nEnter Task Id to Mark as Done : ");
            scanf("%d",&taskd);

            while (fread(&todo,size, 1, fp) == 1)
            {

                if (taskd == todo.taskId)
                {
                    printf("\nDo you want to mark task as done? (Y/N): ");
                    fflush(stdin);
                    stater = getchar();
                    if(stater == 'Y' || stater == 'y')
                        todo.stat = 1;
                    else
                        todo.stat = 0;
                    fseek(fp, -size, SEEK_CUR); 
                    fwrite(&todo,size, 1, fp);
                    break;
                }
            }

            printf("\n\n\n\tPRESS ENTER KEY TO EXIT.......");
            getchar();
            break;

        case '4': //  Modify

            rewind(fp);

            printf("\nEnter taskId to Modify: ");
            scanf("%d",&taskd);

            while (fread(&todo,size, 1, fp) == 1)
            {

                if (taskd == todo.taskId)
                {
                    printf("\n\tEnter New taskId : ");
                    scanf("%d", &todo.taskId);
                    fflush(stdin);
                    printf("\n\tEnter New task : ");
                    gets(todo.task);
                    fseek(fp, -size, SEEK_CUR);

                    fwrite(&todo,size, 1, fp);
                    //fprintf(fp," ---->  Done")
                    printf("\nTask Updated Succesfully .......!");
                    break;
                }
            }

        case '5': // Delete Task

            another = 'Y';

            printf("\nEnter taskId to Delete :  ");
            scanf("%d", &taskd);

            ft = fopen("fileToDoList1.DAT", "w");
            rewind(fp);
            while (fread(&todo,size, 1, fp) == 1)
            {
                if (taskd != todo.taskId)
                    fwrite(&todo,size, 1, ft);
            }

            fclose(fp);
            fclose(ft);
            remove("fileToDoList.DAT");
            rename("fileToDoList1.DAT", "fileToDoList.DAT");

            printf("\n Task Deleted Succesfully !!");
            fp = fopen("fileToDoList.DAT", "rb+");

            printf("\n\n\n\tPRESS ENTER KEY TO CONTINUE.......");
            getchar();
            break;

        case '6': // Exit Menu
            fclose(fp);
            exit(0);
        } 
    }     
} 
