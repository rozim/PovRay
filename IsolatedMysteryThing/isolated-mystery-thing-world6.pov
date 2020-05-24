//  Persistence of Vision Raytracer V3.5
//  World definition file.
//
//  Contains 14 lights, 16 materials and 41 primitives.
//
//  This file was generated for POV-Ray V3.5 by
//  Moray V3.5 For Windows Copyright (c) 1993-2003 Lutz + Kretzschmar
//

//  Date : 08/27/2006    (27.08.2006)
//

/*
  The text between these two comments is in MorayPOV.INC and is
  automatically included in all POV files that Moray exports.
*/

default {
  texture {
    pigment { rgb <1,0,0> }
  }
}

/* // Scene Comment

This scene was created with Moray V3.5 For Windows.
Comment merged from isolated-mystery-thing.mdl:
This scene was created with Moray V3.5 For Windows.

*/ // End Scene Comment

global_settings {
  adc_bailout 0.003922
  ambient_light <1.0,1.0,1.0>
  assumed_gamma 1.9
  hf_gray_16 off
  irid_wavelength <0.247059,0.176471,0.137255>
  max_intersections 64 
  max_intersections 16
/*  max_trace_level 25 */
  max_trace_level 8
  number_of_waves 10
  noise_generator 2
  charset ascii
}

background { color <0.000,0.000,0.000> }
#if (clock <= 0) 

camera {  //  Camera Camera01
  location  <    -clock,      -2.968,       3.575>
  sky       <    0.00000,     0.00000,     1.00000> // Use right handed-system 
  up        <        0.0,         0.0,         1.0> // Where Z is up
  right     <    1.40735,         0.0,         0.0> // Right Vector is adjusted to compensate for spherical (Moray) vs. planar (POV-Ray) aspect ratio
  angle         65.50000    // Vertical      49.125
  look_at   <      0.000,       0.000,       0.000>
}

#else

camera {  //  Camera Camera01
  location  <    -clock,      -2.968,       3.575+clock>
  sky       <    0.00000,     0.00000,     1.00000> // Use right handed-system 
  up        <        0.0,         0.0,         1.0> // Where Z is up
  right     <    1.40735,         0.0,         0.0> // Right Vector is adjusted to compensate for spherical (Moray) vs. planar (POV-Ray) aspect ratio
  angle         65.50000    // Vertical      49.125
  look_at   <      0.000,       0.000,       0.000>
}

#end

//
// *******  L I G H T S *******
//

#declare light_tube_light = light_source {
  <0.0, 0.0, 0.0>
  color rgb <1.000, 1.000, 1.000>
  fade_distance  25.0
  fade_power 1.0
  translate  <-5.0, 0.0, 48.0>
}

#declare Spotlight004 = light_source {   // Spotlight Spotlight004
  <0.0, 0.0, 0.0>
  color rgb <1.000, 1.000, 1.000>*1.5000
  spotlight
    point_at  <0.0, 0.0, -2.000>
    falloff    15.000  // outer radius (in deg)
    radius     7.500  // inner radius
    tightness  0.000
  fade_distance  25.0
  fade_power 1.0
  translate  7.0*y
}

#declare Spotlight003 = light_source {   // Spotlight Spotlight003
  <0.0, 0.0, 0.0>
  color rgb <1.000, 1.000, 1.000>*1.5000
  spotlight
    point_at  <0.0, 0.0, -2.000>
    falloff    15.000  // outer radius (in deg)
    radius     7.500  // inner radius
    tightness  0.000
  fade_distance  25.0
  fade_power 1.0
  translate  -7.0*y
}

#declare Spotlight002 = light_source {   // Spotlight Spotlight002
  <0.0, 0.0, 0.0>
  color rgb <1.000, 1.000, 1.000>*1.5000
  spotlight
    point_at  <0.0, 0.0, -2.000>
    falloff    15.000  // outer radius (in deg)
    radius     7.500  // inner radius
    tightness  0.000
  fade_distance  25.0
  fade_power 1.0
  translate  -7.0*x
}

#declare Spotlight001 = light_source {   // Spotlight Spotlight001
  <0.0, 0.0, 0.0>
  color rgb <1.000, 1.000, 1.000>*1.5000
  spotlight
    point_at  <0.0, 0.0, -2.000>
    falloff    15.000  // outer radius (in deg)
    radius     7.500  // inner radius
    tightness  0.000
  fade_distance  25.0
  fade_power 1.0
  translate  7.0*x
}

#declare Light001 = light_source {
  <0.0, 0.0, 0.0>
  color rgb <1.000, 1.000, 1.000>*2.0000
  translate  <0.0, 507.0, 219.0>
}

#declare inside_center_sphere_light = light_source {
  <0.0, 0.0, 0.0>
  color rgb <1.000, 0.000, 0.000>*0.5000
  fade_distance  15.0
  fade_power 1.0
}


//
// ********  MATERIALS  *******
//

#include "isolated-mystery-thing-world5.inc"


//
// ********  REFERENCED OBJECTS  *******
//

