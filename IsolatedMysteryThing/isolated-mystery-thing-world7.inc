//  Material Include file.
//
//  This file was generated for POV-Ray V3.5 by
//  NOTE: Do *NOT* remove the comment lines containing '$MRY$'.
//        To make Moray not re-export the material, change
//        the '$MRY$' to '$MRX$'.
//


//
// ********  MATERIALS  *******
//







// Materials from previous exports [MRY]

// Materials exported in this run [MRY]



//  $MRY$: 'Aluminum'


#declare Aluminum = 
   material  // Aluminum
   {   
      texture
      {      
         pigment
         {
            color rgb <0.55, 0.5, 0.45>
         }      
         finish
         {
            ambient 0.1
            diffuse 0.65
            brilliance 1.5
            specular 0.85
            roughness 0.01
            reflection
            {
               0.45 , 0.45
               fresnel  off
               falloff  1.0
               exponent 1.0
               metallic 0.0
            }
         }
      }
   }


//  $MRY$: 'joint material'


#declare joint_material = 
   material  // joint material
   {   
      texture
      {      
         pigment
         {
            color rgbft <1.0, 0.0, 0.0, 0.489567, 0.0104>
         }      
         finish
         {
            ambient 0.1
            phong 0.1079
            reflection
            {
               0.0686 , 0.205867
               fresnel  off
               falloff  1.0
               exponent 1.0
               metallic 0.0
            }
         }
      }
   }


//  $MRY$: 'Glass_1'


#declare Glass_1 = 
   material  // Glass_1
   {   
      texture
      {      
         pigment
         {
            color rgbf <1.0, 1.0, 1.0, 1.0>
         }      
         finish
         {
            ambient 0.1
            diffuse 0.0
            phong 0.3
            phong_size 90.0
            reflection
            {
               0.2 , 0.2
               fresnel  off
               falloff  1.0
               exponent 1.0
               metallic 0.0
            }
         }
      }   
      interior
      {
         ior 1.5
      }
   }


//  $MRY$: 'inside sphere'


#declare inside_sphere = 
   material  // inside sphere
   {   
      texture
      {      
         pigment
         {
            color rgbf <1.0, 0.0, 0.0, 0.5>
         }      
         /* no normal type given.
         normal
         {
         }
         */      
         finish
         {
            ambient 0.1
            phong 0.129467
            reflection
            {
               0.215667 , 0.460767
               fresnel  off
               falloff  1.0
               exponent 1.0
               metallic 0.0
            }
         }
      }
   }


//  $MRY$: 'ocean surface'


#declare ocean_surface = 
   material  // ocean surface
   {   
      texture
      {      
         pigment
         {
            color rgb <0.0, 0.0, 1.0>
         }      
         normal
         {
            bumps , 0.5
            bump_size 1.0
         }      
         finish
         {
            ambient 0.1
            phong 0.7122
            phong_size 70.196667
            specular 0.050333
            roughness 0.097733
         }
      }
   }


//  $MRY$: 'sunshine'


#declare sunshine = 
   material  // sunshine
   {   
      texture
      {      
         pigment
         {
            color rgbf <0.989567, 1.0, 0.0104, 0.5>
         }      
         normal
         {
            spherical , 5.0
            bump_size 5.0
         }      
         finish
         {
            ambient 0.1
            phong 0.007167
            phong_size 0.66
         }
      }
   }


//  $MRY$: 'marker color'


#declare marker_color = 
   material  // marker color
   {   
      texture
      {      
         pigment
         {
            color rgb <1.0, 0.501961, 0.0>
         }      
         finish
         {
            ambient 0.4676
            diffuse 0.258967
            phong 0.330933
         }
      }
   }


//  $MRY$: 'AberGraniteGR'


#declare AberGraniteGR = 
   material  // AberGraniteGR
   {   
      texture
      {      
         pigment
         {
            granite
            color_map
            {
               [ 0.0     rgbft <0.2, 0.2, 0.2, 0.0, 0.0> ]
               [ 0.31    rgbft <0.57, 0.56, 0.56, 0.0, 0.0> ]
               [ 1.0     rgbft <0.77, 0.77, 0.76, 0.0, 0.0> ]
            }
            turbulence 0.7
            ramp_wave
         }      
         normal
         {
            bumps , 0.1
            scale  0.2
         }      
         finish
         {
            ambient 0.5
            diffuse 1.0
            crand 0.25
         }
      }
   }


