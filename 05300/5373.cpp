#include <iostream>
#include <algorithm>

using namespace std;

int n,T;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> T;
	
	for(int t = 0 ; t < T; t++)
	{
	    int cube[6][3][3] = {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,
	    3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5};
	    
	    cin >> n;
	    
	    for(int i = 0 ; i < n;i++)
	    {
	        char command1;
	        char command2;
	        int temp[3];
	        cin >> command1 >> command2;
	        
	        
	        if(command1 == 'U')
	        {
	            temp[0] = cube[2][0][0];
	            temp[1] = cube[2][0][1];
	            temp[2] = cube[2][0][2];
	            
	            if(command2 == '+')
	            {
	                int temp1 = cube[0][0][0];
	                
	                cube[0][0][0] = cube[0][2][0];
	                cube[0][2][0] = cube[0][2][2];
	                cube[0][2][2] = cube[0][0][2];
	                cube[0][0][2] = temp1;
	                temp1 = cube[0][0][1];
	                cube[0][0][1] = cube[0][1][0];
	                cube[0][1][0] = cube[0][2][1];
	                cube[0][2][1] = cube[0][1][2];
	                cube[0][1][2] = temp1;
	                
	                cube[2][0][0] = cube[5][0][0];
	                cube[2][0][1] = cube[5][0][1];
	                cube[2][0][2] = cube[5][0][2];
	                cube[5][0][0] = cube[3][0][0];
	                cube[5][0][1] = cube[3][0][1];
	                cube[5][0][2] = cube[3][0][2];
	                cube[3][0][0] = cube[4][0][0];
	                cube[3][0][1] = cube[4][0][1];
	                cube[3][0][2] = cube[4][0][2];
	                cube[4][0][0] = temp[0];
	                cube[4][0][1] = temp[1];
	                cube[4][0][2] = temp[2];
	            }
	            else
	            {
	                int temp1 = cube[0][0][0];
	                
	                cube[0][0][0] = cube[0][0][2];
	                cube[0][0][2] = cube[0][2][2];
	                cube[0][2][2] = cube[0][2][0];
	                cube[0][2][0] = temp1;
	                temp1 = cube[0][0][1];
	                cube[0][0][1] = cube[0][1][2];
	                cube[0][1][2] = cube[0][2][1];
	                cube[0][2][1] = cube[0][1][0];
	                cube[0][1][0] = temp1;
	                
	                cube[2][0][0] = cube[4][0][0];
	                cube[2][0][1] = cube[4][0][1];
	                cube[2][0][2] = cube[4][0][2];
	                cube[4][0][0] = cube[3][0][0];
	                cube[4][0][1] = cube[3][0][1];
	                cube[4][0][2] = cube[3][0][2];
	                cube[3][0][0] = cube[5][0][0];
	                cube[3][0][1] = cube[5][0][1];
	                cube[3][0][2] = cube[5][0][2];
	                cube[5][0][0] = temp[0];
	                cube[5][0][1] = temp[1];
	                cube[5][0][2] = temp[2];
	            }
	        }
	        else if(command1 == 'D')
	        {
	            temp[0] = cube[2][2][0];
	            temp[1] = cube[2][2][1];
	            temp[2] = cube[2][2][2];
	            
	            if(command2 == '+')
	            {
	                int temp1 = cube[1][0][0];
	                
	                cube[1][0][0] = cube[1][2][0];
	                cube[1][2][0] = cube[1][2][2];
	                cube[1][2][2] = cube[1][0][2];
	                cube[1][0][2] = temp1;
	                temp1 = cube[1][0][1];
	                cube[1][0][1] = cube[1][1][0];
	                cube[1][1][0] = cube[1][2][1];
	                cube[1][2][1] = cube[1][1][2];
	                cube[1][1][2] = temp1;
	                
	                cube[2][2][0] = cube[4][2][0];
	                cube[2][2][1] = cube[4][2][1];
	                cube[2][2][2] = cube[4][2][2];
	                cube[4][2][0] = cube[3][2][0];
	                cube[4][2][1] = cube[3][2][1];
	                cube[4][2][2] = cube[3][2][2];
	                cube[3][2][0] = cube[5][2][0];
	                cube[3][2][1] = cube[5][2][1];
	                cube[3][2][2] = cube[5][2][2];
	                cube[5][2][0] = temp[0];
	                cube[5][2][1] = temp[1];
	                cube[5][2][2] = temp[2];
	            }
	            else
	            {
	                int temp1 = cube[1][0][0];
	                
	                cube[1][0][0] = cube[1][0][2];
	                cube[1][0][2] = cube[1][2][2];
	                cube[1][2][2] = cube[1][2][0];
	                cube[1][2][0] = temp1;
	                temp1 = cube[1][0][1];
	                cube[1][0][1] = cube[1][1][2];
	                cube[1][1][2] = cube[1][2][1];
	                cube[1][2][1] = cube[1][1][0];
	                cube[1][1][0] = temp1;
	                
	                cube[2][2][0] = cube[5][2][0];
	                cube[2][2][1] = cube[5][2][1];
	                cube[2][2][2] = cube[5][2][2];
	                cube[5][2][0] = cube[3][2][0];
	                cube[5][2][1] = cube[3][2][1];
	                cube[5][2][2] = cube[3][2][2];
	                cube[3][2][0] = cube[4][2][0];
	                cube[3][2][1] = cube[4][2][1];
	                cube[3][2][2] = cube[4][2][2];
	                cube[4][2][0] = temp[0];
	                cube[4][2][1] = temp[1];
	                cube[4][2][2] = temp[2];
	            }
	        }
	        else if(command1 == 'F')
	        {
	            temp[0] = cube[0][2][0];
	            temp[1] = cube[0][2][1];
	            temp[2] = cube[0][2][2];
	            
	            if(command2 == '+')
	            {
	                int temp1 = cube[2][0][0];
	                
	                cube[2][0][0] = cube[2][2][0];
	                cube[2][2][0] = cube[2][2][2];
	                cube[2][2][2] = cube[2][0][2];
	                cube[2][0][2] = temp1;
	                temp1 = cube[2][0][1];
	                cube[2][0][1] = cube[2][1][0];
	                cube[2][1][0] = cube[2][2][1];
	                cube[2][2][1] = cube[2][1][2];
	                cube[2][1][2] = temp1;
	                
	                cube[0][2][0] = cube[4][2][2];
	                cube[0][2][1] = cube[4][1][2];
	                cube[0][2][2] = cube[4][0][2];
	                cube[4][2][2] = cube[1][2][0];
	                cube[4][1][2] = cube[1][2][1];
	                cube[4][0][2] = cube[1][2][2];
	                cube[1][2][0] = cube[5][0][0];
	                cube[1][2][1] = cube[5][1][0];
	                cube[1][2][2] = cube[5][2][0];
	                cube[5][0][0] = temp[0];
	                cube[5][1][0] = temp[1];
	                cube[5][2][0] = temp[2];
	            }
	            else
	            {
	                int temp1 = cube[2][0][0];
	                
	                cube[2][0][0] = cube[2][0][2];
	                cube[2][0][2] = cube[2][2][2];
	                cube[2][2][2] = cube[2][2][0];
	                cube[2][2][0] = temp1;
	                temp1 = cube[2][0][1];
	                cube[2][0][1] = cube[2][1][2];
	                cube[2][1][2] = cube[2][2][1];
	                cube[2][2][1] = cube[2][1][0];
	                cube[2][1][0] = temp1;
	                
	                cube[0][2][0] = cube[5][0][0];
	                cube[0][2][1] = cube[5][1][0];
	                cube[0][2][2] = cube[5][2][0];
	                cube[5][0][0] = cube[1][2][0];
	                cube[5][1][0] = cube[1][2][1];
	                cube[5][2][0] = cube[1][2][2];
	                cube[1][2][2] = cube[4][0][2];
	                cube[1][2][1] = cube[4][1][2];
	                cube[1][2][0] = cube[4][2][2];
	                cube[4][2][2] = temp[0];
	                cube[4][1][2] = temp[1];
	                cube[4][0][2] = temp[2];
	            }
	        }
	        else if(command1 == 'B')
	        {
	            temp[0] = cube[0][0][0];
	            temp[1] = cube[0][0][1];
	            temp[2] = cube[0][0][2];
	            
	            if(command2 == '+')
	            {
	                int temp1 = cube[3][0][0];
	                
	                cube[3][0][0] = cube[3][2][0];
	                cube[3][2][0] = cube[3][2][2];
	                cube[3][2][2] = cube[3][0][2];
	                cube[3][0][2] = temp1;
	                temp1 = cube[3][0][1];
	                cube[3][0][1] = cube[3][1][0];
	                cube[3][1][0] = cube[3][2][1];
	                cube[3][2][1] = cube[3][1][2];
	                cube[3][1][2] = temp1;
	                
	                cube[0][0][0] = cube[5][0][2];
	                cube[0][0][1] = cube[5][1][2];
	                cube[0][0][2] = cube[5][2][2];
	                cube[5][0][2] = cube[1][0][0];
	                cube[5][1][2] = cube[1][0][1];
	                cube[5][2][2] = cube[1][0][2];
	                cube[1][0][2] = cube[4][0][0];
	                cube[1][0][1] = cube[4][1][0];
	                cube[1][0][0] = cube[4][2][0];
	                cube[4][2][0] = temp[0];
	                cube[4][1][0] = temp[1];
	                cube[4][0][0] = temp[2];
	            }
	            else
	            {
	                int temp1 = cube[3][0][0];
	                
	                cube[3][0][0] = cube[3][0][2];
	                cube[3][0][2] = cube[3][2][2];
	                cube[3][2][2] = cube[3][2][0];
	                cube[3][2][0] = temp1;
	                temp1 = cube[3][0][1];
	                cube[3][0][1] = cube[3][1][2];
	                cube[3][1][2] = cube[3][2][1];
	                cube[3][2][1] = cube[3][1][0];
	                cube[3][1][0] = temp1;
	                
	                cube[0][0][0] = cube[4][2][0];
	                cube[0][0][1] = cube[4][1][0];
	                cube[0][0][2] = cube[4][0][0];
	                cube[4][2][0] = cube[1][0][0];
	                cube[4][1][0] = cube[1][0][1];
	                cube[4][0][0] = cube[1][0][2];
	                cube[1][0][0] = cube[5][0][2];
	                cube[1][0][1] = cube[5][1][2];
	                cube[1][0][2] = cube[5][2][2];
	                cube[5][0][2] = temp[0];
	                cube[5][1][2] = temp[1];
	                cube[5][2][2] = temp[2];
	            }
	        }
	        else if(command1 == 'L')
	        {
	            temp[0] = cube[0][0][0];
	            temp[1] = cube[0][1][0];
	            temp[2] = cube[0][2][0];
	            
	            if(command2 == '+')
	            {
	                int temp1 = cube[4][0][0];
	                
	                cube[4][0][0] = cube[4][2][0];
	                cube[4][2][0] = cube[4][2][2];
	                cube[4][2][2] = cube[4][0][2];
	                cube[4][0][2] = temp1;
	                temp1 = cube[4][0][1];
	                cube[4][0][1] = cube[4][1][0];
	                cube[4][1][0] = cube[4][2][1];
	                cube[4][2][1] = cube[4][1][2];
	                cube[4][1][2] = temp1;
	                
	                cube[0][0][0] = cube[3][2][2];
	                cube[0][1][0] = cube[3][1][2];
	                cube[0][2][0] = cube[3][0][2];
	                cube[3][0][2] = cube[1][0][2];
	                cube[3][1][2] = cube[1][1][2];
	                cube[3][2][2] = cube[1][2][2];
	                cube[1][0][2] = cube[2][2][0];
	                cube[1][1][2] = cube[2][1][0];
	                cube[1][2][2] = cube[2][0][0];
	                cube[2][0][0] = temp[0];
	                cube[2][1][0] = temp[1];
	                cube[2][2][0] = temp[2];
	            }
	            else
	            {
	                int temp1 = cube[4][0][0];
	                
	                cube[4][0][0] = cube[4][0][2];
	                cube[4][0][2] = cube[4][2][2];
	                cube[4][2][2] = cube[4][2][0];
	                cube[4][2][0] = temp1;
	                temp1 = cube[4][0][1];
	                cube[4][0][1] = cube[4][1][2];
	                cube[4][1][2] = cube[4][2][1];
	                cube[4][2][1] = cube[4][1][0];
	                cube[4][1][0] = temp1;
	                
	                cube[0][0][0] = cube[2][0][0];
	                cube[0][1][0] = cube[2][1][0];
	                cube[0][2][0] = cube[2][2][0];
	                cube[2][2][0] = cube[1][0][2];
	                cube[2][1][0] = cube[1][1][2];
	                cube[2][0][0] = cube[1][2][2];
	                cube[1][0][2] = cube[3][0][2];
	                cube[1][1][2] = cube[3][1][2];
	                cube[1][2][2] = cube[3][2][2];
	                cube[3][2][2] = temp[0];
	                cube[3][1][2] = temp[1];
	                cube[3][0][2] = temp[2];
	            }
	        }
	        else
	        {
	            temp[0] = cube[0][0][2];
	            temp[1] = cube[0][1][2];
	            temp[2] = cube[0][2][2];
	            
	            if(command2 == '+')
	            {
	                int temp1 = cube[5][0][0];
	                
	                cube[5][0][0] = cube[5][2][0];
	                cube[5][2][0] = cube[5][2][2];
	                cube[5][2][2] = cube[5][0][2];
	                cube[5][0][2] = temp1;
	                temp1 = cube[5][0][1];
	                cube[5][0][1] = cube[5][1][0];
	                cube[5][1][0] = cube[5][2][1];
	                cube[5][2][1] = cube[5][1][2];
	                cube[5][1][2] = temp1;
	                
	                cube[0][0][2] = cube[2][0][2];
	                cube[0][1][2] = cube[2][1][2];
	                cube[0][2][2] = cube[2][2][2];
	                cube[2][2][2] = cube[1][0][0];
	                cube[2][1][2] = cube[1][1][0];
	                cube[2][0][2] = cube[1][2][0];
	                cube[1][0][0] = cube[3][0][0];
	                cube[1][1][0] = cube[3][1][0];
	                cube[1][2][0] = cube[3][2][0];
	                cube[3][2][0] = temp[0];
	                cube[3][1][0] = temp[1];
	                cube[3][0][0] = temp[2];
	            }
	            else
	            {
	                int temp1 = cube[5][0][0];
	                
	                cube[5][0][0] = cube[5][0][2];
	                cube[5][0][2] = cube[5][2][2];
	                cube[5][2][2] = cube[5][2][0];
	                cube[5][2][0] = temp1;
	                temp1 = cube[5][0][1];
	                cube[5][0][1] = cube[5][1][2];
	                cube[5][1][2] = cube[5][2][1];
	                cube[5][2][1] = cube[5][1][0];
	                cube[5][1][0] = temp1;
	                
	                cube[0][0][2] = cube[3][2][0];
	                cube[0][1][2] = cube[3][1][0];
	                cube[0][2][2] = cube[3][0][0];
	                cube[3][0][0] = cube[1][0][0];
	                cube[3][1][0] = cube[1][1][0];
	                cube[3][2][0] = cube[1][2][0];
	                cube[1][0][0] = cube[2][2][2];
	                cube[1][1][0] = cube[2][1][2];
	                cube[1][2][0] = cube[2][0][2];
	                cube[2][0][2] = temp[0];
	                cube[2][1][2] = temp[1];
	                cube[2][2][2] = temp[2];
	            }
	        }
	    }
	    
	    for(int i = 0 ; i < 3;i++)
	    {
	        for(int j = 0 ; j <3;j++)
	        {
	            if(cube[0][i][j] == 0)
	                cout<< "w";
	            else if(cube[0][i][j] == 1)
	                cout<< "y";
	            else if(cube[0][i][j] == 2)
	                cout<< "r";
	            else if(cube[0][i][j] == 3)
	                cout<< "o";
	            else if(cube[0][i][j] == 4)
	                cout<< "g";
	            else
	                cout<< "b";
	           
	        }
	        cout<<"\n";
	    }
	}
	
	return 0;
}