#declare light_tube = union {
  torus { // light_tube_torus
    10.0, 0.1  rotate -x*90
    material {
      light_tube_material
    }
    hollow
    scale 5.0
    rotate -90.0*x
  }
  object { light_tube_light }
  object { // light_tube_light1 -> light tube light
    light_tube_light
    rotate 0.0*y
    translate  10.0*x
  }
}


#declare Cylndr001 = object {
  cylinder { // Cylndr001
    <0,0,1>, <0,0,0>, 1 
    material {
      B_Silver
    }
    scale <0.25, 0.25, 14.0>
    rotate -45.0*y
    translate  <9.0, 0.0, 29.0>
  }
}


#declare Sphere002 = object {
  sphere { // Sphere002
    <0,0,0>,1
    material {
      joint_material
    }
    hollow
    scale 5.0
    translate  50.0*y
  }
}
#include "alone6.inc"

#declare Alone_Ref = object {
  Alone  material {
    Aluminum
  }
}




//
// ********  OBJECTS  *******
//

plane { // Plane001
  z,0
  material {
    ocean2_surface
  }
  hollow
  translate  -0.5*z
}


union { // light_tubes
  object { light_tube }
  object { // light_tube1 -> light tube
    light_tube
    rotate -45.0*z
  }
  object { // light_tube2 -> light tube
    light_tube
    rotate -90.0*z
  }
  object { // light_tube3 -> light tube
    light_tube
    rotate -135.0*z
  }
}


sphere { // sky
  <0,0,0>,1
  material {
    Bright_Blue_Sky
  }
  no_shadow
  hollow
  photons {
    pass_through
  }
  scale 1000.0
  translate  1.0*z
}


sphere { // Sphere001
  <0,0,0>,1
  material {
    B_Silver
  }
  scale <3.0, 3.0, 2.0>
  translate  38.0*z
}


object { // Cylndr004 -> Cylndr001
  Cylndr001
  rotate <0.0, -0.0, 90.0>
}


object { // Cylndr003 -> Cylndr001
  Cylndr001
  rotate <0.0, -0.0, -180.0>
}


object { // Cylndr002 -> Cylndr001
  Cylndr001
  rotate <0.0, -0.0, -90.0>
}


object { Cylndr001 }


union { // g_interior_light
  torus { // Torus001
    1.5, 0.5  rotate -x*90
    material {
      interior_light
    }
    hollow
    scale 5.0
  }
  object { Spotlight004 }
  object { Spotlight003 }
  object { Spotlight002 }
  object { Spotlight001 }
  translate  30.0*z
}


disc { // floor
  <0,0,0>, <0,0,1>, 1.0
  material {
    white_floor
  }
  scale 50.0
}


sphere { // marker
  <0,0,0>,1
  material {
    marker_color
  }
  scale 5.0
  translate  <15.0, 497.0, 48.0>
}


union { // xsun
  sphere { // sun
    <0,0,0>,1
    material {
      sunshine
    }
    hollow
    scale 50.0
    translate  <0.0, 502.0, 214.0>
  }
  object { Light001 }
}


plane { // ocean
  z,0
  material {
    ocean_surface
  }
  translate  -1.0*z
}


#declare joints = union {
  object { Sphere002 }
  object { // Sphere003 -> Sphere002
    Sphere002
    rotate -90.0*x
  }
  object { // Sphere004 -> Sphere002
    Sphere002
    rotate -180.0*x
  }
  object { // Sphere005 -> Sphere002
    Sphere002
    rotate 90.0*x
  }
  object { // Sphere006 -> Sphere002
    Sphere002
    translate  <-50.0, -50.0, 0.0>
  }
  object { // Sphere007 -> Sphere002
    Sphere002
    translate  <50.0, -50.0, 0.0>
  }
}
#declare toruses = union {
  object { Alone_Ref }
  object { // Alone1 -> Alone
    Alone_Ref
    rotate -45.0*x
  }
  object { // Alone2 -> Alone
    Alone_Ref
    rotate -90.0*x
  }
  object { // Alone3 -> Alone
    Alone_Ref
    rotate -135.0*x
  }
  object { // Alone4 -> Alone
    Alone_Ref
    rotate -45.0*y
  }
  object { // Alone5 -> Alone
    Alone_Ref
    rotate 45.0*y
  }
  object { // Alone6 -> Alone
    Alone_Ref
    rotate -90.0*y
  }
  object { // Alone7 -> Alone
    Alone_Ref
    rotate <45.0, -90.0, 0.0>
  }
  object { // Alone8 -> Alone
    Alone_Ref
    rotate <-45.0, -90.0, 0.0>
  }
}
union { // mystery_thing
  object { joints }
  sphere { // big_glass
    <0,0,0>,1
    material {
      Glass_1
    }
    hollow
    scale 51.0
  }
  object { inside_center_sphere_light }
  sphere { // inside_center_sphere
    <0,0,0>,1
    material {
      inside_sphere
    }
    hollow
    scale 15.0
  }
  object { toruses }
}


