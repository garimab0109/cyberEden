#include <iostream>
using namespace std;

int factorial(int num)
            {
                int ans=1;
                for(int i=2;i<=num;i++)
                {
                    ans*=i;
                }
                return ans;
            }


int main()
{
    while(true)
    {
        int x,c;
        int co=1; //Creating a variable to take input for generating a specific pattern
        cout<<"Tell Which Pattern you wish to generate: ";
        cin>>x;
    
        switch(x)//applying switch clause on x to define various conditions
        {
            case 1://printing a basic traingle pattern

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                cout<<endl;
                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<" *";
                    }
                    cout<<'\n';

                }
                cout<<endl;
                break;
            
            case 2://printing a rectangle

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                cout<<endl;
                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=c;j++)
                    {
                        cout<<" *";
                    }
                    cout<<'\n';

                }
                cout<<endl;
                break;

            case 3://printing a hollow rectangle

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                cout<<endl;
                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=c;j++)
                    {
                        if(i==1 || i==c || j==1 || j==c)
                        {
                            cout<<'*';
                        }
                        else{cout<<" ";}
                    }
                    cout<<'\n';

                }
                cout<<endl;
                break;
            
            case 4://reverse triangle

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                cout<<endl;
                for(int i=c;i>=1;i--)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<" *";
                    }
                    cout<<'\n';

                }
                cout<<endl;
                break;
            
            case 5://shifted triangle

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                cout<<endl;
                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=c;j++)
                    {
                        if(j<=c-i)
                        {cout<<" ";}
                        else{cout<<'*';}
                    }
                    cout<<'\n';

                }
                cout<<endl;
                break;
            
            case 6://floyd

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                cout<<endl;
                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<" "<<co<<" ";
                        co++;
                    }
                    cout<<'\n';

                }
                cout<<endl;
                break;

                
            case 7://butterfly 

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<'*';
                    }
                    int sp=(2*c) -(2*i);
                    for(int p=1;p<=sp;p++)
                        {cout<<" ";}
                    for(int j=1;j<=i;j++)
                    {
                        cout<<'*';}

                    cout<<endl;
                    
                }
                for(int i=c;i>=1;i--)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<'*';
                    }
                    int sp=(2*c) -(2*i);
                    for(int p=1;p<=sp;p++)
                        {cout<<" ";}
                    for(int j=1;j<=i;j++)
                    {
                        cout<<'*';}

                    cout<<endl;
                    
                }
                cout<<endl;
                break;
                
            case 8://1-0 triangle

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        if((i+j)%2==0)
                        {
                            cout<<" 1 ";
                        }
                        else
                            cout<<" 0 ";

                    }
                    cout<<endl;
                }
                cout<<endl;
                break;

            case 9://rhombus

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=c-i;j++)
                    {
                        cout<<" ";

                    }
                    for(int p =1;p<=c;p++)
                        cout<<" *";
                    cout<<endl;
                }
                cout<<endl;
                break;

            case 10://number pyramid

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;

                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=c-i;j++)
                    {
                        cout<<"  ";

                    }
                    for(int p=1;p<=i;p++)
                    {
                        cout<<p<<"   ";
                    }
                    cout<<endl;
                }
                cout<<endl;
                break;

            case 11://star

                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;

                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=c-i;j++)
                    {
                        cout<<"  ";

                    }
                    for(int p=1;p<=i;p++)
                    {
                        cout<<"*"<<"   ";
                    }
                    cout<<endl;
                }
                

                for(int i=c;i>=1;i--)
                {
                    for(int j=1;j<=c-i;j++)
                    {
                        cout<<"  ";

                    }
                    for(int p=1;p<=i;p++)
                    {
                        cout<<"*"<<"   ";
                    }
                    cout<<endl;
                }
                cout<<endl;
                break;

            case 12://zig-zag

                cout<<"Enter no. of elements you wish to have: ";
                cin>>c;

                for(int i=1;i<=3;i++)
                {
                    for(int j=1;j<=c;j++)
                    {
                        if((i+j)%4==0 || (i==2 && j%4==0))
                            cout<<" *";
                        else
                            cout<<"  ";
                    }
                    cout<<endl;
                }  
                cout<<endl;
                break;  

            case 13: //diamond of nothingness 

                cout<<endl;
                cout<<"Enter the no. of layers you wish to add: ";
                cin>>c;
                for(int i=c;i>=1;i--)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<'*';
                    }
                    int sp=(2*c) -(2*i);
                    for(int p=1;p<=sp;p++)
                        {cout<<" ";}
                    for(int j=1;j<=i;j++)
                    {
                        cout<<'*';}

                    cout<<endl;
                    
                }

                
                for(int i=1;i<=c;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<'*';
                    }
                    int sp=(2*c) -(2*i);
                    for(int p=1;p<=sp;p++)
                        {cout<<" ";}
                    for(int j=1;j<=i;j++)
                    {
                        cout<<'*';}

                    cout<<endl;
                    
                }
                break;
                
            case 14: //Pascal`s triangle

                int ll;
                cout<<"Enter No. of Layers you wish to have: ";
                cin>>ll;
                cout<<endl;
                for(int j=0;j<ll;j++)
                {
            
                    for(int b=0;b<=j;b++)
                    {
                        int val=factorial(j)/(factorial(b)*factorial(j-b));
                        cout<<" "<<val;
                    }
                    cout<<endl;
                }
                cout<<endl;
                break;

            case 15: //Palindromic pyramid

                int i, j, rows, k, m;  
                printf (" Enter a number to define the rows: \n");  
                scanf ("%d", &rows);   
                printf("\n");  
                // outer loop define the total rows and i should be less than equal to rows  
                for ( i = 1; i <= rows; i++)  
                {  
                    // inner loop define j should be less than equal to rows- i  
                    for ( j = 1; j <= rows-i; j++)  
                    {     
                        printf (" ");   
                    }  
                    // use for loop where k is less than equal to i  
                    for (m = i; m >1; m--)  
                    {  
                        printf("%d", m); // print the number  
                    } 

                    for ( k = 1; k <= i; k++)  
                    {  
                        printf ("%d", k); // print the number  
                    }  
                     
                    printf ("\n");  
                }  
                break;

            default:
                {
                    cout<<endl;
                    cout<<"Thanks For Using :)";
                    exit(0);
                }
        }

    }
    return 0;}