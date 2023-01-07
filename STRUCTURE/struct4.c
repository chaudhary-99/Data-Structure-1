/*4. Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.*/
#include<stdio.h>
struct height{
	int feet;
	int  inche;
	
};
int main(){
	struct height h1={13,11};
	struct height h2={7,8};
    struct height h;
    h.inche=(h1.inche+h2.inche)%12;	
	int x=(h1.inche+h2.inche)/12;
	h.feet=h1.feet+h2.feet+x;
	printf("%d  %d",h.feet,h.inche);
	return 0;
}