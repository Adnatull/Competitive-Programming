struct node { 
	int u, v, cost;
	
	node(int x,int y, int z) {
		u = x, v = y, cost = z;		
	 };
	 
	 bool operator < (node other) const {
			return cost<other.cost;
		  };
	
};
