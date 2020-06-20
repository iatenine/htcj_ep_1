#include<stdio.h>

char * get_planet(int);
char * planets[9] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter",
"Saturn", "Uranus", "Neptune", "Pluto"};

int main(){
    for(int i = 0; i < 10; i++){
        printf("%s", get_planet(i));
        printf("\n");
    }
    return 0;
}

char * get_planet(int index){
    if(index >= 0 && index <= 8){
        return planets[index];
    }
    else{
        return "I HATE YOU!!";
    }
}