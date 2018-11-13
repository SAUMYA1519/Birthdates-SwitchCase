/*
*   Author Name     :       Saumya Singh
*   Aim             :       To demonstrate the use of switch case
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your birthday\n");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
                   printf("You have an outstanding personality,full of commitment and creativity");
                   break;
        case 2:
                   printf("You are a dreamer with high imagination power intellect");
                   break;
        case 3:
                   printf("You are a hardy person and you wont give up until you put all your strength");
                   break;
        case 4:
                   printf("You are born to be leader but with the help of consultation. You can easily stand hard storms");
                   break;
        case 5:
                   printf("You are believed to serve as a good omen.You are a really friendly person");
                   break;
        case 6:
                   printf("You have a charismatic personality");
                   break;
        case 7:
                   printf("You have a quiet personality,charming and a natural inclination to study yourself");
                   break;
        case 8:
                   printf("You have great energy, you are capable of great deeds.You have a great capability to handle money");
                   break;
        case 9:
                   printf("You are idealistic,compassionate and give appropriate conclusion.You are extremely sensitive for each event in your life.");
                   break;
        case 10:
                   printf("You are energetic, self-sufficient, cheerful. You have analytic mind.");
                   break;
        case 11:
                   printf("You have deep intuition and pretty much idealistic. You create your own opportunity.");
                   break;
        case 12:
                   printf("You have a great self-confidence and you intuitively understand the world around you.");
                   break;
        case 13:
                   printf("You fearlessly any new responsibilities.Your business ideas and conclusions are usually very perceptive.");
                   break;
        case 14:
                   printf("You love change, excitement and travel.You are original and practical.");
                   break;
        case 15:
                   printf("You are highly creative and artistic. You also have a gift for languages.");
                   break;
        case 16:
                  printf("Your over-powering orientation is toward the philosophical and spiritual aspects of life. You are driven to understand the unseen world.");
                  break;
        case 17:
                  printf("You are highly ambitious, and blessed with excellent business and financial instincts.");
                  break;
        case 18:
                  printf("You are a born leader, an efficient manager, capable of organizing and inspiring others.");
                  break;
        case 19:
                  printf("You are highly determined and yearn for independence. You tend to struggle to achieve the degree of self-sufficiency");
                  break;
        case 20:
                   printf("You are highly sensitive and very impressionable. You possess great awareness and can sense the feelings of others");
                   break;
        case 21:
                   printf("You are highly creative, with a strong will to succeed. You have a social gift.");
                   break;
        case 22:
                   printf("You have great potential as a leader, organizer, or builder of an institution or business. You have a vision and the capability to materialize it.");
                   break;
        case 23:
                   printf("You love change and excitement and need both to feel truly alive. For you, life is an adventure, to be lived to the fullest.");
                   break;
        case 24:
                   printf("You are family-oriented, with a gift for restoring and maintaining balance and harmony in relationships.");
                   break;
        case 25:
                   printf("You possess a sound, rational mind and keen insight. You are logical and intellectual in your approach to life.");
                   break;
        case 26:
                   printf("You have a good sense of money and a talent for business. Your approach to business is original, creative and daring.");
                   break;
        case 27:
                   printf("You are a born leader, an efficient manager, capable of organizing and inspiring others.");
                   break;
        case 28:
                   printf("You possess a gift for leadership, but it is employed best through cooperative effort.");
                   break;
        case 29:
                   printf("You are highly intuitive and creative. Your mind thinks in pictures.");
                   break;
        case 30:
                   printf("You have a highly developed creative talent. You are an artist at heart.");
                   break;
        case 31:
                   printf("You have a great love of family, tradition and community.");
                   break;
        default  : printf("Sorry your choice is not in the calendar!!Please enter your correct birth date.");
    }
    return 0;
}


