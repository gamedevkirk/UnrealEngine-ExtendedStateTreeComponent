# UnrealEngine-ExtendedStateComponent

A quick extension of the Unreal Engine State Tree plugin with support for dynamically changing State Trees at runtime.
Supports Blueprints as well as C++.

Epic will likely add this feature themselves in a future release, but we're 4 versions deep without support yet, so here we are!

## How to set up in your project

1. Copy the **ExtendedStateTree.h** and **ExtendedStateTree.cpp** files into your project source directory
2. Update your **.uproject** or **.uplugin** file with the **GameplayStateTree** plugin dependency if you haven't already
3. Add the necessary public module dependencies to your **.Build.cs** file
4. Generate Visual Studio project files and build
5. Replace existing uses of the **StateTreeComponent** with the **ExtendedStateTree** component

Once you're using the ExtendedStateTree component, you'll have access to the GetStateTree and SetStateTree methods.

> Note: If `SetStateTree` is called on a running tree, the tree will be stopped, swapped, and restarted.</br>
If the tree is not running, it will not be started automatically, and you'll need to call `StartLogic()` manually in either Blueprints or C++.
