void staircase(int n) {
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            if(j != i){
                cout<<" ";
            }
            if(j == i){
                for(int k=i;k<=n;k++){
                        cout<<"#";
                         }
            }
            
        }
    
        cout<<"\n";
    }

}