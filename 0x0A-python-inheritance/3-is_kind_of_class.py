#!/usr/bin/python3
"""A function that returns True if the object is
an instance of a class or an instance of an inherited class"""


def is_kind_ofclass(obj, a_class):
    """Check if an object is an instance or inherited instance of a class.
    Args:
        obj (any): The object to check.
        a_class (type): The class to match the type of obj to.
    Returns:
        If obj is an instance or inherited instance of a_class - True.
        Otherwise - False.
    """

    if isinstance(obj, a_class):
        return True
    return False