//  $MRY$: 'Black_Vein_Granit'


#declare Black_Vein_Granit = 
   material  // Black_Vein_Granit
   {   
      texture
      {      
         pigment
         {
            granite
            color_map
            {
               [ 0.0     rgbft <0.0, 0.0, 0.0, 0.0, 0.0> ]
               [ 0.3     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
               [ 0.2     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
               [ 0.4     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
               [ 0.6     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
               [ 1.0     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
            }
         }      
         finish
         {
            ambient 0.1
            phong 0.77
         }
      }
   }


//  $MRY$: 'interior light'


#declare interior_light = 
   material  // interior light
   {   
      texture
      {      
         pigment
         {
            color rgbf <1.0, 1.0, 1.0, 0.1979>
         }      
         finish
         {
            ambient 1.0
            diffuse 0.0
            brilliance 0.0
         }
      }
   }


//  $MRY$: 'Black_Vein_Granit_1'


#declare Black_Vein_Granit_1 = 
   material  // Black_Vein_Granit_1
   {   
      texture
      {      
         pigment
         {
            granite
            color_map
            {
               [ 0.0     rgbft <0.0, 0.0, 0.0, 0.0, 0.0> ]
               [ 0.3     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
               [ 0.2     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
               [ 0.4     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
               [ 0.6     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
               [ 1.0     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
            }
         }      
         finish
         {
            ambient 0.1
            phong 0.77
         }
      }
   }


//  $MRY$: 'white floor'


#declare white_floor = 
   material  // white floor
   {   
      texture
      {      
         pigment
         {
            color rgb <1.0, 1.0, 1.0>
         }      
         normal
         {
            bumps , 0.5
         }      
         finish
         {
            ambient 0.3741
            diffuse 0.158267
            phong 0.136667
         }
      }
   }


//  $MRY$: 'B_Silver'


#declare B_Silver = 
   material  // B_Silver
   {   
      texture
      {      
         pigment
         {
            color rgb <0.658824, 0.658824, 0.658824>
         }      
         finish
         {
            ambient 0.3
            brilliance 8.0
            phong 1.0
            phong_size 10.0
            reflection
            {
               0.2 , 0.2
               fresnel  off
               falloff  1.0
               exponent 1.0
               metallic 0.0
            }
         }
      }
   }


//  $MRY$: 'ocean2 surface'


#declare ocean2_surface = 
   material  // ocean2 surface
   {   
      texture
      {      
         pigment
         {
            color rgbf <0.7, 0.7, 1.0, 0.9>
         }      
         normal
         {
            bumps , 0.1
         }      
         finish
         {
            ambient 0.0
            diffuse 0.007167
            brilliance 0.0
            phong_size 0.0
            reflection
            {
               0.7 , 0.7
               fresnel  off
               falloff  1.0
               exponent 1.0
               metallic 0.0
            }
         }
      }   
      interior
      {
         ior 1.1
         caustics 1.0
      }
   }


//  $MRY$: 'Bright_Blue_Sky'


#declare Bright_Blue_Sky = 
   material  // Bright_Blue_Sky
   {   
      texture
      {      
         pigment
         {
            bozo
            color_map
            {
               [ 0.0     rgbft <0.5, 0.5, 1.0, 0.0, 0.0> ]
               [ 0.5     rgbft <0.5, 0.5, 1.0, 0.0, 0.0> ]
               [ 0.6     rgbft <1.0, 1.0, 1.0, 0.0, 0.0> ]
               [ 1.0     rgbft <0.5, 0.5, 0.5, 0.0, 0.0> ]
            }
            turbulence 0.56
            ramp_wave
         }      
         finish
         {
            ambient 1.0
            diffuse 0.0
            brilliance 0.0
            phong 0.007167
            phong_size 0.0
         }
      }
   }


//  $MRY$: 'light tube material'


#declare light_tube_material = 
   material  // light tube material
   {   
      texture
      {      
         pigment
         {
            color rgbft <1.0, 1.0, 0.0, 0.5104, 0.5104>
         }      
         finish
         {
            ambient 0.769767
            diffuse 0.3597
            phong 0.151067
         }
      }   
      interior
      {
         ior 1.510667
      }
   }
