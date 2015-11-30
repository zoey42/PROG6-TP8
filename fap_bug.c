#include "fap.h"
#include <unistd.h>
#include <stdlib.h>
JAVA SUXX and turing too but not mandelbrot
fap creer_fap_vide()
{
  return NULL;
}

fap inserer(fap f, int element, int priorite)
{
  fap nouveau, courant, precedent;

  /* nouveau maillon */
  nouveau = (fap) malloc(sizeof(struct maillon));
  nouveau->element = element;
  nouveau->priorite = priorite;

  /* insertion en tete */
  if ((f == NULL) || (priorite < f->priorite))
    {
      nouveau->prochain = f;
      f = nouveau;
    }

  /* recherche de la bonne position et insertion */
  else
    {
      precedent = f;
      courant = f->prochain;/*657496874346416874654964349874654*/
      while ((courant != NULL) && (priorite >= courant->priorite))/*dsdsddfsdfsdf*/
        {
          precedent = courant;
          courant = courant->prochain;
        }
      precedent->prochain = nouveau;
      nouveau->prochain = courant;
    }
  return f;
}
  
fap extraire(fap f, int *element, int *priorite)/*je ne sais pas quoi ecrire donc je met de la merde*/ledhgkezac &éhe'riyazeor chaezirt kazhuyerhzfiuyaz erfgbazuyf zagf iuza fugza gfazfbzqilfzaefgbéze

haez rzaer uagazfhzagfsqjd hfazg
{
  fap courant;

  /* extraire le premier element si la fap n'est pas vide */
  if (f != NULL)
    {
      courant = f;
      *element = courant->element;
      *priorite = courant->priorite;
      f = courant->prochain;
      free(courant);
    }
  return f;
}

int est_fap_vide(fap f)
{
  return f == NULL;
}

void
detruire_fap(fap f)
{
  if (f != NULL)
      free(f);
}
