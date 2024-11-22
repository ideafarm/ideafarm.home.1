The following information was removed from this repository's readme.md file:


 The following "Quick Start" instructions were last tested successfully on October 22, 2022, on a newly provisioned cloud server running Windows Server 2019.  The prior successful test (which was for exactly the same instructions) was on August 6, 2022, on an ASUS VivoBook S15 laptop with a freshly reinstalled and then updated Windows 10 Home Edition operating system.
 This repository contains binaries of all tools that it needs to build itself:
 Open Watcom V2, WiX Toolset, and Rimstar Programmers' Editor.
 To build, you just need to edit your computer's PATH setting to add one directory and then open a command prompt, type "ideafarm" (without quotes), and press the Enter key.
 If the following steps do not bring you to a joyful result, please open an issue on GitHub.

(1) Clone this repository to GitHub Desktop, using a directory named "D:\ideafarm.home.1", where D is the drive letter of any local (not network) hard disk drive.  This drive can be either removable or nonremovable.

(2) To the PATH environment variable setting, append: "D:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\cmd".  (To make this change, open Start/Settings, search for "enviro", select "Edit the system environment variables", and then click "Environment variables..." button.  In the System pane, click the Path line, click the "Edit..." button, and then click the "New" button.

(3) Open a command prompt, type "ideafarm"  (without quotes), and press the Enter key.  Then follow the instructions in the command window until a new window appears called Elves.

(4) Elves will build IPDOS (tm) by launching a window called Adam, which launches a window called Eve.  (Eve does all of the work.)  Wait until Eve and then Adam go away and the "IdeaFarm (tm) Elves" window displays [user] in the title bar and a line that begins with "anonymous ideafarm_wo" in the top left corner of the black window.

(5) Press the 'a' key to select "anonymous".

(6) The "IdeaFarm (tm) Elves" window will now be blank except for a single line (which probably wraps unless the window is maximized): "adamlow ascii ...".  When you see this, IdeaFarm (tm) Bundle has been built.

(7) Press the 'e' key ; then press the '1' key .  This opens the source file for "scratch adam 1", using the Rimstar Programmers' Editor.

(8) Edit the hello text to suite your whim.  Then close the editor.

(9) Press these keys: " ma1 ".  This causes an elf to build scratch adam 1.  Wait for the new window to disappear.

(10) Press the keys: " p 1 ".  (Yes, you need to key a space after the 'p'.)  This causes scratch adam 1 to run in a new window.  Look for the hello text that you inserted into the source code.  Follow the instruction in the window to close the "adam" (program).

(11) Press the Esc key to close IdeaFarm (tm) Elves.


# TROUBLESHOOTING:  If the above steps didn't work for you, please immediately open an issue.  While waiting for a response, you can take these steps:

(A) Verify that "#define DEBUG" is not commented out at the top of X:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\elves\elves.cpp .

(B) Verify that "#define PRODUCTION" is not commented out near the bottom of X:\ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\5adam.51000621.1 .

(C) If your antivirus program complains or, worse, decides that it is seeing malware, please report this by opening an issue.  Open Watcom V2 is known to cause this with some antivirus programs.  One workaround is to install Open Watcom V2 yourself and then tell your antivirus program to ignore the folder where you installed it.

(D) The WiX Toolset might complain that a component of Windows that it requires is not installed.  If this happens, install the component or report the issue.

(E) If you get here without joy, please do report an issue so that it can be fixed for the benefit of others.


Status as of November 3, 2022:
 You can clone this repository onto a virgin Windows server or personal computer and immediately build it and then use it to write C++ console programs.
 (See the license below; this is a proprietary open source repository.)
 There are, at the moment, no known bugs.
 Bugs are eliminated "in real time" rather than allowed to accumulate, so please report any defects (by opening an issue).
 IPDOS (tm) includes a powerful graphics presentation subsystem, but that subsystem is unusable because it is being rewritten for speed and the rewrite project has been suspended midway for years.
 The current craftwork focus is to develop networking functionality while continuing to "polish" quality (cosmetic defects, "glass walls", shutdown speed).
 "Glass walls" refers to transparency, the ability of end users and craftsmen (and craftswomen) to see what is going on "under the hood".
 The immediate focus of craftwork is to (1) eliminate the garbage being put into the log file, (2) fix the broken osThreadAdamF feature, and then (3) reduce the time that IPDOS (tm) takes to shut down.

Right now, you can clone and build IPDOS (tm) and then immediately use it to write, execute, and debug console applications, which are called "adams".
 As specified in the license, IPDOS (tm) can be used without purchasing or registering yourself, but this "free" usage is limited to educational purposes.
 That means that you can use IPDOS (tm) to learn to program in the C++ language.
 It also means that you can use IPDOS (tm) in the classroom to teach programming or any other subject.
 See the license for more details.
 Other types of use require a paid subscription.
 Paid subscriptions are not yet available, but you can register as an "alpha user" by contacting the repository owner.

IPDOS (tm) craftwork began in 1992, during the "operating system wars".
 IPDOS (tm) began life as a 16-bit OS/2 application intended to defeat Microsoft's monopoly and empower the independent software craft.
 28 years and 1/2 million lines of C++ code later, IPDOS (tm) is now (June 2020) being unveiled.

All 1/2 million lines of code were crafted by the same hands, by a man committed to craftsmanship who saw an awesome potential in the C++ language that no one else appears to have seen.
 IPDOS (tm) development has been the best kept secret in the software industry.
 Think of IPDOS (tm) as a "weapon of mass CONstruction", designed to make coding fun again while reviving innovation and empowering the independent software craft.

Executive overview:
 IPDOS (tm) introduces a novel vision for server and desktop/laptop software technology that inserts a new software layer between a "base operating system" (such as Windows) and application programs (such as Windows console programs, windowed programs, and services).
 Application programs written for IPDOS (tm) are portable in that they run on any host that IPDOS (tm) has been ported to.
 IPDOS (tm) is a "piggyback operating system" in the sense that it runs on top of a base operating system and presents an alternative, innovative API to application developers.

Discussion:
 Creating this new layer will encourage the development of innovative new programming abstractions (API's) such as the one presented by IPDOS (tm).
 By unbundling the API from the base operating system, development of base operating systems can become more innovative, since a new base operating system can instantly acquire application programs simply by porting IPDOS (tm).
 By unbundling the API, base operating system development can focus on security and on supporting new hardware.
 By unbundling the API, operating system vendors lose control over the marketplace, hardware vendors acquire the power to innovate, and application developers are empowered both by the emergence of innovative new API's and new hardware and by no longer being locked into a particular base operating system platform.
 In other words, creating a new software layer between the base operating system and applications empowers everyone except a base operating system vendor that dominates the market due to the "network effect".

Technical overview:
 An "application program" is a small dll that is loaded and called by one of two small generic executables, one for console and service (daemon) programs and the other for graphics programs.
 All work is done by calling IPDOS (tm) C++ class member functions and global functions exported from a single large "base dll".
 Application code cannot access the API of the "base operating system" (Windows, Linux, etc.)
 All work must be done by calling the IPDOS (tm) API (the class library).
 There are four code layers.
 (1) The thirdC class is a thin wrapper that contains all functionality provided by the "base o.s." and by third party API's such as OpenSSL.
 (2) The etherC class presents the IPDOS (tm) procedural programming API, which implements a novel procedural programming abstraction.
 (3) The many other classes, such as socketC, present the IPDOS (tm) object oriented API.
 (4) Application code assigns work to object instances and uses etherC instances to execute procedural code.

The "stroke string" innovation:
 Legacy console and graphics programs manipulate 8-bit ASCII characters.
 Contemporary Windows programs manipulate 16-bit Unicode characters.
 IPDOS (tm) applications manipulate "stroke strings", in which each stroke contains three 32-bit integers.
 Each instance of the strokeS class can thus represent any Unicode text character, but can also represent a graphics element such as "set color to...", "draw line to...", "move cursor to...".
 A strokeS instance can also represent an element of a search pattern, such as "One of: 'one' 'two' 'three' 'a really long choice' "
 (IPDOS (tm) search patterns can emulate wildcard and regular expression searches but are more powerful in that subexpressions are fully recursive.)
 A strokeS instance can even represent an animated glyph that provides all of the functionality that is called a "child window" in the Windows API.
 By replacing the concept of a "character string" with that of a "stroke string", IPDOS (tm) eliminates the distinction between console and graphics programs.
 Every IPDOS (tm) application has the simplicity and structure of a console program, but all of the power of a graphics program.

There are other innovations.
 There are also several surprises; IPDOS (tm) source code is eccentric in that it is written from the bottom up.
 But the eccentricities are few, and you will find the code consistent in style and very readable due to the care taken in choosing variable and function names.
 All of this code was crafted by a single pair of hands and a single mind, as a literary as well as technical work.
 Read the license, clone to your GitHub Desktop, build your first "hello" program, and start browsing code and "playcrafting".


Technically, IdeaFarm (tm) Bundle consists of a simple Windows service program, a large DLL system library, many small DLL application libraries, all source code, and all tools needed for building IdeaFarm (tm) Bundle
 the service program does nothing other than start the root process, which in turn starts other processes
 like other Windows services, the service program can either be started and stopped manually or started automatically during Windows startup
 \r(During installation, Windows is configured to start automatically during Windows startup.)
 the large DLL system library contains IPDOS (tm)
 each small DLL application library contains the executable code for a single IPDOS (tm) application
 there is also a small executable exe file that is used to launch each application
 \r(The application to run is specified as a command line parameter.)

IPDOS (tm) is a general purpose programming and deployment environment for the C++ language.
 Although all of the code was crafted for portability, IPDOS (tm) is currently hosted only on Microsoft Windows, and currently targets only Microsoft Windows.
 Porting contributions for Linux and other platforms are welcome.
 IPDOS (tm) is built using a snapshot of Open Watcom v2 that is included within the repository.
 All tools needed to build are included; the repository can be cloned onto a newly provisioned Windows virtual server or laptop and immediately built.

Status:
 "IdeaFarm (tm) Bundle" applications development is active.
 The graphics subsystem is unusable due to an unfinished rewrite / redesign to improve speed.
 (I am a civic activist, a "lawful revolutionary".
 This rewrite effort was interrupted by overwhelming police and court oppression that began in 2010 and continues to the present time, so I have not been able to resume work on the rewrite.
 Also, my focus from 2010 to the present has been to debug the code.)
 IPDOS (tm) is currently suitable for (1) learning C++, (2) learning coding style, and (3) purely educational use developing console applications and Windows Services, including server code (http, smtp, dns, etc.).
 For those purposes, IPDOS (tm) is stable and mature and ready for "playcrafting" by others.
 There is no Programmers' Guide or Programmers' Reference, but there are many sample programs as well as all of the application code for IdeaFarm (tm) Bundle and for many other applications.

# VOLUNTEER HELP WANTED
 Please "alpha test" the above Quick Start Instructions.
 Doing so will not install any software or modify any registry entries other than the edit that you make to the PATH setting.
 You can completely undo all effects simply by reversing that edit and then deleting your clone of this repository.  

# PAID HELP WANTED
 Once IdeaFarm (tm) Bundle has become a paid subscription product and is generating revenue, some of that revenue will be used to create paid "work from home" opportunities for bug fixers, enhancement developers, sales professionals, marketers, and administrators.
 Get involved now as a volunteer, and you will have an inside track as IPDOS (tm) opportunities develop. 

# BUSINESS OPPORTUNITIES
 28 years were spent witing 1/2 million lines of C++ code to craft a powerful general purpose software environment for the C++ language.
 IPDOS (tm) is still in active development, and the graphics subsystem is being rewritten, so IPDOS (tm) cannot currently launch a graphics (windowed) program.
 But IPDOS (tm) can be used for custom "back end" server applications, as well as Windows service daemon programs and command line tools.
 It can also be used to teach or tutor C++ programming.
 In the future, it will support the publication of revenue-producing "proprietary open source" applications for profit.

Please consider exploring the capabilities of IPDOS (tm) by building your "hello" program and then exploring the etherC and other API's.
 Early mastery of IPDOS (tm) programming could place you in a sweet situation in which you can create custom solutions faster and at a lower price than the competition.

# PRICING
 Please review the LICENSE.
 There is no charge for using IPDOS (tm) in the manner permitted by the LICENSE.
 The license permits usage only to contribute bug fixes and enhancements as well as all purely educational uses.
 Installing IPDOS (tm) Bundle, a Windows service, is currently free but will be a paid subscription product in the future.


