/*
 * senza nome.c
 * 
 * Copyright 2014 Knoppix User <knoppix@Microknoppix>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	//la funzione sarà y=(i*i)/2+i+4
	double i,a,b;
	
	cout<<"inserisci l'intervallo: \nA=";
	cin>>a;
	cout<<"B=";
	cin>>b;
	
	for(i=a;i<b;i=i+0.001)
	{
		if((i*i)/2+i+4==0)
		{
			cout<<"la funzione è 0 in "<<i<<endl;
		}
	}
	

	return 0;
}

