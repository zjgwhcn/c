#if 0
问个简单的C语言问题。。作业。。（已解决）

本帖最后由 a165645931 于 2011-12-2 17:11 编辑
#include "stdio.h"
int a=0;
main()
{
b:printf ("\nplease input a number to select:\n\n");
printf ("\n================================Demonstration===================================\n\n");
printf ("\t1.Inversion of one-dimensional array\n\t2.Yang Hui triangle\n\t3.String extraction\n\t4.List insert\n");
printf ("\n================================Source code====================================\n");
printf ("\n\t5.Inversion of one-dimensional array Source code");
printf ("\n\t6.Yang Hui triangle Source code");
printf ("\n\t7.String extraction Source code");
printf ("\n\t8.List insert Source code\n\n");
printf ("===============================================================================\n");
printf ("\n\t9.HELP and this Source code\n\n");
printf ("===============================================================================\n");
printf ("please input:");
scanf ("%d",&a);
if (a==1)
{system( "1-1\\RESULT\\1-1.EXE");}
else if (a==2)
{system( "1-4\\RESULT\\1-4.EXE"); }
else if (a==3)
{system( "1-18\\RESULT\\1-18.EXE"); }
else if (a==4)
{system( "1-37\\RESULT\\1-37.EXE");}
else if (a==5)
{system( "notepad 1-1\\CODE\\c1-1.txt");   }
else if (a==6)
{system( "notepad 1-4\\CODE\\c1-4.txt");   }
else if (a==7)
{system( "notepad 1-18\\CODE\\c1-18.txt");    }
else if (a==8)
{system( "notepad 1-37\\CODE\\c1-37.txt");     }
else if (a==9)
{system( "notepad help.txt");     }
else if (a>9||a<=0){
printf ("\n\nyou input:%d,it's wrong!",a);
goto b;
}
getch();
}
这个是想错误后跳转到B标记 但是用GOTO跳的时候输入数字可以正常识别 但是输入任意字母 就直接死循环了。。
求解决。。谢谢~

谢谢ROOKIET。。。直接fflush(stdin);清空一下就行了
也谢谢各位的帮忙哈~！ 
修改好的源码如下：
#endif

#include "stdio.h"
int a=0;
main()
{
b:printf ("\nplease input a number to select:\n\n");
printf ("\n================================Demonstration===================================\n\n");
printf ("\t1.Inversion of one-dimensional array\n\t2.Yang Hui triangle\n\t3.String extraction\n\t4.List insert\n");
printf ("\n================================Source code====================================\n");
printf ("\n\t5.Inversion of one-dimensional array Source code");
printf ("\n\t6.Yang Hui triangle Source code");
printf ("\n\t7.String extraction Source code");
printf ("\n\t8.List insert Source code\n\n");
printf ("===============================================================================\n");
printf ("\n\t9.HELP and this Source code\n\n");
printf ("===============================================================================\n");
printf ("please input:");
scanf ("%d",&a);
if (a==1)
{system( "1-1\\RESULT\\1-1.EXE");}
else if (a==2)
{system( "1-4\\RESULT\\1-4.EXE"); }
else if (a==3)
{system( "1-18\\RESULT\\1-18.EXE"); }
else if (a==4)
{system( "1-37\\RESULT\\1-37.EXE");}
else if (a==5)
{system( "notepad 1-1\\CODE\\c1-1.txt");   }
else if (a==6)
{system( "notepad 1-4\\CODE\\c1-4.txt");   }
else if (a==7)
{system( "notepad 1-18\\CODE\\c1-18.txt");    }
else if (a==8)
{system( "notepad 1-37\\CODE\\c1-37.txt");     }
else if (a==9)
{system( "notepad help.txt");     }
else if (a>9||a<=0){
printf ("\n\nyou input:%d,it's wrong!",a);
fflush(stdin);
goto b;
}
getch();
}
