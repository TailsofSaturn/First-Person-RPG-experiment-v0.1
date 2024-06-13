#include	"femaletex.h"
#include	"animations.h"

jo_3d_mesh         *house;
jo_3d_mesh         *mound;
jo_3d_mesh         *cask;
jo_3d_mesh         *arm;



void	draw_mesh(jo_3d_mesh *mesh, obj position[], int numobj){


int i;
for(i=0; i < numobj; i++){
   
jo_3d_push_matrix();
    {
	
	jo_3d_translate_matrix(position[i].x, position[i].y, position[i].z);
	jo_3d_rotate_matrix(position[i].rx, position[i].ry, position[i].rz);
   
    jo_3d_mesh_draw(mesh);
    }
    jo_3d_pop_matrix();

}
}

// House	
	
	house_verts[44][3] = {
	{-125, -250, -125}, 
	{0, -250, -125},
	{0, -125, -125},
	{-125, -125, -125},
	
	
	
	{0, -250, -125},
	{125, -250, -125},
	{125, -125, -125},
	{0, -125, -125},
	
	
	
	{0, -125, -125},
	{125, -125, -125},
	{125, 0, -125},
	{0, 0, -125},
	
	
	{-125, -125, -125},
	{0, -125, -125},
	{0, 0, -125},
	{-125, 0, -125},
	
	
	{-125, -250, 125}, 
	{125, -250, 125},
	{125, 0, 125},
	{-125, 0, 125},
	
	{125, -250, -125},
	{125, -250, 125},
	{125, 0, 125},
	{125, 0, -125},
	
	{-125, -250, -125},
	{-125, -250, 125},
	{-125, 0, 125},
	{-125, 0, -125},
	
	{-125, -375, 0},
	{125, -375, 0},
	{125, -250, -125},
	{-125, -250, -125}, 
	
	{-125, -375, 0},
	{125, -375, 0},
	{125, -250, 125},
	{-125, -250, 125},
	
	{-125, -375, 0},
	{-125, -375, 0},
	{-125, -250, -125},
	{-125, -250, 125},
	
	{125, -375, 0},
	{125, -375, 0},
	{125, -250, -125},
	{125, -250, 125}
	};
	
		void create_house(void)
	{
		
			//vertices
	house = jo_3d_create_mesh_from_vertices(11, &house_verts);
	jo_3d_set_mesh_polygon_texture(house, 2, 0);
	jo_3d_set_mesh_polygon_texture(house, 3, 1);
	jo_3d_set_mesh_polygon_texture(house, 1, 2);
	jo_3d_set_mesh_polygon_texture(house, 0, 3);
	jo_3d_set_mesh_polygon_texture(house, 4, 4);
	jo_3d_set_mesh_polygon_texture(house, 4, 5);
	jo_3d_set_mesh_polygon_texture(house, 4, 6);
	jo_3d_set_mesh_polygon_texture(house, 5, 7);
	jo_3d_set_mesh_polygon_texture(house, 5, 8);
	jo_3d_set_mesh_polygon_texture(house, 4, 9);
	jo_3d_set_mesh_polygon_texture(house, 4, 10);
	jo_3d_set_mesh_screen_doors(house, false);
	for (Uint32 i = 0; i < 11; ++i){
       	JO_ADD_FLAG(house->data.attbl[i].atrb, HSSon);
	}
	
	}
	
	
	


// Hill

mound_verts[16][3] = {
	
	{-25, 0, 25},
	{0, 0, 25},
	{0, -25, 0},
	{-25, 0, 0},
	
	{-25, 0, 0},
	{0, -25, 0},
	{0, 0, -25},
	{-25, 0, -25},
	
	{0, 0, 25},
	{25, 0, 25},
	{25, 0, 0},
	{0, -25, 0},
	
	{0, -25, 0},
	{25, 0, 0},
	{25, 0, -25},
	{0, 0, -25}
};

	void create_mound(void)
	{
		
			//vertices
	mound = jo_3d_create_mesh_from_vertices(4, &mound_verts);
	jo_3d_set_mesh_polygon_texture(mound, 7, 0);
	jo_3d_set_mesh_polygon_texture(mound, 7, 1);
	jo_3d_set_mesh_polygon_texture(mound, 7, 2);
	jo_3d_set_mesh_polygon_texture(mound, 7, 3);
	jo_3d_set_mesh_screen_doors(mound, false);
	for (Uint32 i = 0; i < 4; ++i){
       	JO_ADD_FLAG(house->data.attbl[i].atrb, HSSon);
	}
	
	}
	


