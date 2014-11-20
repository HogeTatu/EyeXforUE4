Tobii EyeX Plugin for Unreal Engine 4
=====================================

Overview
--------
The EyeX Plugin for Unreal Engine 4 makes it possible to create games that the
player can interact with using her eyes. It does that by integrating the Tobii 
EyeX Engine API into the Unreal Engine development environment.

The plugin can be inserted into any game built with the Unreal Engine 4 and 
used from both Blueprints and C++ code.
  
Contact
-------
If you have problems, questions, ideas, or suggestions, please use the forums
on the Tobii Developer Zone (link below). That's what they are for!

Web site
--------
This plugin is hosted on GitHub:
https://github.com/TobiiTechnology/EyeXforUE4

Visit the Tobii Developer Zone web site for the latest news and support:
http://developer.tobii.com/

Getting started
---------------
0. Take a look at the developer's guide in this package. Just read through the 
   introduction: there's plenty of useful information in there and we don't 
   want to repeat it here.

1. Check out the 4.5 branch of EpicGames/UnrealEngine, or your fork of choice, 
   from GitHub. Download and install the required files as described in the
   readme file in the UnrealEngine repository, but don't start the build just 
   yet.

Alternatively, if you use an installed version of the Unreal Engine, you can skip 
steps 1-3.

2. Optionally merge the pull request https://github.com/EpicGames/UnrealEngine/pull/582
   This removes the offset error that is present when the game starts. The 
   workaround is to move the mouse pointer over the viewport.

3. Build the Unreal Engine as described in its readme file.

4. Clone or download this repository from GitHub.
   Download the EyeX SDK for C/C++ from developer.tobii.com. Extract the files
   and copy the lib and include directories to 
   Plugins/TobiiEyeX/ThirdParty/EyeX.
   Note that the SDK license differs from the one used for this plugin.

5. Locate the EyeXSamples.uproject file in the EyeX Plugin package. Right-
   click and select Generate Visual Studio project files. Open the Visual 
   Studio solution file that appears. Build and run the sample project 
   (EyeXSamples). The EyeXSamples editor should launch. Click play to start 
   the samples.

6. To import the plugin into your own game project:
   - Create a new directory in your Unreal project directory called "Plugins".
   - Copy the contents of the Plugins directory in this repo into that 
     directory.
   - Start the editor and open the plugin viewer (can be found in the 
     Windows->Plugins menu).
   - Add a reference to the module in your build script (MYPROJECT.Build.cs). 
     The relevant row might look something like:
     PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", 
     "Engine", "InputCore", "TobiiEyeX" });
   
7. Use the plugin through the EyeX function library (Blueprints) and/or the 
   IEyeXPlugin interface (C++).

HAVE FUN!!!

Contributing
------------
You're always welcome to submit a Pull Request on GitHub.

By contributing code to this project, you agree to license your contributed code 
under the same terms as the rest of the source code in the repository.

Revision history
----------------
* 20 Nov 2014: First public release.

Contributors
------------
Tim Lindeberg
The Tobii developer communications team
Temaran, who set the ball rolling
Special thanks to getnamo whose unofficial Hydra plugin has been very useful 
as a working example of plugin code.
