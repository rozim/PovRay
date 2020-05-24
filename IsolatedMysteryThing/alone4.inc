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

#declare new_little_cutter = union {
#while ( n < little_tot )

object {
  cylinder { 
    <0,0,0.5>, <0,0,-0.5>, 1 
    scale <little_thick, little_thick, 20.0>
    rotate <ang, 0, 0>

  }
}


#declare n = n + 1;
#declare ang = ang + del;

#end
}




//-------------------------------------------------------
#declare ang = 0;

#declare n = 0;

#declare r1 = 0;


#declare all_little_cutters = union {
#while ( n < big_tot)

#declare ang = (n/big_tot)*360	;

object { 
       new_little_cutter
#if ( use_rand)
#declare rr = r1 - (rand(SEED)*spiral_rot);
#else
#declare rr = r1;	
#end
#declare r1 = r1 + spiral_rot;		   
       rotate    < rr, 0, -ang>

       translate < (50.0 * sind(ang)), (50.0*cosd(ang)), 0.0>
}
#declare n = n + 1;
#end
}


#declare Alone = difference
{
torus { 
    10.0, 0.5  rotate -x*90
    scale 5.0
	hollow
  }
all_little_cutters
bounded_by
{
torus { 
    10.0, 0.5  rotate -x*90
    scale 5.0
  }
}
}


