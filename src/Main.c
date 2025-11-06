#if defined(__linux__)
#include "/home/codeleaded/System/Static/Library/ObjectNotation.h"
#elif defined(_WINE)
#include "/home/codeleaded/System/Static/Library/ObjectNotation.h"
#elif defined(_WIN32)
#include "F:/home/codeleaded/System/Static/Library/ObjectNotation.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif

int main(){
    
    Table t = Table_New();

    Table_Parse(&t,"./data/ObjectNotation.alxon");

    //Entry* e = Table_Access_Entry(&t,"/Hello/Hell0/Lol",'/');
    
    Entry* e = Table_Access_Entry(&t,"/Lol0/1/Lol2",'/');
    printf("Data Found: ");
    if(e) printf("%s = %s\n",e->Name,e->Value);
    else  printf("NONE!\n");

    Table_Print(&t);
    Table_Write(&t,"./data/ObjectNotation.alxon");

    Table_Free(&t);

    return 0;
}