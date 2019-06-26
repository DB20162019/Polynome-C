//
//  poly.h
//  poly.h
//
//  Created by DainahB on 30/11/2016.
//  Copyright © 2016 DainahB. All rights reserved.
//

#ifndef poly_h
#define poly_h


struct monome_elem{
    int degre;
    double coeff;
};
typedef struct monome_elem * monome;




struct elem{
    struct elem * suivant;
    struct elem * precedent;
    monome valeur;
};
typedef struct elem * polynome;



monome creerMonome(float r, int e);
