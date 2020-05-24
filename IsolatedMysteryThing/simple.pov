
default {
  texture {
    pigment { rgb <1,0,0> }
  }
}

global_settings {
  adc_bailout 0.003922
  ambient_light <1.0,1.0,1.0>
  assumed_gamma 1.9
  irid_wavelength <0.247059,0.176471,0.137255>
/*  max_trace_level 25 */
  max_trace_level 8
  number_of_waves 10
  noise_generator 2
  charset ascii
}

background { color <0.000,0.000,0.000> }

camera {  //  Camera Camera01
  location  <    10,      10,       10>
  sky       <    0.00000,     0.00000,     1.00000> // Use right handed-system 
  up        <        0.0,         0.0,         1.0> // Where Z is up
  right     <    1.40735,         0.0,         0.0> // Right Vector is adjusted to compensate for spherical (Moray) vs. planar (POV-Ray) aspect ratio
  angle         65.50000    // Vertical      49.125
  look_at   <      0.000,       0.000,       0.000>
}


light_source {   
  <10.0, 10.0, 10.0>
  color rgb <1.000, 1.000, 1.000>*1.5000
  spotlight
    point_at  <0.0, 0.0, 0.000>
    falloff    15.000  // outer radius (in deg)
    radius     7.500  // inner radius
    tightness  0.000
  fade_distance  25.0
  fade_power 1.0
  translate  7.0*y
}

object {
  sphere { 
    <0,0,0>,1
    material {
      joint_material
    }
    hollow
    scale 5.0
  }
}


