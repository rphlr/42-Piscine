#!/bin/sh
find . -name "*.sh" | rev | cut -c4- | cut -d '/' -f1 | rev
