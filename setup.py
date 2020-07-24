from setuptools import setup, Extension
from Cython.Build import cythonize


setup(
    name="Test",
    package_dir={"minimal": ""},
    ext_modules=cythonize(
        Extension(
            "app", sources=["app.pyx"], include_dirs=["/usr/local/include/vtk-9.0/"],
        )
    ),
)
