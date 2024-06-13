typedef struct {
    int x;
    int y;
    int z;
    
    int rx;
    int ry;
    int rz;
	
	int s;
	
    
 } obj;
 
 
 obj	houses[] = {
	 
	 {.x = 375, .y = 0, .z = 0, .rx = 0, .ry = 90, .rz = 0, .s = 200},
	 {.x = 375, .y = 0, .z = 300, .rx = 0, .ry = 90, .rz = 0, .s = 200},
	{.x = 375, .y = 0, .z = 600, .rx = 0, .ry = 90, .rz = 0, .s = 200},
	
	 {.x = -375, .y = 0, .z = 0, .rx = 0, .ry = -90, .rz = 0, .s = 200},
	 {.x = -375, .y = 0, .z = 300, .rx = 0, .ry = -90, .rz = 0, .s = 200},
	{.x = -375, .y = 0, .z = 600, .rx = 0, .ry = -90, .rz = 0, .s = 200},
	
	{.x = -130, .y = 0, .z = 900, .rx = 0, .ry = 0, .rz = 0, .s = 200},
	{.x = 130, .y = 0, .z = 900, .rx = 0, .ry = 0, .rz = 0, .s = 200},

	{.x = 375, .y = 0, .z = -300, .rx = 0, .ry = 90, .rz = 0, .s = 200},
	{.x = 375, .y = 0, .z = -600, .rx = 0, .ry = 90, .rz = 0, .s = 200},
	{.x = -375, .y = 0, .z = -300, .rx = 0, .ry = -90, .rz = 0, .s = 200},
	{.x = -375, .y = 0, .z = -600, .rx = 0, .ry = -90, .rz = 0, .s = 200},

	{.x = -130, .y = 0, .z = -1200, .rx = 0, .ry = 180, .rz = 0, .s = 200},
	{.x = 130, .y = 0, .z = -1200, .rx = 0, .ry = 180, .rz = 0, .s = 200},
	{.x = -390, .y = 0, .z = -1200, .rx = 0, .ry = 180, .rz = 0, .s = 200},
	{.x = 390, .y = 0, .z = -1200, .rx = 0, .ry = 180, .rz = 0, .s = 200},
	
 };
 
 
 obj	mounds[] = {
	{.x = 0, .y = 0, .z = 30, .rx = 0, .ry = 0, .rz = 0, .s= 25},
	{.x = -40, .y = 0, .z = -50, .rx = 0, .ry = 0, .rz = 0, .s= 25},
	{.x = 40, .y = 0, .z = -50, .rx = 0, .ry = 0, .rz = 0, .s= 25}
	 };
	 
	 
obj	casks[] = {
	{.x = -12, .y = 0, .z = 658, .rx = 0, .ry = 45, .rz = 0, .s= 45},
	{.x = -46, .y = 0, .z = 703, .rx = 0, .ry = 60, .rz = 0, .s= 45},
	{.x = 6, .y = 0, .z = 701, .rx = 0, .ry = 0, .rz = 0, .s= 45},
	{.x = 8, .y = -60, .z = 699, .rx = 0, .ry = 30, .rz = 0, .s= 45}
};

 obj		females[] = {
	{.x = -180, .y = 0, .z = 600, .rx = 180, .ry = 135, .rz = 0, .s= 35},
	{.x = -180, .y = 0, .z = 600, .rx = 180, .ry = 225, .rz = 0, .s= 35},
	{.x = 180, .y = 0, .z = 0, .rx = 180, .ry = 45, .rz = 0, .s= 35}
};

obj *objects[] = {mounds, casks, females};

int distance (int x1,int x2,int z1,int z2){
int dist = (x2 - x1)*(x2 - x1) + (z2 - z1)*(z2 - z1);
return dist;	
}






obj keyfs[] = {
	
	{.x = 10, .y = -22, .z = 0, .rx = 0, .ry = 0, .rz = 0, .s= 35},
		{.x = 10, .y = -22, .z = 0, .rx = 0, .ry = 0, .rz = 0, .s= 35}, // mid up
			{.x = 10, .y = -18, .z = 10, .rx = 30, .ry = 0, .rz = 0, .s= 35}, //forward
				{.x = 10, .y = -20, .z = 0, .rx = 00, .ry = 0, .rz = 0, .s= 35}, //mid down
					{.x = 10, .y = -18, .z = -10, .rx = -30, .ry = 0, .rz = 0, .s= 35} // back
};





		
	
	
