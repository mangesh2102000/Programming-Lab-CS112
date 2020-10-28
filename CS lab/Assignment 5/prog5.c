// Name of coder  : Mangesh Chandrawanshi
// Roll No        : 1801cs16
// Date created   : 12/02/2019
// Brief objective of the program : Finding neighbouring points and type of given point


#include <stdio.h>

int a1 = 5, a2 = 8;
int b1 = 6, b2 = 7;
int c1 = 6, c2 = 5;
int d1 = 2, d2 = 4;
int e1 = 3, e2 = 4;
int f1 = 5, f2 = 4;
int g1 = 7, g2 = 4;
int h1 = 9, h2 = 4;
int i1 = 3, i2 = 3;	
int j11 = 8, j2 = 2;
int k1,k2;

int neigh_pt(int x1, int y1, int x2, int y2, int dist_sqr)
{
	
	if(((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) <= dist_sqr && ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) != 0)
		return 1;
	else
		return 0;
}

int no_of_neigh(int x1, int x2, int e)
{
	int n = 0;
		
		if ( neigh_pt(x1,x2,a1,a2,e) ) n++;	
	        if ( neigh_pt(x1,x2,b1,b2,e) ) n++;
		if ( neigh_pt(x1,x2,c1,c2,e) ) n++;
		if ( neigh_pt(x1,x2,d1,d2,e) ) n++;
		if ( neigh_pt(x1,x2,e1,e2,e) ) n++;
		if ( neigh_pt(x1,x2,f1,f2,e) ) n++;
		if ( neigh_pt(x1,x2,g1,g2,e) ) n++;
		if ( neigh_pt(x1,x2,h1,h2,e) ) n++;	
		if ( neigh_pt(x1,x2,i1,i2,e) ) n++;
		if ( neigh_pt(x1,x2,j11,j2,e) ) n++;
		if ( neigh_pt(x1,x2,k1,k2,e) ) n++;

	return n;
}



