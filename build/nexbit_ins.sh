#!/bin/bash
# This is the nexbit Menu System v1.0 
## ----------------------------------
# Define variables
# ----------------------------------
EDITOR=nano
RED='\033[0;41;30m'
STD='\033[0;0;39m'
 
# ----------------------------------
# Define System Functions
# ----------------------------------
pause(){
  read -p " Press [Enter] key to continue..." fackEnterKey
}

# Ubuntu System Updater Function
update_os(){
	clear
	echo " Updating Operating System..."
	sudo apt-get update -qq
	sudo apt-get upgrade -qq
	sudo apt-get dist-upgrade -qq
	sudo apt-get install g++-multilib libc6-dev-i386 p7zip-full autoconf automake autopoint bash bison bzip2 cmake flex gettext git g++ gperf intltool libffi-dev libtool libltdl-dev libssl-dev libxml-parser-perl make openssl patch perl pkg-config python ruby scons sed unzip wget xz-utils libtool-bin ruby scons libtool libgdk-pixbuf2.0-dev dos2unix ntp -qq
	sudo apt-get install git
 
	echo " Installing Linux Daemon Building Tools..."
	sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils -qq
	sudo apt-get install libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-program-options-dev libboost-test-dev libboost-thread-dev -qq
	sudo apt-get install libboost-all-dev -qq
	sudo apt-get install software-properties-common -qq
	sudo add-apt-repository ppa:bitcoin/bitcoin -qq
	sudo apt-get update -qq
	sudo apt-get install libdb4.8-dev libdb4.8++-dev -qq
	sudo apt-get install libminiupnpc-dev -qq
	sudo apt-get install libzmq3-dev -qq
	sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler -qq
	sudo apt-get install libqt4-dev libprotobuf-dev protobuf-compiler -qq
	echo " Finished Updating Operating System...."
	echo " "
   pause
}
 
# MXE Installer Function
install_mxe(){
	clear
	echo " Installing MXE will take a while, you should make a sandwich or something...."
	cd /mnt
	sudo git clone https://github.com/mxe/mxe.git && cd /mnt/mxe/src
	sudo rm openssl.mk
	sudo wget https://github.com/nexbitproject/nexbit/blob/master/scripts/openssl.mk 
	cd ..
	sudo make MXE_TARGETS='i686-w64-mingw32.static' qt5 
	sudo make  MXE_TARGETS="i686-w64-mingw32.static" qttools 
	sudo make  MXE_TARGETS="i686-w64-mingw32.static" boost  
	sudo make qt5 miniupnpc db boost -j4 MXE_PLUGIN_DIRS=$PWD/plugins/examples/qt5-freeze
	echo " Installing MXE Install has finished..."
	echo " "
   pause
}

# MXE Updater Function
update_mxe(){
	clear
	echo " Updating MXE will take a while, you should make a sandwich or something...."
	cd /mnt/mxe
#	sudo make update
	echo " Check for Errors before continuing "
    pause
}

# Get Nexbit Github Source Function
#get_nexbit(){
#	clear
	echo " Cloning Nexbit Source from Master Branch..."
#	cd /home/ndex/Desktop
#	git clone https://github.com/nexbitproject/nexbit.git
	echo " Check for Errors before continuing "
    pause
#}

# Update Github Source Function
update_nexbit(){
	clear
	echo " Updating Nexbit Source from Master Branch..."
	cd /home/ndex/BITBD/@research/nexbit/
	git pull
	echo " Check for Errors before continuing "
    pause
}


# Ubuntu 3rd Party Installer Function
install_3rdparty(){
	clear

	# Install Openssl
	echo " Installing Openssl-1.0.2d"
	cd /home/ndex/BITBD/@research/nexbit/
	wget https://www.openssl.org/source/old/1.0.2/openssl-1.0.2b.tar.gz
	tar -xzvf openssl-1.0.2b.tar.gz
	cp -R openssl-1.0.2b openssl-win32-build
	make clean
	#cp -R openssl-1.1.0h openssl-win32-build
	cd openssl-win32-build
	export PATH=/mnt/mxe/usr/bin:$PATH
	export PATH=$MXEPATH/bin:$PATH
	CROSS_COMPILE="i686-w64-mingw32.static-" ./Configure mingw no-asm no-ssl no-shared --prefix=/mnt/mxe/usr/i686-w64-mingw32.static
	sudo make depend
	make -j4
	echo " Check for Errors before continuing "
	pause
   
	# Install Berkely DB
	echo " Installing Db-4.8.30/"
	cd /home/ndex/BITBD/@research/nexbit/
	wget https://github.com/nexbitproject/nexbit/blob/master/depends/sources/db-4.8.30.NC.tar.gz
	tar zxvf db-4.8.30.tar.gz
	cd /home/ndex/BITBD/@research/nexbit/db-4.8.30
	make clean
	wget https://github.com/nexbitproject/nexbit/blob/master/scripts/bdb.sh
	export PATH=/mnt/mxe/usr/bin:$PATH
	export PATH=$MXEPATH/bin:$PATH
	dos2unix berekeydb.sh
	chmod ugo+x /home/ndex/BITBD/@research/nexbit/db-4.8.30/berekeydb.sh
	sudo /home/ndex/BITBD/@research/nexbit/db-4.8.30/./berekeydb.sh
	echo " Check for Errors before continuing "
	pause
   
	echo " All 3rdParty Software Installed"
	echo " "
	pause
	
}

# Displays Windows Menu Choices
windows_options(){
	local choice
	read -p " Enter choice [ 1 - 2 ] or B " choice
	case $choice in
		1) windows_qt ;;
		2) windows_qt ;;
		B) return ;;
		*) echo -e " ${RED}Error...${STD}" && sleep 2
	esac
}

