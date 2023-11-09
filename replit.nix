{ pkgs }: {
	deps = [
   pkgs.cmake
   pkgs.autoconf
		pkgs.nodePackages.prettier
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}