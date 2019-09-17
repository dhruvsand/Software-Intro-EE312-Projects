#include<stdio.h>

// Song.c -- EE 312 Project 2

/* Student information for project:
 *
 * Replace Dhruv Sandesara with your name.
 *
 * On my honor, Dhruv Sandesara this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name: Dhruv Sandesara
 * email address: dhruvsand@yahoo.com
 * UTEID:djs3967
 * Section 5 digit ID:16130
 * Number of slip days used on this assignment.
 */



void fly_chorus(){
    printf("I don\'t know why she swallowed that fly,\n");
    printf("Perhaps she\'ll die.\n\n");
}

void fly_special(){
    printf("There was an old woman who swallowed a fly.\n");
    fly_chorus();
}

void spider_chorus(){
    printf("She swallowed the spider to catch the fly,\n");
    fly_chorus();
}

void spider_special(){
    printf("There was an old woman who swallowed a spider,\n");
    printf("That wriggled and iggled and jiggled inside her.\n");
    spider_chorus();

}

void bird_chorus(){
    printf("She swallowed the bird to catch the spider,\n");
    spider_chorus();
}

void bird_special(){
    printf("There was an old woman who swallowed a bird,\n");
    printf("How absurd to swallow a bird.\n");
    bird_chorus();

}

void cat_chorus(){
    printf("She swallowed the cat to catch the bird,\n");
    bird_chorus();
}

void cat_special(){
    printf("There was an old woman who swallowed a cat,\n");
    printf("Imagine that to swallow a cat.\n");
    cat_chorus();

}

void dog_chorus(){
    printf("She swallowed the dog to catch the cat,\n");
    cat_chorus();
}

void dog_special(){
    printf("There was an old woman who swallowed a dog,\n");
    printf("What a hog to swallow a dog.\n");
    dog_chorus();

}

void goat_chorus(){
    printf("She swallowed the goat to catch the dog,\n");
    dog_chorus();
}

void goat_special(){
    printf("There was an old woman who swallowed a goat,\n");
    printf("She just opened her throat to swallow a goat.\n");
    goat_chorus();

}

void cow_chorus(){
    printf("She swallowed the cow to catch the goat,\n");
    goat_chorus();
}

void cow_special(){
    printf("There was an old woman who swallowed a cow,\n");
    printf("I don\'t know how she swallowed a cow.\n");
    cow_chorus();

}

void horse_special(){
    printf("There was an old woman who swallowed a horse,\n");
    printf("She died of course.\n");

}






int main(){
    fly_special();
    spider_special();
    bird_special();
    cat_special();
    dog_special();
    goat_special();
    cow_special();
    horse_special();
    return 0;





}