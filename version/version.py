#!/usr/bin/env python3

import cv2

print("OpenCV version : {}".format(cv2.__version__))

major_ver, minor_ver, subminor_ver = cv2.__version__.split(".")
print("Major version : {}".format(major_ver))
print("Minor version : {}".format(minor_ver))
print("Subminor version : {}".format(subminor_ver))
