#declare AloneCylndr001 = object {
  cylinder { // AloneCylndr001
    <0,0,1>, <0,0,0>, 1 
    scale <0.5, 0.5, 10.0>
    translate  <0.0, 50.0, -5.25>
  }
}
#declare alone_cutter = union {
  object { AloneCylndr001 }
  object { // Cylndr002 -> AloneCylndr001
    AloneCylndr001
    rotate -45.0*x
    translate  <0.0, 14.75, 35.0>
  }
  object { // Cylndr003 -> AloneCylndr001
    AloneCylndr001
    rotate -90.0*x
    translate  <0.0, 49.25, 50.0>
  }
  object { // Cylndr004 -> AloneCylndr001
    AloneCylndr001
    rotate -135.0*x
    translate  <0.0, 85.25, 35.25>
  }
}




//
// ********  OBJECTS  *******
//



#declare alone_all_cutters = union {
  object { // alone_cutter1 -> alone_cutter
    alone_cutter
    rotate -5.625*z
  }
  object { // alone_cutter2 -> alone_cutter
    alone_cutter
    rotate -11.25*z
  }
  object { // alone_cutter3 -> alone_cutter
    alone_cutter
    rotate -16.875*z
  }
  object { // alone_cutter4 -> alone_cutter
    alone_cutter
    rotate -22.5*z
  }
  object { // alone_cutter5 -> alone_cutter
    alone_cutter
    rotate -28.125*z
  }
  object { // alone_cutter6 -> alone_cutter
    alone_cutter
    rotate -33.75*z
  }
  object { // alone_cutter7 -> alone_cutter
    alone_cutter
    rotate -39.375*z
  }
  object { // alone_cutter8 -> alone_cutter
    alone_cutter
    rotate -45.0*z
  }
  object { // alone_cutter9 -> alone_cutter
    alone_cutter
    rotate -50.625*z
  }
  object { // alone_cutter10 -> alone_cutter
    alone_cutter
    rotate -56.25*z
  }
  object { // alone_cutter11 -> alone_cutter
    alone_cutter
    rotate -61.875*z
  }
  object { // alone_cutter12 -> alone_cutter
    alone_cutter
    rotate -67.5*z
  }
  object { // alone_cutter13 -> alone_cutter
    alone_cutter
    rotate -73.125*z
  }
  object { // alone_cutter14 -> alone_cutter
    alone_cutter
    rotate -78.75*z
  }
  object { // alone_cutter15 -> alone_cutter
    alone_cutter
    rotate -84.375*z
  }
  object { // alone_cutter16 -> alone_cutter
    alone_cutter
    rotate -90.0*z
  }
  object { // alone_cutter17 -> alone_cutter
    alone_cutter
    rotate -95.625*z
  }
  object { // alone_cutter18 -> alone_cutter
    alone_cutter
    rotate -101.25*z
  }
  object { // alone_cutter19 -> alone_cutter
    alone_cutter
    rotate -106.875*z
  }
  object { // alone_cutter20 -> alone_cutter
    alone_cutter
    rotate -112.5*z
  }
  object { // alone_cutter21 -> alone_cutter
    alone_cutter
    rotate -118.125*z
  }
  object { // alone_cutter22 -> alone_cutter
    alone_cutter
    rotate -123.75*z
  }
  object { // alone_cutter23 -> alone_cutter
    alone_cutter
    rotate -129.375*z
  }
  object { // alone_cutter24 -> alone_cutter
    alone_cutter
    rotate -135.0*z
  }
  object { // alone_cutter25 -> alone_cutter
    alone_cutter
    rotate -140.625*z
  }
  object { // alone_cutter26 -> alone_cutter
    alone_cutter
    rotate -146.25*z
  }
  object { // alone_cutter27 -> alone_cutter
    alone_cutter
    rotate -151.875*z
  }
  object { // alone_cutter28 -> alone_cutter
    alone_cutter
    rotate -157.5*z
  }
  object { // alone_cutter29 -> alone_cutter
    alone_cutter
    rotate -163.125*z
  }
  object { // alone_cutter30 -> alone_cutter
    alone_cutter
    rotate -168.75*z
  }
  object { // alone_cutter31 -> alone_cutter
    alone_cutter
    rotate -174.375*z
  }
  object { // alone_cutter32 -> alone_cutter
    alone_cutter
    rotate -180.0*z
  }
  object { // alone_cutter33 -> alone_cutter
    alone_cutter
    rotate 174.375*z
  }
  object { // alone_cutter34 -> alone_cutter
    alone_cutter
    rotate 168.75*z
  }
  object { // alone_cutter35 -> alone_cutter
    alone_cutter
    rotate 163.125*z
  }
  object { // alone_cutter36 -> alone_cutter
    alone_cutter
    rotate 157.5*z
  }
  object { // alone_cutter37 -> alone_cutter
    alone_cutter
    rotate 151.875*z
  }
  object { // alone_cutter38 -> alone_cutter
    alone_cutter
    rotate 146.25*z
  }
  object { // alone_cutter39 -> alone_cutter
    alone_cutter
    rotate 140.625*z
  }
  object { // alone_cutter40 -> alone_cutter
    alone_cutter
    rotate 135.0*z
  }
  object { // alone_cutter41 -> alone_cutter
    alone_cutter
    rotate 129.375*z
  }
  object { // alone_cutter42 -> alone_cutter
    alone_cutter
    rotate 123.75*z
  }
  object { // alone_cutter43 -> alone_cutter
    alone_cutter
    rotate 118.125*z
  }
  object { // alone_cutter44 -> alone_cutter
    alone_cutter
    rotate 112.5*z
  }
  object { // alone_cutter45 -> alone_cutter
    alone_cutter
    rotate 106.875*z
  }
  object { // alone_cutter46 -> alone_cutter
    alone_cutter
    rotate 101.25*z
  }
  object { // alone_cutter47 -> alone_cutter
    alone_cutter
    rotate 95.625*z
  }
  object { // alone_cutter48 -> alone_cutter
    alone_cutter
    rotate 90.0*z
  }
  object { // alone_cutter49 -> alone_cutter
    alone_cutter
    rotate 84.375*z
  }
  object { // alone_cutter50 -> alone_cutter
    alone_cutter
    rotate 78.75*z
  }
  object { // alone_cutter51 -> alone_cutter
    alone_cutter
    rotate 73.125*z
  }
  object { // alone_cutter52 -> alone_cutter
    alone_cutter
    rotate 67.5*z
  }
  object { // alone_cutter53 -> alone_cutter
    alone_cutter
    rotate 61.875*z
  }
  object { // alone_cutter54 -> alone_cutter
    alone_cutter
    rotate 56.25*z
  }
  object { // alone_cutter55 -> alone_cutter
    alone_cutter
    rotate 50.625*z
  }
  object { // alone_cutter56 -> alone_cutter
    alone_cutter
    rotate 45.0*z
  }
  object { // alone_cutter57 -> alone_cutter
    alone_cutter
    rotate 39.375*z
  }
  object { // alone_cutter58 -> alone_cutter
    alone_cutter
    rotate 33.75*z
  }
  object { // alone_cutter59 -> alone_cutter
    alone_cutter
    rotate 28.125*z
  }
  object { // alone_cutter60 -> alone_cutter
    alone_cutter
    rotate 22.5*z
  }
  object { // alone_cutter61 -> alone_cutter
    alone_cutter
    rotate 16.875*z
  }
  object { // alone_cutter62 -> alone_cutter
    alone_cutter
    rotate 11.25*z
  }
  object { // alone_cutter63 -> alone_cutter
    alone_cutter
    rotate 5.625*z
  }
  object { alone_cutter }
}
#declare Alone = difference
{
torus { 
    10.0, 0.5  rotate -x*90
    scale 5.0
  }
alone_all_cutters
bounded_by
{
torus { 
    10.0, 0.5  rotate -x*90
    scale 5.0
  }
}
}
