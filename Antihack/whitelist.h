#ifndef INC_WHITELIST
#define INC_WHITELIST

#include <string>

struct WhitelistItem {
	std::string moduleName;
	unsigned int entryPoint;
};

// Fixme: Add module entry point or some other identifier, file hash maybe? too slow?
// At the moment this can be bypassed by injecting a module with the same name as one of these that
// isnt loaded at the time of injection

const int WHITELIST_LENGTH = 160;
const std::string moduleWhitelist[WHITELIST_LENGTH] = { "war3.exe",
														"ntdll.dll",
														"kernel32.dll",
														"KERNELBASE.dll",
														"COMCTL32.dll",
														"ADVAPI32.dll",
														"advapi32",
														"msvcrt.dll",
														"sechost.dll",
														"RPCRT4.dll",
														"GDI32.dll",
														"user32.dll",
														"USER32.dll",
														"LPK.dll",
														"USP10.dll",
														"WINMM.dll",
														"comdlg32.dll",
														"SHLWAPI.dll",
														"SHELL32.dll",
														"Storm.dll",
														"MSVCR80.dll",
														"VERSION.dll",
														"WININET.dll",
														"Normaliz.dll",
														"urlmon.dll",
														"ole32.dll",
														"OLEAUT32.dll",
														"CRYPT32.dll",
														"MSASN1.dll",
														"iertutil.dll",
														"mss32.dll",
														"WSOCK32.dll",
														"WS2_32.dll",
														"ws2_32.dll",
														"NSI.dll",
														"IMM32.dll",
														"MSCTF.dll",
														"avgrsstx.dll",
														"antihack.dll",
														"CRYPTBASE.dll",
														"uxtheme.dll",
														"CLBCatQ.DLL",
														"w3lh.dll",
														"Game.dll",
														"ijl15.dll",
														"OPENGL32.dll",
														"GLU32.dll",
														"DDRAW.dll",
														"DCIMAN32.dll",
														"SETUPAPI.dll",
														"CFGMGR32.dll",
														"DEVOBJ.dll",
														"dwmapi.dll",
														"Secur32.dll",
														"SSPICLI.DLL",
														"ntmarta.dll",
														"WLDAP32.dll",
														"CRYPTSP.dll",
														"rsaenh.dll",
														"bcrypt.dll",
														"bcryptprimitives.dll",
														"d3d8.dll",
														"d3d8thk.dll",
														"nvd3dum.dll",
														"powrprof.dll",
														"DSOUND.DLL",
														"MMDevApi.dll",
														"PROPSYS.dll",
														"AUDIOSES.DLL",
														"mswsock.dll",
														"Mp3dec.asi",
														"Mssdolby.m3d",
														"Msseax2.m3d",
														"Mssfast.m3d",
														"Reverb3.flt",
														"avrt.dll",
														"NLAapi.dll",
														"DNSAPI.dll",
														"winrnr.dll",
														"napinsp.dll",
														"pnrpnsp.dll",
														"mdnsNSP.dll",
														"Iphlpapi.DLL",
														"WINNSI.DLL",
														"fwpuclnt.dll",
														"rasadhlp.dll",
														"wshtcpip.dll",
														"USERENV.dll",
														"profapi.dll",
														"WINTRUST.dll",
														"wintrust.dll",
														"blizzard.ax",
														"nvSCPAPI.dll",
														"mscat32.dll",
														"Mp3dec.asi",
														"Mssdolby.m3d",
														"Msseax2.m3d",
														"Mssfast.m3d",
														"Reverb3.flt",
														"S3BASE.DLL",
														"setupapi.dll",
														"ncrypt.dll",
														"GPAPI.dll",
														"SensApi.dll",
														"ncrypt.dll",
														"GPAPI.dll",
														"SensApi.dll",
														"VORT_DLS.DLL",
														"KERNEL32.DLL",
														"blizzard.ax",
														"w3lh.dll",
														"Game.dll",
														"d3d8.dll",
														"powrprof.dll",
														"nvSCPAPI.dll",
														"mscat32.dll",
														"wintrust.dll",
														"Mp3dec.asi",
														"Mssdolby.m3d",
														"Msseax2.m3d",
														"Mssfast.m3d",
														"Reverb3.flt",
														"DSOUND.DLL",
														"avrt.dll",
														"S3BASE.DLL",
														"VORT_DLS.DLL",
														"mswsock.dll",
														"ws2_32.dll",
														"user32",
														"advapi32",
														"WINTRUST.dll",
														"lphlpapi",
														"LPHLPAPI.DLL",
														"advapi32",
														"Iphlpapi",
														"advapi32.dll",
														"IX86ver1.dll",
														"OPENGL32",
														"gdi32.dll",
														"opengl32.dll",
														"dbghelp.dll",
														"psapi.dll",
														"version.dll",
														"ws2_32",
														"wship6",
														"RPCRT4",
														"credssp.dll",
														"schannel.DLL",
														"wship6.dll",
														"Cabinet.dll",
														"DEVRTL.dll",
														"WINHTTP.dll",
														"webio.dll",
														"winhttp.dll",
														"peerdist.dll",
														"AUTHZ.dll",
														"dhcpcsvc6.DLL",
														"dhcpcsvc.DLL",
														"cryptnet.dll"};

#endif