int main()
{
	int e, min_pts, x1, x2, type = 3, na, nb, nc, nd, ne, nf, ng, nh, ni, nj, nk, n;
	int fa = 0, fb = 0, fc = 0, fd = 0, fe = 0, ff = 0, fg = 0, fh = 0, fi = 0, fj = 0, fk = 0;
	char input_pt;
	

	printf("Enter Input : ");
	scanf("%d %d %c %d %d", &e, &min_pts, &input_pt, &k1, &k2);

	printf("The desired output after adding new point : \n[");

	na = no_of_neigh(a1,a2,e);
	nb = no_of_neigh(b1,b2,e);
	nc = no_of_neigh(c1,c2,e);
	nd = no_of_neigh(d1,d2,e);
	ne = no_of_neigh(e1,e2,e);
	nf = no_of_neigh(f1,f2,e);
	ng = no_of_neigh(g1,g2,e);
	nh = no_of_neigh(h1,h2,e);
	ni = no_of_neigh(i1,i2,e);
	nj = no_of_neigh(j11,j2,e);
	nk = no_of_neigh(k1,k2,e);


	if (input_pt == 'A')
	{
		x1 = a1; x2 = a2;
		if ( neigh_pt(x1,x2,b1,b2,e) ) {printf("B");fb = 1;}
		if ( neigh_pt(x1,x2,c1,c2,e) ) {printf(" C");fc = 1;}
		if ( neigh_pt(x1,x2,d1,d2,e) ) {printf(" D");fd = 1;}	
		if ( neigh_pt(x1,x2,e1,e2,e) ) {printf(" E");fe = 1;}
		if ( neigh_pt(x1,x2,f1,f2,e) ) {printf(" F");ff = 1;}
		if ( neigh_pt(x1,x2,g1,g2,e) ) {printf(" G");fg = 1;}
		if ( neigh_pt(x1,x2,h1,h2,e) ) {printf(" H");fh	= 1;}
		if ( neigh_pt(x1,x2,i1,i2,e) ) {printf(" I");fi = 1;}
		if ( neigh_pt(x1,x2,j11,j2,e) ) {printf(" J");fj = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = na;
	}
	else if (input_pt == 'B')
	{
		x1 = b1; x2 = b2;		
		if ( neigh_pt(x1,x2,a1,a2,e) ) {printf("A");fa = 1;}
		if ( neigh_pt(x1,x2,c1,c2,e) ) {printf(" C");fc = 1;}
		if ( neigh_pt(x1,x2,d1,d2,e) ) {printf(" D");fd	= 1;}
		if ( neigh_pt(x1,x2,e1,e2,e) ) {printf(" E");fe = 1;}
		if ( neigh_pt(x1,x2,f1,f2,e) ) {printf(" F");ff = 1;}
		if ( neigh_pt(x1,x2,g1,g2,e) ) {printf(" G");fg = 1;}
		if ( neigh_pt(x1,x2,h1,h2,e) ) {printf(" H");fh	= 1;}
		if ( neigh_pt(x1,x2,i1,i2,e) ) {printf(" I");fi = 1;}
		if ( neigh_pt(x1,x2,j11,j2,e) ) {printf(" J");fj = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = nb;
	}
	else if (input_pt == 'C')
	{
		x1 = c1; x2 = c2;
		if ( neigh_pt(x1,x2,a1,a2,e) ) {printf("A");fa = 1;}
		if ( neigh_pt(x1,x2,b1,b2,e) ) {printf(" B");fb = 1;}
		if ( neigh_pt(x1,x2,d1,d2,e) ) {printf(" D");fd = 1;}	
		if ( neigh_pt(x1,x2,e1,e2,e) ) {printf(" E");fe = 1;}
		if ( neigh_pt(x1,x2,f1,f2,e) ) {printf(" F");ff = 1;}
		if ( neigh_pt(x1,x2,g1,g2,e) ) {printf(" G");fg = 1;}
		if ( neigh_pt(x1,x2,h1,h2,e) ) {printf(" H");fh = 1;}	
		if ( neigh_pt(x1,x2,i1,i2,e) ) {printf(" I");fi = 1;}
		if ( neigh_pt(x1,x2,j11,j2,e) ) {printf(" J");fj = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = nc;
	}
	else if (input_pt == 'D')
	{
		x1 = d1; x2 = d2;
		if ( neigh_pt(x1,x2,a1,a2,e) ) {printf("A");fa = 1;}
		if ( neigh_pt(x1,x2,b1,b2,e) ) {printf(" B");fb = 1;}
		if ( neigh_pt(x1,x2,c1,c2,e) ) {printf(" C");fc = 1;}	
		if ( neigh_pt(x1,x2,e1,e2,e) ) {printf(" E");fe = 1;}
		if ( neigh_pt(x1,x2,f1,f2,e) ) {printf(" F");ff = 1;}
		if ( neigh_pt(x1,x2,g1,g2,e) ) {printf(" G");fg = 1;}
		if ( neigh_pt(x1,x2,h1,h2,e) ) {printf(" H");fh = 1;}	
		if ( neigh_pt(x1,x2,i1,i2,e) ) {printf(" I");fi = 1;}
		if ( neigh_pt(x1,x2,j11,j2,e) ) {printf(" J");fj = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = nd;
	}
	else if (input_pt == 'E')
	{
		x1 = e1; x2 = e2;
		if ( neigh_pt(x1,x2,a1,a2,e) ) {printf("A");fa = 1;}
		if ( neigh_pt(x1,x2,b1,b2,e) ) {printf(" B");fb = 1;}
		if ( neigh_pt(x1,x2,c1,c2,e) ) {printf(" C");fc = 1;}	
		if ( neigh_pt(x1,x2,d1,d2,e) ) {printf(" D");fd = 1;}
		if ( neigh_pt(x1,x2,f1,f2,e) ) {printf(" F");ff = 1;}
		if ( neigh_pt(x1,x2,g1,g2,e) ) {printf(" G");fg = 1;}
		if ( neigh_pt(x1,x2,h1,h2,e) ) {printf(" H");fh = 1;}	
		if ( neigh_pt(x1,x2,i1,i2,e) ) {printf(" I");fi = 1;}
		if ( neigh_pt(x1,x2,j11,j2,e) ) {printf(" J");fj = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = ne;
	}
	else if (input_pt == 'F')
	{
		x1 = f1; x2 = f2;
		if ( neigh_pt(x1,x2,a1,a2,e) ) {printf("A");fa = 1;}
		if ( neigh_pt(x1,x2,b1,b2,e) ) {printf(" B");fb = 1;}
		if ( neigh_pt(x1,x2,c1,c2,e) ) {printf(" C");fc = 1;}	
		if ( neigh_pt(x1,x2,d1,d2,e) ) {printf(" D");fd = 1;}
		if ( neigh_pt(x1,x2,e1,e2,e) ) {printf(" E");fe = 1;}
		if ( neigh_pt(x1,x2,g1,g2,e) ) {printf(" G");fg = 1;}
		if ( neigh_pt(x1,x2,h1,h2,e) ) {printf(" H");fh = 1;}	
		if ( neigh_pt(x1,x2,i1,i2,e) ) {printf(" I");fi = 1;}
		if ( neigh_pt(x1,x2,j11,j2,e) ) {printf(" J");fj = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = nf;
	}
	else if (input_pt == 'G')
	{
		x1 = g1; x2 = g2;
		if ( neigh_pt(x1,x2,a1,a2,e) ) {printf("A");fa = 1;}
		if ( neigh_pt(x1,x2,b1,b2,e) ) {printf(" B");fb = 1;}
		if ( neigh_pt(x1,x2,c1,c2,e) ) {printf(" C");fc = 1;}	
		if ( neigh_pt(x1,x2,d1,d2,e) ) {printf(" D");fd = 1;}
		if ( neigh_pt(x1,x2,e1,e2,e) ) {printf(" E");fe = 1;}
		if ( neigh_pt(x1,x2,f1,f2,e) ) {printf(" F");ff = 1;}
		if ( neigh_pt(x1,x2,h1,h2,e) ) {printf(" H");fh = 1;}	
		if ( neigh_pt(x1,x2,i1,i2,e) ) {printf(" I");fi = 1;}
		if ( neigh_pt(x1,x2,j11,j2,e) ) {printf(" J");fj = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = ng;
	}
	else if (input_pt == 'H')
	{
		x1 = h1; x2 = h2;
		if ( neigh_pt(x1,x2,a1,a2,e) ) {printf("A");fa = 1;}
		if ( neigh_pt(x1,x2,b1,b2,e) ) {printf(" B");fb = 1;}
		if ( neigh_pt(x1,x2,c1,c2,e) ) {printf(" C");fc = 1;}	
		if ( neigh_pt(x1,x2,d1,d2,e) ) {printf(" D");fd = 1;}
		if ( neigh_pt(x1,x2,e1,e2,e) ) {printf(" E");fe = 1;}
		if ( neigh_pt(x1,x2,f1,f2,e) ) {printf(" F");ff = 1;}
		if ( neigh_pt(x1,x2,g1,g2,e) ) {printf(" G");fg = 1;}	
		if ( neigh_pt(x1,x2,i1,i2,e) ) {printf(" I");fi = 1;}
		if ( neigh_pt(x1,x2,j11,j2,e) ) {printf(" J");fj = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = nh;
	}
	else if (input_pt == 'I')
	{	
		x1 = i1; x2 = i2;
		if ( neigh_pt(x1,x2,a1,a2,e) ) {printf("A");fa = 1;}
		if ( neigh_pt(x1,x2,b1,b2,e) ) {printf(" B");fb = 1;}
		if ( neigh_pt(x1,x2,c1,c2,e) ) {printf(" C");fc = 1;}	
		if ( neigh_pt(x1,x2,d1,d2,e) ) {printf(" D");fd = 1;}
		if ( neigh_pt(x1,x2,e1,e2,e) ) {printf(" E");fe = 1;}
		if ( neigh_pt(x1,x2,f1,f2,e) ) {printf(" F");ff = 1;}
		if ( neigh_pt(x1,x2,g1,g2,e) ) {printf(" G");fg = 1;}
		if ( neigh_pt(x1,x2,h1,h2,e) ) {printf(" H");fh = 1;}
		if ( neigh_pt(x1,x2,j11,j2,e) ) {printf(" J");fj = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = ni;
	}
	else if (input_pt == 'J')
	{	
		x1 = j11; x2 = j2;
		if ( neigh_pt(x1,x2,a1,a2,e) ) {printf("A");fa = 1;}
		if ( neigh_pt(x1,x2,b1,b2,e) ) {printf(" B");fb = 1;}
		if ( neigh_pt(x1,x2,c1,c2,e) ) {printf(" C");fc	= 1;}
		if ( neigh_pt(x1,x2,d1,d2,e) ) {printf(" D");fd = 1;}
		if ( neigh_pt(x1,x2,e1,e2,e) ) {printf(" E");fe = 1;}
		if ( neigh_pt(x1,x2,f1,f2,e) ) {printf(" F");ff = 1;}
		if ( neigh_pt(x1,x2,g1,g2,e) ) {printf(" G");fg = 1;}	
		if ( neigh_pt(x1,x2,h1,h2,e) ) {printf(" H");fh = 1;}
		if ( neigh_pt(x1,x2,i1,i2,e) ) {printf(" I");fi = 1;}
		if ( neigh_pt(x1,x2,k1,k2,e) ) {printf(" K");fk = 1;}
		n = nj;
	}

	
	printf("]");

	if (n >= min_pts)
	{
		type = 1;
	}
	else
	{
		if (input_pt == 'A')
		{
			if (fb == 1){if (nb >= min_pts) type = 2;}
			if (fc == 1){if (nc >= min_pts) type = 2;}
			if (fd == 1){if (nd >= min_pts) type = 2;}
			if (fe == 1){if (ne >= min_pts) type = 2;}
			if (ff == 1){if (nf >= min_pts) type = 2;}
			if (fg == 1){if (ng >= min_pts) type = 2;}
			if (fh == 1){if (nh >= min_pts) type = 2;}
			if (fi == 1){if (ni >= min_pts) type = 2;}
			if (fj == 1){if (nj >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		}
		else if (input_pt == 'B')
		{
			if (fa == 1){if (na >= min_pts) type = 2;}
			if (fc == 1){if (nc >= min_pts) type = 2;}
			if (fd == 1){if (nd >= min_pts) type = 2;}
			if (fe == 1){if (ne >= min_pts) type = 2;}
			if (ff == 1){if (nf >= min_pts) type = 2;}
			if (fg == 1){if (ng >= min_pts) type = 2;}
			if (fh == 1){if (nh >= min_pts) type = 2;}
			if (fi == 1){if (ni >= min_pts) type = 2;}
			if (fj == 1){if (nj >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		}
		else if (input_pt == 'C')
		{
			if (fb == 1){if (nb >= min_pts) type = 2;}
			if (fa == 1){if (na >= min_pts) type = 2;}
			if (fd == 1){if (nd >= min_pts) type = 2;}
			if (fe == 1){if (ne >= min_pts) type = 2;}
			if (ff == 1){if (nf >= min_pts) type = 2;}
			if (fg == 1){if (ng >= min_pts) type = 2;}
			if (fh == 1){if (nh >= min_pts) type = 2;}
			if (fi == 1){if (ni >= min_pts) type = 2;}
			if (fj == 1){if (nj >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		}
		else if (input_pt == 'D')
		{
			if (fb == 1){if (nb >= min_pts) type = 2;}
			if (fc == 1){if (nc >= min_pts) type = 2;}
			if (fa == 1){if (na >= min_pts) type = 2;}
			if (fe == 1){if (ne >= min_pts) type = 2;}
			if (ff == 1){if (nf >= min_pts) type = 2;}
			if (fg == 1){if (ng >= min_pts) type = 2;}
			if (fh == 1){if (nh >= min_pts) type = 2;}
			if (fi == 1){if (ni >= min_pts) type = 2;}
			if (fj == 1){if (nj >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		}
		else if (input_pt == 'E')
		{
			if (fb == 1){if (nb >= min_pts) type = 2;}
			if (fc == 1){if (nc >= min_pts) type = 2;}
			if (fd == 1){if (nd >= min_pts) type = 2;}
			if (fa == 1){if (na >= min_pts) type = 2;}
			if (ff == 1){if (nf >= min_pts) type = 2;}
			if (fg == 1){if (ng >= min_pts) type = 2;}
			if (fh == 1){if (nh >= min_pts) type = 2;}
			if (fi == 1){if (ni >= min_pts) type = 2;}
			if (fj == 1){if (nj >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		}
		else if (input_pt == 'F')
		{
			if (fb == 1){if (nb >= min_pts) type = 2;}
			if (fc == 1){if (nc >= min_pts) type = 2;}
			if (fd == 1){if (nd >= min_pts) type = 2;}
			if (fe == 1){if (ne >= min_pts) type = 2;}
			if (fa == 1){if (na >= min_pts) type = 2;}
			if (fg == 1){if (ng >= min_pts) type = 2;}
			if (fh == 1){if (nh >= min_pts) type = 2;}
			if (fi == 1){if (ni >= min_pts) type = 2;}
			if (fj == 1){if (nj >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		}
		else if (input_pt == 'G')
		{
			if (fb == 1){if (nb >= min_pts) type = 2;}
			if (fc == 1){if (nc >= min_pts) type = 2;}
			if (fd == 1){if (nd >= min_pts) type = 2;}
			if (fe == 1){if (ne >= min_pts) type = 2;}
			if (ff == 1){if (nf >= min_pts) type = 2;}
			if (fa == 1){if (na >= min_pts) type = 2;}
			if (fh == 1){if (nh >= min_pts) type = 2;}
			if (fi == 1){if (ni >= min_pts) type = 2;}
			if (fj == 1){if (nj >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		}
		else if (input_pt == 'H')
		{
			if (fb == 1){if (nb >= min_pts) type = 2;}
			if (fc == 1){if (nc >= min_pts) type = 2;}
			if (fd == 1){if (nd >= min_pts) type = 2;}
			if (fe == 1){if (ne >= min_pts) type = 2;}
			if (ff == 1){if (nf >= min_pts) type = 2;}
			if (fg == 1){if (ng >= min_pts) type = 2;}
			if (fa == 1){if (na >= min_pts) type = 2;}
			if (fi == 1){if (ni >= min_pts) type = 2;}
			if (fj == 1){if (nj >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		}
		else if (input_pt == 'I')
		{
			if (fb == 1){if (nb >= min_pts) type = 2;}
			if (fc == 1){if (nc >= min_pts) type = 2;}
			if (fd == 1){if (nd >= min_pts) type = 2;}
			if (fe == 1){if (ne >= min_pts) type = 2;}
			if (ff == 1){if (nf >= min_pts) type = 2;}
			if (fg == 1){if (ng >= min_pts) type = 2;}
			if (fh == 1){if (nh >= min_pts) type = 2;}
			if (fa == 1){if (na >= min_pts) type = 2;}
			if (fj == 1){if (nj >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		}
		else if (input_pt == 'J')
		{
			if (fb == 1){if (nb >= min_pts) type = 2;}
			if (fc == 1){if (nc >= min_pts) type = 2;}
			if (fd == 1){if (nd >= min_pts) type = 2;}
			if (fe == 1){if (ne >= min_pts) type = 2;}
			if (ff == 1){if (nf >= min_pts) type = 2;}
			if (fg == 1){if (ng >= min_pts) type = 2;}
			if (fh == 1){if (nh >= min_pts) type = 2;}
			if (fi == 1){if (ni >= min_pts) type = 2;}
			if (fa == 1){if (na >= min_pts) type = 2;}
			if (fk == 1){if (nk >= min_pts) type = 2;}
		} 
		
	}

	printf("  Type %d point\n", type);

	return 0;
}
