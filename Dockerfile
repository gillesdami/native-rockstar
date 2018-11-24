FROM ubuntu:18.04

# install g++7 & make
RUN apt-get update && apt-get install g++-7 make -y \
 && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-7 1
# install node10 & yarn
RUN apt-get install curl gnupg2 -y \
 && curl -sL https://deb.nodesource.com/setup_10.x -o nodejs.deb \
 && bash nodejs.deb \
 && rm nodejs.deb \
 && curl -sL https://dl.yarnpkg.com/debian/pubkey.gpg | apt-key add - \
 && echo "deb https://dl.yarnpkg.com/debian/ stable main" | tee /etc/apt/sources.list.d/yarn.list \
 && apt-get update \
 && apt-get install -y nodejs yarn

COPY . /app
WORKDIR /app

# install dependancies & build
RUN yarn \
 && yarn build \
 && yarn build-lib