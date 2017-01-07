#!/usr/bin/env python
print(sum(n for n in range(1000) if not (n%3 and n%5)))
