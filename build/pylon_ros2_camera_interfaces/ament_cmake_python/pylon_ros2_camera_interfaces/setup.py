from setuptools import find_packages
from setuptools import setup

setup(
    name='pylon_ros2_camera_interfaces',
    version='1.1.0',
    packages=find_packages(
        include=('pylon_ros2_camera_interfaces', 'pylon_ros2_camera_interfaces.*')),
)
