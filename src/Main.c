//#include "C:/Wichtig/System/Static/Library/ObjectNotation.h"
#include "/home/codeleaded/System/Static/Library/ObjectNotation.h"

int main(){
    
    Table t = Table_New();

    Table_Parse(&t,"C:/Wichtig/Hecke/C/Cmd_ObjectNotation/ObjectNotation.alxon");

    //Entry* e = Table_Access_Entry(&t,"/Hello/Hell0/Lol",'/');
    Entry* e = Table_Access_Entry(&t,"/Lol0/1/Lol2",'/');
    printf("Data Found: ");
    if(e) printf("%s = %s\n",e->Name,e->Value);
    else  printf("NONE!\n");

    Table_Print(&t);
    Table_Write(&t,"C:/Wichtig/Hecke/C/Cmd_ObjectNotation/ObjectNotation.alxon");

    Table_Free(&t);

    return 0;
}