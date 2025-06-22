from setuptools import setup

package_name = 'turtle_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',            # ← replace with your name
    maintainer_email='you@example.com',# ← replace with your email
    description='TurtleBot3 velocity publisher for circular motion',
    license='Apache License 2.0',
    entry_points={
        'console_scripts': [
            'turtle_publisher = turtle_controller.turtle_publisher:main',
        ],
    },
)
