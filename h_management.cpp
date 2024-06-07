#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int q;
    int c;
    //variable declaration of quantity of items
    int qrooms=0,qidli=0,qvada=0,qdosa=0,qbajji=0,qupma;
    //variable declaration of selection of items
    int srooms=0,sidli=0,svada=0,sdosa=0,sbajji=0,supma;
    //variable declaration of total number of items
    int trooms=0,tidli=0,tvada=0,tdosa=0,tbajji=0,tupma;
    cout<<"\t\t\tUdipi hotel";
    //Taking the input of the items
    cout<<"\n\nplease enter the available items";
    cout<<"\n\n no of rooms available\n";
    cin>>qrooms;
    cout<<"no of idlis available\n";
    cin>>qidli;
    cout<<"no of upma available\n";
    cin>>qupma;
    cout<<"no of vadas available\n";
    cin>>qvada;
    cout<<"no of dosa available\n";
    cin>>qdosa;
    cout<<"no of bajji available\n";
    cin>>qbajji;
    m:
    cout<<"\nplease select the number you want\n1.rooms\n2.idli\n3.upma\n4.vada\n5.dosa\n6.bajji\n7.total sales\n8.exit";
    cin>>c;

    switch(c)
    {
    case 1:
        cout<<"select the no of rooms you want:"<<endl;
        cin>>q;
        if(qrooms-srooms>=q)
        {
            cout<<"you have selected:"<<q<<"rooms";
            srooms=q+srooms;
            trooms=trooms+q*1000;
            break;

        }
        else
        {
            cout<<"only "<<qrooms<<" rooms available";
            break;
        }
        case 2:
            cout<<"select the no of idlis you want:"<<endl;
            cin>>q;
            if(qidli-sidli>=q)
            {
                cout<<"you have selected:"<<q;
                tidli=tidli+q*20;
                qidli=qidli+q;
                break;
            }
            else
            {
                cout<<"only "<<qidli<<" idli available";
                goto m;
            }
        case 3:
        cout<<"select the no of upmas you want:"<<endl;
        cin>>q;
        if(qupma-supma>=q)
        {
            cout<<"you have selected:"<<q<<"upmas";
            tupma=tupma+q*25;
            qupma=qupma+q;
            break;
        }
        else
        {
            cout<<"only "<<qupma<<" upma available";
        }
        case 5:
        cout<<"select the no of dosas you want:"<<endl;
        cin>>q;
        if(qdosa-sdosa>=q)
        {
            cout<<"you have selected:"<<q;
            tdosa=tdosa+q*40;
            qdosa=qdosa+q;
            break;
        }
        else
        {
            cout<<"only "<<qdosa<<" dosa available";
        }
        case 4:
        cout<<"select the no of vadas you want:"<<endl;
        cin>>q;
        if(qvada-svada>=q)
        {
            cout<<"you have selected:"<<q;
            tvada=tvada+q*30;
            qvada=qvada+q;
            break;
        }
        else
        {
            cout<<"only "<<qvada<<" vada available";
        }
        case 6:
        cout<<"select the no of bajjis you want:"<<endl;
        cin>>q;
        if(qbajji-sbajji>=q)
        {
            cout<<"you have selected:"<<q;
            tbajji=tbajji+q*25;
            qbajji=qbajji+q;
            break;
        }
        else
        {
            cout<<"only "<<qbajji<<" bajji available";
        }
        case 7:
                cout<<"\ntotal sales\n";
                cout<<"\nno of rooms we have:"<<qrooms;
                cout<<"\nno of rooms we sold:"<<srooms;
                cout<<"\nno of rooms remainin:"<<qrooms-srooms;
                cout<<"\nno of sales:"<<trooms;
                //idli total sales
                cout<<"\nno of idli we have:"<<qidli;
                cout<<"\nno of idli we sold:"<<sidli;
                cout<<"\nno of idli remainin:"<<qidli-sidli;
                cout<<"\nno of sales:"<<tidli;
            	cout<<"\ntotal sales\n";
            cout<<"\nno of vada we have:"<<qvada;
            cout<<"\nno of vada we sold:"<<svada;
            cout<<"\nno of vada remainin:"<<qvada-svada;
            cout<<"\nno of sales:"<<tvada;
            	cout<<"\ntotal sales\n";
            cout<<"\nno of dosa we have:"<<qdosa;
            cout<<"\nno of dosa we sold:"<<sdosa;
            cout<<"\nno of dosa remainin:"<<qdosa-sdosa;
            cout<<"\nno of sales:"<<tdosa;
            	cout<<"\ntotal sales\n";
            cout<<"\nno of bajji we have:"<<qbajji;
            cout<<"\nno of bajji we sold:"<<sbajji;
            cout<<"\nno of bajji remainin:"<<qbajji-sbajji;
            cout<<"\nno of sales:"<<tbajji;
            	cout<<"\ntotal sales\n";
            cout<<"\nno of upma we have:"<<qupma;
            cout<<"\nno of upma we sold:"<<supma;
            cout<<"\nno of upma remainin:"<<qupma-supma;
            cout<<"\nno of sales:"<<tupma;
        case 8:
            exit(0);
        default:

            {
                cout<<"please give the proper input";
            }

    }
    goto m;
}
