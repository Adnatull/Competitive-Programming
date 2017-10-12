
//Floyed Warshall Begins
//Initially mat 2D array should hold inf in all of its indexes

for (int k=0; k<n; k++) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if(mat[i][k]+mat[k][j]<mat[i][j])
                    mat[i][j] = mat[i][k] + mat[k][j];
            }
        }
}

//Floyed Warshall Ends
