#include <stdio.h>
#include <math.h>       
	        public void  tile(int n, Pt pb, Pt, pd) {
                if (n == 2) {
                    String str;              //identify the orientation of the tromino
                    if (pb.equals(pd) )
                         str = "UR";
                    else if (pb.getY( ) == pd.getY( ))
                         str = "UL";
                    else if (pb.getX( ) == pd.getX( ))
                         str = "LR";
                    else
                         str = "LL";
                    place(str, pb.getX( ) + 1, pb.getY( ) + 1);
                }
                else {
                    //partition into 4 quadrants and locate the quadrant with the deficiency
                    Pt p = new Pt(pb.getX( ) + n/2, pb.getY( ) + n/2);
                    String str;              //determine the orientation of the tromino
                    if (pd.getX( ) <= p.getX( ) && pd.getY( ) >= p.getY( ))  {
                         //deficiency is in upper left quadrant
                        str = "LR";
                        tile(n/2, new Pt(pb.getX( ), p.getY( )), new Pt(pd)); //upper left
                        tile(n/2, new Pt(p), new Pt(p));             //upper right
                        tile(n/2, new Pt(pb), new Pt(p.getX( ) - 1, p.getY( ) -1));  //lower left
                        tile(n/2, new Pt(p.getX( ), pb.getY( )), new Pt(p.getX( ), p.getY( ) - 1);
                    }
                    else if (pd.getX( ) >= p.getX( ) && pd.getY( ) >= p.getY( )) {
                        //deficiency is in upper right quadrant
                        str = "LL";
                        //upper left
                        tile(n/2, new Pt(pb.getX( ), p.getY( )), new Pt(p.getX( )-1, p.getY( ));
                        tile(n/2, new Pt(p), new Pt(pd));           //upper right
                        tile(n/2, new Pt(pb), new Pt(p.getX( ) - 1, p.getY( ) -1));  //lower left
                        tile(n/2, new Pt(p.getX( ), pb.getY( )), new Pt(p.getX( ), p.getY( ) - 1);
                    }
                    else if (pd.getX( ) <= p.getX( ) && pd.getY( ) <= p.getY( ))
                        //deficiency is in lower left quadrant
                        str = "UR";
                        //upper left
                        tile(n/2, new Pt(pb.getX( ), p.getY( )), new Pt(p.getX( )-1, p.getY( ));
                        tile(n/2, new Pt(p), new Pt(p));             //upper right
                        tile(n/2, new Pt(pb), new Pt(pd));  //lower left
                        tile(n/2, new Pt(p.getX( ), pb.getY( )), new Pt(p.getX( ), p.getY( ) - 1);
                    }
                    else
                        //deficiency is in lower right quadrant
                        str = "UL";
                        //upper left
                        tile(n/2, new Pt(pb.getX( ), p.getY( )), new Pt(p.getX( )-1, p.getY( ));
                        tile(n/2, new Pt(p), new Pt(p));             //upper right
                        tile(n/2, new Pt(pb), new Pt(p.getX( ) - 1, p.getY( ) -1));  //lower left
                        tile(n/2, new Pt(p.getX( ), pb.getY( )), new Pt(pd);
                    }
                    place(str, p.getX( ), p.getY( ));
                }
            }
