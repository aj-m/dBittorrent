#dBittorrent
*A simple torrent client for the 3DS*

##Features

###Implemented

- Nothing yet

###Planned

- Load from `.torrent` files
- Load from magnet link/infohash
- Load from QR code
- Create torrents
- Export to `.torrent` file
- Export to magnet
- Export to QR
- Torrent management options

##Dependencies

- [libtorrent-rasterbar](https://github.com/arvidn/libtorrent)
- Boost (for libtorrent dependencies)

##Building

Honestly I'm flying by the seat of my pants here.  
My `include` directory links to `/usr/include`. If you're on Windows, it should  
point to whatever directory you've got for storing headers, or you should tweak  
`Makefile` yourself.  
Once that's sorted, `make` in the project root and hope it doesn't explode.

##Caveats

###Things I don't know how to do yet

- Build external libraries to work on DS
- Work with the DS filesystem
- Pretty much all of the DS api
 