cask_verts[36][3] = {
{-20, -30, -20},
{20, -30, -20},
{12, 0, -12},
{-12, 0, -12},

{-20, -30, 20},
{-20, -30, -20},
{-12, 0, -12},
{-12, 0, 12},

{20, -30, -20},
{20, -30, 20},
{12, 0, 12},
{12, 0, -12},

{-20, -30, 20},
{20, -30, 20},
{12, 0, 12},
{-12, 0, 12},

//
{-12, -60, -12},
{12, -60, -12},
{20, -30, -20},
{-20, -30, -20},

{-12, -60, 12},
{-12, -60, -12},
{-20, -30, -20},
{-20, -30, 20},

{12, -60, -12},
{12, -60, 12},
{20, -30, 20},
{20, -30, -20},

{-12, -60, 12},
{12, -60, 12},
{20, -30, 20},
{-20, -30, 20},

{-12, -60, -12},
{12, -60, -12},
{12, -60, 12},
{-12, -60, 12}


};

cask1_verts[36][3] = {
{-20, -30, -20},
{20, -30, -20},
{12, 0, -12},
{-12, 0, -12},

{-20, -30, 20},
{-20, -30, -20},
{-12, 0, -12},
{-12, 0, 12},

{20, -30, -20},
{20, -30, 20},
{12, 0, 12},
{12, 0, -12},

{-20, -30, 20},
{20, -30, 20},
{12, 0, 12},
{-12, 0, 12},

//
{-12, -60, -12},
{12, -60, -12},
{20, -30, -20},
{-20, -30, -20},

{-12, -60, 12},
{-12, -60, -12},
{-20, -30, -20},
{-20, -30, 20},

{12, -60, -12},
{12, -60, 12},
{20, -30, 20},
{20, -30, -20},

{-12, -60, 12},
{12, -60, 12},
{20, -30, 20},
{-20, -30, 20},

{-12, -60, -12},
{12, -60, -12},
{12, -60, 12},
{-12, -60, 12}


};


cask2_verts[36][3] = {
{-30, -20, -20},
{30, -20, -20},
{22, 0, -12},
{-22, 0, -12},

{-30, -20, 20},
{-30, -20, -20},
{-22, 0, -12},
{-22, 0, 12},

{30, -20, -20},
{30, -20, 20},
{22, 0, 12},
{22, 0, -12},

{-30, -20, 20},
{30, -20, 20},
{22, 0, 12},
{-22, 0, 12},

//
{-22, -50, -12},
{22, -50, -12},
{30, -20, -20},
{-30, -20, -20},

{-22, -50, 12},
{-22, -50, -12},
{-30, -20, -20},
{-30, -20, 20},

{22, -50, -12},
{22, -50, 12},
{30, -20, 20},
{30, -20, -20},

{-22, -50, 12},
{22, -50, 12},
{30, -20, 20},
{-30, -20, 20},

{-22, -50, -12},
{22, -50, -12},
{22, -50, 12},
{-22, -50, 12}


};



	void create_cask(void)
	{
		
	cask = jo_3d_create_mesh_from_vertices(9, &cask_verts);
	jo_3d_set_mesh_polygon_texture(cask, 0, 0);
	jo_3d_set_mesh_polygon_texture(cask, 0, 1);
	jo_3d_set_mesh_polygon_texture(cask, 0, 2);
	jo_3d_set_mesh_polygon_texture(cask, 0, 3);
	jo_3d_set_mesh_polygon_texture(cask, 0, 4);
	jo_3d_set_mesh_polygon_texture(cask, 0, 5);
	jo_3d_set_mesh_polygon_texture(cask, 0, 6);
	jo_3d_set_mesh_polygon_texture(cask, 0, 7);
	jo_3d_set_mesh_polygon_texture(cask, 0, 8);
	jo_3d_set_mesh_screen_doors(cask, false);
	for (Uint32 i = 0; i < 9; ++i){
       	JO_ADD_FLAG(house->data.attbl[i].atrb, HSSon);
	}
	
	}
	

		
	
	
arm_verts[12][3] = {

{-3, 0, -3},
{3, 0, -3},
{3, 20, -3},
{-3, 20, -3},

{3, 0, -3},
{0, 0, 3},
{0, 20, 3},
{3, 20, -3},

{0, 0, 3},
{-3, 0, -3},
{-3, 20, -3},
{0, 20, 3}

}; 
	
	void	create_arm(void)
	{
	arm = jo_3d_create_mesh_from_vertices(3, &arm_verts);
	jo_3d_set_mesh_polygon_texture(arm, 10, 0);
	jo_3d_set_mesh_polygon_texture(arm, 10, 1);
	jo_3d_set_mesh_polygon_texture(arm, 10, 2);
	for (Uint32 i = 0; i < 3; ++i){
       	JO_ADD_FLAG(house->data.attbl[i].atrb, HSSon);
	}
	}
