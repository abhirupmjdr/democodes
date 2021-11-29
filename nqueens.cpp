int ans=0;

bool isSafe(int row,int col,vector<vector<bool> > &board){
    int n=board.size();
    //chechking up direction
    for(int i=row-1;i>=0;i--){
        if(board[i][col])
            return false;
    }   
    //chechking  left diagonal
    for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--){
        if(board[i][j]) 
            return false;
    }
       
    //checking right diagonal
    for(int i=row-1,j=col+1;i>=0 and j<n;i--,j++){
        if(board[i][j]) 
            return false;
    }
        
    return true;

}


void n_queens(int n,int i,vector<vector<bool> > &board){
    if(i==n){
        for(auto &el: board){
            for(int i=0;i<n;i++){
                if(el[i]==true) cout << "Q";
                else cout << ".";
            }
            cout <<"\n";
        }
        cout <<"\n----------------------\n";
        ans++;
        return;
    }

    for(int j=0;j<n;j++){
        if(isSafe(i,j,board)){
            board[i][j]=true;
            n_queens(n,i+1,board);
            board[i][j]=false;
        }
    }
}