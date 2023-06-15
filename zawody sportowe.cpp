#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream plik;
    plik.open("dziennik.txt");
    int ile =1, seria =0, maxi =0, mini =2000, jakmaxi, jakimini, co = 0, maxco =0, ostatnie, mozliwpierwszy, pierwszy, roznica;
    int tab[310];
    for (int i =0; i<310; i++)
    {
        plik>>tab[i];
    }
    for (int y =0; y<309; y++)
    {
        if(tab[y]<tab[y+1])
        {
            ile++;

        }
        else
        {
            if(ile>3)
            {
                seria++;
            }
            ile = 1;
        }
    }
cout<<"5.1 " << seria << endl;
for (int c =0; c<310; c++)
    {
        if(tab[c]>maxi)
        {
            maxi = tab[c];
            jakmaxi = c;
        }
        if(tab[c]<mini)
        {
            mini = tab[c];
            jakimini = c;
        }

    }
cout <<"5.2 "<< maxi << " "<< jakmaxi +1<<" "<<mini << " "<< jakimini+1<< endl;
for (int z =0; z<309; z++)
    {
        if(tab[z]<tab[z+1])
        {
            co++;
            if(co>maxco)
            {
                maxco = co;
                ostatnie = tab[z+1];
                pierwszy = tab[z - maxco +2];
                roznica = ostatnie - pierwszy;

            }
        }
        else
        {
            co = 1;
        }
    }

cout <<"5.3 " << maxco << " "<< roznica << endl;

}
