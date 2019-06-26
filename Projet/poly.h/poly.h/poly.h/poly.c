//
//  poly.c
//  poly.h
//
//  Created by DainahB on 30/11/2016.
//  Copyright © 2016 DainahB. All rights reserved.
//

#include "poly.h"
#include <stdio.h>
#include <stdlib.h>

monome creerMonome(float r, int e){ //Le but est de créer un monome composé d'un réel r représentant le coefficient et d'un entier e représentant le degré
    monome temp=malloc(sizeof(monome));
    temp-> degre=e;
    temp-> coeff=r;
    return temp;
}



polynome supprimerMonome(polynome p, int e){
    if (p==NULL)
        p=NULL;
    else{
        if((p->suivant==NULL) && (p->valeur->degre==e))
            p=NULL;
        else{
            while (p->valeur->degre!=e){
                p=p->suivant;
            }
        }
        return p;
    }
}

polynome supprimerMonome(polynome p, int e){
    if (p==NULL)
        p=NULL;
    else{
        if(p->valeur->degre == e)
            p=p->suivant;
        else{
            polynome p1;
            p1=(poly*)malloc(sizeof(poly));
            p1=p;
            while((p1->suivant != NULL) && (p1->suivant->valeur->degre) != e)
                p1 = p1->suivant;
            if(p1->suivant != NULL)
                p1->suivant = p1->suivant->suivant;
        }
    }
    return p;
}


polynome additionner(polynome p1, polynome p2){
    polynome p;
    while ((p1->suivant!=NULL) && (p2->suivant!=NULL)){
        p=(poly*)malloc(sizeof(poly));
        if ((p1->valeur->degre) == (p2->valeur->degre)){
            p->valeur->coef=(p1->valeur->coef)+(p2->valeur->coef);
            p->valeur->degre=p1->valeur->degre;
            p1=p1->suivant;
            p2=p2->suivant;
            p=p->suivant;
        }
        else{
            if ((p1->valeur->degre) > (p2->valeur->degre)){
                p->valeur->coef=(p1->valeur->coef);
                p->valeur->degre=p1->valeur->degre;
                p=p->suivant;
                p1=p1->suivant;
            }
            else{
                p->valeur->coef=(p2->valeur->coef);
                p->valeur->degre=p2->valeur->degre;
                p=p->suivant;
                p2=p2->suivant;
            }
        }
        return p;
    }
}






polynome ajouterMonome(polynome p, monome m){
    polynome p1=p;
    polynome temp;
    if (p==NULL){
        temp=(poly*)malloc(sizeof(poly));
        temp->valeur=m;
        temp->suivant=NULL;
        p=temp;
    }
    else{
        while(p1->suivant!=NULL){
            temp=(poly*)malloc(sizeof(poly));
            if (m->degre==p1->valeur->degre){
                (temp->valeur->coef) = (p1->valeur->coef)+(m->coef);
                (temp->valeur->degre) = (p1->valeur->degre);
                temp=temp->suivant;
            }
            else{
                temp->valeur=p1->valeur;
                temp->suivant=p1->suivant;
            }
        }
    }
    return temp;
}


polynome ajouterMonome(polynome p, monome m){
    polynome temp;
    polynome p1=p;
    temp=(poly*)malloc(sizeof(poly));
    temp->valeur=m;
    temp->suivant=NULL;
    if (p==NULL)
        p=temp;
    else{
        while (p1->suivant !=NULL){
            p1=p1->suivant;
        }
        p1->suivant=temp;
    }
    return p;
}




polynome ajouterMonome(polynome p, monome m){
    polynome temp;
    polynome p1=p;
    if (p==NULL){
        temp=(poly*)malloc(sizeof(poly));
        temp->valeur=m;
        temp->suivant=NULL;
        p=temp;
    }
    else{
        while (p1->suivant !=NULL){
            if (p1->valeur->degre==m->degre)
                (p1->valeur->coef)=(p1->valeur->coef)+(m->coef);
            else
                p1=p1->suivant;
        }
    }
    return p;
}











polynome ajouterMonome(polynome p, monome m){
    polynome temp;
    polynome p1=p;
    temp=(poly*)malloc(sizeof(poly));
    temp->valeur=m;
    temp->suivant=NULL;
    if (p==NULL)
        p=temp;
    else{
        while ((p1->suivant !=NULL) && (p1->valeur->degre!=m->degre)){
            p1=p1->suivant;
        }
        if (p1->valeur->degre==m->degre)
            p1->valeur->coef=(m->coef)+(p1->valeur->coef);
        else
            p1->suivant=temp;
    }
    return p;
}










