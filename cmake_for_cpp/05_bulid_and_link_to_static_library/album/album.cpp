#include <iostream>

#include "PlaylistFactory.h"

int main()
{
  std::cout << "------- Album Details ---------------" << std::endl;

  PlaylistFactory & pl = PlaylistFactory::instance();
  std::vector<std::vector<SongDetails> > songlist = pl.getSongLists();
    
  for (auto i = 0; i < songlist.size(); i++)
  {
    std::vector<SongDetails> obj1 = songlist[i];
    for (auto j = 0; j < obj1.size(); j++)
    {
      SongDetails sd = obj1[j];
      std::cout << "Name : " << sd.getName() << ", Singer : " << sd.getSinger() << ", Album : " << sd.getAlbum() << ", ReleaseYear : " << sd.getReleaseYear() << std::endl;
    }
  }

  return 0;
}