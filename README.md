# native-rockstar

A tested [rockstar](https://github.com/dylanbeattie/rockstar) to C++ transpiler in javascript.

## Build & run

### Docker

The recommanded way is to use docker.
For example place a file input.rock at the root of the repository and run the following commands:

```bash
docker build . -t native-rockstar
docker run --rm -v $(pwd)/out:/app/out -v $(pwd)/input.rock:/app/input.rock native-rockstar /bin/bash -c "yarn transpile input.rock && yarn compile"
```

This should output the parsed rockstar code 'out/parsed.txt', the transpiled code 'out/result.cc' and a linux binary 'out/result.exe'.

### Other

To run the project locally without docker you will need the following dépendencies:

- g++-7
- make
- node10
- yarn

And run the following commands:

```bash
yarn # install js dep
yarn build # build the peg parser
yarn build-lib # build rock-cpp lib
yarn test
yarn transpile input.rock
yarn compile
```

## Test

```bash
docker build . -t native-rockstar
docker run --rm native-rockstar yarn test
```

Special comments starting with a "!" are used as testing rules,
for example:

```rock
(!out:hello)
(!in:hello)
Listen to Var
Say Var
```

The test runner will push "hello" in stdin and the first line means
that stdout must contain "hello" for the test to be sucessfull.

## Example

You can try the transpiler with the following FizzBuzz program:

```text
Midnight takes your heart and your soul
While your heart is as high as your soul
Put your heart without your soul into your heart

Give back your heart


Desire is a truck
My world is miraculous
Fire is ice
Hate is water
Until my world is Desire,
Build my world up
If Midnight taking my world, Fire is miraculous
If Midnight taking my world, Hate is miraculous
Shout "FizzBuzz!"
Take it to the top


If Midnight taking my world, Fire is miraculous
Shout "Fizz!"
Take it to the top

If Midnight taking my world, Hate is miraculous
Say "Buzz!"
Take it to the top

Whisper my world
```

It will output the following c++ code and a binary

```c++
#include <iostream>
#include "../src/rock-cpp/rock.h"

using namespace rock;

int main() 
{
    try {
        Vars vars;
        auto fn_1576218896 = [&vars](Var _0,Var _1) -> Var {
(vars>"heart")=_0;(vars>"soul")=_1;
while(toBool((vars>"heart")>=(vars>"soul"))) {
(vars>"heart")=(vars>"heart")-(vars>"soul");
;
};
return (vars>"heart");
};
(vars>"Desire")=Number(15);
(vars>"world")=Number(0);
(vars>"Fire")=Number(3);
(vars>"Hate")=Number(5);
while(!toBool((vars>"world")==(vars>"Desire"))) {
(vars>"world")++;
if(toBool(fn_1576218896((vars>"world"),(vars>"Fire"))
==Number(0))) {
if(toBool(fn_1576218896((vars>"world"),(vars>"Hate"))
==Number(0))) {
say(String("FizzBuzz!"));
continue;
};
};
if(toBool(fn_1576218896((vars>"world"),(vars>"Fire"))
==Number(0))) {
say(String("Fizz!"));
continue;
};
if(toBool(fn_1576218896((vars>"world"),(vars>"Hate"))
==Number(0))) {
say(String("Buzz!"));
continue;
};
say((vars>"world"));
};

    } catch (const std::invalid_argument& e) {
        std::cerr << "Uncaught exception: invalid_argument: " << e.what() << std::endl;
        exit(1);
    } catch (const std::exception& e) {
        std::cerr << "Uncaught exception: " << e.what() << std::endl;
        exit(1);
    }

    return 0;
}
```

## Contrib

Contribs are welcome, if you find a bug please quote the rockstar docs and if you have a PR add a relevant test. We aim to follow the types definition from [issue/97](https://github.com/dylanbeattie/rockstar/issues/97).

## Misc

The peg parser come from this awesome repo: [wolfgang42/rockstar-js](https://github.com/wolfgang42/rockstar-js).
