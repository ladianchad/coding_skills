#!/usr/bin/env python3

from setuptools import find_packages, setup

install_requires = [
    'numpy'
]

setup(
    name='dpkg-python-example',
    version='0.0.1',
    packages=find_packages(exclude=['test', 'test.*']),
    include_package_data=True,
    install_requires=install_requires,
    author='ladianchad',
    author_email='qhrejddlvltm@gmail.com',
    maintainer='ladianchad',
    maintainer_email='qhrejddlvltm@gmail.com',
    description="dpkg python example",
    long_description='',
    entry_points={
        'console_scripts': [
            'dpkg_python_example = source.command:main',
        ]
    }
)