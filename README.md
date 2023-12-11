# latexgen

## Usage

To access help, use the following arguement:
```
latexgen --help
```

For general usage, pass the name of the file wanted, and the ".tex" will be appended to the end.
```
latexgen [FILENAME]
```

Example of usage is:
```
latexgen finalReport
```
Produces the file "finalReport.tex"

## Making File

Clone the repo:
```
git clone https://github.com/tomm-g/latexgen.git
```

To make latexgen executable, use following terminal command, within repo:
```
make latexgen
```

## Adding to PATH

In .bashrc or .zshrc file, add following line:
```
export PATH="$PATH:[PATH TO REPO]"
```


