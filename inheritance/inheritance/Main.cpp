// This is the Inheritance solution

#include<iostream>
#include<string>

using namespace std;
class Robot
{
   private:
   string cityName,direction;
   int street,avenue;
   int rs,ra;
   public:
   Robot(string city, int str, int ave, string dir)
   {
       cityName=city;
       street=str;
       avenue=ave;
       direction=dir;
       rs=0;
       ra=0;
   }
   int getStreet()
   {
       return rs;
   }
   int getAvenue()
   {
       return ra;      
   }  
   string getDirection()
   {
       return direction;
   }
   string getCityName()
   {
           return cityName;
   }
   void move()
   {
       string dir;
       int pos;
       cout<<"\n Enter direction : ";
       cin>>dir;
       cout<<"\n Enter the number Of blocks to move : ";
       cin>>pos;
       pos;
       if(dir=="east")  
       {
           if((rs+pos)<street)
           {
                   rs=rs+pos;
                   direction="east";
           }
          
           else
           {
               cout<<"\n Invalide Position in this direction"<<endl;
           }
          
           
           printRobotGrid();
       }
       else if(dir=="west")
       {
               if((rs-pos)>=0)
               {
                   rs=rs-pos;
                       direction="west";
               }
               else
           {
               cout<<"\n Invalide Position in this direction"<<endl;
           }
           
           printRobotGrid();
       }
       else if(dir=="north")
       {
           if((ra-pos)>=0)
           {
          
               ra=ra-pos;
                   direction="north";
           }
               else
           {
               cout<<"\n Invalide Position in this direction"<<endl;
           }
           printRobotGrid();
       }
       else if(dir=="south")
       {
               if((ra+pos)<avenue)
               {
              
                           ra=ra+pos;
                               direction="south";
               }
               else
           {
               cout<<"\n Invalide Position in this direction"<<endl;
           }
           printRobotGrid();
       }
   }
   void printRobotGrid()
   {
       int i,j;
       for(i=0;i<street;i++)
       {
           for(j=0;j<avenue;j++)
               cout<<"----";
           cout<<endl<<"|";
           for(j=0;j<avenue;j++)
           {
               if(ra==i&&rs==j)
                   cout<<" X |";
               else
               cout<<" |";
           }
           cout<<""<<endl;
       }
   for(j=0;j<avenue;j++)
               cout<<"----";
   }

  
  
};
int main()
{
   string city;
   int s,a,ch;
   cout<<"\n Enter city name : ";
   cin>>city;
   cout<<"Enter the number of Streets";
   cin>>s;
   cout<<"Enter the number of Avenues";
   cin>>a;
   Robot R(city,s,a,"east");
   R.printRobotGrid();
   while(true)
   {
       cout<<"\n1.Print Robot Data \n2.Print Grid \n3.Move the Robot \n4.Exit";
       cout<<"\nEnter your choice";
       cin>>ch;
       switch(ch)
       {
           case 1:   cout<<"The Robot is "<<R.getAvenue()+1<<" Street "<<R.getStreet()+1<<" Avenue "<<R.getCityName()<<" City";
      break;
           case 2:R.printRobotGrid();
               break;
           case 3:R.move();
               break;
           case 4:exit(0);
               break;
       }
          
   }
  
}