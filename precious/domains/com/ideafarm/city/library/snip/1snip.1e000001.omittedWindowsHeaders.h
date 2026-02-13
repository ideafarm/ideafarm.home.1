

//
// Copyright (c) 1992-2026 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ideafarm.home.1 for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 33 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
this file is a workaround for header items missing from the windows nt headers provided in workshop/watcom/
*/
/**/

/*1*//*additional windows header items*//*1*/

//THESE ARE COMMENTED OUT BECAUSE THEY DON'T APPEAR TO WORK AS INTENDED
//#pragma pack ( push ) ;
//#pragma pack ( 4    ) ;

struct ipAddressRowNewS
{
    SOCKADDR_INET    Address ;              // KEY FIELDS
    byteT            pad1[ 4 ] ;
    //NET_LUID         InterfaceLuid ;
    count04T         InterfaceLuid ;
    NET_IFINDEX      InterfaceIndex ;

    NL_PREFIX_ORIGIN PrefixOrigin ;         // READ/WRITE
    byteT            pad2[ 3 ] ;
    NL_SUFFIX_ORIGIN SuffixOrigin ;
    byteT            pad3[ 3 ] ;
    ULONG            ValidLifetime ;
    ULONG            PreferredLifetime ;
    UINT8            OnLinkPrefixLength ;
    BOOLEAN          SkipAsSource ;

    byteT            pad4[ 2 ] ;
    NL_DAD_STATE     DadState ;             // READ ONLY
    byteT            pad5[ 3 ] ;
    SCOPE_ID         ScopeId ;
    LARGE_INTEGER    CreationTimeStamp ;

}
;

//#pragma pack ( pop ) ;

extern "C" VOID     __stdcall InitializeUnicastIpAddressEntry(        ipAddressRowNewS* Row ) ;
extern "C" unsigned __stdcall CreateUnicastIpAddressEntry(     CONST  ipAddressRowNewS* Row ) ;

struct ipAddressesNewS
{
    union
    {
        ULONGLONG                         Alignment ;
        struct
        {
            ULONG                         Length ;
            IF_INDEX                      IfIndex ;
        } ;
    } ;
    ipAddressesNewS*                      Next ;
    PCHAR                                 AdapterName ;
    PIP_ADAPTER_UNICAST_ADDRESS_LH        FirstUnicastAddress ;
    PIP_ADAPTER_ANYCAST_ADDRESS_XP        FirstAnycastAddress ;
    PIP_ADAPTER_MULTICAST_ADDRESS_XP      FirstMulticastAddress ;
    PIP_ADAPTER_DNS_SERVER_ADDRESS_XP     FirstDnsServerAddress ;
    PWCHAR                                DnsSuffix ;
    PWCHAR                                Description ;
    PWCHAR                                FriendlyName ;
    BYTE                                  PhysicalAddress[ 8 ] ;
    ULONG                                 PhysicalAddressLength ;
    union
    {
        ULONG                             Flags ;
        struct
        {
            ULONG                         DdnsEnabled : 1 ;
            ULONG                         RegisterAdapterSuffix : 1 ;
            ULONG                         Dhcpv4Enabled : 1 ;
            ULONG                         ReceiveOnly : 1 ;
            ULONG                         NoMulticast : 1 ;
            ULONG                         Ipv6OtherStatefulConfig : 1 ;
            ULONG                         NetbiosOverTcpipEnabled : 1 ;
            ULONG                         Ipv4Enabled : 1 ;
            ULONG                         Ipv6Enabled : 1 ;
            ULONG                         Ipv6ManagedAddressConfigurationSupported : 1 ;
        } ;
    } ;
    ULONG                                 Mtu ;
    IFTYPE                                IfType ;
    IF_OPER_STATUS                        OperStatus ;
    byteT                                 pad1[ 0x3 ] ;
    IF_INDEX                              Ipv6IfIndex ;
    ULONG                                 ZoneIndices[16] ;
    PIP_ADAPTER_PREFIX_XP                 FirstPrefix ;

    ULONG64                               TransmitLinkSpeed ;
    ULONG64                               ReceiveLinkSpeed ;
    PIP_ADAPTER_WINS_SERVER_ADDRESS_LH    FirstWinsServerAddress ;
    PIP_ADAPTER_GATEWAY_ADDRESS_LH        FirstGatewayAddress ;
    ULONG                                 Ipv4Metric ;
    ULONG                                 Ipv6Metric ;
    count04T                              Luid ;
    SOCKET_ADDRESS                        Dhcpv4Server ;
    NET_IF_COMPARTMENT_ID                 CompartmentId ;
    NET_IF_NETWORK_GUID                   NetworkGuid ;
    NET_IF_CONNECTION_TYPE                ConnectionType ;
    TUNNEL_TYPE                           TunnelType ;

    SOCKET_ADDRESS                        Dhcpv6Server ;                                    // DHCP v6 Info.
    byteT                                 pad2[ 0x6 ] ;
    BYTE                                  Dhcpv6ClientDuid[ 130 ] ;
    byteT                                 pad3[ 0x2 ] ;
    ULONG                                 Dhcpv6ClientDuidLength ;
    ULONG                                 Dhcpv6Iaid ;
    PIP_ADAPTER_DNS_SUFFIX                FirstDnsSuffix ;
    byteT                                 pad[ 0x4 ] ;
}
;

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 33 years.
//
// Copyright (c) 1992-2026 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ideafarm.home.1 for permitted uses.
//

