#include "colors.inc"    // The include files contain
#include "stones.inc"    // pre-defined scene elements
#include "textures.inc"    // pre-defined scene elements
#include "shapes.inc"
//#include "glass.inc"
#include "metals.inc"
#include "woods.inc"


#debug concat("Initial Frame: ",str(initial_frame,3,3),"\n")
#debug concat("Final Frame  : ",str(final_frame,3,3),"\n")
//#debug concat("Subset Initial Frame: ",str(subset_start_frame,3,3),"\n")
//#debug concat("Subset Final Frame  : ",str(subset_end_frame,3,3),"\n")
#debug concat("Frame Number : ",str(frame_number,3,3),"\n")
#debug concat("Clock : ",str(clock,3,3),"\n")
#debug "...\n"

background { color Cyan }

camera {
    location <0, 2, -clock>
    look_at  <0, 1,  2>
}

sphere {
    <0, 1, 2>, 1
    texture {
      pigment { color Yellow }
    }
}

light_source { <2, 4, -3> color White}

plane { <0, 1, 0>, -1
    pigment {
      checker color White, color Gray
    }
  }
