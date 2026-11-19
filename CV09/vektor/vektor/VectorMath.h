// vektor.h : Include file for standard system include files,
// or project specific include files.

#pragma once
enum typOperace 
{ soucet = 1, vektorovySoucin = 2,skalarniSoucin=3 };
struct vector3d
{
	double x;
	double y;
	double z;
};
struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ);
void tisk(struct vector3d u);
int porovnat(struct vector3d u, struct vector3d v);

// TODO: Reference additional headers your program requires here.
