all: install-libs compile

install-libs:
	@echo "Installing required libraries..."
	sudo apt-get update
	sudo apt-get install -y g++-multilib gcc-multilib g++
	@echo "Library installation complete!"

compile:
	@echo "Compiling binaries..."
	g++ -m32 ./src/print.cpp ./src/stats.cpp ./src/timer.cpp ./src/arguments.cpp ./src/i18n.cpp ./src/host.cpp ./src/socket.cpp ./src/main.cpp -o ./bin/i386-tcpping
	g++ -m64 ./src/print.cpp ./src/stats.cpp ./src/timer.cpp ./src/arguments.cpp ./src/i18n.cpp ./src/host.cpp ./src/socket.cpp ./src/main.cpp -o ./bin/x86-64-tcpping
        g++ -m64 ./src/print.cpp ./src/stats.cpp ./src/timer.cpp ./src/arguments.cpp ./src/i18n.cpp ./src/host.cpp ./src/socket.cpp ./src/main.cpp -o ./bin/tcpping
	g++ -m64 ./src/print.cpp ./src/stats.cpp ./src/timer.cpp ./src/arguments.cpp ./src/i18n.cpp ./src/host.cpp ./src/socket.cpp ./src/main.cpp -o /root/tcpping
	@echo "Compilation complete!"
