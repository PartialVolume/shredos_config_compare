# shredos_config_compare

To build
```
gcc shredos_config_compare -o shredos_config_compare
```

Compares two buildroot config files

I use this program to compare the previous version of .config with the new version of .config so I can see
if anything has been inadvertently missed out of the new .config.

The idea being that is shows lines that are in the old config file that are not in the new .config file and lines in the new that are not in the old. It operates differently from diff because it doesn't care whether a line has changed, it instead determines whether the line exists anywhere in the other file.

The ouput it produces is Lines that exist in A but not in B and vice versa. It does not show lines that exist in both files.

It allows me to see at a glance what has been added or is missing amongst over 4000 possible configuration options.

Copy each .config into the same folder as `shredos_config_compare` renaming a A.txt and B.txt. then run the program `./shredos_config_compare`.

Example output shown below

```
./shredos_config_compare
******************************
**                          **
** Lines in A but not in B: **
**                          **
******************************
# Buildroot -g5ed052e83f Configuration
BR2_HOST_GCC_AT_LEAST_10=y
BR2_HOST_GCC_AT_LEAST_11=y
# BR2_KERNEL_HEADERS_6_6 is not set
BR2_PACKAGE_GCC_FINAL=y
BR2_TOOLCHAIN_HEADERS_AT_LEAST_6_5=y
BR2_TOOLCHAIN_HEADERS_AT_LEAST_6_6=y
BR2_TOOLCHAIN_HEADERS_AT_LEAST="6.6"
# Bare metal toolchain
# BR2_TOOLCHAIN_BARE_METAL_BUILDROOT is not set
BR2_DEFCONFIG="/home/nick/Data/MIC/Technical_Data/Software/ShredOS_2024-02-2/buildroot-2024.02.2/configs/shredos_defconfig"
BR2_BACKUP_SITE="https://sources.buildroot.net"
BR2_OPTIMIZE_2=y
# BR2_OPTIMIZE_S is not set
# BR2_DOWNLOAD_FORCE_CHECK_HASHES is not set
BR2_LINUX_KERNEL_VERSION="6.6.22"
BR2_LINUX_KERNEL_CUSTOM_CONFIG_FILE="board/shredos/kernel-6.6.22-defconfig.config"
# BR2_PACKAGE_LINUX_TOOLS_MM is not set
# BR2_PACKAGE_LINUX_TOOLS_RTLA is not set
# BR2_PACKAGE_LIBTRACEEVENT is not set
# BR2_PACKAGE_LIBTRACEFS is not set
# sysdig needs a glibc toolchain w/ C++, threads, gcc >= 8, dynamic library, a Linux kernel, and luajit or lua 5.1 to be built
# BR2_PACKAGE_UNIFDEF is not set
# BR2_PACKAGE_DMENU_WAYLAND is not set
# flutter-gallery needs flutter-engine
# flutter-pi needs GBM, systemd, and udev
# BR2_PACKAGE_FOOT is not set
# BR2_PACKAGE_IVI_HOMESCREEN is not set
# BR2_PACKAGE_SPIRV_TOOLS is not set
# BR2_PACKAGE_MESA3D_VULKAN_DRIVER_SWRAST is not set
# BR2_PACKAGE_SPIRV_HEADERS is not set
# BR2_PACKAGE_VULKAN_LOADER is not set
# BR2_PACKAGE_VULKAN_TOOLS is not set
# BR2_PACKAGE_LINUX_FIRMWARE_AMLOGIC is not set
# BR2_PACKAGE_LINUX_FIRMWARE_MEDIATEK_MT7921_BT is not set
# BR2_PACKAGE_LINUX_FIRMWARE_MEDIATEK_MT7922_BT is not set
# BR2_PACKAGE_LINUX_FIRMWARE_IWLWIFI_QUZ is not set
# BR2_PACKAGE_LINUX_FIRMWARE_MEDIATEK_MT7921 is not set
# BR2_PACKAGE_LINUX_FIRMWARE_MEDIATEK_MT7922 is not set
# BR2_PACKAGE_LINUX_FIRMWARE_RTL_RTW89 is not set
# BR2_PACKAGE_LINUX_FIRMWARE_MARVELL_PRESTERA is not set
# BR2_PACKAGE_LINUX_FIRMWARE_CX23885 is not set
# BR2_PACKAGE_QORIQ_FM_UCODE is not set
# ledmon needs udev and a toolchain w/ threads
# BR2_PACKAGE_LM_SENSORS_SENSORS_DETECT is not set
# BR2_PACKAGE_NVIDIA_PERSISTENCED is not set
# BR2_PACKAGE_UBOOT_BOOTCOUNT is not set
BR2_PACKAGE_PERL=y
BR2_PACKAGE_PERL_MODULES=""
# BR2_PACKAGE_PERL_THREADS is not set
# Perl libraries/modules
# BR2_PACKAGE_PERL_APACHE_LOGFORMAT_COMPILER is not set
# BR2_PACKAGE_PERL_APPCONFIG is not set
# BR2_PACKAGE_PERL_ASTRO_SUNTIME is not set
# BR2_PACKAGE_PERL_CLASS_INSPECTOR is not set
# BR2_PACKAGE_PERL_CLASS_LOAD is not set
# BR2_PACKAGE_PERL_CLASS_METHOD_MODIFIERS is not set
# BR2_PACKAGE_PERL_CLASS_STD is not set
# BR2_PACKAGE_PERL_CLASS_STD_FAST is not set
# BR2_PACKAGE_PERL_CLONE is not set
# BR2_PACKAGE_PERL_CONVERT_ASN1 is not set
# BR2_PACKAGE_PERL_COOKIE_BAKER is not set
# BR2_PACKAGE_PERL_CRYPT_BLOWFISH is not set
# BR2_PACKAGE_PERL_CRYPT_CBC is not set
# BR2_PACKAGE_PERL_CRYPT_OPENSSL_AES is not set
# BR2_PACKAGE_PERL_CRYPT_OPENSSL_RANDOM is not set
# BR2_PACKAGE_PERL_CRYPT_OPENSSL_RSA is not set
# BR2_PACKAGE_PERL_DATA_DUMP is not set
# BR2_PACKAGE_PERL_DATA_OPTLIST is not set
# BR2_PACKAGE_PERL_DATA_UUID is not set
# BR2_PACKAGE_PERL_DATE_MANIP is not set
# BR2_PACKAGE_PERL_DATETIME_TINY is not set
# BR2_PACKAGE_PERL_DBD_MYSQL is not set
# BR2_PACKAGE_PERL_DBI is not set
# BR2_PACKAGE_PERL_DEVEL_CYCLE is not set
# BR2_PACKAGE_PERL_DEVEL_GLOBALDESTRUCTION is not set
# BR2_PACKAGE_PERL_DEVEL_SIZE is not set
# BR2_PACKAGE_PERL_DEVEL_STACKTRACE is not set
# BR2_PACKAGE_PERL_DEVEL_STACKTRACE_ASHTML is not set
# BR2_PACKAGE_PERL_DEVICE_SERIALPORT is not set
# BR2_PACKAGE_PERL_DIGEST_HMAC is not set
# BR2_PACKAGE_PERL_DIGEST_SHA1 is not set
# BR2_PACKAGE_PERL_DIST_CHECKCONFLICTS is not set
# BR2_PACKAGE_PERL_ENCODE_DETECT is not set
# BR2_PACKAGE_PERL_ENCODE_LOCALE is not set
# BR2_PACKAGE_PERL_EXPORTER_TINY is not set
# BR2_PACKAGE_PERL_FILE_LISTING is not set
# BR2_PACKAGE_PERL_FILE_SHAREDIR is not set
# BR2_PACKAGE_PERL_FILE_SLURP is not set
# BR2_PACKAGE_PERL_FILE_UTIL is not set
# BR2_PACKAGE_PERL_FILESYS_NOTIFY_SIMPLE is not set
# BR2_PACKAGE_PERL_GD is not set
# BR2_PACKAGE_PERL_GDGRAPH is not set
# BR2_PACKAGE_PERL_GDTEXTUTIL is not set
# BR2_PACKAGE_PERL_HASH_MULTIVALUE is not set
# BR2_PACKAGE_PERL_HTML_PARSER is not set
# BR2_PACKAGE_PERL_HTML_TAGSET is not set
# BR2_PACKAGE_PERL_HTTP_COOKIES is not set
# BR2_PACKAGE_PERL_HTTP_DAEMON is not set
# BR2_PACKAGE_PERL_HTTP_DATE is not set
# BR2_PACKAGE_PERL_HTTP_ENTITY_PARSER is not set
# BR2_PACKAGE_PERL_HTTP_HEADERS_FAST is not set
# BR2_PACKAGE_PERL_HTTP_MESSAGE is not set
# BR2_PACKAGE_PERL_HTTP_MULTIPARTPARSER is not set
# BR2_PACKAGE_PERL_HTTP_NEGOTIATE is not set
# BR2_PACKAGE_PERL_I18N is not set
# BR2_PACKAGE_PERL_IMAGE_EXIFTOOL is not set
# BR2_PACKAGE_PERL_IO_HTML is not set
# BR2_PACKAGE_PERL_IO_INTERFACE is not set
# BR2_PACKAGE_PERL_IO_SOCKET_MULTICAST is not set
# BR2_PACKAGE_PERL_IO_SOCKET_SSL is not set
# BR2_PACKAGE_PERL_JSON_MAYBEXS is not set
# BR2_PACKAGE_PERL_JSON_TINY is not set
# BR2_PACKAGE_PERL_LIBWWW_PERL is not set
# BR2_PACKAGE_PERL_LOCALE_MAKETEXT_LEXICON is not set
# BR2_PACKAGE_PERL_LWP_MEDIATYPES is not set
# BR2_PACKAGE_PERL_LWP_PROTOCOL_HTTPS is not set
# BR2_PACKAGE_PERL_MAIL_DKIM is not set
# BR2_PACKAGE_PERL_MAILTOOLS is not set
# BR2_PACKAGE_PERL_MATH_INT64 is not set
# BR2_PACKAGE_PERL_MATH_PRIME_UTIL is not set
# BR2_PACKAGE_PERL_MIME_BASE64_URLSAFE is not set
# BR2_PACKAGE_PERL_MIME_TOOLS is not set
# BR2_PACKAGE_PERL_MODULE_IMPLEMENTATION is not set
# BR2_PACKAGE_PERL_MODULE_RUNTIME is not set
# BR2_PACKAGE_PERL_MOJOLICIOUS is not set
# BR2_PACKAGE_PERL_MOJOLICIOUS_PLUGIN_AUTHENTICATION is not set
# BR2_PACKAGE_PERL_MOJOLICIOUS_PLUGIN_AUTHORIZATION is not set
# BR2_PACKAGE_PERL_MOJOLICIOUS_PLUGIN_CSPHEADER is not set
# BR2_PACKAGE_PERL_MOJOLICIOUS_PLUGIN_I18N is not set
# BR2_PACKAGE_PERL_MOJOLICIOUS_PLUGIN_SECURITYHEADER is not set
# BR2_PACKAGE_PERL_MOO is not set
# BR2_PACKAGE_PERL_MOZILLA_CA is not set
# BR2_PACKAGE_PERL_NET_DNS is not set
# BR2_PACKAGE_PERL_NET_HTTP is not set
# BR2_PACKAGE_PERL_NET_SNMP is not set
# perl-net-ssh2 needs libssh2 with OpenSSL or Libgcrypt backend
# BR2_PACKAGE_PERL_NET_SSLEAY is not set
# BR2_PACKAGE_PERL_NET_TELNET is not set
# BR2_PACKAGE_PERL_NETADDR_IP is not set
# BR2_PACKAGE_PERL_NUMBER_BYTES_HUMAN is not set
# BR2_PACKAGE_PERL_PACKAGE_STASH is not set
# BR2_PACKAGE_PERL_PARAMS_UTIL is not set
# BR2_PACKAGE_PERL_PARSE_YAPP is not set
# BR2_PACKAGE_PERL_PATH_TINY is not set
# BR2_PACKAGE_PERL_PLACK is not set
# BR2_PACKAGE_PERL_POSIX_STRFTIME_COMPILER is not set
# BR2_PACKAGE_PERL_ROLE_TINY is not set
# BR2_PACKAGE_PERL_STREAM_BUFFERED is not set
# BR2_PACKAGE_PERL_SUB_EXPORTER_PROGRESSIVE is not set
# BR2_PACKAGE_PERL_SUB_INSTALL is not set
# BR2_PACKAGE_PERL_SUB_QUOTE is not set
# BR2_PACKAGE_PERL_SYS_CPU is not set
# BR2_PACKAGE_PERL_SYS_MEMINFO is not set
# BR2_PACKAGE_PERL_SYS_MMAP is not set
# BR2_PACKAGE_PERL_TIME_PARSEDATE is not set
# BR2_PACKAGE_PERL_TIMEDATE is not set
# BR2_PACKAGE_PERL_TRY_TINY is not set
# BR2_PACKAGE_PERL_TYPE_TINY is not set
# BR2_PACKAGE_PERL_URI is not set
# BR2_PACKAGE_PERL_WWW_FORM_URLENCODED is not set
# BR2_PACKAGE_PERL_WWW_ROBOTRULES is not set
# BR2_PACKAGE_PERL_X10 is not set
# BR2_PACKAGE_PERL_XML_LIBXML is not set
# BR2_PACKAGE_PERL_XML_NAMESPACESUPPORT is not set
# BR2_PACKAGE_PERL_XML_SAX is not set
# BR2_PACKAGE_PERL_XML_SAX_BASE is not set
# BR2_PACKAGE_PYTHON_AIOSQLITE is not set
# BR2_PACKAGE_PYTHON_ANNOTATED_TYPES is not set
# BR2_PACKAGE_PYTHON_ANYIO is not set
# BR2_PACKAGE_PYTHON_ASYNCSSH is not set
# BR2_PACKAGE_PYTHON_BITARRAY is not set
# BR2_PACKAGE_PYTHON_CACHETOOLS is not set
# BR2_PACKAGE_PYTHON_CONTOURPY is not set
# BR2_PACKAGE_PYTHON_DECOUPLE is not set
# BR2_PACKAGE_PYTHON_FASTAPI is not set
# BR2_PACKAGE_PYTHON_FASTAPI_SESSIONS is not set
# BR2_PACKAGE_PYTHON_GOOGLE_API_CORE is not set
# BR2_PACKAGE_PYTHON_GOOGLE_AUTH is not set
# BR2_PACKAGE_PYTHON_GOOGLEAPIS_COMMON_PROTOS is not set
# BR2_PACKAGE_PYTHON_GRPC_REQUESTS is not set
BR2_PACKAGE_PYTHON_GRPCIO_ARCH_SUPPORTS=y
# BR2_PACKAGE_PYTHON_GRPCIO is not set
# BR2_PACKAGE_PYTHON_GRPCIO_REFLECTION is not set
# BR2_PACKAGE_PYTHON_HTTPCORE is not set
# BR2_PACKAGE_PYTHON_HTTPX is not set
# BR2_PACKAGE_PYTHON_JEEPNEY is not set
# BR2_PACKAGE_PYTHON_JSONSCHEMA_SPECIFICATIONS is not set
# BR2_PACKAGE_PYTHON_KMOD is not set
# BR2_PACKAGE_PYTHON_MATPLOTLIB_INLINE is not set
# BR2_PACKAGE_PYTHON_ML_DTYPES is not set
# BR2_PACKAGE_PYTHON_MULTIPART is not set
# BR2_PACKAGE_PYTHON_PYDANTIC_CORE is not set
# BR2_PACKAGE_PYTHON_PYPNG is not set
# BR2_PACKAGE_PYTHON_PYSENSORS is not set
# BR2_PACKAGE_PYTHON_REFERENCING is not set
# python-scipy needs glibc or musl toolchain w/ fortran, c++, gcc >= 9, host gcc >= 9
# BR2_PACKAGE_PYTHON_SEGNO is not set
# BR2_PACKAGE_PYTHON_STARLETTE is not set
# BR2_PACKAGE_PYTHON_TCOLORPY is not set
# BR2_PACKAGE_PYTHON_TFTPY is not set
# BR2_PACKAGE_PYTHON_TRAFARET is not set
# BR2_PACKAGE_PYTHON_TYPES_PYTHON_DATEUTIL is not set
# BR2_PACKAGE_PYTHON_URWID_READLINE is not set
# BR2_PACKAGE_PYTHON_UVICORN is not set
# BR2_PACKAGE_LIBCANBERRA is not set
BR2_PACKAGE_LIBSPDM_CPU_FAMILY="x64"
BR2_PACKAGE_LIBSPDM_ARCH_SUPPORTS=y
# BR2_PACKAGE_LIBSPDM is not set
# BR2_PACKAGE_MARIADB is not set
BR2_PACKAGE_FLUTTER_ENGINE_ARCH_SUPPORTS=y
# BR2_PACKAGE_FLUTTER_ENGINE is not set
BR2_PACKAGE_LIBVPL_ARCH_SUPPORTS=y
# BR2_PACKAGE_LIBVPL is not set
# BR2_PACKAGE_ONEVPL_INTEL_GPU is not set
# webkitgtk needs libgtk3 and a toolchain w/ C++, wchar, threads, dynamic library, gcc >= 10, host gcc >= 4.9
# BR2_PACKAGE_LIBNVME is not set
# BR2_PACKAGE_LIBJWT is not set
# BR2_PACKAGE_LIBCURL_WEBSOCKETS_SUPPORT is not set
# BR2_PACKAGE_LIBSOUP3 is not set
# BR2_PACKAGE_LIBZENOH_PICO is not set
# BR2_PACKAGE_OATPP is not set
# BR2_PACKAGE_LIBUTEMPTER is not set
# BR2_PACKAGE_LLVM_DUMP is not set
# BR2_PACKAGE_TLLIST is not set
# BR2_PACKAGE_FCFT is not set
# BR2_PACKAGE_FFT_EVAL is not set
# BR2_PACKAGE_FIREWALLD is not set
# BR2_PACKAGE_NTP_NTP_WAIT is not set
# BR2_PACKAGE_NTP_NTPTRACE is not set
# BR2_PACKAGE_NUSHELL is not set
# BR2_PACKAGE_EZA is not set
# BR2_PACKAGE_MINISIGN is not set
BR2_PACKAGE_PARALLEL=y
# parallel needs Perl and procps-ng
# BR2_PACKAGE_RLWRAP is not set
BR2_PACKAGE_CRIU_ARCH_SUPPORTS=y
# BR2_PACKAGE_CRIU is not set
# criu needs a glibc or musl toolchain w/ threads, host gcc >= 7, gcc >= 8, headers >= 4.18, C++, dynamic library, wchar
# multipath-tools needs udev and a toolchain w/ threads, dynamic library, C++
# petitboot needs a toolchain w/ wchar, dynamic library, threads, udev /dev management
BR2_PACKAGE_PROCPS_NG=y
# BR2_PACKAGE_PROCS is not set
# BR2_PACKAGE_RAUC_HAWKBIT_UPDATER is not set
# BR2_PACKAGE_HOST_AMLOGIC_BOOT_FIP is not set
# BR2_PACKAGE_HOST_DEPOT_TOOLS is not set
BR2_PACKAGE_HOST_FLUTTER_SDK_BIN_ARCH_SUPPORTS=y
# BR2_PACKAGE_HOST_FLUTTER_SDK_BIN is not set
# BR2_PACKAGE_HOST_MICROCHIP_HSS_PAYLOAD_GENERATOR is not set
# BR2_PACKAGE_HOST_MINISIGN is not set
BR2_PACKAGE_HOST_NODEJS_BIN_ARCH_SUPPORTS=y
BR2_PACKAGE_PROVIDES_HOST_NODEJS="host-nodejs-bin"
# BR2_PACKAGE_HOST_PYTHON3_CURSES is not set
# BR2_PACKAGE_HOST_SDBUS_CPP is not set
# Legacy options removed in 2024.02
# BR2_TOOLCHAIN_EXTERNAL_CODESCAPE_IMG_MIPS is not set
# BR2_TOOLCHAIN_EXTERNAL_CODESCAPE_MTI_MIPS is not set
# BR2_TOOLCHAIN_EXTERNAL_CODESOURCERY_AARCH64 is not set
# BR2_TOOLCHAIN_EXTERNAL_CODESOURCERY_ARM is not set
# BR2_PACKAGE_ORACLE_MYSQL is not set
# BR2_PACKAGE_STRONGSWAN_SCEP is not set
# BR2_PACKAGE_SHADOW_UTMPX is not set
# BR2_PACKAGE_DAVINCI_BOOTCOUNT is not set
# BR2_GDB_VERSION_11 is not set
# BR2_PACKAGE_GMPC is not set
# BR2_PACKAGE_ONEVPL is not set
# BR2_KERNEL_HEADERS_6_5 is not set
BR2_PACKAGE_WATCHDOGD_GENERIC_POLL=0
BR2_PACKAGE_WATCHDOGD_LOADAVG_POLL=0
BR2_PACKAGE_WATCHDOGD_FILENR_POLL=0
BR2_PACKAGE_WATCHDOGD_MEMINFO_POLL=0
# Legacy options removed in 2023.11
# BR2_PACKAGE_OPENJDK_VERSION_11 is not set
# BR2_GDB_VERSION_10 is not set

******************************
**                          **
** Lines in B but not in A: **
**                          **
******************************
# Buildroot -gbb87d66c65-dirty Configuration
BR2_TOOLCHAIN_HEADERS_AT_LEAST="6.4"
BR2_DEFCONFIG="/home/nick/Data/MIC/Technical_Data/Software/ShredOS_2023-08-2/2023-08-2/buildroot-2023.08.2/configs/shredos_defconfig"
BR2_BACKUP_SITE="http://sources.buildroot.net"
# BR2_OPTIMIZE_2 is not set
BR2_OPTIMIZE_S=y
BR2_LINUX_KERNEL_VERSION="6.4.16"
BR2_LINUX_KERNEL_CUSTOM_CONFIG_FILE="board/shredos/kernel-6.4-defconfig.config"
# sysdig needs a glibc toolchain w/ C++, threads, gcc >= 5, dynamic library, a Linux kernel, and luajit or lua 5.1 to be built
# sensors-detect needs perl
# BR2_PACKAGE_PERL is not set
# python-scipy needs toolchain w/ fortran and c++ and glibc or musl
# webkitgtk needs libgtk3 and a toolchain w/ C++, wchar, threads, dynamic library, gcc >= 9, host gcc >= 4.9
# BR2_PACKAGE_RYGEL is not set
# multipath-tools needs udev and a toolchain w/ threads, dynamic library
# petitboot needs a uClibc or glibc toolchain w/ wchar, dynamic library, threads, udev /dev management
# BR2_PACKAGE_PROCPS_NG is not set
```
