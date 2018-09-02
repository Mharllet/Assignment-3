#include <iostream>
using namespace std;

int main()

{

int mark;

cout<<"Enter student's mark";
cin >>mark;

if(mark>=80 && mark<=100)
{


cout<<"Grade=A";


}


else if(mark>=75 && mark<79)
{


cout<<"Grade=B+";

}


else if(mark>=70 && mark<=74)
{


cout<<"Grade=B";
}


else if(mark>=65 && mark<=69)
{


cout<<"Grade=C+";

}


else if(mark>=60 && mark<=64)
{


cout<<"Grade=C";

}


else if(mark>=55 && mark<=59)
{


cout<<"Grade=D+";
}

else if(mark>=50 && mark<=54)
{

cout<<"Grade=D";

}

else if(mark>=40 && mark<=49)

{

cout<<"Grade=E";

}

else

{
cout<<"Grade=F";

}

return 0;
}


#Assignment-3
