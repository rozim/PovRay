#include "math.inc"

#declare SEED = seed(123);

// these 3 parameters control everything
// 'little' is the little cylinder that cuts things
// this is how big the little cylinder is, 0.4 is normal
#declare little_thick = 0.3;
// this is how many little guys are spun together into 'new_little_cutter'
#declare little_tot = 4;
// spiral effect, can be 0, 5 is decent
#declare spiral_rot = 3;
#declare use_rand = false;

// this is how may of those groups go around a circle into 'all_little_cutters'
#declare big_tot = 180;


//-------------------------------------------------------
#declare ang = 0;


#declare del = (180 / little_tot);
#declare n = 0;





//-------------------------------------------------------
#declare ang = 0;

#declare n = 0;

#declare r1 = 0;


#declare Alone = torus { 
    10.0, 0.5  rotate -x*90
    scale 5.0
	hollow
  }



