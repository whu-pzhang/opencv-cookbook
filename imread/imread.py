#!/usr/bin/env python3
import cv2

# Read 8-bit grayscale image
im = cv2.imread("earth-16-bit-per-channel.png", cv2.IMREAD_GRAYSCALE)
print("flags :  cv2.IMREAD_GRAYSCALE")
print("Size {}, type {}\n".format(im.shape, im.dtype))

# Read 8-bit color image
im = cv2.imread("earth-16-bit-per-channel.png", cv2.IMREAD_COLOR)
print("flags : cv2.IMREAD_COLOR")
print("Size {}, type {}\n".format(im.shape, im.dtype))

# Read 16-bit color image
im = cv2.imread("earth-16-bit-per-channel.png",
                cv2.IMREAD_ANYCOLOR | cv2.IMREAD_ANYDEPTH)
print("flags :  cv2.IMREAD_ANYCOLOR | cv2.IMREAD_ANYDEPTH")
print("Size {}, type {}\n".format(im.shape, im.dtype))

# Read transparent PNG / TIFF image
im = cv2.imread("earth-16-bit-per-channel.png", cv2.IMREAD_UNCHANGED)
print("flags : cv2.IMREAD_UNCHANGED")
print("Size {}, type {}\n".format(im.shape, im.dtype))