# Build Windows Daemon
windows_daemon(){
	echo " "
	pause
}

# Build Windows QT Wallet
windows_qt(){
	echo " Building Windows Wallets"
	cd /home/ndex/BITBD/@research/nexbit/
	make clean

	cd src/leveldb
	export PATH=/mnt/mxe/usr/bin:$PATH
	export PATH=$MXEPATH/bin:$PATH
	TARGET_OS=NATIVE_WINDOWS make -j4 CC=i686-w64-mingw32.static-gcc CXX=i686-w64-mingw32.static-g++ libleveldb.a libmemenv.a
	cd ../..
	chmod 775 * -R
	
	cd src/secp256k1
	make clean
	export PATH=/mnt/mxe/usr/bin:$PATH
	export PATH=$MXEPATH/bin:$PATH
	chmod 775 * -R
	./autogen.sh
	./configure --host=i686-w64-mingw32.static --enable-static --disable-shared --enable-module-recovery
	make -j4
	cd ../..
	
	export PATH=/mnt/mxe/usr/bin:$PATH
	export PATH=$MXEPATH/bin:$PATH
	/mnt/mxe/usr/i686-w64-mingw32.static/qt5/bin/qmake Nexbit.pro
	make -j4
	pause
}

# Build Windows Menu
build_win(){
	clear
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo "     Windows Build Menu "
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo " 1. Build Windows Daemon : Server Wallets"
	echo " 2. Build QT Wallet : Desktop Wallets"
	echo " B. Back to Previous Menu"
	echo " "
	windows_options
}

# Displays Linux Menu Choices
linux_options(){
	local choice
	read -p " Enter choice [ 1 - 2 ] or B " choice
	case $choice in
		1) linux_daemon ;;
		2) linux_qt ;;
		B) return ;;
		*) echo -e " ${RED}Error...${STD}" && sleep 2
	esac
}

# Build Linux Daemon
linux_daemon(){
	echo " Building Linux Daemon"
	cd /home/ndex/BITBD/@research/nexbit
	export PATH=/mnt/mxe/usr/bin:$PATH
	export PATH=$MXEPATH/bin:$PATH
	sudo ./compile-daemon.sh
	cp src/Nexbitd .
	echo " Done Building Linux Daemon"
	pause
}

# Build Linux QT Wallet
linux_qt(){
	echo " Building Linux QT Wallet"
	cd /home/ndex/BITBD/@research/nexbit
	make clean
	export PATH=/mnt/mxe/usr/bin:$PATH
	export PATH=$MXEPATH/bin:$PATH
	/usr/lib/x86_64-linux-gnu/qt5/bin/qmake linux3.pro
	make -j4
	#sudo ./compile-qt.sh
	echo " Done Building Linux QT Wallet"
	pause
}

# Build Linux Menu
build_linux(){
	clear
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo "    Nexbit Linux Build Menu "
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo " 1. Build Linux Daemon : Server Wallets"
	echo " 2. Build QT Wallet : Desktop Wallets"
	echo " B. Back to Previous Menu"
	echo " "
    linux_options
}

# Displays MacOS Menu Choices
macos_options(){
	local choice
	read -p " Enter choice [ 1 - 2 ] or B " choice
	case $choice in
		1) update_os ;;
		2) install_mxe ;;
		B) return ;;
		*) echo -e " ${RED}Error...${STD}" && sleep 2
	esac
}

# Build MacOS Daemon
macos_daemon(){
	echo " "
	pause
}

# Build MacOS QT Wallet
macos_qt(){
	echo " "
	pause
}

# Build MacOS Menu
build_macos(){
	clear
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo "    Nexbit MacOS Build Menu "
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo " 1. Build MacOS Daemon : Server Wallets"
	echo " 2. Build QT Wallet : Desktop Wallets"
	echo " B. Back to Previous Menu"
	echo " "
    macos_options
}

# function to display main menus
show_menus() {
	clear
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo "     Visit our Website : https://www.nexbit.io for Latest Updates     "
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo "                                                                                 
	cat << "EOF"  <   Nexbit Installer Ver 1.0
     
                                                                            EOF"
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo "     Nexbit Main Menu "
	echo " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"	
	echo " 1. Update Operating System"
	echo " 2. Install MXE Build Environment"
#	echo " 3. Update MXE Build Environment"
	echo " 3. Get Nexbit Source"
	echo " 4. Update Nexbit Source"
	echo " 5. Install 3rd Party Software"
	echo " 6. Build Windows Wallets"
	echo " 7. Build Linux Wallets"
	echo " 8. Build MacOS Wallets"
	echo " Q. Exit Nexbit Installer System"
	echo " "

}

# Displays Main Menu Choices
read_options(){
	local choice
	read -p " Enter choice [ 1 - 9 ] or Q to exit " choice
	case $choice in
		1) update_os ;;
		2) install_mxe ;;
		3) update_mxe ;;
		4) get_nexbit ;;
		5) update_nexbit ;;
		6) install_3rdparty ;;
		7) build_win ;;
		8) build_linux ;;
		9) build_macos ;;
		Q) exit 0;;
		*) echo -e " ${RED}Error...${STD}" && sleep 2
	esac
}
 
# ----------------------------------------------
# Step #3: Trap CTRL+C, CTRL+Z and quit singles
# ----------------------------------------------
trap '' SIGINT SIGQUIT SIGTSTP
 
# -----------------------------------
# Step #4: Main logic - infinite loop
# ------------------------------------
while true
do
 
	show_menus
	read_options
done
