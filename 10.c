#include<stdio.h>
int main()
{
  int a,n=0,p=0,z=0,i=1,m;
  char d;
  do
 {
     printf("enter a number");
     scanf("%d",&m);
     if(m>0)
     {
       p++;
      }
     else if(m<0)
     {
        n++;
      }
     else
     {
        z++;
      } 
     i++;
     printf("do you wish to give more inputs,ENTER y for yes AND N FOR NO");
     scanf(" %c",&d);
     if(d=='n'||d=='N')
     break;
  }while(d=='y'||d=='Y');
    printf("%d postive numbers %d negative number %d zero",p,n,z);
}




<style>
header {
  width: 100%;
  display: flex;
  padding: 2px;
  justify-content: space-between;
  align-items: center;
}

.links {
  display: flex;
  list-style: none;
}

.links li {
    margin-left: 2px;
    margin-right: 2px;
}
</style>
<header>
  <img width="100px" height="100px" src="https://picsum.photos/100/100" >

  <ul class="links">
    <li> Link1</li>
    <li> Link2</li>
    <li> Link3</li>
    <li> Link4</li>
  </ul>

</header>
