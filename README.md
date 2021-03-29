# gram

Lightweight text editor in C in less than 1000 LoC.

Adapted from [antirez/kilo](https://github.com/antirez/kilo) with the
[Build Your Own Text Editor](http://viewsourcecode.org/snaptoken/kilo) tutorial.

## Table of Contents

-   [Getting Started](#getting-started)
    -   [Prerequisites](#prerequisites)
    -   [Installation](#installation)
-   [Usage](#usage)
-   [Contributing](#contributing)
-   [Versioning](#versioning)
-   [Authors](#authors)
-   [License](#license)
-   [Acknowledgments](#acknowledgments)

## Getting started

### Prerequisites

You will need a C compiler and [GNU Make](https://www.gnu.org/software/make/)
installed on your machine. On Windows, it's probably easiest to use
[WSL](https://docs.microsoft.com/en-us/windows/wsl/).

### Installation

Clone the repository:

```
git clone https://github.com/umcconnell/gram
cd gram/
```

Then, use GNU Make to build:

```
make
```

Alternatively, you can download and install pre-built binaries for Linux under
the [Releases Tab](https://github.com/umcconnell/gram/releases).

## Usage

Usage: `gram [optional: filename]`

Keys:

```
Ctrl-S:   Save
Ctrl-F:   Find
Ctrl-C/Q: Quit
```

## Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) and
[CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) for details on our code of conduct, and
the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available,
see the [tags on this repository](https://github.com/umcconnell/gram/tags).

## Authors

Ulysse McConnell - [umcconnell](https://github.com/umcconnell/)

See also the list of
[contributors](https://github.com/umcconnell/gram/contributors) who
participated in this project.

## License

gram is distributed under the [BSD 2-Clause License](LICENSE.md).

## Acknowledgments

This project is adapted from [antirez/kilo](https://github.com/antirez/kilo).

Huge shout-out goes to the awesome
[Build Your Own Text Editor](http://viewsourcecode.org/snaptoken/kilo) tutorial.

The original kilo editor was slightly modified. Several languages and
auto-indent were added.
