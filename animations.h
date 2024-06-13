

   
	
	
		void	interpolate_intverts(int verts[][3],int verts1[][3],int verts2[][3], int frames, int numverts, jo_3d_mesh *mesh){
	static int state = 1;
	
	
	switch (state) {
		case 1:
		if(verts[numverts - 1][0] > verts2[numverts - 1][0]){
		 for (int i = 0; i < numverts; i++) {
        verts[i][0] = verts[i][0] + ((verts2[i][0] - verts1[i][0])/frames);
       verts[i][1] = verts[i][1] + ((verts2[i][1] - verts1[i][1])/frames);
       verts[i][2] = verts[i][2] + ((verts2[i][2] - verts1[i][2])/frames);
		jo_3d_set_mesh_vertice(mesh, jo_int2fixed(verts[i][0]), jo_int2fixed(verts[i][1]), jo_int2fixed(verts[i][2]), i);
		 }	
	}
	else {state = 2;}
	break;
	
	case 2:
		if(verts[numverts - 1][0] < verts1[numverts - 1][0]){
		 for (int i = 0; i < numverts; i++) {
        verts[i][0] = verts[i][0] + ((verts1[i][0] - verts2[i][0])/frames);
      verts[i][1] = verts[i][1] + ((verts1[i][1] - verts2[i][1])/frames);
      verts[i][2] = verts[i][2] + ((verts1[i][2] - verts2[i][2])/frames);
		jo_3d_set_mesh_vertice(mesh, jo_int2fixed(verts[i][0]), jo_int2fixed(verts[i][1]), jo_int2fixed(verts[i][2]), i);
		 }	
	}
	else {state = 1;}
break;	
}
}

		void	interpolate_fixedverts(jo_fixed verts[][3],jo_fixed verts1[][3],jo_fixed verts2[][3], int frames, int numverts, jo_3d_mesh *mesh){
	static int state = 1;
	
	switch (state) {
		case 1:
		if(verts[numverts - 1][0] > verts2[numverts - 1][0]){
		 for (int i = 0; i < numverts; i++) {
        verts[i][0] = verts[i][0] + ((verts2[i][0] - verts1[i][0])/frames);
       verts[i][1] = verts[i][1] + ((verts2[i][1] - verts1[i][1])/frames);
       verts[i][2] = verts[i][2] + ((verts2[i][2] - verts1[i][2])/frames);
		jo_3d_set_mesh_vertice(mesh, (verts[i][0]), (verts[i][1]), (verts[i][2]), i);
		 }	
	}
	else {state = 2;}
	break;
	
	case 2:
		if(verts[numverts - 1][0] < verts1[numverts - 1][0]){
		 for (int i = 0; i < numverts; i++) {
        verts[i][0] = verts[i][0] + ((verts1[i][0] - verts2[i][0])/frames);
      verts[i][1] = verts[i][1] + ((verts1[i][1] - verts2[i][1])/frames);
      verts[i][2] = verts[i][2] + ((verts1[i][2] - verts2[i][2])/frames);
		jo_3d_set_mesh_vertice(mesh, (verts[i][0]), (verts[i][1]), (verts[i][2]), i);
		 }	
	}
	else {state = 1;}
break;	
}
}


enum State {
    first,
    second,
    third,
    fourth
}state;

void move(obj object[]) {
    static enum State state = first;  // Initial state

    switch (state) {
        case first:
            if (object[0].z != object[1].z ) {
			object[0].z += (object[1].z - object[2].z) / 600;}
			if (object[0].x != object[1].x){
				object[0].x += (object[1].x - object[2].x) / 300;
            }
			else {
                state = second;  // Transition to turn around state
            }
            break;

        case second:
            if (object[0].ry != object[1].ry) {
                ++object[0].ry;
            }
			else {
                state = third;  // Transition to move backward state
            }
            break;

        case third:
            if (object[0].z != object[2].z) {
			object[0].z += (object[2].z - object[1].z) / 600;}
			if (object[0].x != object[2].x){
				object[0].x += (object[2].x - object[1].x) / 300;
				
            }
			else {
                state = fourth;  // Transition to reset state
            }
            break;

        case fourth:
            if (object[0].ry != object[2].ry) {
                --object[0].ry;
            } 
			else {
                state = first;  // Transition back to move forward state
            }
            break;
    }
}



enum Walk {
    MID_UP,
    FORWARD,
    MID_DOWN,
    BACK
}walk;

void animate(obj object[]) {
    static state = MID_UP;  // Initial state

    switch (state) {
        case MID_UP:
            if (object[0].y != object[2].y) {
			object[0].y += (object[2].y - object[1].y) / 6;}
			if (object[0].z != object[2].z) {
			object[0].z += (object[2].z - object[1].z) / 6;}
			if (object[0].rx != object[2].rx) {
			object[0].rx += (object[2].rx - object[1].rx) / 6;}
            else {
                state = FORWARD;  // Transition to turn around state
            }
            break;

           case FORWARD:
            if (object[0].y != object[3].y) {
			object[0].y += (object[3].y - object[2].y) / 6;}
			if (object[0].z != object[3].z) {
			object[0].z += (object[3].z - object[2].z) / 6;}
			if (object[0].rx != object[3].rx) {
			object[0].rx += (object[3].rx - object[2].rx) / 6;}
            else {
                state = MID_DOWN;  // Transition to turn around state
            }
            break;

          case MID_DOWN:
            if (object[0].y != object[4].y) {
			object[0].y += (object[4].y - object[3].y) / 6;}
			if (object[0].z != object[4].z) {
			object[0].z += (object[4].z - object[3].z) / 6;}
			if (object[0].rx != object[4].rx) {
			object[0].rx += (object[4].rx - object[3].rx) / 6;}
            else {
                state = BACK;  // Transition to turn around state
            }
            break;

             case BACK:
            if (object[0].y != object[1].y) {
			object[0].y += (object[1].y - object[4].y) / 6;}
			if (object[0].z != object[1].z) {
			object[0].z += (object[1].z - object[4].z) / 6;}
			if (object[0].rx != object[1].rx) {
			object[0].rx += (object[1].rx - object[4].rx) / 6;}
            else {
                state = MID_UP;  // Transition to turn around state
            }
            break;
	}
}