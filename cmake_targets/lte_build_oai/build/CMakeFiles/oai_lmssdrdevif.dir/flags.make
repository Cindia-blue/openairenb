# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# compile CXX with /usr/bin/c++
CXX_FLAGS =    -mavx2 -msse4.1 -mssse3  -std=c++11 -D'MAKE_VERSION(a,b,c)=((a)*256+(b)*16+c)' -O2 -g -DNDEBUG -fPIC  

CXX_DEFINES = -DASN1_MINIMUM_VERSION=924 -DASN_DISABLE_OER_SUPPORT -DCMAKE_BUILD_TYPE=\"RelWithDebInfo\" -DDRIVER2013 -DENABLE_ITTI -DENABLE_NAS_UE_LOGGING -DENABLE_SECURITY -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_USE_MME -DENABLE_VCD -DENB_MODE -DETHERNET=1 -DEXMIMO_IOT -DFIRMWARE_VERSION="\"No svn information\"" -DFLPT_VERSION=V2 -DJUMBO_FRAME -DLINK_ENB_PDCP_TO_GTPV1U -DLTE_RRC_VERSION=3696 -DMAX_NUM_CCs=1 -DNAS_BUILT_IN_UE -DNAS_UE -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=4 -DNETTLE_VERSION_MAJOR=3 -DNETTLE_VERSION_MINOR=4 -DNO_RRM -DNUMBER_OF_UE_MAX_NB_IoT=16 -DNone=1 -DOAI_NW_DRIVER_USE_NETLINK -DOPENAIR2 -DOPENAIR_LTE -DPACKAGE_BUGREPORT=\"openair4g-devel@lists.eurecom.fr\" -DPACKAGE_NAME=\"lte-softmodem\" -DPACKAGE_VERSION="\"Branch: HEAD Abrev. Hash: 1c495cfdc Date: Fri Feb 22 17:51:55 2019 +0100\"" -DPHYSIM -DPHY_CONTEXT -DRel14=1 -DS1AP_RELEASE=R14 -DS1AP_VERSION=3664 -DTRACE_RLC_MUTEX -DT_TRACER -DX2AP_RELEASE=R14 -DX2AP_VERSION=3680 -DXFORMS -Doai_lmssdrdevif_EXPORTS

