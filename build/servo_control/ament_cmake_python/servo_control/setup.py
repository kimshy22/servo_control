from setuptools import find_packages
from setuptools import setup

setup(
    name='servo_control',
    version='0.0.1',
    packages=find_packages(
        include=('servo_control', 'servo_control.*')),
)
