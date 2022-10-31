#!/usr/bin/python3

def rotate_2d_matrix(matrix):
    """Rotate a 2D matrix 90 degrees clockwise using list/zip in Python"""
    matrix[:] = list(zip(*matrix[::-1]))



