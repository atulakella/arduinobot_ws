from setuptools import find_packages
from setuptools import setup

setup(
    name='arduinobot_utils',
    version='0.0.0',
    packages=find_packages(
        include=('arduinobot_utils', 'arduinobot_utils.*')),
)
