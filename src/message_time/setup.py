from setuptools import setup

package_name = 'message_time'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='x-optimus',
    maintainer_email='pukkokkog@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mp = message_time.message_pub:main',
            'tp = message_time.time_pub:main',
            'ms = message_time.message_sub:main'
        ],
    },
)
