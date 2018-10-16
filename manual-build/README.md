# Overview
* [This README.md](https://github.com/transport-intelligence/induction-cpp/tree/master/manual-build/)

# Installation


# Walk-through
* Clone the Git repository
```bash
$ mkdir -p ~/dev/induction && cd ~/dev/induction
$ git clone https://github.com/transport-intelligence/induction-cpp.git
$ cd ~/dev/induction/induction-cpp/manual-build
```

* Build the project with manually-curated ``makefile``:
```bash
$ make check
```

* Build the project with ``CMake``:
```bash
$ mkdir build && cd build
$ cmake ..
$ make check
```

