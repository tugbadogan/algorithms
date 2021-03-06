#include <iostream>
#include "Discography.h"
using namespace std;
int main()
{
	Discography ds;
	cout << endl;
	ds.showAllAlbums();
	cout << endl;
	ds.addAlbum("Yellow Submarine", "The Beatles", 10, 10, 1969);
	ds.addAlbum("Let It Be", "The Beatles", 9, 4, 1970);
	ds.addAlbum("The Road to Hell", "Chris Rea", 20, 5, 1982);
	ds.addAlbum("Self Portrait", "Bob Dylan", 26, 1, 1970);
	ds.addAlbum("The Final Acclaim", "Rod Stewart", 30, 9, 1977);
	ds.addAlbum("The Freewheelin' Bob Dylan", "Bob Dylan", 21, 8, 1963);
	ds.addAlbum("The Celtic Soul", "Dexys Midnight Runners", 22, 4, 1983);
	ds.addAlbum("Help!", "The Beatles", 20, 5, 1965);
	ds.addAlbum("The Road to Hell", "Chris Rea", 20, 5, 1982);
	cout << endl;
	ds.showAllAlbums();
	cout << endl;
	ds.removeAlbum("Self Portrait");
	cout << endl;
	ds.showAllAlbums();
	cout << endl;
	cout << endl;
	ds.showAlbum("Yellow Submarine");
	cout << endl;
	ds.addSong("The Celtic Soul", "Come on Eileen", 254);
	ds.addSong("Yellow Submarine", "Yellow Submarine", 160 );
	ds.addSong("Yellow Submarine", "All You Need is Love", 231);
	ds.addSong("Yellow Submarine", "All Together Now", 131);
	ds.addSong("Yellow Submarine", "Only a Northern Song", 204);
	ds.addSong("Let It Be", "Across The Universe", 250);
	ds.addSong("Let It Be", "Let It Be", 230);
	ds.addSong("Let It Be", "Magie Mae", 170);
	ds.addSong("The Road to Hell", "The Road to Hell", 240);
	ds.addSong("The Road to Hell", "Marvin", 304);
	ds.addSong("The Final Acclaim", "You're in My Heart", 187);
	ds.addSong("Self Portrait", "You Belong to Me", 210);
	ds.addSong("Help!", "The Night Before", 172);
	ds.addSong("Help!", "Ticket to Ride", 156);
	ds.addSong("Help!", "I Need You", 110);
	ds.addSong("The Freewheelin' Bob Dylan", "Blowin' in the Wind", 180);
	cout << endl;
	ds.showAlbum("Yellow Submarine");
	cout << endl;
	ds.showAlbum("The Road to Hell");
	cout << endl;
	ds.removeSong("Yellow Submarine", "All Together Now");
	cout << endl;
	ds.showAlbum("Yellow Submarine");
	cout << endl;
	cout << endl;
	ds.showShorterLength(180);
	cout << endl;
	cout << endl;
	ds.showSingerAlbums("The Beatles");
	cout << endl;
	ds.showSingerAlbums("Bob Dylan");
	cout << endl;
	cout << endl;
	ds.showAlbums(1970);
	cout << endl;
	ds.showAlbums(1969, 1982);
	cout << endl;
	return 0;
}