CXX_INCLUDES = -I/home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14 -I/home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14 -I/home/lixh/enb_folder/openair3/S1AP -I/home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14 -I/home/lixh/enb_folder/openair2/X2AP -I/home/lixh/enb_folder/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/lixh/enb_folder/targets/ARCH/EXMIMO/DEFS -I/home/lixh/enb_folder/targets/ARCH/USRP/USERSPACE/LIB -I/home/lixh/enb_folder/targets/ARCH/BLADERF/USERSPACE/LIB -I/home/lixh/enb_folder/targets/ARCH/LMSSDR/USERSPACE/LIB -I/usr/local/include/lime -I/home/lixh/enb_folder/targets/ARCH/ETHERNET/USERSPACE/LIB -I/home/lixh/enb_folder/targets/ARCH/IRIS/USERSPACE/LIB -I/home/lixh/enb_folder/targets/ARCH/mobipass -I/home/lixh/enb_folder/targets/ARCH/COMMON -I/home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles -I/home/lixh/enb_folder/openair2/COMMON -I/home/lixh/enb_folder/openair2/UTIL -I/home/lixh/enb_folder/openair2/UTIL/LOG -I/home/lixh/enb_folder/openair3/COMMON -I/home/lixh/enb_folder/openair3/UTILS -I/home/lixh/enb_folder/nfapi/open-nFAPI/nfapi/public_inc -I/home/lixh/enb_folder/nfapi/open-nFAPI/common/public_inc -I/home/lixh/enb_folder/nfapi/open-nFAPI/pnf/public_inc -I/home/lixh/enb_folder/nfapi/open-nFAPI/nfapi/inc -I/home/lixh/enb_folder/nfapi/open-nFAPI/sim_common/inc -I/home/lixh/enb_folder/nfapi/open-nFAPI/pnf_sim/inc -I/home/lixh/enb_folder/openair1 -I/home/lixh/enb_folder/openair2 -I/home/lixh/enb_folder/openair2/LAYER2/RLC -I/home/lixh/enb_folder/openair2/LAYER2/RLC/AM_v9.3.0 -I/home/lixh/enb_folder/openair2/LAYER2/RLC/UM_v9.3.0 -I/home/lixh/enb_folder/openair2/LAYER2/RLC/TM_v9.3.0 -I/home/lixh/enb_folder/openair2/LAYER2/PDCP_v10.1.0 -I/home/lixh/enb_folder/openair2/RRC/LTE/MESSAGES -I/home/lixh/enb_folder/openair2/RRC/LTE -I/home/lixh/enb_folder/common/utils -I/home/lixh/enb_folder/common/utils/ocp_itti -I/home/lixh/enb_folder/openair3/NAS/COMMON -I/home/lixh/enb_folder/openair3/NAS/COMMON/API/NETWORK -I/home/lixh/enb_folder/openair3/NAS/COMMON/EMM/MSG -I/home/lixh/enb_folder/openair3/NAS/COMMON/ESM/MSG -I/home/lixh/enb_folder/openair3/NAS/UE/ESM -I/home/lixh/enb_folder/openair3/NAS/UE/EMM -I/home/lixh/enb_folder/openair3/NAS/UE/API/USER -I/home/lixh/enb_folder/openair3/NAS/COMMON/IES -I/home/lixh/enb_folder/openair3/NAS/COMMON/UTIL -I/home/lixh/enb_folder/openair3/SECU -I/home/lixh/enb_folder/openair3/SCTP -I/home/lixh/enb_folder/openair3/UDP -I/home/lixh/enb_folder/openair3/GTPV1-U -I/home/lixh/enb_folder/targets/COMMON -I/home/lixh/enb_folder/openair2/ENB_APP -I/home/lixh/enb_folder/openair2/ENB_APP/CONTROL_MODULES/MAC -I/home/lixh/enb_folder/openair2/ENB_APP/CONTROL_MODULES/RRC -I/home/lixh/enb_folder/openair2/ENB_APP/CONTROL_MODULES/PDCP -I/home/lixh/enb_folder/openair2/UTIL/OSA -I/home/lixh/enb_folder/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/home/lixh/enb_folder/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/inc -I/home/lixh/enb_folder/openair2/UTIL/MEM -I/home/lixh/enb_folder/openair2/UTIL/LISTS -I/home/lixh/enb_folder/openair2/UTIL/FIFO -I/home/lixh/enb_folder/openair2/UTIL/OCG -I/home/lixh/enb_folder/openair2/UTIL/MATH -I/home/lixh/enb_folder/openair2/UTIL/TIMER -I/home/lixh/enb_folder/openair2/UTIL/OMG -I/home/lixh/enb_folder/openair2/UTIL/OTG -I/home/lixh/enb_folder/openair2/UTIL/CLI -I/home/lixh/enb_folder/openair2/UTIL/OPT -I/home/lixh/enb_folder/openair2/UTIL/OMV -I/home/lixh/enb_folder/openair3/GTPV1-U/nw-gtpv1u/shared -I/home/lixh/enb_folder/openair3/GTPV1-U/nw-gtpv1u/include -I/home/lixh/enb_folder -I/home/lixh/enb_folder/cmake_targets/lte_build_oai/build/CMakeFiles/V2 -I/home/lixh/enb_folder/openair2/UTIL/ASYNC_IF -I/home/lixh/enb_folder/common/utils/hashtable -I/home/lixh/enb_folder/common/utils/msc -I/home/lixh/enb_folder/nfapi/open-nFAPI/pnf/inc -I/home/lixh/enb_folder/nfapi/open-nFAPI/vnf/public_inc -I/home/lixh/enb_folder/nfapi/open-nFAPI/vnf/inc -I/home/lixh/enb_folder/nfapi/oai_integration -I/home/lixh/enb_folder/openair3/NAS/UE -I/home/lixh/enb_folder/openair3/NAS/UE/API/USIM -I/home/lixh/enb_folder/openair3/NAS/UE/EMM/SAP -I/home/lixh/enb_folder/openair3/NAS/UE/ESM/SAP -I/home/lixh/enb_folder/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/home/lixh/enb_folder/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/src -I/usr/include/libxml2 -I/usr/include/pgm-5.2 -I/usr/lib/x86_64-linux-gnu/pgm-5.2/include -I/usr/include/x86_64-linux-gnu -I/usr/include/X11 -I/home/lixh/enb_folder/common/utils/T 

