#include <stdio.h>
#include <iostream>
#include <libtorrent/session.hpp>
#include <libtorrent/add_torrent_params.hpp>
#include <libtorrent/torrent_handle.hpp>

namespace lt = libtorrent;
int main(int argc, char const* argv[]){
	std::cout << argv[0] << std::endl;
	std::cout << argc << std::endl;
	return 0;
}
