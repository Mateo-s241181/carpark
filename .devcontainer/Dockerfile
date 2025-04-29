FROM mcr.microsoft.com/devcontainers/cpp:1-debian-12


# Install conan via pipx
RUN apt-get update && apt-get install -y python3 python3-pip
RUN pip install conan --break-system-packages
