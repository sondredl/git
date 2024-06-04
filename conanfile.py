from conans import ConanFile, tools

class MyPackageConan(ConanFile):
    name = "mypackage"
    version = "1.0"

    def source(self):
        tools.get(**self.conan_data["sources"][self.version])


