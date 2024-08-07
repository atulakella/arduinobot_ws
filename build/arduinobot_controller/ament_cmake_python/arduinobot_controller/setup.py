from setuptools import find_packages
from setuptools import setup

setup(
    name='arduinobot_controller',
    version='0.0.0',
    packages=find_packages(
        include=('arduinobot_controller', 'arduinobot_controller.*')),
)
