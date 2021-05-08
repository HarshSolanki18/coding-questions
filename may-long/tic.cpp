#include<bits/stdc++.h>
using namespace std;
#define ll                  long long int
#define vi                  vector <long long int>
#define inf                 1e18
#define mod                 1000000007
#define loop(i,a,b)         for(int i=(a);i<=(b);i++)
#define pb                  push_back
#define vs                  vector <string>
#define endl                "\n"

void checkWinner(char bd[][3],int x,int y){
    bool winx=false,winy=false;
    //row X and O
   loop(i,0,2){
       if(bd[i][0]=='O' and bd[i][1]=='O' and bd[i][2]=='O') winy=true;
       if(bd[i][0]=='X' and bd[i][1]=='X' and bd[i][2]=='X') winx=true;
   } 
   //col X and O
   loop(i,0,2){
       if(bd[0][i]=='X' and bd[1][i]=='X' and bd[2][i]=='X') winx=true;
       if(bd[0][i]=='O' and bd[1][i]=='O' and bd[2][i]=='O') winy=true;

   }
   //diagonals
   if(bd[0][0]=='X' and bd[1][1]=='X' and bd[2][2]=='X') winx=true;
   if(bd[0][2]=='X' and bd[1][1]=='X' and bd[2][0]=='X') winx=true;

   if(bd[0][0]=='O' and bd[1][1]=='O' and bd[2][2]=='O') winy=true;
   if(bd[0][2]=='O' and bd[1][1]=='O' and bd[2][0]=='O') winy=true;
   
   if(winx and winy){
       cout<<3<<endl;
       return;
   }
   if(winx){
       cout<<1<<endl;
       return;
   }
   if(winy){
       cout<<1<<endl;
       return;
   }
   cout<<2<<endl;

}

void isNotValid(char bd[][3]){
    int x=0,y=0;
    loop(i,0,2){
        if(bd[i][0]=='X') x++;
        if(bd[i][0]=='O') y++;
        
        if(bd[i][1]=='X') x++;
        if(bd[i][1]=='O') y++;
        
        if(bd[i][2]=='X') x++;
        if(bd[i][2]=='O') y++;
       
       }
     if(x>y+1){
            cout<<3<<endl;
            return;
        }
        if(y>x+1){
            cout<<3<<endl;
            return;
        }
    checkWinner(bd,x,y); 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin>>t;
    while(t--){
        char board[3][3]={0};
        loop(i,0,2){
            string  str;
            cin>>str;
            board[i][0]=str[0];
            board[i][1]=str[1];
            board[i][2]=str[2];
        }
        isNotValid(board);

         
    }
    return 0;
}