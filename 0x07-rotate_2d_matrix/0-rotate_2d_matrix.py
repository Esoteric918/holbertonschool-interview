#!/usr/bin/python3
''' Rotate a 2D matrix 90 degrees clockwise using list/zip in Python '''


def rotate_2d_matrix(matrix):
    """Rotate a 2D matrix 90 degrees clockwise using list/zip in Python"""
    matrix[:] = [list(x) for x in zip(*matrix[::-1])]
