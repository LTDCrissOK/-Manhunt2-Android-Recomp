#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1788
// Address: 0x2f1788 - 0x2f24b0
void sub_002F1788_0x2f1788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1788_0x2f1788");
#endif

    switch (ctx->pc) {
        case 0x2f1788u: goto label_2f1788;
        case 0x2f178cu: goto label_2f178c;
        case 0x2f1790u: goto label_2f1790;
        case 0x2f1794u: goto label_2f1794;
        case 0x2f1798u: goto label_2f1798;
        case 0x2f179cu: goto label_2f179c;
        case 0x2f17a0u: goto label_2f17a0;
        case 0x2f17a4u: goto label_2f17a4;
        case 0x2f17a8u: goto label_2f17a8;
        case 0x2f17acu: goto label_2f17ac;
        case 0x2f17b0u: goto label_2f17b0;
        case 0x2f17b4u: goto label_2f17b4;
        case 0x2f17b8u: goto label_2f17b8;
        case 0x2f17bcu: goto label_2f17bc;
        case 0x2f17c0u: goto label_2f17c0;
        case 0x2f17c4u: goto label_2f17c4;
        case 0x2f17c8u: goto label_2f17c8;
        case 0x2f17ccu: goto label_2f17cc;
        case 0x2f17d0u: goto label_2f17d0;
        case 0x2f17d4u: goto label_2f17d4;
        case 0x2f17d8u: goto label_2f17d8;
        case 0x2f17dcu: goto label_2f17dc;
        case 0x2f17e0u: goto label_2f17e0;
        case 0x2f17e4u: goto label_2f17e4;
        case 0x2f17e8u: goto label_2f17e8;
        case 0x2f17ecu: goto label_2f17ec;
        case 0x2f17f0u: goto label_2f17f0;
        case 0x2f17f4u: goto label_2f17f4;
        case 0x2f17f8u: goto label_2f17f8;
        case 0x2f17fcu: goto label_2f17fc;
        case 0x2f1800u: goto label_2f1800;
        case 0x2f1804u: goto label_2f1804;
        case 0x2f1808u: goto label_2f1808;
        case 0x2f180cu: goto label_2f180c;
        case 0x2f1810u: goto label_2f1810;
        case 0x2f1814u: goto label_2f1814;
        case 0x2f1818u: goto label_2f1818;
        case 0x2f181cu: goto label_2f181c;
        case 0x2f1820u: goto label_2f1820;
        case 0x2f1824u: goto label_2f1824;
        case 0x2f1828u: goto label_2f1828;
        case 0x2f182cu: goto label_2f182c;
        case 0x2f1830u: goto label_2f1830;
        case 0x2f1834u: goto label_2f1834;
        case 0x2f1838u: goto label_2f1838;
        case 0x2f183cu: goto label_2f183c;
        case 0x2f1840u: goto label_2f1840;
        case 0x2f1844u: goto label_2f1844;
        case 0x2f1848u: goto label_2f1848;
        case 0x2f184cu: goto label_2f184c;
        case 0x2f1850u: goto label_2f1850;
        case 0x2f1854u: goto label_2f1854;
        case 0x2f1858u: goto label_2f1858;
        case 0x2f185cu: goto label_2f185c;
        case 0x2f1860u: goto label_2f1860;
        case 0x2f1864u: goto label_2f1864;
        case 0x2f1868u: goto label_2f1868;
        case 0x2f186cu: goto label_2f186c;
        case 0x2f1870u: goto label_2f1870;
        case 0x2f1874u: goto label_2f1874;
        case 0x2f1878u: goto label_2f1878;
        case 0x2f187cu: goto label_2f187c;
        case 0x2f1880u: goto label_2f1880;
        case 0x2f1884u: goto label_2f1884;
        case 0x2f1888u: goto label_2f1888;
        case 0x2f188cu: goto label_2f188c;
        case 0x2f1890u: goto label_2f1890;
        case 0x2f1894u: goto label_2f1894;
        case 0x2f1898u: goto label_2f1898;
        case 0x2f189cu: goto label_2f189c;
        case 0x2f18a0u: goto label_2f18a0;
        case 0x2f18a4u: goto label_2f18a4;
        case 0x2f18a8u: goto label_2f18a8;
        case 0x2f18acu: goto label_2f18ac;
        case 0x2f18b0u: goto label_2f18b0;
        case 0x2f18b4u: goto label_2f18b4;
        case 0x2f18b8u: goto label_2f18b8;
        case 0x2f18bcu: goto label_2f18bc;
        case 0x2f18c0u: goto label_2f18c0;
        case 0x2f18c4u: goto label_2f18c4;
        case 0x2f18c8u: goto label_2f18c8;
        case 0x2f18ccu: goto label_2f18cc;
        case 0x2f18d0u: goto label_2f18d0;
        case 0x2f18d4u: goto label_2f18d4;
        case 0x2f18d8u: goto label_2f18d8;
        case 0x2f18dcu: goto label_2f18dc;
        case 0x2f18e0u: goto label_2f18e0;
        case 0x2f18e4u: goto label_2f18e4;
        case 0x2f18e8u: goto label_2f18e8;
        case 0x2f18ecu: goto label_2f18ec;
        case 0x2f18f0u: goto label_2f18f0;
        case 0x2f18f4u: goto label_2f18f4;
        case 0x2f18f8u: goto label_2f18f8;
        case 0x2f18fcu: goto label_2f18fc;
        case 0x2f1900u: goto label_2f1900;
        case 0x2f1904u: goto label_2f1904;
        case 0x2f1908u: goto label_2f1908;
        case 0x2f190cu: goto label_2f190c;
        case 0x2f1910u: goto label_2f1910;
        case 0x2f1914u: goto label_2f1914;
        case 0x2f1918u: goto label_2f1918;
        case 0x2f191cu: goto label_2f191c;
        case 0x2f1920u: goto label_2f1920;
        case 0x2f1924u: goto label_2f1924;
        case 0x2f1928u: goto label_2f1928;
        case 0x2f192cu: goto label_2f192c;
        case 0x2f1930u: goto label_2f1930;
        case 0x2f1934u: goto label_2f1934;
        case 0x2f1938u: goto label_2f1938;
        case 0x2f193cu: goto label_2f193c;
        case 0x2f1940u: goto label_2f1940;
        case 0x2f1944u: goto label_2f1944;
        case 0x2f1948u: goto label_2f1948;
        case 0x2f194cu: goto label_2f194c;
        case 0x2f1950u: goto label_2f1950;
        case 0x2f1954u: goto label_2f1954;
        case 0x2f1958u: goto label_2f1958;
        case 0x2f195cu: goto label_2f195c;
        case 0x2f1960u: goto label_2f1960;
        case 0x2f1964u: goto label_2f1964;
        case 0x2f1968u: goto label_2f1968;
        case 0x2f196cu: goto label_2f196c;
        case 0x2f1970u: goto label_2f1970;
        case 0x2f1974u: goto label_2f1974;
        case 0x2f1978u: goto label_2f1978;
        case 0x2f197cu: goto label_2f197c;
        case 0x2f1980u: goto label_2f1980;
        case 0x2f1984u: goto label_2f1984;
        case 0x2f1988u: goto label_2f1988;
        case 0x2f198cu: goto label_2f198c;
        case 0x2f1990u: goto label_2f1990;
        case 0x2f1994u: goto label_2f1994;
        case 0x2f1998u: goto label_2f1998;
        case 0x2f199cu: goto label_2f199c;
        case 0x2f19a0u: goto label_2f19a0;
        case 0x2f19a4u: goto label_2f19a4;
        case 0x2f19a8u: goto label_2f19a8;
        case 0x2f19acu: goto label_2f19ac;
        case 0x2f19b0u: goto label_2f19b0;
        case 0x2f19b4u: goto label_2f19b4;
        case 0x2f19b8u: goto label_2f19b8;
        case 0x2f19bcu: goto label_2f19bc;
        case 0x2f19c0u: goto label_2f19c0;
        case 0x2f19c4u: goto label_2f19c4;
        case 0x2f19c8u: goto label_2f19c8;
        case 0x2f19ccu: goto label_2f19cc;
        case 0x2f19d0u: goto label_2f19d0;
        case 0x2f19d4u: goto label_2f19d4;
        case 0x2f19d8u: goto label_2f19d8;
        case 0x2f19dcu: goto label_2f19dc;
        case 0x2f19e0u: goto label_2f19e0;
        case 0x2f19e4u: goto label_2f19e4;
        case 0x2f19e8u: goto label_2f19e8;
        case 0x2f19ecu: goto label_2f19ec;
        case 0x2f19f0u: goto label_2f19f0;
        case 0x2f19f4u: goto label_2f19f4;
        case 0x2f19f8u: goto label_2f19f8;
        case 0x2f19fcu: goto label_2f19fc;
        case 0x2f1a00u: goto label_2f1a00;
        case 0x2f1a04u: goto label_2f1a04;
        case 0x2f1a08u: goto label_2f1a08;
        case 0x2f1a0cu: goto label_2f1a0c;
        case 0x2f1a10u: goto label_2f1a10;
        case 0x2f1a14u: goto label_2f1a14;
        case 0x2f1a18u: goto label_2f1a18;
        case 0x2f1a1cu: goto label_2f1a1c;
        case 0x2f1a20u: goto label_2f1a20;
        case 0x2f1a24u: goto label_2f1a24;
        case 0x2f1a28u: goto label_2f1a28;
        case 0x2f1a2cu: goto label_2f1a2c;
        case 0x2f1a30u: goto label_2f1a30;
        case 0x2f1a34u: goto label_2f1a34;
        case 0x2f1a38u: goto label_2f1a38;
        case 0x2f1a3cu: goto label_2f1a3c;
        case 0x2f1a40u: goto label_2f1a40;
        case 0x2f1a44u: goto label_2f1a44;
        case 0x2f1a48u: goto label_2f1a48;
        case 0x2f1a4cu: goto label_2f1a4c;
        case 0x2f1a50u: goto label_2f1a50;
        case 0x2f1a54u: goto label_2f1a54;
        case 0x2f1a58u: goto label_2f1a58;
        case 0x2f1a5cu: goto label_2f1a5c;
        case 0x2f1a60u: goto label_2f1a60;
        case 0x2f1a64u: goto label_2f1a64;
        case 0x2f1a68u: goto label_2f1a68;
        case 0x2f1a6cu: goto label_2f1a6c;
        case 0x2f1a70u: goto label_2f1a70;
        case 0x2f1a74u: goto label_2f1a74;
        case 0x2f1a78u: goto label_2f1a78;
        case 0x2f1a7cu: goto label_2f1a7c;
        case 0x2f1a80u: goto label_2f1a80;
        case 0x2f1a84u: goto label_2f1a84;
        case 0x2f1a88u: goto label_2f1a88;
        case 0x2f1a8cu: goto label_2f1a8c;
        case 0x2f1a90u: goto label_2f1a90;
        case 0x2f1a94u: goto label_2f1a94;
        case 0x2f1a98u: goto label_2f1a98;
        case 0x2f1a9cu: goto label_2f1a9c;
        case 0x2f1aa0u: goto label_2f1aa0;
        case 0x2f1aa4u: goto label_2f1aa4;
        case 0x2f1aa8u: goto label_2f1aa8;
        case 0x2f1aacu: goto label_2f1aac;
        case 0x2f1ab0u: goto label_2f1ab0;
        case 0x2f1ab4u: goto label_2f1ab4;
        case 0x2f1ab8u: goto label_2f1ab8;
        case 0x2f1abcu: goto label_2f1abc;
        case 0x2f1ac0u: goto label_2f1ac0;
        case 0x2f1ac4u: goto label_2f1ac4;
        case 0x2f1ac8u: goto label_2f1ac8;
        case 0x2f1accu: goto label_2f1acc;
        case 0x2f1ad0u: goto label_2f1ad0;
        case 0x2f1ad4u: goto label_2f1ad4;
        case 0x2f1ad8u: goto label_2f1ad8;
        case 0x2f1adcu: goto label_2f1adc;
        case 0x2f1ae0u: goto label_2f1ae0;
        case 0x2f1ae4u: goto label_2f1ae4;
        case 0x2f1ae8u: goto label_2f1ae8;
        case 0x2f1aecu: goto label_2f1aec;
        case 0x2f1af0u: goto label_2f1af0;
        case 0x2f1af4u: goto label_2f1af4;
        case 0x2f1af8u: goto label_2f1af8;
        case 0x2f1afcu: goto label_2f1afc;
        case 0x2f1b00u: goto label_2f1b00;
        case 0x2f1b04u: goto label_2f1b04;
        case 0x2f1b08u: goto label_2f1b08;
        case 0x2f1b0cu: goto label_2f1b0c;
        case 0x2f1b10u: goto label_2f1b10;
        case 0x2f1b14u: goto label_2f1b14;
        case 0x2f1b18u: goto label_2f1b18;
        case 0x2f1b1cu: goto label_2f1b1c;
        case 0x2f1b20u: goto label_2f1b20;
        case 0x2f1b24u: goto label_2f1b24;
        case 0x2f1b28u: goto label_2f1b28;
        case 0x2f1b2cu: goto label_2f1b2c;
        case 0x2f1b30u: goto label_2f1b30;
        case 0x2f1b34u: goto label_2f1b34;
        case 0x2f1b38u: goto label_2f1b38;
        case 0x2f1b3cu: goto label_2f1b3c;
        case 0x2f1b40u: goto label_2f1b40;
        case 0x2f1b44u: goto label_2f1b44;
        case 0x2f1b48u: goto label_2f1b48;
        case 0x2f1b4cu: goto label_2f1b4c;
        case 0x2f1b50u: goto label_2f1b50;
        case 0x2f1b54u: goto label_2f1b54;
        case 0x2f1b58u: goto label_2f1b58;
        case 0x2f1b5cu: goto label_2f1b5c;
        case 0x2f1b60u: goto label_2f1b60;
        case 0x2f1b64u: goto label_2f1b64;
        case 0x2f1b68u: goto label_2f1b68;
        case 0x2f1b6cu: goto label_2f1b6c;
        case 0x2f1b70u: goto label_2f1b70;
        case 0x2f1b74u: goto label_2f1b74;
        case 0x2f1b78u: goto label_2f1b78;
        case 0x2f1b7cu: goto label_2f1b7c;
        case 0x2f1b80u: goto label_2f1b80;
        case 0x2f1b84u: goto label_2f1b84;
        case 0x2f1b88u: goto label_2f1b88;
        case 0x2f1b8cu: goto label_2f1b8c;
        case 0x2f1b90u: goto label_2f1b90;
        case 0x2f1b94u: goto label_2f1b94;
        case 0x2f1b98u: goto label_2f1b98;
        case 0x2f1b9cu: goto label_2f1b9c;
        case 0x2f1ba0u: goto label_2f1ba0;
        case 0x2f1ba4u: goto label_2f1ba4;
        case 0x2f1ba8u: goto label_2f1ba8;
        case 0x2f1bacu: goto label_2f1bac;
        case 0x2f1bb0u: goto label_2f1bb0;
        case 0x2f1bb4u: goto label_2f1bb4;
        case 0x2f1bb8u: goto label_2f1bb8;
        case 0x2f1bbcu: goto label_2f1bbc;
        case 0x2f1bc0u: goto label_2f1bc0;
        case 0x2f1bc4u: goto label_2f1bc4;
        case 0x2f1bc8u: goto label_2f1bc8;
        case 0x2f1bccu: goto label_2f1bcc;
        case 0x2f1bd0u: goto label_2f1bd0;
        case 0x2f1bd4u: goto label_2f1bd4;
        case 0x2f1bd8u: goto label_2f1bd8;
        case 0x2f1bdcu: goto label_2f1bdc;
        case 0x2f1be0u: goto label_2f1be0;
        case 0x2f1be4u: goto label_2f1be4;
        case 0x2f1be8u: goto label_2f1be8;
        case 0x2f1becu: goto label_2f1bec;
        case 0x2f1bf0u: goto label_2f1bf0;
        case 0x2f1bf4u: goto label_2f1bf4;
        case 0x2f1bf8u: goto label_2f1bf8;
        case 0x2f1bfcu: goto label_2f1bfc;
        case 0x2f1c00u: goto label_2f1c00;
        case 0x2f1c04u: goto label_2f1c04;
        case 0x2f1c08u: goto label_2f1c08;
        case 0x2f1c0cu: goto label_2f1c0c;
        case 0x2f1c10u: goto label_2f1c10;
        case 0x2f1c14u: goto label_2f1c14;
        case 0x2f1c18u: goto label_2f1c18;
        case 0x2f1c1cu: goto label_2f1c1c;
        case 0x2f1c20u: goto label_2f1c20;
        case 0x2f1c24u: goto label_2f1c24;
        case 0x2f1c28u: goto label_2f1c28;
        case 0x2f1c2cu: goto label_2f1c2c;
        case 0x2f1c30u: goto label_2f1c30;
        case 0x2f1c34u: goto label_2f1c34;
        case 0x2f1c38u: goto label_2f1c38;
        case 0x2f1c3cu: goto label_2f1c3c;
        case 0x2f1c40u: goto label_2f1c40;
        case 0x2f1c44u: goto label_2f1c44;
        case 0x2f1c48u: goto label_2f1c48;
        case 0x2f1c4cu: goto label_2f1c4c;
        case 0x2f1c50u: goto label_2f1c50;
        case 0x2f1c54u: goto label_2f1c54;
        case 0x2f1c58u: goto label_2f1c58;
        case 0x2f1c5cu: goto label_2f1c5c;
        case 0x2f1c60u: goto label_2f1c60;
        case 0x2f1c64u: goto label_2f1c64;
        case 0x2f1c68u: goto label_2f1c68;
        case 0x2f1c6cu: goto label_2f1c6c;
        case 0x2f1c70u: goto label_2f1c70;
        case 0x2f1c74u: goto label_2f1c74;
        case 0x2f1c78u: goto label_2f1c78;
        case 0x2f1c7cu: goto label_2f1c7c;
        case 0x2f1c80u: goto label_2f1c80;
        case 0x2f1c84u: goto label_2f1c84;
        case 0x2f1c88u: goto label_2f1c88;
        case 0x2f1c8cu: goto label_2f1c8c;
        case 0x2f1c90u: goto label_2f1c90;
        case 0x2f1c94u: goto label_2f1c94;
        case 0x2f1c98u: goto label_2f1c98;
        case 0x2f1c9cu: goto label_2f1c9c;
        case 0x2f1ca0u: goto label_2f1ca0;
        case 0x2f1ca4u: goto label_2f1ca4;
        case 0x2f1ca8u: goto label_2f1ca8;
        case 0x2f1cacu: goto label_2f1cac;
        case 0x2f1cb0u: goto label_2f1cb0;
        case 0x2f1cb4u: goto label_2f1cb4;
        case 0x2f1cb8u: goto label_2f1cb8;
        case 0x2f1cbcu: goto label_2f1cbc;
        case 0x2f1cc0u: goto label_2f1cc0;
        case 0x2f1cc4u: goto label_2f1cc4;
        case 0x2f1cc8u: goto label_2f1cc8;
        case 0x2f1cccu: goto label_2f1ccc;
        case 0x2f1cd0u: goto label_2f1cd0;
        case 0x2f1cd4u: goto label_2f1cd4;
        case 0x2f1cd8u: goto label_2f1cd8;
        case 0x2f1cdcu: goto label_2f1cdc;
        case 0x2f1ce0u: goto label_2f1ce0;
        case 0x2f1ce4u: goto label_2f1ce4;
        case 0x2f1ce8u: goto label_2f1ce8;
        case 0x2f1cecu: goto label_2f1cec;
        case 0x2f1cf0u: goto label_2f1cf0;
        case 0x2f1cf4u: goto label_2f1cf4;
        case 0x2f1cf8u: goto label_2f1cf8;
        case 0x2f1cfcu: goto label_2f1cfc;
        case 0x2f1d00u: goto label_2f1d00;
        case 0x2f1d04u: goto label_2f1d04;
        case 0x2f1d08u: goto label_2f1d08;
        case 0x2f1d0cu: goto label_2f1d0c;
        case 0x2f1d10u: goto label_2f1d10;
        case 0x2f1d14u: goto label_2f1d14;
        case 0x2f1d18u: goto label_2f1d18;
        case 0x2f1d1cu: goto label_2f1d1c;
        case 0x2f1d20u: goto label_2f1d20;
        case 0x2f1d24u: goto label_2f1d24;
        case 0x2f1d28u: goto label_2f1d28;
        case 0x2f1d2cu: goto label_2f1d2c;
        case 0x2f1d30u: goto label_2f1d30;
        case 0x2f1d34u: goto label_2f1d34;
        case 0x2f1d38u: goto label_2f1d38;
        case 0x2f1d3cu: goto label_2f1d3c;
        case 0x2f1d40u: goto label_2f1d40;
        case 0x2f1d44u: goto label_2f1d44;
        case 0x2f1d48u: goto label_2f1d48;
        case 0x2f1d4cu: goto label_2f1d4c;
        case 0x2f1d50u: goto label_2f1d50;
        case 0x2f1d54u: goto label_2f1d54;
        case 0x2f1d58u: goto label_2f1d58;
        case 0x2f1d5cu: goto label_2f1d5c;
        case 0x2f1d60u: goto label_2f1d60;
        case 0x2f1d64u: goto label_2f1d64;
        case 0x2f1d68u: goto label_2f1d68;
        case 0x2f1d6cu: goto label_2f1d6c;
        case 0x2f1d70u: goto label_2f1d70;
        case 0x2f1d74u: goto label_2f1d74;
        case 0x2f1d78u: goto label_2f1d78;
        case 0x2f1d7cu: goto label_2f1d7c;
        case 0x2f1d80u: goto label_2f1d80;
        case 0x2f1d84u: goto label_2f1d84;
        case 0x2f1d88u: goto label_2f1d88;
        case 0x2f1d8cu: goto label_2f1d8c;
        case 0x2f1d90u: goto label_2f1d90;
        case 0x2f1d94u: goto label_2f1d94;
        case 0x2f1d98u: goto label_2f1d98;
        case 0x2f1d9cu: goto label_2f1d9c;
        case 0x2f1da0u: goto label_2f1da0;
        case 0x2f1da4u: goto label_2f1da4;
        case 0x2f1da8u: goto label_2f1da8;
        case 0x2f1dacu: goto label_2f1dac;
        case 0x2f1db0u: goto label_2f1db0;
        case 0x2f1db4u: goto label_2f1db4;
        case 0x2f1db8u: goto label_2f1db8;
        case 0x2f1dbcu: goto label_2f1dbc;
        case 0x2f1dc0u: goto label_2f1dc0;
        case 0x2f1dc4u: goto label_2f1dc4;
        case 0x2f1dc8u: goto label_2f1dc8;
        case 0x2f1dccu: goto label_2f1dcc;
        case 0x2f1dd0u: goto label_2f1dd0;
        case 0x2f1dd4u: goto label_2f1dd4;
        case 0x2f1dd8u: goto label_2f1dd8;
        case 0x2f1ddcu: goto label_2f1ddc;
        case 0x2f1de0u: goto label_2f1de0;
        case 0x2f1de4u: goto label_2f1de4;
        case 0x2f1de8u: goto label_2f1de8;
        case 0x2f1decu: goto label_2f1dec;
        case 0x2f1df0u: goto label_2f1df0;
        case 0x2f1df4u: goto label_2f1df4;
        case 0x2f1df8u: goto label_2f1df8;
        case 0x2f1dfcu: goto label_2f1dfc;
        case 0x2f1e00u: goto label_2f1e00;
        case 0x2f1e04u: goto label_2f1e04;
        case 0x2f1e08u: goto label_2f1e08;
        case 0x2f1e0cu: goto label_2f1e0c;
        case 0x2f1e10u: goto label_2f1e10;
        case 0x2f1e14u: goto label_2f1e14;
        case 0x2f1e18u: goto label_2f1e18;
        case 0x2f1e1cu: goto label_2f1e1c;
        case 0x2f1e20u: goto label_2f1e20;
        case 0x2f1e24u: goto label_2f1e24;
        case 0x2f1e28u: goto label_2f1e28;
        case 0x2f1e2cu: goto label_2f1e2c;
        case 0x2f1e30u: goto label_2f1e30;
        case 0x2f1e34u: goto label_2f1e34;
        case 0x2f1e38u: goto label_2f1e38;
        case 0x2f1e3cu: goto label_2f1e3c;
        case 0x2f1e40u: goto label_2f1e40;
        case 0x2f1e44u: goto label_2f1e44;
        case 0x2f1e48u: goto label_2f1e48;
        case 0x2f1e4cu: goto label_2f1e4c;
        case 0x2f1e50u: goto label_2f1e50;
        case 0x2f1e54u: goto label_2f1e54;
        case 0x2f1e58u: goto label_2f1e58;
        case 0x2f1e5cu: goto label_2f1e5c;
        case 0x2f1e60u: goto label_2f1e60;
        case 0x2f1e64u: goto label_2f1e64;
        case 0x2f1e68u: goto label_2f1e68;
        case 0x2f1e6cu: goto label_2f1e6c;
        case 0x2f1e70u: goto label_2f1e70;
        case 0x2f1e74u: goto label_2f1e74;
        case 0x2f1e78u: goto label_2f1e78;
        case 0x2f1e7cu: goto label_2f1e7c;
        case 0x2f1e80u: goto label_2f1e80;
        case 0x2f1e84u: goto label_2f1e84;
        case 0x2f1e88u: goto label_2f1e88;
        case 0x2f1e8cu: goto label_2f1e8c;
        case 0x2f1e90u: goto label_2f1e90;
        case 0x2f1e94u: goto label_2f1e94;
        case 0x2f1e98u: goto label_2f1e98;
        case 0x2f1e9cu: goto label_2f1e9c;
        case 0x2f1ea0u: goto label_2f1ea0;
        case 0x2f1ea4u: goto label_2f1ea4;
        case 0x2f1ea8u: goto label_2f1ea8;
        case 0x2f1eacu: goto label_2f1eac;
        case 0x2f1eb0u: goto label_2f1eb0;
        case 0x2f1eb4u: goto label_2f1eb4;
        case 0x2f1eb8u: goto label_2f1eb8;
        case 0x2f1ebcu: goto label_2f1ebc;
        case 0x2f1ec0u: goto label_2f1ec0;
        case 0x2f1ec4u: goto label_2f1ec4;
        case 0x2f1ec8u: goto label_2f1ec8;
        case 0x2f1eccu: goto label_2f1ecc;
        case 0x2f1ed0u: goto label_2f1ed0;
        case 0x2f1ed4u: goto label_2f1ed4;
        case 0x2f1ed8u: goto label_2f1ed8;
        case 0x2f1edcu: goto label_2f1edc;
        case 0x2f1ee0u: goto label_2f1ee0;
        case 0x2f1ee4u: goto label_2f1ee4;
        case 0x2f1ee8u: goto label_2f1ee8;
        case 0x2f1eecu: goto label_2f1eec;
        case 0x2f1ef0u: goto label_2f1ef0;
        case 0x2f1ef4u: goto label_2f1ef4;
        case 0x2f1ef8u: goto label_2f1ef8;
        case 0x2f1efcu: goto label_2f1efc;
        case 0x2f1f00u: goto label_2f1f00;
        case 0x2f1f04u: goto label_2f1f04;
        case 0x2f1f08u: goto label_2f1f08;
        case 0x2f1f0cu: goto label_2f1f0c;
        case 0x2f1f10u: goto label_2f1f10;
        case 0x2f1f14u: goto label_2f1f14;
        case 0x2f1f18u: goto label_2f1f18;
        case 0x2f1f1cu: goto label_2f1f1c;
        case 0x2f1f20u: goto label_2f1f20;
        case 0x2f1f24u: goto label_2f1f24;
        case 0x2f1f28u: goto label_2f1f28;
        case 0x2f1f2cu: goto label_2f1f2c;
        case 0x2f1f30u: goto label_2f1f30;
        case 0x2f1f34u: goto label_2f1f34;
        case 0x2f1f38u: goto label_2f1f38;
        case 0x2f1f3cu: goto label_2f1f3c;
        case 0x2f1f40u: goto label_2f1f40;
        case 0x2f1f44u: goto label_2f1f44;
        case 0x2f1f48u: goto label_2f1f48;
        case 0x2f1f4cu: goto label_2f1f4c;
        case 0x2f1f50u: goto label_2f1f50;
        case 0x2f1f54u: goto label_2f1f54;
        case 0x2f1f58u: goto label_2f1f58;
        case 0x2f1f5cu: goto label_2f1f5c;
        case 0x2f1f60u: goto label_2f1f60;
        case 0x2f1f64u: goto label_2f1f64;
        case 0x2f1f68u: goto label_2f1f68;
        case 0x2f1f6cu: goto label_2f1f6c;
        case 0x2f1f70u: goto label_2f1f70;
        case 0x2f1f74u: goto label_2f1f74;
        case 0x2f1f78u: goto label_2f1f78;
        case 0x2f1f7cu: goto label_2f1f7c;
        case 0x2f1f80u: goto label_2f1f80;
        case 0x2f1f84u: goto label_2f1f84;
        case 0x2f1f88u: goto label_2f1f88;
        case 0x2f1f8cu: goto label_2f1f8c;
        case 0x2f1f90u: goto label_2f1f90;
        case 0x2f1f94u: goto label_2f1f94;
        case 0x2f1f98u: goto label_2f1f98;
        case 0x2f1f9cu: goto label_2f1f9c;
        case 0x2f1fa0u: goto label_2f1fa0;
        case 0x2f1fa4u: goto label_2f1fa4;
        case 0x2f1fa8u: goto label_2f1fa8;
        case 0x2f1facu: goto label_2f1fac;
        case 0x2f1fb0u: goto label_2f1fb0;
        case 0x2f1fb4u: goto label_2f1fb4;
        case 0x2f1fb8u: goto label_2f1fb8;
        case 0x2f1fbcu: goto label_2f1fbc;
        case 0x2f1fc0u: goto label_2f1fc0;
        case 0x2f1fc4u: goto label_2f1fc4;
        case 0x2f1fc8u: goto label_2f1fc8;
        case 0x2f1fccu: goto label_2f1fcc;
        case 0x2f1fd0u: goto label_2f1fd0;
        case 0x2f1fd4u: goto label_2f1fd4;
        case 0x2f1fd8u: goto label_2f1fd8;
        case 0x2f1fdcu: goto label_2f1fdc;
        case 0x2f1fe0u: goto label_2f1fe0;
        case 0x2f1fe4u: goto label_2f1fe4;
        case 0x2f1fe8u: goto label_2f1fe8;
        case 0x2f1fecu: goto label_2f1fec;
        case 0x2f1ff0u: goto label_2f1ff0;
        case 0x2f1ff4u: goto label_2f1ff4;
        case 0x2f1ff8u: goto label_2f1ff8;
        case 0x2f1ffcu: goto label_2f1ffc;
        case 0x2f2000u: goto label_2f2000;
        case 0x2f2004u: goto label_2f2004;
        case 0x2f2008u: goto label_2f2008;
        case 0x2f200cu: goto label_2f200c;
        case 0x2f2010u: goto label_2f2010;
        case 0x2f2014u: goto label_2f2014;
        case 0x2f2018u: goto label_2f2018;
        case 0x2f201cu: goto label_2f201c;
        case 0x2f2020u: goto label_2f2020;
        case 0x2f2024u: goto label_2f2024;
        case 0x2f2028u: goto label_2f2028;
        case 0x2f202cu: goto label_2f202c;
        case 0x2f2030u: goto label_2f2030;
        case 0x2f2034u: goto label_2f2034;
        case 0x2f2038u: goto label_2f2038;
        case 0x2f203cu: goto label_2f203c;
        case 0x2f2040u: goto label_2f2040;
        case 0x2f2044u: goto label_2f2044;
        case 0x2f2048u: goto label_2f2048;
        case 0x2f204cu: goto label_2f204c;
        case 0x2f2050u: goto label_2f2050;
        case 0x2f2054u: goto label_2f2054;
        case 0x2f2058u: goto label_2f2058;
        case 0x2f205cu: goto label_2f205c;
        case 0x2f2060u: goto label_2f2060;
        case 0x2f2064u: goto label_2f2064;
        case 0x2f2068u: goto label_2f2068;
        case 0x2f206cu: goto label_2f206c;
        case 0x2f2070u: goto label_2f2070;
        case 0x2f2074u: goto label_2f2074;
        case 0x2f2078u: goto label_2f2078;
        case 0x2f207cu: goto label_2f207c;
        case 0x2f2080u: goto label_2f2080;
        case 0x2f2084u: goto label_2f2084;
        case 0x2f2088u: goto label_2f2088;
        case 0x2f208cu: goto label_2f208c;
        case 0x2f2090u: goto label_2f2090;
        case 0x2f2094u: goto label_2f2094;
        case 0x2f2098u: goto label_2f2098;
        case 0x2f209cu: goto label_2f209c;
        case 0x2f20a0u: goto label_2f20a0;
        case 0x2f20a4u: goto label_2f20a4;
        case 0x2f20a8u: goto label_2f20a8;
        case 0x2f20acu: goto label_2f20ac;
        case 0x2f20b0u: goto label_2f20b0;
        case 0x2f20b4u: goto label_2f20b4;
        case 0x2f20b8u: goto label_2f20b8;
        case 0x2f20bcu: goto label_2f20bc;
        case 0x2f20c0u: goto label_2f20c0;
        case 0x2f20c4u: goto label_2f20c4;
        case 0x2f20c8u: goto label_2f20c8;
        case 0x2f20ccu: goto label_2f20cc;
        case 0x2f20d0u: goto label_2f20d0;
        case 0x2f20d4u: goto label_2f20d4;
        case 0x2f20d8u: goto label_2f20d8;
        case 0x2f20dcu: goto label_2f20dc;
        case 0x2f20e0u: goto label_2f20e0;
        case 0x2f20e4u: goto label_2f20e4;
        case 0x2f20e8u: goto label_2f20e8;
        case 0x2f20ecu: goto label_2f20ec;
        case 0x2f20f0u: goto label_2f20f0;
        case 0x2f20f4u: goto label_2f20f4;
        case 0x2f20f8u: goto label_2f20f8;
        case 0x2f20fcu: goto label_2f20fc;
        case 0x2f2100u: goto label_2f2100;
        case 0x2f2104u: goto label_2f2104;
        case 0x2f2108u: goto label_2f2108;
        case 0x2f210cu: goto label_2f210c;
        case 0x2f2110u: goto label_2f2110;
        case 0x2f2114u: goto label_2f2114;
        case 0x2f2118u: goto label_2f2118;
        case 0x2f211cu: goto label_2f211c;
        case 0x2f2120u: goto label_2f2120;
        case 0x2f2124u: goto label_2f2124;
        case 0x2f2128u: goto label_2f2128;
        case 0x2f212cu: goto label_2f212c;
        case 0x2f2130u: goto label_2f2130;
        case 0x2f2134u: goto label_2f2134;
        case 0x2f2138u: goto label_2f2138;
        case 0x2f213cu: goto label_2f213c;
        case 0x2f2140u: goto label_2f2140;
        case 0x2f2144u: goto label_2f2144;
        case 0x2f2148u: goto label_2f2148;
        case 0x2f214cu: goto label_2f214c;
        case 0x2f2150u: goto label_2f2150;
        case 0x2f2154u: goto label_2f2154;
        case 0x2f2158u: goto label_2f2158;
        case 0x2f215cu: goto label_2f215c;
        case 0x2f2160u: goto label_2f2160;
        case 0x2f2164u: goto label_2f2164;
        case 0x2f2168u: goto label_2f2168;
        case 0x2f216cu: goto label_2f216c;
        case 0x2f2170u: goto label_2f2170;
        case 0x2f2174u: goto label_2f2174;
        case 0x2f2178u: goto label_2f2178;
        case 0x2f217cu: goto label_2f217c;
        case 0x2f2180u: goto label_2f2180;
        case 0x2f2184u: goto label_2f2184;
        case 0x2f2188u: goto label_2f2188;
        case 0x2f218cu: goto label_2f218c;
        case 0x2f2190u: goto label_2f2190;
        case 0x2f2194u: goto label_2f2194;
        case 0x2f2198u: goto label_2f2198;
        case 0x2f219cu: goto label_2f219c;
        case 0x2f21a0u: goto label_2f21a0;
        case 0x2f21a4u: goto label_2f21a4;
        case 0x2f21a8u: goto label_2f21a8;
        case 0x2f21acu: goto label_2f21ac;
        case 0x2f21b0u: goto label_2f21b0;
        case 0x2f21b4u: goto label_2f21b4;
        case 0x2f21b8u: goto label_2f21b8;
        case 0x2f21bcu: goto label_2f21bc;
        case 0x2f21c0u: goto label_2f21c0;
        case 0x2f21c4u: goto label_2f21c4;
        case 0x2f21c8u: goto label_2f21c8;
        case 0x2f21ccu: goto label_2f21cc;
        case 0x2f21d0u: goto label_2f21d0;
        case 0x2f21d4u: goto label_2f21d4;
        case 0x2f21d8u: goto label_2f21d8;
        case 0x2f21dcu: goto label_2f21dc;
        case 0x2f21e0u: goto label_2f21e0;
        case 0x2f21e4u: goto label_2f21e4;
        case 0x2f21e8u: goto label_2f21e8;
        case 0x2f21ecu: goto label_2f21ec;
        case 0x2f21f0u: goto label_2f21f0;
        case 0x2f21f4u: goto label_2f21f4;
        case 0x2f21f8u: goto label_2f21f8;
        case 0x2f21fcu: goto label_2f21fc;
        case 0x2f2200u: goto label_2f2200;
        case 0x2f2204u: goto label_2f2204;
        case 0x2f2208u: goto label_2f2208;
        case 0x2f220cu: goto label_2f220c;
        case 0x2f2210u: goto label_2f2210;
        case 0x2f2214u: goto label_2f2214;
        case 0x2f2218u: goto label_2f2218;
        case 0x2f221cu: goto label_2f221c;
        case 0x2f2220u: goto label_2f2220;
        case 0x2f2224u: goto label_2f2224;
        case 0x2f2228u: goto label_2f2228;
        case 0x2f222cu: goto label_2f222c;
        case 0x2f2230u: goto label_2f2230;
        case 0x2f2234u: goto label_2f2234;
        case 0x2f2238u: goto label_2f2238;
        case 0x2f223cu: goto label_2f223c;
        case 0x2f2240u: goto label_2f2240;
        case 0x2f2244u: goto label_2f2244;
        case 0x2f2248u: goto label_2f2248;
        case 0x2f224cu: goto label_2f224c;
        case 0x2f2250u: goto label_2f2250;
        case 0x2f2254u: goto label_2f2254;
        case 0x2f2258u: goto label_2f2258;
        case 0x2f225cu: goto label_2f225c;
        case 0x2f2260u: goto label_2f2260;
        case 0x2f2264u: goto label_2f2264;
        case 0x2f2268u: goto label_2f2268;
        case 0x2f226cu: goto label_2f226c;
        case 0x2f2270u: goto label_2f2270;
        case 0x2f2274u: goto label_2f2274;
        case 0x2f2278u: goto label_2f2278;
        case 0x2f227cu: goto label_2f227c;
        case 0x2f2280u: goto label_2f2280;
        case 0x2f2284u: goto label_2f2284;
        case 0x2f2288u: goto label_2f2288;
        case 0x2f228cu: goto label_2f228c;
        case 0x2f2290u: goto label_2f2290;
        case 0x2f2294u: goto label_2f2294;
        case 0x2f2298u: goto label_2f2298;
        case 0x2f229cu: goto label_2f229c;
        case 0x2f22a0u: goto label_2f22a0;
        case 0x2f22a4u: goto label_2f22a4;
        case 0x2f22a8u: goto label_2f22a8;
        case 0x2f22acu: goto label_2f22ac;
        case 0x2f22b0u: goto label_2f22b0;
        case 0x2f22b4u: goto label_2f22b4;
        case 0x2f22b8u: goto label_2f22b8;
        case 0x2f22bcu: goto label_2f22bc;
        case 0x2f22c0u: goto label_2f22c0;
        case 0x2f22c4u: goto label_2f22c4;
        case 0x2f22c8u: goto label_2f22c8;
        case 0x2f22ccu: goto label_2f22cc;
        case 0x2f22d0u: goto label_2f22d0;
        case 0x2f22d4u: goto label_2f22d4;
        case 0x2f22d8u: goto label_2f22d8;
        case 0x2f22dcu: goto label_2f22dc;
        case 0x2f22e0u: goto label_2f22e0;
        case 0x2f22e4u: goto label_2f22e4;
        case 0x2f22e8u: goto label_2f22e8;
        case 0x2f22ecu: goto label_2f22ec;
        case 0x2f22f0u: goto label_2f22f0;
        case 0x2f22f4u: goto label_2f22f4;
        case 0x2f22f8u: goto label_2f22f8;
        case 0x2f22fcu: goto label_2f22fc;
        case 0x2f2300u: goto label_2f2300;
        case 0x2f2304u: goto label_2f2304;
        case 0x2f2308u: goto label_2f2308;
        case 0x2f230cu: goto label_2f230c;
        case 0x2f2310u: goto label_2f2310;
        case 0x2f2314u: goto label_2f2314;
        case 0x2f2318u: goto label_2f2318;
        case 0x2f231cu: goto label_2f231c;
        case 0x2f2320u: goto label_2f2320;
        case 0x2f2324u: goto label_2f2324;
        case 0x2f2328u: goto label_2f2328;
        case 0x2f232cu: goto label_2f232c;
        case 0x2f2330u: goto label_2f2330;
        case 0x2f2334u: goto label_2f2334;
        case 0x2f2338u: goto label_2f2338;
        case 0x2f233cu: goto label_2f233c;
        case 0x2f2340u: goto label_2f2340;
        case 0x2f2344u: goto label_2f2344;
        case 0x2f2348u: goto label_2f2348;
        case 0x2f234cu: goto label_2f234c;
        case 0x2f2350u: goto label_2f2350;
        case 0x2f2354u: goto label_2f2354;
        case 0x2f2358u: goto label_2f2358;
        case 0x2f235cu: goto label_2f235c;
        case 0x2f2360u: goto label_2f2360;
        case 0x2f2364u: goto label_2f2364;
        case 0x2f2368u: goto label_2f2368;
        case 0x2f236cu: goto label_2f236c;
        case 0x2f2370u: goto label_2f2370;
        case 0x2f2374u: goto label_2f2374;
        case 0x2f2378u: goto label_2f2378;
        case 0x2f237cu: goto label_2f237c;
        case 0x2f2380u: goto label_2f2380;
        case 0x2f2384u: goto label_2f2384;
        case 0x2f2388u: goto label_2f2388;
        case 0x2f238cu: goto label_2f238c;
        case 0x2f2390u: goto label_2f2390;
        case 0x2f2394u: goto label_2f2394;
        case 0x2f2398u: goto label_2f2398;
        case 0x2f239cu: goto label_2f239c;
        case 0x2f23a0u: goto label_2f23a0;
        case 0x2f23a4u: goto label_2f23a4;
        case 0x2f23a8u: goto label_2f23a8;
        case 0x2f23acu: goto label_2f23ac;
        case 0x2f23b0u: goto label_2f23b0;
        case 0x2f23b4u: goto label_2f23b4;
        case 0x2f23b8u: goto label_2f23b8;
        case 0x2f23bcu: goto label_2f23bc;
        case 0x2f23c0u: goto label_2f23c0;
        case 0x2f23c4u: goto label_2f23c4;
        case 0x2f23c8u: goto label_2f23c8;
        case 0x2f23ccu: goto label_2f23cc;
        case 0x2f23d0u: goto label_2f23d0;
        case 0x2f23d4u: goto label_2f23d4;
        case 0x2f23d8u: goto label_2f23d8;
        case 0x2f23dcu: goto label_2f23dc;
        case 0x2f23e0u: goto label_2f23e0;
        case 0x2f23e4u: goto label_2f23e4;
        case 0x2f23e8u: goto label_2f23e8;
        case 0x2f23ecu: goto label_2f23ec;
        case 0x2f23f0u: goto label_2f23f0;
        case 0x2f23f4u: goto label_2f23f4;
        case 0x2f23f8u: goto label_2f23f8;
        case 0x2f23fcu: goto label_2f23fc;
        case 0x2f2400u: goto label_2f2400;
        case 0x2f2404u: goto label_2f2404;
        case 0x2f2408u: goto label_2f2408;
        case 0x2f240cu: goto label_2f240c;
        case 0x2f2410u: goto label_2f2410;
        case 0x2f2414u: goto label_2f2414;
        case 0x2f2418u: goto label_2f2418;
        case 0x2f241cu: goto label_2f241c;
        case 0x2f2420u: goto label_2f2420;
        case 0x2f2424u: goto label_2f2424;
        case 0x2f2428u: goto label_2f2428;
        case 0x2f242cu: goto label_2f242c;
        case 0x2f2430u: goto label_2f2430;
        case 0x2f2434u: goto label_2f2434;
        case 0x2f2438u: goto label_2f2438;
        case 0x2f243cu: goto label_2f243c;
        case 0x2f2440u: goto label_2f2440;
        case 0x2f2444u: goto label_2f2444;
        case 0x2f2448u: goto label_2f2448;
        case 0x2f244cu: goto label_2f244c;
        case 0x2f2450u: goto label_2f2450;
        case 0x2f2454u: goto label_2f2454;
        case 0x2f2458u: goto label_2f2458;
        case 0x2f245cu: goto label_2f245c;
        case 0x2f2460u: goto label_2f2460;
        case 0x2f2464u: goto label_2f2464;
        case 0x2f2468u: goto label_2f2468;
        case 0x2f246cu: goto label_2f246c;
        case 0x2f2470u: goto label_2f2470;
        case 0x2f2474u: goto label_2f2474;
        case 0x2f2478u: goto label_2f2478;
        case 0x2f247cu: goto label_2f247c;
        case 0x2f2480u: goto label_2f2480;
        case 0x2f2484u: goto label_2f2484;
        case 0x2f2488u: goto label_2f2488;
        case 0x2f248cu: goto label_2f248c;
        case 0x2f2490u: goto label_2f2490;
        case 0x2f2494u: goto label_2f2494;
        case 0x2f2498u: goto label_2f2498;
        case 0x2f249cu: goto label_2f249c;
        case 0x2f24a0u: goto label_2f24a0;
        case 0x2f24a4u: goto label_2f24a4;
        case 0x2f24a8u: goto label_2f24a8;
        case 0x2f24acu: goto label_2f24ac;
        default: break;
    }

    ctx->pc = 0x2f1788u;

label_2f1788:
    // 0x2f1788: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2f1788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_2f178c:
    // 0x2f178c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f178cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1790:
    // 0x2f1790: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x2f1790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
label_2f1794:
    // 0x2f1794: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x2f1794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
label_2f1798:
    // 0x2f1798: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f1798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f179c:
    // 0x2f179c: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x2f179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
label_2f17a0:
    // 0x2f17a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f17a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f17a4:
    // 0x2f17a4: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x2f17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
label_2f17a8:
    // 0x2f17a8: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x2f17a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
label_2f17ac:
    // 0x2f17ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f17acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f17b0:
    // 0x2f17b0: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x2f17b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
label_2f17b4:
    // 0x2f17b4: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x2f17b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
label_2f17b8:
    // 0x2f17b8: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x2f17b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_2f17bc:
    // 0x2f17bc: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x2f17bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_2f17c0:
    // 0x2f17c0: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x2f17c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2f17c4:
    // 0x2f17c4: 0x8e6511e4  lw          $a1, 0x11E4($s3)
    ctx->pc = 0x2f17c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
label_2f17c8:
    // 0x2f17c8: 0x10a0030b  beqz        $a1, . + 4 + (0x30B << 2)
label_2f17cc:
    if (ctx->pc == 0x2F17CCu) {
        ctx->pc = 0x2F17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17C8u;
        // 0x2f17cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F17D0u;
        goto label_2f17d0;
    }
    ctx->pc = 0x2F17C8u;
    {
        const bool branch_taken_0x2f17c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17C8u;
        // 0x2f17cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17c8) {
            ctx->pc = 0x2F23F8u;
            goto label_2f23f8;
        }
    }
    ctx->pc = 0x2F17D0u;
label_2f17d0:
    // 0x2f17d0: 0x8e640334  lw          $a0, 0x334($s3)
    ctx->pc = 0x2f17d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2f17d4:
    // 0x2f17d4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2f17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2f17d8:
    // 0x2f17d8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2f17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2f17dc:
    // 0x2f17dc: 0x54430171  bnel        $v0, $v1, . + 4 + (0x171 << 2)
label_2f17e0:
    if (ctx->pc == 0x2F17E0u) {
        ctx->pc = 0x2F17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17DCu;
        // 0x2f17e0: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F17E4u;
        goto label_2f17e4;
    }
    ctx->pc = 0x2F17DCu;
    {
        const bool branch_taken_0x2f17dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f17dc) {
            ctx->pc = 0x2F17E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F17DCu;
            // 0x2f17e0: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1DA4u;
            goto label_2f1da4;
        }
    }
    ctx->pc = 0x2F17E4u;
label_2f17e4:
    // 0x2f17e4: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x2f17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2f17e8:
    // 0x2f17e8: 0x24020790  addiu       $v0, $zero, 0x790
    ctx->pc = 0x2f17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
label_2f17ec:
    // 0x2f17ec: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
label_2f17f0:
    if (ctx->pc == 0x2F17F0u) {
        ctx->pc = 0x2F17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17ECu;
        // 0x2f17f0: 0x28620791  slti        $v0, $v1, 0x791 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1937) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F17F4u;
        goto label_2f17f4;
    }
    ctx->pc = 0x2F17ECu;
    {
        const bool branch_taken_0x2f17ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17ECu;
        // 0x2f17f0: 0x28620791  slti        $v0, $v1, 0x791 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1937) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17ec) {
            ctx->pc = 0x2F1938u;
            goto label_2f1938;
        }
    }
    ctx->pc = 0x2F17F4u;
label_2f17f4:
    // 0x2f17f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f17f8:
    if (ctx->pc == 0x2F17F8u) {
        ctx->pc = 0x2F17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17F4u;
        // 0x2f17f8: 0x24020690  addiu       $v0, $zero, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F17FCu;
        goto label_2f17fc;
    }
    ctx->pc = 0x2F17F4u;
    {
        const bool branch_taken_0x2f17f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17F4u;
        // 0x2f17f8: 0x24020690  addiu       $v0, $zero, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17f4) {
            ctx->pc = 0x2F1818u;
            goto label_2f1818;
        }
    }
    ctx->pc = 0x2F17FCu;
label_2f17fc:
    // 0x2f17fc: 0x24020791  addiu       $v0, $zero, 0x791
    ctx->pc = 0x2f17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1937));
label_2f1800:
    // 0x2f1800: 0x106200a7  beq         $v1, $v0, . + 4 + (0xA7 << 2)
label_2f1804:
    if (ctx->pc == 0x2F1804u) {
        ctx->pc = 0x2F1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1800u;
        // 0x2f1804: 0x28620794  slti        $v0, $v1, 0x794 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1940) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1808u;
        goto label_2f1808;
    }
    ctx->pc = 0x2F1800u;
    {
        const bool branch_taken_0x2f1800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1800u;
        // 0x2f1804: 0x28620794  slti        $v0, $v1, 0x794 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1940) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1800) {
            ctx->pc = 0x2F1AA0u;
            goto label_2f1aa0;
        }
    }
    ctx->pc = 0x2F1808u;
label_2f1808:
    // 0x2f1808: 0x104001fd  beqz        $v0, . + 4 + (0x1FD << 2)
label_2f180c:
    if (ctx->pc == 0x2F180Cu) {
        ctx->pc = 0x2F1810u;
        goto label_2f1810;
    }
    ctx->pc = 0x2F1808u;
    {
        const bool branch_taken_0x2f1808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1808) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1810u;
label_2f1810:
    // 0x2f1810: 0x10000107  b           . + 4 + (0x107 << 2)
label_2f1814:
    if (ctx->pc == 0x2F1814u) {
        ctx->pc = 0x2F1818u;
        goto label_2f1818;
    }
    ctx->pc = 0x2F1810u;
    {
        const bool branch_taken_0x2f1810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1810) {
            ctx->pc = 0x2F1C30u;
            goto label_2f1c30;
        }
    }
    ctx->pc = 0x2F1818u;
label_2f1818:
    // 0x2f1818: 0x1062014b  beq         $v1, $v0, . + 4 + (0x14B << 2)
label_2f181c:
    if (ctx->pc == 0x2F181Cu) {
        ctx->pc = 0x2F181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1818u;
        // 0x2f181c: 0x28620690  slti        $v0, $v1, 0x690 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1680) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1820u;
        goto label_2f1820;
    }
    ctx->pc = 0x2F1818u;
    {
        const bool branch_taken_0x2f1818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1818u;
        // 0x2f181c: 0x28620690  slti        $v0, $v1, 0x690 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1680) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1818) {
            ctx->pc = 0x2F1D48u;
            goto label_2f1d48;
        }
    }
    ctx->pc = 0x2F1820u;
label_2f1820:
    // 0x2f1820: 0x144001f7  bnez        $v0, . + 4 + (0x1F7 << 2)
label_2f1824:
    if (ctx->pc == 0x2F1824u) {
        ctx->pc = 0x2F1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1820u;
        // 0x2f1824: 0x2862078f  slti        $v0, $v1, 0x78F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1935) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1828u;
        goto label_2f1828;
    }
    ctx->pc = 0x2F1820u;
    {
        const bool branch_taken_0x2f1820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1820u;
        // 0x2f1824: 0x2862078f  slti        $v0, $v1, 0x78F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1935) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1820) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1828u;
label_2f1828:
    // 0x2f1828: 0x104001f5  beqz        $v0, . + 4 + (0x1F5 << 2)
label_2f182c:
    if (ctx->pc == 0x2F182Cu) {
        ctx->pc = 0x2F182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1828u;
        // 0x2f182c: 0x2862078b  slti        $v0, $v1, 0x78B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1931) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1830u;
        goto label_2f1830;
    }
    ctx->pc = 0x2F1828u;
    {
        const bool branch_taken_0x2f1828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1828u;
        // 0x2f182c: 0x2862078b  slti        $v0, $v1, 0x78B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1931) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1828) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1830u;
label_2f1830:
    // 0x2f1830: 0x144001f3  bnez        $v0, . + 4 + (0x1F3 << 2)
label_2f1834:
    if (ctx->pc == 0x2F1834u) {
        ctx->pc = 0x2F1838u;
        goto label_2f1838;
    }
    ctx->pc = 0x2F1830u;
    {
        const bool branch_taken_0x2f1830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1830) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1838u;
label_2f1838:
    // 0x2f1838: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f1838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f183c:
    // 0x2f183c: 0x6a62024b  ldl         $v0, 0x24B($s3)
    ctx->pc = 0x2f183cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2f1840:
    // 0x2f1840: 0x6e620244  ldr         $v0, 0x244($s3)
    ctx->pc = 0x2f1840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2f1844:
    // 0x2f1844: 0x6a630253  ldl         $v1, 0x253($s3)
    ctx->pc = 0x2f1844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2f1848:
    // 0x2f1848: 0x6e63024c  ldr         $v1, 0x24C($s3)
    ctx->pc = 0x2f1848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2f184c:
    // 0x2f184c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2f184cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1850:
    // 0x2f1850: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2f1850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1854:
    // 0x2f1854: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2f1854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1858:
    // 0x2f1858: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2f1858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f185c:
    // 0x2f185c: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x2f185cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2f1860:
    // 0x2f1860: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x2f1860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2f1864:
    // 0x2f1864: 0x6ba2000f  ldl         $v0, 0xF($sp)
    ctx->pc = 0x2f1864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2f1868:
    // 0x2f1868: 0x6fa20008  ldr         $v0, 0x8($sp)
    ctx->pc = 0x2f1868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2f186c:
    // 0x2f186c: 0xb246024b  sdl         $a2, 0x24B($s2)
    ctx->pc = 0x2f186cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1870:
    // 0x2f1870: 0xb6460244  sdr         $a2, 0x244($s2)
    ctx->pc = 0x2f1870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1874:
    // 0x2f1874: 0xb2420253  sdl         $v0, 0x253($s2)
    ctx->pc = 0x2f1874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1878:
    // 0x2f1878: 0xb642024c  sdr         $v0, 0x24C($s2)
    ctx->pc = 0x2f1878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f187c:
    // 0x2f187c: 0xc089650  jal         func_225940
label_2f1880:
    if (ctx->pc == 0x2F1880u) {
        ctx->pc = 0x2F1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F187Cu;
        // 0x2f1880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1884u;
        goto label_2f1884;
    }
    ctx->pc = 0x2F187Cu;
    SET_GPR_U32(ctx, 31, 0x2F1884u);
    ctx->pc = 0x2F1880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F187Cu;
    // 0x2f1880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225940u, 0x2F187Cu, 0x2F1884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1884u;
label_2f1884:
    // 0x2f1884: 0x120001de  beqz        $s0, . + 4 + (0x1DE << 2)
label_2f1888:
    if (ctx->pc == 0x2F1888u) {
        ctx->pc = 0x2F1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1884u;
        // 0x2f1888: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F188Cu;
        goto label_2f188c;
    }
    ctx->pc = 0x2F1884u;
    {
        const bool branch_taken_0x2f1884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1884u;
        // 0x2f1888: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1884) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F188Cu;
label_2f188c:
    // 0x2f188c: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2f188cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1890:
    // 0x2f1890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1894:
    // 0x2f1894: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2f1894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1898:
    // 0x2f1898: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f1898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f189c:
    // 0x2f189c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2f189cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f18a0:
    // 0x2f18a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f18a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f18a4:
    // 0x2f18a4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2f18a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f18a8:
    // 0x2f18a8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f18a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f18ac:
    // 0x2f18ac: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2f18acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f18b0:
    // 0x2f18b0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f18b4:
    // 0x2f18b4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2f18b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f18b8:
    // 0x2f18b8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f18b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f18bc:
    // 0x2f18bc: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f18c0:
    // 0x2f18c0: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x2f18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2f18c4:
    // 0x2f18c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f18c8:
    // 0x2f18c8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f18c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f18cc:
    // 0x2f18cc: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x2f18ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f18d0:
    // 0x2f18d0: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x2f18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_2f18d4:
    // 0x2f18d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f18d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f18d8:
    // 0x2f18d8: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x2f18d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f18dc:
    // 0x2f18dc: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x2f18dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_2f18e0:
    // 0x2f18e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f18e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f18e4:
    // 0x2f18e4: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x2f18e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f18e8:
    // 0x2f18e8: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2f18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_2f18ec:
    // 0x2f18ec: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f18ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f18f0:
    // 0x2f18f0: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x2f18f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f18f4:
    // 0x2f18f4: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f18f8:
    // 0x2f18f8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2f18f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_2f18fc:
    // 0x2f18fc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2f18fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_2f1900:
    // 0x2f1900: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f1900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f1904:
    // 0x2f1904: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x2f1904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
label_2f1908:
    // 0x2f1908: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f1908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f190c:
    // 0x2f190c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f190cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1910:
    // 0x2f1910: 0xc0b15e8  jal         func_2C57A0
label_2f1914:
    if (ctx->pc == 0x2F1914u) {
        ctx->pc = 0x2F1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1910u;
        // 0x2f1914: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1918u;
        goto label_2f1918;
    }
    ctx->pc = 0x2F1910u;
    SET_GPR_U32(ctx, 31, 0x2F1918u);
    ctx->pc = 0x2F1914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1910u;
    // 0x2f1914: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x2F1910u, 0x2F1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1918u;
label_2f1918:
    // 0x2f1918: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2f1918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2f191c:
    // 0x2f191c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1920:
    // 0x2f1920: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f1920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f1924:
    // 0x2f1924: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x2f1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_2f1928:
    // 0x2f1928: 0x40f809  jalr        $v0
label_2f192c:
    if (ctx->pc == 0x2F192Cu) {
        ctx->pc = 0x2F192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1928u;
        // 0x2f192c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1930u;
        goto label_2f1930;
    }
    ctx->pc = 0x2F1928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1930u);
        ctx->pc = 0x2F192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1928u;
        // 0x2f192c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1928u, 0x2F1930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1930u;
label_2f1930:
    // 0x2f1930: 0x100001b3  b           . + 4 + (0x1B3 << 2)
label_2f1934:
    if (ctx->pc == 0x2F1934u) {
        ctx->pc = 0x2F1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1930u;
        // 0x2f1934: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1938u;
        goto label_2f1938;
    }
    ctx->pc = 0x2F1930u;
    {
        const bool branch_taken_0x2f1930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1930u;
        // 0x2f1934: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1930) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1938u;
label_2f1938:
    // 0x2f1938: 0x6a66024b  ldl         $a2, 0x24B($s3)
    ctx->pc = 0x2f1938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2f193c:
    // 0x2f193c: 0x6e660244  ldr         $a2, 0x244($s3)
    ctx->pc = 0x2f193cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2f1940:
    // 0x2f1940: 0x6a620253  ldl         $v0, 0x253($s3)
    ctx->pc = 0x2f1940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2f1944:
    // 0x2f1944: 0x6e62024c  ldr         $v0, 0x24C($s3)
    ctx->pc = 0x2f1944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2f1948:
    // 0x2f1948: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2f1948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f194c:
    // 0x2f194c: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2f194cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1950:
    // 0x2f1950: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2f1950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1954:
    // 0x2f1954: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2f1954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1958:
    // 0x2f1958: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f1958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f195c:
    // 0x2f195c: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x2f195cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2f1960:
    // 0x2f1960: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x2f1960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2f1964:
    // 0x2f1964: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x2f1964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2f1968:
    // 0x2f1968: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x2f1968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2f196c:
    // 0x2f196c: 0xb245024b  sdl         $a1, 0x24B($s2)
    ctx->pc = 0x2f196cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1970:
    // 0x2f1970: 0xb6450244  sdr         $a1, 0x244($s2)
    ctx->pc = 0x2f1970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1974:
    // 0x2f1974: 0xb2460253  sdl         $a2, 0x253($s2)
    ctx->pc = 0x2f1974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1978:
    // 0x2f1978: 0xb646024c  sdr         $a2, 0x24C($s2)
    ctx->pc = 0x2f1978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f197c:
    // 0x2f197c: 0xc089650  jal         func_225940
label_2f1980:
    if (ctx->pc == 0x2F1980u) {
        ctx->pc = 0x2F1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F197Cu;
        // 0x2f1980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1984u;
        goto label_2f1984;
    }
    ctx->pc = 0x2F197Cu;
    SET_GPR_U32(ctx, 31, 0x2F1984u);
    ctx->pc = 0x2F1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F197Cu;
    // 0x2f1980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225940u, 0x2F197Cu, 0x2F1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1984u;
label_2f1984:
    // 0x2f1984: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x2f1984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1988:
    // 0x2f1988: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f1988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f198c:
    // 0x2f198c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f198cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1990:
    // 0x2f1990: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f1990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1994:
    // 0x2f1994: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2f1994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2f1998:
    // 0x2f1998: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f199c:
    // 0x2f199c: 0xf8a10040  sqc2        $vf1, 0x40($a1)
    ctx->pc = 0x2f199cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f19a0:
    // 0x2f19a0: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2f19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2f19a4:
    // 0x2f19a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f19a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f19a8:
    // 0x2f19a8: 0xf8a10050  sqc2        $vf1, 0x50($a1)
    ctx->pc = 0x2f19a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f19ac:
    // 0x2f19ac: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2f19acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2f19b0:
    // 0x2f19b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f19b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f19b4:
    // 0x2f19b4: 0xf8a10060  sqc2        $vf1, 0x60($a1)
    ctx->pc = 0x2f19b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f19b8:
    // 0x2f19b8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2f19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2f19bc:
    // 0x2f19bc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f19bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f19c0:
    // 0x2f19c0: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x2f19c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f19c4:
    // 0x2f19c4: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f19c8:
    // 0x2f19c8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2f19c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_2f19cc:
    // 0x2f19cc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2f19ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_2f19d0:
    // 0x2f19d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f19d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f19d4:
    // 0x2f19d4: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x2f19d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
label_2f19d8:
    // 0x2f19d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f19d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f19dc:
    // 0x2f19dc: 0xc0b15e8  jal         func_2C57A0
label_2f19e0:
    if (ctx->pc == 0x2F19E0u) {
        ctx->pc = 0x2F19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19DCu;
        // 0x2f19e0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F19E4u;
        goto label_2f19e4;
    }
    ctx->pc = 0x2F19DCu;
    SET_GPR_U32(ctx, 31, 0x2F19E4u);
    ctx->pc = 0x2F19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19DCu;
    // 0x2f19e0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x2F19DCu, 0x2F19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19E4u;
label_2f19e4:
    // 0x2f19e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f19e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f19e8:
    // 0x2f19e8: 0xc08a1f2  jal         func_2287C8
label_2f19ec:
    if (ctx->pc == 0x2F19ECu) {
        ctx->pc = 0x2F19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19E8u;
        // 0x2f19ec: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F19F0u;
        goto label_2f19f0;
    }
    ctx->pc = 0x2F19E8u;
    SET_GPR_U32(ctx, 31, 0x2F19F0u);
    ctx->pc = 0x2F19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19E8u;
    // 0x2f19ec: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2F19E8u, 0x2F19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19F0u;
label_2f19f0:
    // 0x2f19f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f19f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f19f4:
    // 0x2f19f4: 0xc0f70ce  jal         func_3DC338
label_2f19f8:
    if (ctx->pc == 0x2F19F8u) {
        ctx->pc = 0x2F19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19F4u;
        // 0x2f19f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F19FCu;
        goto label_2f19fc;
    }
    ctx->pc = 0x2F19F4u;
    SET_GPR_U32(ctx, 31, 0x2F19FCu);
    ctx->pc = 0x2F19F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19F4u;
    // 0x2f19f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2F19F4u, 0x2F19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19FCu;
label_2f19fc:
    // 0x2f19fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f1a00:
    if (ctx->pc == 0x2F1A00u) {
        ctx->pc = 0x2F1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19FCu;
        // 0x2f1a00: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A04u;
        goto label_2f1a04;
    }
    ctx->pc = 0x2F19FCu;
    {
        const bool branch_taken_0x2f19fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f19fc) {
            ctx->pc = 0x2F1A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F19FCu;
            // 0x2f1a00: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1A10u;
            goto label_2f1a10;
        }
    }
    ctx->pc = 0x2F1A04u;
label_2f1a04:
    // 0x2f1a04: 0xc0c4900  jal         func_312400
label_2f1a08:
    if (ctx->pc == 0x2F1A08u) {
        ctx->pc = 0x2F1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A04u;
        // 0x2f1a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A0Cu;
        goto label_2f1a0c;
    }
    ctx->pc = 0x2F1A04u;
    SET_GPR_U32(ctx, 31, 0x2F1A0Cu);
    ctx->pc = 0x2F1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A04u;
    // 0x2f1a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2F1A04u, 0x2F1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A0Cu;
label_2f1a0c:
    // 0x2f1a0c: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x2f1a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1a10:
    // 0x2f1a10: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2f1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2f1a14:
    // 0x2f1a14: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2f1a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f1a18:
    // 0x2f1a18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f1a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1a1c:
    // 0x2f1a1c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2f1a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f1a20:
    // 0x2f1a20: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f1a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1a24:
    // 0x2f1a24: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2f1a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f1a28:
    // 0x2f1a28: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f1a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1a2c:
    // 0x2f1a2c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2f1a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f1a30:
    // 0x2f1a30: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1a34:
    // 0x2f1a34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1a38:
    // 0x2f1a38: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f1a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1a3c:
    // 0x2f1a3c: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x2f1a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1a40:
    // 0x2f1a40: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x2f1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1a44:
    // 0x2f1a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1a48:
    // 0x2f1a48: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x2f1a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1a4c:
    // 0x2f1a4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f1a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1a50:
    // 0x2f1a50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1a54:
    // 0x2f1a54: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f1a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1a58:
    // 0x2f1a58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f1a5c:
    // 0x2f1a5c: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x2f1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1a60:
    // 0x2f1a60: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2f1a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_2f1a64:
    // 0x2f1a64: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1a68:
    // 0x2f1a68: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x2f1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2f1a6c:
    // 0x2f1a6c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f1a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1a70:
    // 0x2f1a70: 0x8c4701c0  lw          $a3, 0x1C0($v0)
    ctx->pc = 0x2f1a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
label_2f1a74:
    // 0x2f1a74: 0xe0f809  jalr        $a3
label_2f1a78:
    if (ctx->pc == 0x2F1A78u) {
        ctx->pc = 0x2F1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A74u;
        // 0x2f1a78: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A7Cu;
        goto label_2f1a7c;
    }
    ctx->pc = 0x2F1A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2F1A7Cu);
        ctx->pc = 0x2F1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A74u;
        // 0x2f1a78: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1A74u, 0x2F1A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1A7Cu;
label_2f1a7c:
    // 0x2f1a7c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2f1a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2f1a80:
    // 0x2f1a80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f1a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1a84:
    // 0x2f1a84: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2f1a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2f1a88:
    // 0x2f1a88: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2f1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_2f1a8c:
    // 0x2f1a8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f1a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1a90:
    // 0x2f1a90: 0xc046642  jal         func_119908
label_2f1a94:
    if (ctx->pc == 0x2F1A94u) {
        ctx->pc = 0x2F1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A90u;
        // 0x2f1a94: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1A98u;
        goto label_2f1a98;
    }
    ctx->pc = 0x2F1A90u;
    SET_GPR_U32(ctx, 31, 0x2F1A98u);
    ctx->pc = 0x2F1A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A90u;
    // 0x2f1a94: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2F1A90u, 0x2F1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A98u;
label_2f1a98:
    // 0x2f1a98: 0x10000159  b           . + 4 + (0x159 << 2)
label_2f1a9c:
    if (ctx->pc == 0x2F1A9Cu) {
        ctx->pc = 0x2F1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A98u;
        // 0x2f1a9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1AA0u;
        goto label_2f1aa0;
    }
    ctx->pc = 0x2F1A98u;
    {
        const bool branch_taken_0x2f1a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A98u;
        // 0x2f1a9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a98) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1AA0u;
label_2f1aa0:
    // 0x2f1aa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f1aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f1aa4:
    // 0x2f1aa4: 0x6a64024b  ldl         $a0, 0x24B($s3)
    ctx->pc = 0x2f1aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2f1aa8:
    // 0x2f1aa8: 0x6e640244  ldr         $a0, 0x244($s3)
    ctx->pc = 0x2f1aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2f1aac:
    // 0x2f1aac: 0x6a650253  ldl         $a1, 0x253($s3)
    ctx->pc = 0x2f1aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2f1ab0:
    // 0x2f1ab0: 0x6e65024c  ldr         $a1, 0x24C($s3)
    ctx->pc = 0x2f1ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2f1ab4:
    // 0x2f1ab4: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x2f1ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1ab8:
    // 0x2f1ab8: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x2f1ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1abc:
    // 0x2f1abc: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x2f1abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1ac0:
    // 0x2f1ac0: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x2f1ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1ac4:
    // 0x2f1ac4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2f1ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2f1ac8:
    // 0x2f1ac8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2f1ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2f1acc:
    // 0x2f1acc: 0x6ba5000f  ldl         $a1, 0xF($sp)
    ctx->pc = 0x2f1accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2f1ad0:
    // 0x2f1ad0: 0x6fa50008  ldr         $a1, 0x8($sp)
    ctx->pc = 0x2f1ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2f1ad4:
    // 0x2f1ad4: 0xb243024b  sdl         $v1, 0x24B($s2)
    ctx->pc = 0x2f1ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1ad8:
    // 0x2f1ad8: 0xb6430244  sdr         $v1, 0x244($s2)
    ctx->pc = 0x2f1ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1adc:
    // 0x2f1adc: 0xb2450253  sdl         $a1, 0x253($s2)
    ctx->pc = 0x2f1adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1ae0:
    // 0x2f1ae0: 0xb645024c  sdr         $a1, 0x24C($s2)
    ctx->pc = 0x2f1ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1ae4:
    // 0x2f1ae4: 0xc089650  jal         func_225940
label_2f1ae8:
    if (ctx->pc == 0x2F1AE8u) {
        ctx->pc = 0x2F1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AE4u;
        // 0x2f1ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1AECu;
        goto label_2f1aec;
    }
    ctx->pc = 0x2F1AE4u;
    SET_GPR_U32(ctx, 31, 0x2F1AECu);
    ctx->pc = 0x2F1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AE4u;
    // 0x2f1ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225940u, 0x2F1AE4u, 0x2F1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AECu;
label_2f1aec:
    // 0x2f1aec: 0x3c01be62  lui         $at, 0xBE62
    ctx->pc = 0x2f1aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48738 << 16));
label_2f1af0:
    // 0x2f1af0: 0x34214dd3  ori         $at, $at, 0x4DD3
    ctx->pc = 0x2f1af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19923);
label_2f1af4:
    // 0x2f1af4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1af8:
    // 0x2f1af8: 0x3c013ea9  lui         $at, 0x3EA9
    ctx->pc = 0x2f1af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16041 << 16));
label_2f1afc:
    // 0x2f1afc: 0x3421fbe7  ori         $at, $at, 0xFBE7
    ctx->pc = 0x2f1afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64487);
label_2f1b00:
    // 0x2f1b00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f1b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f1b04:
    // 0x2f1b04: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f1b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f1b08:
    // 0x2f1b08: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2f1b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f1b0c:
    // 0x2f1b0c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2f1b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2f1b10:
    // 0x2f1b10: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2f1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2f1b14:
    // 0x2f1b14: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x2f1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1b18:
    // 0x2f1b18: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1b1c:
    // 0x2f1b1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f1b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1b20:
    // 0x2f1b20: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f1b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1b24:
    // 0x2f1b24: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2f1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2f1b28:
    // 0x2f1b28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1b2c:
    // 0x2f1b2c: 0xf8a10040  sqc2        $vf1, 0x40($a1)
    ctx->pc = 0x2f1b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1b30:
    // 0x2f1b30: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2f1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2f1b34:
    // 0x2f1b34: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f1b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1b38:
    // 0x2f1b38: 0xf8a10050  sqc2        $vf1, 0x50($a1)
    ctx->pc = 0x2f1b38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1b3c:
    // 0x2f1b3c: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2f1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2f1b40:
    // 0x2f1b40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1b44:
    // 0x2f1b44: 0xf8a10060  sqc2        $vf1, 0x60($a1)
    ctx->pc = 0x2f1b44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1b48:
    // 0x2f1b48: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2f1b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2f1b4c:
    // 0x2f1b4c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f1b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1b50:
    // 0x2f1b50: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x2f1b50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1b54:
    // 0x2f1b54: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2f1b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1b58:
    // 0x2f1b58: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2f1b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1b5c:
    // 0x2f1b5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1b60:
    // 0x2f1b60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2f1b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1b64:
    // 0x2f1b64: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2f1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2f1b68:
    // 0x2f1b68: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f1b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1b6c:
    // 0x2f1b6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f1b6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1b70:
    // 0x2f1b70: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2f1b70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2f1b74:
    // 0x2f1b74: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2f1b74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2f1b78:
    // 0x2f1b78: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2f1b78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2f1b7c:
    // 0x2f1b7c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2f1b7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f1b80:
    // 0x2f1b80: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2f1b80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f1b84:
    // 0x2f1b84: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2f1b84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2f1b88:
    // 0x2f1b88: 0xf8a50070  sqc2        $vf5, 0x70($a1)
    ctx->pc = 0x2f1b88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[5]));
label_2f1b8c:
    // 0x2f1b8c: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1b90:
    // 0x2f1b90: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x2f1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1b94:
    // 0x2f1b94: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f1b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1b98:
    // 0x2f1b98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1b9c:
    // 0x2f1b9c: 0x24c50070  addiu       $a1, $a2, 0x70
    ctx->pc = 0x2f1b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_2f1ba0:
    // 0x2f1ba0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f1ba4:
    // 0x2f1ba4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f1ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f1ba8:
    // 0x2f1ba8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f1ba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1bac:
    // 0x2f1bac: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f1bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f1bb0:
    // 0x2f1bb0: 0xf8c10070  sqc2        $vf1, 0x70($a2)
    ctx->pc = 0x2f1bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1bb4:
    // 0x2f1bb4: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x2f1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2f1bb8:
    // 0x2f1bb8: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2f1bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_2f1bbc:
    // 0x2f1bbc: 0xc0767f2  jal         func_1D9FC8
label_2f1bc0:
    if (ctx->pc == 0x2F1BC0u) {
        ctx->pc = 0x2F1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BBCu;
        // 0x2f1bc0: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BC4u;
        goto label_2f1bc4;
    }
    ctx->pc = 0x2F1BBCu;
    SET_GPR_U32(ctx, 31, 0x2F1BC4u);
    ctx->pc = 0x2F1BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BBCu;
    // 0x2f1bc0: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2F1BBCu, 0x2F1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BC4u;
label_2f1bc4:
    // 0x2f1bc4: 0xc076de4  jal         func_1DB790
label_2f1bc8:
    if (ctx->pc == 0x2F1BC8u) {
        ctx->pc = 0x2F1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BC4u;
        // 0x2f1bc8: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BCCu;
        goto label_2f1bcc;
    }
    ctx->pc = 0x2F1BC4u;
    SET_GPR_U32(ctx, 31, 0x2F1BCCu);
    ctx->pc = 0x2F1BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BC4u;
    // 0x2f1bc8: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x2F1BC4u, 0x2F1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BCCu;
label_2f1bcc:
    // 0x2f1bcc: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x2f1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2f1bd0:
    // 0x2f1bd0: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x2f1bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_2f1bd4:
    // 0x2f1bd4: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x2f1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_2f1bd8:
    // 0x2f1bd8: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2f1bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_2f1bdc:
    // 0x2f1bdc: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x2f1bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_2f1be0:
    // 0x2f1be0: 0xc07682a  jal         func_1DA0A8
label_2f1be4:
    if (ctx->pc == 0x2F1BE4u) {
        ctx->pc = 0x2F1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BE0u;
        // 0x2f1be4: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1BE8u;
        goto label_2f1be8;
    }
    ctx->pc = 0x2F1BE0u;
    SET_GPR_U32(ctx, 31, 0x2F1BE8u);
    ctx->pc = 0x2F1BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BE0u;
    // 0x2f1be4: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x2F1BE0u, 0x2F1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BE8u;
label_2f1be8:
    // 0x2f1be8: 0xae400fd0  sw          $zero, 0xFD0($s2)
    ctx->pc = 0x2f1be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4048), GPR_U32(ctx, 0));
label_2f1bec:
    // 0x2f1bec: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2f1becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f1bf0:
    // 0x2f1bf0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f1bf4:
    // 0x2f1bf4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f1bf8:
    // 0x2f1bf8: 0x40f809  jalr        $v0
label_2f1bfc:
    if (ctx->pc == 0x2F1BFCu) {
        ctx->pc = 0x2F1C00u;
        goto label_2f1c00;
    }
    ctx->pc = 0x2F1BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1C00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1BF8u, 0x2F1C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1C00u;
label_2f1c00:
    // 0x2f1c00: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2f1c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f1c04:
    // 0x2f1c04: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f1c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f1c08:
    // 0x2f1c08: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2f1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2f1c0c:
    // 0x2f1c0c: 0x40f809  jalr        $v0
label_2f1c10:
    if (ctx->pc == 0x2F1C10u) {
        ctx->pc = 0x2F1C14u;
        goto label_2f1c14;
    }
    ctx->pc = 0x2F1C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1C14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1C0Cu, 0x2F1C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1C14u;
label_2f1c14:
    // 0x2f1c14: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2f1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f1c18:
    // 0x2f1c18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f1c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1c1c:
    // 0x2f1c1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f1c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1c20:
    // 0x2f1c20: 0xa06001a4  sb          $zero, 0x1A4($v1)
    ctx->pc = 0x2f1c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 420), (uint8_t)GPR_U32(ctx, 0));
label_2f1c24:
    // 0x2f1c24: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x2f1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f1c28:
    // 0x2f1c28: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_2f1c2c:
    if (ctx->pc == 0x2F1C2Cu) {
        ctx->pc = 0x2F1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C28u;
        // 0x2f1c2c: 0xa04401a5  sb          $a0, 0x1A5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 421), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C30u;
        goto label_2f1c30;
    }
    ctx->pc = 0x2F1C28u;
    {
        const bool branch_taken_0x2f1c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C28u;
        // 0x2f1c2c: 0xa04401a5  sb          $a0, 0x1A5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 421), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1c28) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1C30u;
label_2f1c30:
    // 0x2f1c30: 0xc0b1488  jal         func_2C5220
label_2f1c34:
    if (ctx->pc == 0x2F1C34u) {
        ctx->pc = 0x2F1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C30u;
        // 0x2f1c34: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1C38u;
        goto label_2f1c38;
    }
    ctx->pc = 0x2F1C30u;
    SET_GPR_U32(ctx, 31, 0x2F1C38u);
    ctx->pc = 0x2F1C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C30u;
    // 0x2f1c34: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2F1C30u, 0x2F1C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C38u;
label_2f1c38:
    // 0x2f1c38: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2f1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2f1c3c:
    // 0x2f1c3c: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x2f1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_2f1c40:
    // 0x2f1c40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1c44:
    // 0x2f1c44: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f1c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1c48:
    // 0x2f1c48: 0x8e6411e4  lw          $a0, 0x11E4($s3)
    ctx->pc = 0x2f1c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
label_2f1c4c:
    // 0x2f1c4c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f1c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f1c50:
    // 0x2f1c50: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x2f1c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2f1c54:
    // 0x2f1c54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1c58:
    // 0x2f1c58: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2f1c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2f1c5c:
    // 0x2f1c5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1c60:
    // 0x2f1c60: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f1c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1c64:
    // 0x2f1c64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f1c68:
    // 0x2f1c68: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f1c68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1c6c:
    // 0x2f1c6c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f1c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f1c70:
    // 0x2f1c70: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f1c70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f1c74:
    // 0x2f1c74: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f1c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f1c78:
    // 0x2f1c78: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f1c78u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f1c7c:
    // 0x2f1c7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f1c7cu;
    // VWAITQ (Q already resolved in this runtime)
label_2f1c80:
    // 0x2f1c80: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f1c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f1c84:
    // 0x2f1c84: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f1c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1c88:
    // 0x2f1c88: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x2f1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2f1c8c:
    // 0x2f1c8c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f1c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f1c90:
    // 0x2f1c90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1c94:
    // 0x2f1c94: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2f1c98:
    // 0x2f1c98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1c98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1c9c:
    // 0x2f1c9c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f1c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1ca0:
    // 0x2f1ca0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f1ca4:
    // 0x2f1ca4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f1ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f1ca8:
    // 0x2f1ca8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f1ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f1cac:
    // 0x2f1cac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f1cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f1cb0:
    // 0x2f1cb0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f1cb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f1cb4:
    // 0x2f1cb4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f1cb4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f1cb8:
    // 0x2f1cb8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f1cb8u;
    // VWAITQ (Q already resolved in this runtime)
label_2f1cbc:
    // 0x2f1cbc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f1cbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f1cc0:
    // 0x2f1cc0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f1cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1cc4:
    // 0x2f1cc4: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x2f1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2f1cc8:
    // 0x2f1cc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1ccc:
    // 0x2f1ccc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f1cd0:
    // 0x2f1cd0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1cd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1cd4:
    // 0x2f1cd4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f1cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1cd8:
    // 0x2f1cd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f1cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1cdc:
    // 0x2f1cdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ce0:
    // 0x2f1ce0: 0xc084cba  jal         func_2132E8
label_2f1ce4:
    if (ctx->pc == 0x2F1CE4u) {
        ctx->pc = 0x2F1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CE0u;
        // 0x2f1ce4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1CE8u;
        goto label_2f1ce8;
    }
    ctx->pc = 0x2F1CE0u;
    SET_GPR_U32(ctx, 31, 0x2F1CE8u);
    ctx->pc = 0x2F1CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CE0u;
    // 0x2f1ce4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132E8u, 0x2F1CE0u, 0x2F1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1CE8u;
label_2f1ce8:
    // 0x2f1ce8: 0x8e6411e4  lw          $a0, 0x11E4($s3)
    ctx->pc = 0x2f1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
label_2f1cec:
    // 0x2f1cec: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2f1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2f1cf0:
    // 0x2f1cf0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2f1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2f1cf4:
    // 0x2f1cf4: 0x40f809  jalr        $v0
label_2f1cf8:
    if (ctx->pc == 0x2F1CF8u) {
        ctx->pc = 0x2F1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CF4u;
        // 0x2f1cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1CFCu;
        goto label_2f1cfc;
    }
    ctx->pc = 0x2F1CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1CFCu);
        ctx->pc = 0x2F1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CF4u;
        // 0x2f1cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1CF4u, 0x2F1CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1CFCu;
label_2f1cfc:
    // 0x2f1cfc: 0xc083bc0  jal         func_20EF00
label_2f1d00:
    if (ctx->pc == 0x2F1D00u) {
        ctx->pc = 0x2F1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CFCu;
        // 0x2f1d00: 0x8e6411e4  lw          $a0, 0x11E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D04u;
        goto label_2f1d04;
    }
    ctx->pc = 0x2F1CFCu;
    SET_GPR_U32(ctx, 31, 0x2F1D04u);
    ctx->pc = 0x2F1D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CFCu;
    // 0x2f1d00: 0x8e6411e4  lw          $a0, 0x11E4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2F1CFCu, 0x2F1D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D04u;
label_2f1d04:
    // 0x2f1d04: 0x8e640ffc  lw          $a0, 0xFFC($s3)
    ctx->pc = 0x2f1d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4092)));
label_2f1d08:
    // 0x2f1d08: 0xc071e1a  jal         func_1C7868
label_2f1d0c:
    if (ctx->pc == 0x2F1D0Cu) {
        ctx->pc = 0x2F1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D08u;
        // 0x2f1d0c: 0x8e6511e4  lw          $a1, 0x11E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D10u;
        goto label_2f1d10;
    }
    ctx->pc = 0x2F1D08u;
    SET_GPR_U32(ctx, 31, 0x2F1D10u);
    ctx->pc = 0x2F1D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D08u;
    // 0x2f1d0c: 0x8e6511e4  lw          $a1, 0x11E4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7868u, 0x2F1D08u, 0x2F1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D10u;
label_2f1d10:
    // 0x2f1d10: 0x8e6311c0  lw          $v1, 0x11C0($s3)
    ctx->pc = 0x2f1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4544)));
label_2f1d14:
    // 0x2f1d14: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x2f1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_2f1d18:
    // 0x2f1d18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f1d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f1d1c:
    // 0x2f1d1c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2f1d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2f1d20:
    // 0x2f1d20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f1d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f1d24:
    // 0x2f1d24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f1d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d28:
    // 0x2f1d28: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2f1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_2f1d2c:
    // 0x2f1d2c: 0xae6311c0  sw          $v1, 0x11C0($s3)
    ctx->pc = 0x2f1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4544), GPR_U32(ctx, 3));
label_2f1d30:
    // 0x2f1d30: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2f1d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2f1d34:
    // 0x2f1d34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f1d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1d38:
    // 0x2f1d38: 0xc046642  jal         func_119908
label_2f1d3c:
    if (ctx->pc == 0x2F1D3Cu) {
        ctx->pc = 0x2F1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D38u;
        // 0x2f1d3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D40u;
        goto label_2f1d40;
    }
    ctx->pc = 0x2F1D38u;
    SET_GPR_U32(ctx, 31, 0x2F1D40u);
    ctx->pc = 0x2F1D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D38u;
    // 0x2f1d3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2F1D38u, 0x2F1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D40u;
label_2f1d40:
    // 0x2f1d40: 0x100000af  b           . + 4 + (0xAF << 2)
label_2f1d44:
    if (ctx->pc == 0x2F1D44u) {
        ctx->pc = 0x2F1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D40u;
        // 0x2f1d44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D48u;
        goto label_2f1d48;
    }
    ctx->pc = 0x2F1D40u;
    {
        const bool branch_taken_0x2f1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D40u;
        // 0x2f1d44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d40) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1D48u;
label_2f1d48:
    // 0x2f1d48: 0x8ca60104  lw          $a2, 0x104($a1)
    ctx->pc = 0x2f1d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_2f1d4c:
    // 0x2f1d4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f1d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d50:
    // 0x2f1d50: 0x8ca20218  lw          $v0, 0x218($a1)
    ctx->pc = 0x2f1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 536)));
label_2f1d54:
    // 0x2f1d54: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2f1d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f1d58:
    // 0x2f1d58: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2f1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2f1d5c:
    // 0x2f1d5c: 0x60f809  jalr        $v1
label_2f1d60:
    if (ctx->pc == 0x2F1D60u) {
        ctx->pc = 0x2F1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D5Cu;
        // 0x2f1d60: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1D64u;
        goto label_2f1d64;
    }
    ctx->pc = 0x2F1D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F1D64u);
        ctx->pc = 0x2F1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D5Cu;
        // 0x2f1d60: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D5Cu, 0x2F1D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1D64u;
label_2f1d64:
    // 0x2f1d64: 0x8e6411e4  lw          $a0, 0x11E4($s3)
    ctx->pc = 0x2f1d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
label_2f1d68:
    // 0x2f1d68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f1d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1d6c:
    // 0x2f1d6c: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x2f1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_2f1d70:
    // 0x2f1d70: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x2f1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_2f1d74:
    // 0x2f1d74: 0x8e6311e4  lw          $v1, 0x11E4($s3)
    ctx->pc = 0x2f1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
label_2f1d78:
    // 0x2f1d78: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x2f1d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2f1d7c:
    // 0x2f1d7c: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x2f1d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_2f1d80:
    // 0x2f1d80: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f1d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2f1d84:
    // 0x2f1d84: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x2f1d84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_2f1d88:
    // 0x2f1d88: 0x8e6411e4  lw          $a0, 0x11E4($s3)
    ctx->pc = 0x2f1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4580)));
label_2f1d8c:
    // 0x2f1d8c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2f1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2f1d90:
    // 0x2f1d90: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2f1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2f1d94:
    // 0x2f1d94: 0x40f809  jalr        $v0
label_2f1d98:
    if (ctx->pc == 0x2F1D98u) {
        ctx->pc = 0x2F1D9Cu;
        goto label_2f1d9c;
    }
    ctx->pc = 0x2F1D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1D9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D94u, 0x2F1D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1D9Cu;
label_2f1d9c:
    // 0x2f1d9c: 0x10000098  b           . + 4 + (0x98 << 2)
label_2f1da0:
    if (ctx->pc == 0x2F1DA0u) {
        ctx->pc = 0x2F1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D9Cu;
        // 0x2f1da0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1DA4u;
        goto label_2f1da4;
    }
    ctx->pc = 0x2F1D9Cu;
    {
        const bool branch_taken_0x2f1d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D9Cu;
        // 0x2f1da0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d9c) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1DA4u;
label_2f1da4:
    // 0x2f1da4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f1da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2f1da8:
    // 0x2f1da8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2f1da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2f1dac:
    // 0x2f1dac: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
label_2f1db0:
    if (ctx->pc == 0x2F1DB0u) {
        ctx->pc = 0x2F1DB4u;
        goto label_2f1db4;
    }
    ctx->pc = 0x2F1DACu;
    {
        const bool branch_taken_0x2f1dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1dac) {
            ctx->pc = 0x2F1FF4u;
            goto label_2f1ff4;
        }
    }
    ctx->pc = 0x2F1DB4u;
label_2f1db4:
    // 0x2f1db4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f1db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f1db8:
    // 0x2f1db8: 0x6a63024b  ldl         $v1, 0x24B($s3)
    ctx->pc = 0x2f1db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2f1dbc:
    // 0x2f1dbc: 0x6e630244  ldr         $v1, 0x244($s3)
    ctx->pc = 0x2f1dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2f1dc0:
    // 0x2f1dc0: 0x6a640253  ldl         $a0, 0x253($s3)
    ctx->pc = 0x2f1dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2f1dc4:
    // 0x2f1dc4: 0x6e64024c  ldr         $a0, 0x24C($s3)
    ctx->pc = 0x2f1dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2f1dc8:
    // 0x2f1dc8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2f1dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1dcc:
    // 0x2f1dcc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2f1dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1dd0:
    // 0x2f1dd0: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2f1dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1dd4:
    // 0x2f1dd4: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2f1dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1dd8:
    // 0x2f1dd8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2f1dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2f1ddc:
    // 0x2f1ddc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2f1ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2f1de0:
    // 0x2f1de0: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2f1de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2f1de4:
    // 0x2f1de4: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2f1de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2f1de8:
    // 0x2f1de8: 0xb242024b  sdl         $v0, 0x24B($s2)
    ctx->pc = 0x2f1de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1dec:
    // 0x2f1dec: 0xb6420244  sdr         $v0, 0x244($s2)
    ctx->pc = 0x2f1decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1df0:
    // 0x2f1df0: 0xb2430253  sdl         $v1, 0x253($s2)
    ctx->pc = 0x2f1df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1df4:
    // 0x2f1df4: 0xb643024c  sdr         $v1, 0x24C($s2)
    ctx->pc = 0x2f1df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f1df8:
    // 0x2f1df8: 0xc089650  jal         func_225940
label_2f1dfc:
    if (ctx->pc == 0x2F1DFCu) {
        ctx->pc = 0x2F1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DF8u;
        // 0x2f1dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E00u;
        goto label_2f1e00;
    }
    ctx->pc = 0x2F1DF8u;
    SET_GPR_U32(ctx, 31, 0x2F1E00u);
    ctx->pc = 0x2F1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1DF8u;
    // 0x2f1dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225940u, 0x2F1DF8u, 0x2F1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E00u;
label_2f1e00:
    // 0x2f1e00: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_2f1e04:
    if (ctx->pc == 0x2F1E04u) {
        ctx->pc = 0x2F1E08u;
        goto label_2f1e08;
    }
    ctx->pc = 0x2F1E00u;
    {
        const bool branch_taken_0x2f1e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1e00) {
            ctx->pc = 0x2F1EB4u;
            goto label_2f1eb4;
        }
    }
    ctx->pc = 0x2F1E08u;
label_2f1e08:
    // 0x2f1e08: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2f1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1e0c:
    // 0x2f1e0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1e10:
    // 0x2f1e10: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2f1e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1e14:
    // 0x2f1e14: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f1e18:
    // 0x2f1e18: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2f1e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f1e1c:
    // 0x2f1e1c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f1e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1e20:
    // 0x2f1e20: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2f1e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f1e24:
    // 0x2f1e24: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f1e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1e28:
    // 0x2f1e28: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2f1e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f1e2c:
    // 0x2f1e2c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f1e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1e30:
    // 0x2f1e30: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2f1e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f1e34:
    // 0x2f1e34: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f1e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1e38:
    // 0x2f1e38: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1e3c:
    // 0x2f1e3c: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x2f1e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2f1e40:
    // 0x2f1e40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1e44:
    // 0x2f1e44: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f1e44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1e48:
    // 0x2f1e48: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x2f1e48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1e4c:
    // 0x2f1e4c: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x2f1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_2f1e50:
    // 0x2f1e50: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1e54:
    // 0x2f1e54: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x2f1e54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1e58:
    // 0x2f1e58: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x2f1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_2f1e5c:
    // 0x2f1e5c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f1e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1e60:
    // 0x2f1e60: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x2f1e60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1e64:
    // 0x2f1e64: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2f1e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_2f1e68:
    // 0x2f1e68: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f1e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f1e6c:
    // 0x2f1e6c: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x2f1e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1e70:
    // 0x2f1e70: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1e74:
    // 0x2f1e74: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2f1e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_2f1e78:
    // 0x2f1e78: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2f1e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_2f1e7c:
    // 0x2f1e7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f1e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f1e80:
    // 0x2f1e80: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x2f1e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
label_2f1e84:
    // 0x2f1e84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1e88:
    // 0x2f1e88: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f1e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1e8c:
    // 0x2f1e8c: 0xc0b15e8  jal         func_2C57A0
label_2f1e90:
    if (ctx->pc == 0x2F1E90u) {
        ctx->pc = 0x2F1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E8Cu;
        // 0x2f1e90: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E94u;
        goto label_2f1e94;
    }
    ctx->pc = 0x2F1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2F1E94u);
    ctx->pc = 0x2F1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E8Cu;
    // 0x2f1e90: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x2F1E8Cu, 0x2F1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E94u;
label_2f1e94:
    // 0x2f1e94: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2f1e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2f1e98:
    // 0x2f1e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e9c:
    // 0x2f1e9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f1e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ea0:
    // 0x2f1ea0: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x2f1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_2f1ea4:
    // 0x2f1ea4: 0x40f809  jalr        $v0
label_2f1ea8:
    if (ctx->pc == 0x2F1EA8u) {
        ctx->pc = 0x2F1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EA4u;
        // 0x2f1ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EACu;
        goto label_2f1eac;
    }
    ctx->pc = 0x2F1EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1EACu);
        ctx->pc = 0x2F1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EA4u;
        // 0x2f1ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1EA4u, 0x2F1EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1EACu;
label_2f1eac:
    // 0x2f1eac: 0x10000054  b           . + 4 + (0x54 << 2)
label_2f1eb0:
    if (ctx->pc == 0x2F1EB0u) {
        ctx->pc = 0x2F1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EACu;
        // 0x2f1eb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EB4u;
        goto label_2f1eb4;
    }
    ctx->pc = 0x2F1EACu;
    {
        const bool branch_taken_0x2f1eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EACu;
        // 0x2f1eb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1eac) {
            ctx->pc = 0x2F2000u;
            goto label_2f2000;
        }
    }
    ctx->pc = 0x2F1EB4u;
label_2f1eb4:
    // 0x2f1eb4: 0x3c01be62  lui         $at, 0xBE62
    ctx->pc = 0x2f1eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48738 << 16));
label_2f1eb8:
    // 0x2f1eb8: 0x34214dd3  ori         $at, $at, 0x4DD3
    ctx->pc = 0x2f1eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19923);
label_2f1ebc:
    // 0x2f1ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1ec0:
    // 0x2f1ec0: 0x3c013ea9  lui         $at, 0x3EA9
    ctx->pc = 0x2f1ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16041 << 16));
label_2f1ec4:
    // 0x2f1ec4: 0x3421fbe7  ori         $at, $at, 0xFBE7
    ctx->pc = 0x2f1ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64487);
label_2f1ec8:
    // 0x2f1ec8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f1ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f1ecc:
    // 0x2f1ecc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f1eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f1ed0:
    // 0x2f1ed0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2f1ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f1ed4:
    // 0x2f1ed4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2f1ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2f1ed8:
    // 0x2f1ed8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2f1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2f1edc:
    // 0x2f1edc: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x2f1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1ee0:
    // 0x2f1ee0: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1ee4:
    // 0x2f1ee4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f1ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1ee8:
    // 0x2f1ee8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f1ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1eec:
    // 0x2f1eec: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2f1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2f1ef0:
    // 0x2f1ef0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1ef4:
    // 0x2f1ef4: 0xf8a10040  sqc2        $vf1, 0x40($a1)
    ctx->pc = 0x2f1ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1ef8:
    // 0x2f1ef8: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2f1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2f1efc:
    // 0x2f1efc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f1efcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1f00:
    // 0x2f1f00: 0xf8a10050  sqc2        $vf1, 0x50($a1)
    ctx->pc = 0x2f1f00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1f04:
    // 0x2f1f04: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2f1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2f1f08:
    // 0x2f1f08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1f0c:
    // 0x2f1f0c: 0xf8a10060  sqc2        $vf1, 0x60($a1)
    ctx->pc = 0x2f1f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1f10:
    // 0x2f1f10: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2f1f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2f1f14:
    // 0x2f1f14: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f1f14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1f18:
    // 0x2f1f18: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x2f1f18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1f1c:
    // 0x2f1f1c: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2f1f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1f20:
    // 0x2f1f20: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2f1f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1f24:
    // 0x2f1f24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1f28:
    // 0x2f1f28: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2f1f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1f2c:
    // 0x2f1f2c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2f1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2f1f30:
    // 0x2f1f30: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f1f30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1f34:
    // 0x2f1f34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f1f34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1f38:
    // 0x2f1f38: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2f1f38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2f1f3c:
    // 0x2f1f3c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2f1f3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2f1f40:
    // 0x2f1f40: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2f1f40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2f1f44:
    // 0x2f1f44: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2f1f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f1f48:
    // 0x2f1f48: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2f1f48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f1f4c:
    // 0x2f1f4c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2f1f4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2f1f50:
    // 0x2f1f50: 0xf8a50070  sqc2        $vf5, 0x70($a1)
    ctx->pc = 0x2f1f50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[5]));
label_2f1f54:
    // 0x2f1f54: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1f58:
    // 0x2f1f58: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x2f1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f1f5c:
    // 0x2f1f5c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f1f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1f60:
    // 0x2f1f60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f1f64:
    // 0x2f1f64: 0x24c50070  addiu       $a1, $a2, 0x70
    ctx->pc = 0x2f1f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_2f1f68:
    // 0x2f1f68: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f1f6c:
    // 0x2f1f6c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f1f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f1f70:
    // 0x2f1f70: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f1f70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1f74:
    // 0x2f1f74: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f1f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f1f78:
    // 0x2f1f78: 0xf8c10070  sqc2        $vf1, 0x70($a2)
    ctx->pc = 0x2f1f78u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1f7c:
    // 0x2f1f7c: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x2f1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2f1f80:
    // 0x2f1f80: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2f1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_2f1f84:
    // 0x2f1f84: 0xc0767f2  jal         func_1D9FC8
label_2f1f88:
    if (ctx->pc == 0x2F1F88u) {
        ctx->pc = 0x2F1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F84u;
        // 0x2f1f88: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F8Cu;
        goto label_2f1f8c;
    }
    ctx->pc = 0x2F1F84u;
    SET_GPR_U32(ctx, 31, 0x2F1F8Cu);
    ctx->pc = 0x2F1F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F84u;
    // 0x2f1f88: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2F1F84u, 0x2F1F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F8Cu;
label_2f1f8c:
    // 0x2f1f8c: 0xc076de4  jal         func_1DB790
label_2f1f90:
    if (ctx->pc == 0x2F1F90u) {
        ctx->pc = 0x2F1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F8Cu;
        // 0x2f1f90: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F94u;
        goto label_2f1f94;
    }
    ctx->pc = 0x2F1F8Cu;
    SET_GPR_U32(ctx, 31, 0x2F1F94u);
    ctx->pc = 0x2F1F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F8Cu;
    // 0x2f1f90: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x2F1F8Cu, 0x2F1F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F94u;
label_2f1f94:
    // 0x2f1f94: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x2f1f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2f1f98:
    // 0x2f1f98: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x2f1f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_2f1f9c:
    // 0x2f1f9c: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x2f1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_2f1fa0:
    // 0x2f1fa0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2f1fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_2f1fa4:
    // 0x2f1fa4: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x2f1fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_2f1fa8:
    // 0x2f1fa8: 0xc07682a  jal         func_1DA0A8
label_2f1fac:
    if (ctx->pc == 0x2F1FACu) {
        ctx->pc = 0x2F1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FA8u;
        // 0x2f1fac: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1FB0u;
        goto label_2f1fb0;
    }
    ctx->pc = 0x2F1FA8u;
    SET_GPR_U32(ctx, 31, 0x2F1FB0u);
    ctx->pc = 0x2F1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1FA8u;
    // 0x2f1fac: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x2F1FA8u, 0x2F1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FB0u;
label_2f1fb0:
    // 0x2f1fb0: 0xae400fd0  sw          $zero, 0xFD0($s2)
    ctx->pc = 0x2f1fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4048), GPR_U32(ctx, 0));
label_2f1fb4:
    // 0x2f1fb4: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2f1fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f1fb8:
    // 0x2f1fb8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f1fbc:
    // 0x2f1fbc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f1fc0:
    // 0x2f1fc0: 0x40f809  jalr        $v0
label_2f1fc4:
    if (ctx->pc == 0x2F1FC4u) {
        ctx->pc = 0x2F1FC8u;
        goto label_2f1fc8;
    }
    ctx->pc = 0x2F1FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1FC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1FC0u, 0x2F1FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1FC8u;
label_2f1fc8:
    // 0x2f1fc8: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2f1fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f1fcc:
    // 0x2f1fcc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f1fd0:
    // 0x2f1fd0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2f1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2f1fd4:
    // 0x2f1fd4: 0x40f809  jalr        $v0
label_2f1fd8:
    if (ctx->pc == 0x2F1FD8u) {
        ctx->pc = 0x2F1FDCu;
        goto label_2f1fdc;
    }
    ctx->pc = 0x2F1FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1FDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1FD4u, 0x2F1FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1FDCu;
label_2f1fdc:
    // 0x2f1fdc: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2f1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f1fe0:
    // 0x2f1fe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1fe4:
    // 0x2f1fe4: 0xa06001a4  sb          $zero, 0x1A4($v1)
    ctx->pc = 0x2f1fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 420), (uint8_t)GPR_U32(ctx, 0));
label_2f1fe8:
    // 0x2f1fe8: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x2f1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f1fec:
    // 0x2f1fec: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f1ff0:
    if (ctx->pc == 0x2F1FF0u) {
        ctx->pc = 0x2F1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FECu;
        // 0x2f1ff0: 0xa04401a5  sb          $a0, 0x1A5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 421), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1FF4u;
        goto label_2f1ff4;
    }
    ctx->pc = 0x2F1FECu;
    {
        const bool branch_taken_0x2f1fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FECu;
        // 0x2f1ff0: 0xa04401a5  sb          $a0, 0x1A5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 421), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1fec) {
            ctx->pc = 0x2F1FFCu;
            goto label_2f1ffc;
        }
    }
    ctx->pc = 0x2F1FF4u;
label_2f1ff4:
    // 0x2f1ff4: 0xc0bc92c  jal         func_2F24B0
label_2f1ff8:
    if (ctx->pc == 0x2F1FF8u) {
        ctx->pc = 0x2F1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FF4u;
        // 0x2f1ff8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1FFCu;
        goto label_2f1ffc;
    }
    ctx->pc = 0x2F1FF4u;
    SET_GPR_U32(ctx, 31, 0x2F1FFCu);
    ctx->pc = 0x2F1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1FF4u;
    // 0x2f1ff8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F24B0u, 0x2F1FF4u, 0x2F1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FFCu;
label_2f1ffc:
    // 0x2f1ffc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f1ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2000:
    // 0x2f2000: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_2f2004:
    if (ctx->pc == 0x2F2004u) {
        ctx->pc = 0x2F2008u;
        goto label_2f2008;
    }
    ctx->pc = 0x2F2000u;
    {
        const bool branch_taken_0x2f2000 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2000) {
            ctx->pc = 0x2F2010u;
            goto label_2f2010;
        }
    }
    ctx->pc = 0x2F2008u;
label_2f2008:
    // 0x2f2008: 0xc0bc92c  jal         func_2F24B0
label_2f200c:
    if (ctx->pc == 0x2F200Cu) {
        ctx->pc = 0x2F200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2008u;
        // 0x2f200c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2010u;
        goto label_2f2010;
    }
    ctx->pc = 0x2F2008u;
    SET_GPR_U32(ctx, 31, 0x2F2010u);
    ctx->pc = 0x2F200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2008u;
    // 0x2f200c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F24B0u, 0x2F2008u, 0x2F2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2010u;
label_2f2010:
    // 0x2f2010: 0x124000f9  beqz        $s2, . + 4 + (0xF9 << 2)
label_2f2014:
    if (ctx->pc == 0x2F2014u) {
        ctx->pc = 0x2F2018u;
        goto label_2f2018;
    }
    ctx->pc = 0x2F2010u;
    {
        const bool branch_taken_0x2f2010 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2010) {
            ctx->pc = 0x2F23F8u;
            goto label_2f23f8;
        }
    }
    ctx->pc = 0x2F2018u;
label_2f2018:
    // 0x2f2018: 0x122000e5  beqz        $s1, . + 4 + (0xE5 << 2)
label_2f201c:
    if (ctx->pc == 0x2F201Cu) {
        ctx->pc = 0x2F201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2018u;
        // 0x2f201c: 0x240505af  addiu       $a1, $zero, 0x5AF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1455));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2020u;
        goto label_2f2020;
    }
    ctx->pc = 0x2F2018u;
    {
        const bool branch_taken_0x2f2018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2018u;
        // 0x2f201c: 0x240505af  addiu       $a1, $zero, 0x5AF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1455));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2018) {
            ctx->pc = 0x2F23B0u;
            goto label_2f23b0;
        }
    }
    ctx->pc = 0x2F2020u;
label_2f2020:
    // 0x2f2020: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2f2020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f2024:
    // 0x2f2024: 0xc069b78  jal         func_1A6DE0
label_2f2028:
    if (ctx->pc == 0x2F2028u) {
        ctx->pc = 0x2F2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2024u;
        // 0x2f2028: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F202Cu;
        goto label_2f202c;
    }
    ctx->pc = 0x2F2024u;
    SET_GPR_U32(ctx, 31, 0x2F202Cu);
    ctx->pc = 0x2F2028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2024u;
    // 0x2f2028: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x2F2024u, 0x2F202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F202Cu;
label_2f202c:
    // 0x2f202c: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2f202cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f2030:
    // 0x2f2030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2034:
    // 0x2f2034: 0xa06001a4  sb          $zero, 0x1A4($v1)
    ctx->pc = 0x2f2034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 420), (uint8_t)GPR_U32(ctx, 0));
label_2f2038:
    // 0x2f2038: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x2f2038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f203c:
    // 0x2f203c: 0xa05501a5  sb          $s5, 0x1A5($v0)
    ctx->pc = 0x2f203cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 421), (uint8_t)GPR_U32(ctx, 21));
label_2f2040:
    // 0x2f2040: 0xc06a05e  jal         func_1A8178
label_2f2044:
    if (ctx->pc == 0x2F2044u) {
        ctx->pc = 0x2F2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2040u;
        // 0x2f2044: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2048u;
        goto label_2f2048;
    }
    ctx->pc = 0x2F2040u;
    SET_GPR_U32(ctx, 31, 0x2F2048u);
    ctx->pc = 0x2F2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2040u;
    // 0x2f2044: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2F2040u, 0x2F2048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2048u;
label_2f2048:
    // 0x2f2048: 0xc06a328  jal         func_1A8CA0
label_2f204c:
    if (ctx->pc == 0x2F204Cu) {
        ctx->pc = 0x2F204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2048u;
        // 0x2f204c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2050u;
        goto label_2f2050;
    }
    ctx->pc = 0x2F2048u;
    SET_GPR_U32(ctx, 31, 0x2F2050u);
    ctx->pc = 0x2F204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2048u;
    // 0x2f204c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x2F2048u, 0x2F2050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2050u;
label_2f2050:
    // 0x2f2050: 0x8e440110  lw          $a0, 0x110($s2)
    ctx->pc = 0x2f2050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_2f2054:
    // 0x2f2054: 0xc0757d2  jal         func_1D5F48
label_2f2058:
    if (ctx->pc == 0x2F2058u) {
        ctx->pc = 0x2F2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2054u;
        // 0x2f2058: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F205Cu;
        goto label_2f205c;
    }
    ctx->pc = 0x2F2054u;
    SET_GPR_U32(ctx, 31, 0x2F205Cu);
    ctx->pc = 0x2F2058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2054u;
    // 0x2f2058: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x2F2054u, 0x2F205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F205Cu;
label_2f205c:
    // 0x2f205c: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2f205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2f2060:
    // 0x2f2060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f2060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f2064:
    // 0x2f2064: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2f2064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2f2068:
    // 0x2f2068: 0x40f809  jalr        $v0
label_2f206c:
    if (ctx->pc == 0x2F206Cu) {
        ctx->pc = 0x2F206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2068u;
        // 0x2f206c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2070u;
        goto label_2f2070;
    }
    ctx->pc = 0x2F2068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2070u);
        ctx->pc = 0x2F206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2068u;
        // 0x2f206c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2068u, 0x2F2070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2070u;
label_2f2070:
    // 0x2f2070: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2f2070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f2074:
    // 0x2f2074: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2f2074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_2f2078:
    // 0x2f2078: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x2f2078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
label_2f207c:
    // 0x2f207c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f2080:
    // 0x2f2080: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f2080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f2084:
    // 0x2f2084: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f2084u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2088:
    // 0x2f2088: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2f2088u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f208c:
    // 0x2f208c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f208cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f2090:
    // 0x2f2090: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f2090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f2094:
    // 0x2f2094: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f2094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2098:
    // 0x2f2098: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2f2098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f209c:
    // 0x2f209c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f20a0:
    // 0x2f20a0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f20a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f20a4:
    // 0x2f20a4: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2f20a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f20a8:
    // 0x2f20a8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2f20a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_2f20ac:
    // 0x2f20ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f20acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f20b0:
    // 0x2f20b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f20b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f20b4:
    // 0x2f20b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f20b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f20b8:
    // 0x2f20b8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f20b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f20bc:
    // 0x2f20bc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2f20bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f20c0:
    // 0x2f20c0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2f20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2f20c4:
    // 0x2f20c4: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2f20c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2f20c8:
    // 0x2f20c8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2f20c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_2f20cc:
    // 0x2f20cc: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2f20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_2f20d0:
    // 0x2f20d0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f20d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f20d4:
    // 0x2f20d4: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2f20d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2f20d8:
    // 0x2f20d8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f20d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f20dc:
    // 0x2f20dc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f20dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f20e0:
    // 0x2f20e0: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2f20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f20e4:
    // 0x2f20e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f20e8:
    // 0x2f20e8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2f20e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f20ec:
    // 0x2f20ec: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2f20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f20f0:
    // 0x2f20f0: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2f20f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f20f4:
    // 0x2f20f4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2f20f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f20f8:
    // 0x2f20f8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f20f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f20fc:
    // 0x2f20fc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2f20fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f2100:
    // 0x2f2100: 0xc0f6a96  jal         func_3DAA58
label_2f2104:
    if (ctx->pc == 0x2F2104u) {
        ctx->pc = 0x2F2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2100u;
        // 0x2f2104: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2108u;
        goto label_2f2108;
    }
    ctx->pc = 0x2F2100u;
    SET_GPR_U32(ctx, 31, 0x2F2108u);
    ctx->pc = 0x2F2104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2100u;
    // 0x2f2104: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F2100u, 0x2F2108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2108u;
label_2f2108:
    // 0x2f2108: 0xc0f6a96  jal         func_3DAA58
label_2f210c:
    if (ctx->pc == 0x2F210Cu) {
        ctx->pc = 0x2F210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2108u;
        // 0x2f210c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2110u;
        goto label_2f2110;
    }
    ctx->pc = 0x2F2108u;
    SET_GPR_U32(ctx, 31, 0x2F2110u);
    ctx->pc = 0x2F210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2108u;
    // 0x2f210c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F2108u, 0x2F2110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2110u;
label_2f2110:
    // 0x2f2110: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2f2110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2114:
    // 0x2f2114: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2f2114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f2118:
    // 0x2f2118: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2f2118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f211c:
    // 0x2f211c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f211cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f2120:
    // 0x2f2120: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2f2120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2f2124:
    // 0x2f2124: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f2124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f2128:
    // 0x2f2128: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2f2128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2f212c:
    // 0x2f212c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f212cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f2130:
    // 0x2f2130: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f2130u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f2134:
    // 0x2f2134: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f2134u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f2138:
    // 0x2f2138: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2f2138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f213c:
    // 0x2f213c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2f213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f2140:
    // 0x2f2140: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2f2140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f2144:
    // 0x2f2144: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2f2144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f2148:
    // 0x2f2148: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f2148u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f214c:
    // 0x2f214c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f214cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f2150:
    // 0x2f2150: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f2150u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f2154:
    // 0x2f2154: 0x0  nop
    ctx->pc = 0x2f2154u;
    // NOP
label_2f2158:
    // 0x2f2158: 0x0  nop
    ctx->pc = 0x2f2158u;
    // NOP
label_2f215c:
    // 0x2f215c: 0x46010084  c1          0x10084
    ctx->pc = 0x2f215cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2f2160:
    // 0x2f2160: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f2160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2f2164:
    // 0x2f2164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f2164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2168:
    // 0x2f2168: 0x0  nop
    ctx->pc = 0x2f2168u;
    // NOP
label_2f216c:
    // 0x2f216c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f216cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f2170:
    // 0x2f2170: 0x0  nop
    ctx->pc = 0x2f2170u;
    // NOP
label_2f2174:
    // 0x2f2174: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f2178:
    if (ctx->pc == 0x2F2178u) {
        ctx->pc = 0x2F2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2174u;
        // 0x2f2178: 0xe7a200a0  swc1        $f2, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F217Cu;
        goto label_2f217c;
    }
    ctx->pc = 0x2F2174u;
    {
        const bool branch_taken_0x2f2174 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2174u;
        // 0x2f2178: 0xe7a200a0  swc1        $f2, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2174) {
            ctx->pc = 0x2F21A0u;
            goto label_2f21a0;
        }
    }
    ctx->pc = 0x2F217Cu;
label_2f217c:
    // 0x2f217c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f217cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f2180:
    // 0x2f2180: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2184:
    // 0x2f2184: 0x0  nop
    ctx->pc = 0x2f2184u;
    // NOP
label_2f2188:
    // 0x2f2188: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f2188u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2f218c:
    // 0x2f218c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f218cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f2190:
    // 0x2f2190: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f2190u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f2194:
    // 0x2f2194: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f2194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f2198:
    // 0x2f2198: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f2198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f219c:
    // 0x2f219c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2f219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f21a0:
    // 0x2f21a0: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x2f21a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2f21a4:
    // 0x2f21a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f21a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f21a8:
    // 0x2f21a8: 0xc07a8b2  jal         func_1EA2C8
label_2f21ac:
    if (ctx->pc == 0x2F21ACu) {
        ctx->pc = 0x2F21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21A8u;
        // 0x2f21ac: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F21B0u;
        goto label_2f21b0;
    }
    ctx->pc = 0x2F21A8u;
    SET_GPR_U32(ctx, 31, 0x2F21B0u);
    ctx->pc = 0x2F21ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21A8u;
    // 0x2f21ac: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2F21A8u, 0x2F21B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21B0u;
label_2f21b0:
    // 0x2f21b0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2f21b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2f21b4:
    // 0x2f21b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f21b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f21b8:
    // 0x2f21b8: 0xc4601b64  lwc1        $f0, 0x1B64($v1)
    ctx->pc = 0x2f21b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f21bc:
    // 0x2f21bc: 0xc0f6a96  jal         func_3DAA58
label_2f21c0:
    if (ctx->pc == 0x2F21C0u) {
        ctx->pc = 0x2F21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21BCu;
        // 0x2f21c0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F21C4u;
        goto label_2f21c4;
    }
    ctx->pc = 0x2F21BCu;
    SET_GPR_U32(ctx, 31, 0x2F21C4u);
    ctx->pc = 0x2F21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21BCu;
    // 0x2f21c0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F21BCu, 0x2F21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21C4u;
label_2f21c4:
    // 0x2f21c4: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x2f21c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
label_2f21c8:
    // 0x2f21c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f21c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f21cc:
    // 0x2f21cc: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2f21ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_2f21d0:
    // 0x2f21d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f21d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f21d4:
    // 0x2f21d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f21d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f21d8:
    // 0x2f21d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2f21d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f21dc:
    // 0x2f21dc: 0x27a90150  addiu       $t1, $sp, 0x150
    ctx->pc = 0x2f21dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2f21e0:
    // 0x2f21e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f21e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f21e4:
    // 0x2f21e4: 0xc077940  jal         func_1DE500
label_2f21e8:
    if (ctx->pc == 0x2F21E8u) {
        ctx->pc = 0x2F21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21E4u;
        // 0x2f21e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F21ECu;
        goto label_2f21ec;
    }
    ctx->pc = 0x2F21E4u;
    SET_GPR_U32(ctx, 31, 0x2F21ECu);
    ctx->pc = 0x2F21E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21E4u;
    // 0x2f21e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x2F21E4u, 0x2F21ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21ECu;
label_2f21ec:
    // 0x2f21ec: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_2f21f0:
    if (ctx->pc == 0x2F21F0u) {
        ctx->pc = 0x2F21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21ECu;
        // 0x2f21f0: 0x8fa200e8  lw          $v0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F21F4u;
        goto label_2f21f4;
    }
    ctx->pc = 0x2F21ECu;
    {
        const bool branch_taken_0x2f21ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21ECu;
        // 0x2f21f0: 0x8fa200e8  lw          $v0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21ec) {
            ctx->pc = 0x2F2360u;
            goto label_2f2360;
        }
    }
    ctx->pc = 0x2F21F4u;
label_2f21f4:
    // 0x2f21f4: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2f21f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2f21f8:
    // 0x2f21f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2f21fc:
    if (ctx->pc == 0x2F21FCu) {
        ctx->pc = 0x2F21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21F8u;
        // 0x2f21fc: 0xae40029c  sw          $zero, 0x29C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2200u;
        goto label_2f2200;
    }
    ctx->pc = 0x2F21F8u;
    {
        const bool branch_taken_0x2f21f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f21f8) {
            ctx->pc = 0x2F21FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F21F8u;
            // 0x2f21fc: 0xae40029c  sw          $zero, 0x29C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2220u;
            goto label_2f2220;
        }
    }
    ctx->pc = 0x2F2200u;
label_2f2200:
    // 0x2f2200: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x2f2200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2f2204:
    // 0x2f2204: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2f2204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2f2208:
    // 0x2f2208: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2f2208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2f220c:
    // 0x2f220c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2f220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_2f2210:
    // 0x2f2210: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f2210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f2214:
    // 0x2f2214: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_2f2218:
    if (ctx->pc == 0x2F2218u) {
        ctx->pc = 0x2F2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2214u;
        // 0x2f2218: 0xae40029c  sw          $zero, 0x29C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F221Cu;
        goto label_2f221c;
    }
    ctx->pc = 0x2F2214u;
    {
        const bool branch_taken_0x2f2214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f2214) {
            ctx->pc = 0x2F2218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2214u;
            // 0x2f2218: 0xae40029c  sw          $zero, 0x29C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2220u;
            goto label_2f2220;
        }
    }
    ctx->pc = 0x2F221Cu;
label_2f221c:
    // 0x2f221c: 0xae55029c  sw          $s5, 0x29C($s2)
    ctx->pc = 0x2f221cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 21));
label_2f2220:
    // 0x2f2220: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f2220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f2224:
    // 0x2f2224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f2224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2228:
    // 0x2f2228: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f2228u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f222c:
    // 0x2f222c: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x2f222cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f2230:
    // 0x2f2230: 0xc08e61a  jal         func_239868
label_2f2234:
    if (ctx->pc == 0x2F2234u) {
        ctx->pc = 0x2F2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2230u;
        // 0x2f2234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2238u;
        goto label_2f2238;
    }
    ctx->pc = 0x2F2230u;
    SET_GPR_U32(ctx, 31, 0x2F2238u);
    ctx->pc = 0x2F2234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2230u;
    // 0x2f2234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239868u, 0x2F2230u, 0x2F2238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2238u;
label_2f2238:
    // 0x2f2238: 0xc65504a0  lwc1        $f21, 0x4A0($s2)
    ctx->pc = 0x2f2238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f223c:
    // 0x2f223c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2f223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2f2240:
    // 0x2f2240: 0xc0b1488  jal         func_2C5220
label_2f2244:
    if (ctx->pc == 0x2F2244u) {
        ctx->pc = 0x2F2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2240u;
        // 0x2f2244: 0xc65604ac  lwc1        $f22, 0x4AC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2248u;
        goto label_2f2248;
    }
    ctx->pc = 0x2F2240u;
    SET_GPR_U32(ctx, 31, 0x2F2248u);
    ctx->pc = 0x2F2244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2240u;
    // 0x2f2244: 0xc65604ac  lwc1        $f22, 0x4AC($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2F2240u, 0x2F2248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2248u;
label_2f2248:
    // 0x2f2248: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f2248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f224c:
    // 0x2f224c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f224cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2250:
    // 0x2f2250: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2f2250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2f2254:
    // 0x2f2254: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f2254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f2258:
    // 0x2f2258: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2f2258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f225c:
    // 0x2f225c: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2f225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2f2260:
    // 0x2f2260: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f2260u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2264:
    // 0x2f2264: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2f2264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f2268:
    // 0x2f2268: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x2f2268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2f226c:
    // 0x2f226c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f226cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f2270:
    // 0x2f2270: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x2f2270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f2274:
    // 0x2f2274: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2f2274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2f2278:
    // 0x2f2278: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f2278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f227c:
    // 0x2f227c: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x2f227cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f2280:
    // 0x2f2280: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x2f2280u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
label_2f2284:
    // 0x2f2284: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f2288:
    // 0x2f2288: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f2288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f228c:
    // 0x2f228c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2f228cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f2290:
    // 0x2f2290: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x2f2290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2f2294:
    // 0x2f2294: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2f2294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2f2298:
    // 0x2f2298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f229c:
    // 0x2f229c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2f229cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2f22a0:
    // 0x2f22a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f22a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f22a4:
    // 0x2f22a4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2f22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_2f22a8:
    // 0x2f22a8: 0xc0b15e8  jal         func_2C57A0
label_2f22ac:
    if (ctx->pc == 0x2F22ACu) {
        ctx->pc = 0x2F22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22A8u;
        // 0x2f22ac: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F22B0u;
        goto label_2f22b0;
    }
    ctx->pc = 0x2F22A8u;
    SET_GPR_U32(ctx, 31, 0x2F22B0u);
    ctx->pc = 0x2F22ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22A8u;
    // 0x2f22ac: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x2F22A8u, 0x2F22B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F22B0u;
label_2f22b0:
    // 0x2f22b0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2f22b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2f22b4:
    // 0x2f22b4: 0x4600b307  neg.s       $f12, $f22
    ctx->pc = 0x2f22b4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
label_2f22b8:
    // 0x2f22b8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2f22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2f22bc:
    // 0x2f22bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f22bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f22c0:
    // 0x2f22c0: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x2f22c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2f22c4:
    // 0x2f22c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f22c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f22c8:
    // 0x2f22c8: 0xc0b15e8  jal         func_2C57A0
label_2f22cc:
    if (ctx->pc == 0x2F22CCu) {
        ctx->pc = 0x2F22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22C8u;
        // 0x2f22cc: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F22D0u;
        goto label_2f22d0;
    }
    ctx->pc = 0x2F22C8u;
    SET_GPR_U32(ctx, 31, 0x2F22D0u);
    ctx->pc = 0x2F22CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22C8u;
    // 0x2f22cc: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x2F22C8u, 0x2F22D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F22D0u;
label_2f22d0:
    // 0x2f22d0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f22d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f22d4:
    // 0x2f22d4: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x2f22d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f22d8:
    // 0x2f22d8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x2f22d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_2f22dc:
    // 0x2f22dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f22dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f22e0:
    // 0x2f22e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f22e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f22e4:
    // 0x2f22e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f22e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f22e8:
    // 0x2f22e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f22e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f22ec:
    // 0x2f22ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f22ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f22f0:
    // 0x2f22f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f22f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f22f4:
    // 0x2f22f4: 0xc08e23a  jal         func_2388E8
label_2f22f8:
    if (ctx->pc == 0x2F22F8u) {
        ctx->pc = 0x2F22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22F4u;
        // 0x2f22f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F22FCu;
        goto label_2f22fc;
    }
    ctx->pc = 0x2F22F4u;
    SET_GPR_U32(ctx, 31, 0x2F22FCu);
    ctx->pc = 0x2F22F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22F4u;
    // 0x2f22f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x2F22F4u, 0x2F22FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F22FCu;
label_2f22fc:
    // 0x2f22fc: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2f22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2f2300:
    // 0x2f2300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2304:
    // 0x2f2304: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2f2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2f2308:
    // 0x2f2308: 0x40f809  jalr        $v0
label_2f230c:
    if (ctx->pc == 0x2F230Cu) {
        ctx->pc = 0x2F230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2308u;
        // 0x2f230c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2310u;
        goto label_2f2310;
    }
    ctx->pc = 0x2F2308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2310u);
        ctx->pc = 0x2F230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2308u;
        // 0x2f230c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2308u, 0x2F2310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2310u;
label_2f2310:
    // 0x2f2310: 0xc08e960  jal         func_23A580
label_2f2314:
    if (ctx->pc == 0x2F2314u) {
        ctx->pc = 0x2F2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2310u;
        // 0x2f2314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2318u;
        goto label_2f2318;
    }
    ctx->pc = 0x2F2310u;
    SET_GPR_U32(ctx, 31, 0x2F2318u);
    ctx->pc = 0x2F2314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2310u;
    // 0x2f2314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A580u, 0x2F2310u, 0x2F2318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2318u;
label_2f2318:
    // 0x2f2318: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x2f2318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2f231c:
    // 0x2f231c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2320:
    // 0x2f2320: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x2f2320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_2f2324:
    // 0x2f2324: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2f2324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2f2328:
    // 0x2f2328: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x2f2328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_2f232c:
    // 0x2f232c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f232cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2f2330:
    // 0x2f2330: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x2f2330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_2f2334:
    // 0x2f2334: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2f2334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f2338:
    // 0x2f2338: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f2338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f233c:
    // 0x2f233c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2f233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2f2340:
    // 0x2f2340: 0x40f809  jalr        $v0
label_2f2344:
    if (ctx->pc == 0x2F2344u) {
        ctx->pc = 0x2F2348u;
        goto label_2f2348;
    }
    ctx->pc = 0x2F2340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2348u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2340u, 0x2F2348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2348u;
label_2f2348:
    // 0x2f2348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f2348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f234c:
    // 0x2f234c: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2f234cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_2f2350:
    // 0x2f2350: 0xc08fed2  jal         func_23FB48
label_2f2354:
    if (ctx->pc == 0x2F2354u) {
        ctx->pc = 0x2F2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2350u;
        // 0x2f2354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2358u;
        goto label_2f2358;
    }
    ctx->pc = 0x2F2350u;
    SET_GPR_U32(ctx, 31, 0x2F2358u);
    ctx->pc = 0x2F2354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2350u;
    // 0x2f2354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F2350u, 0x2F2358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2358u;
label_2f2358:
    // 0x2f2358: 0x10000016  b           . + 4 + (0x16 << 2)
label_2f235c:
    if (ctx->pc == 0x2F235Cu) {
        ctx->pc = 0x2F235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2358u;
        // 0x2f235c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2360u;
        goto label_2f2360;
    }
    ctx->pc = 0x2F2358u;
    {
        const bool branch_taken_0x2f2358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2358u;
        // 0x2f235c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2358) {
            ctx->pc = 0x2F23B4u;
            goto label_2f23b4;
        }
    }
    ctx->pc = 0x2F2360u;
label_2f2360:
    // 0x2f2360: 0xc0767f2  jal         func_1D9FC8
label_2f2364:
    if (ctx->pc == 0x2F2364u) {
        ctx->pc = 0x2F2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2360u;
        // 0x2f2364: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2368u;
        goto label_2f2368;
    }
    ctx->pc = 0x2F2360u;
    SET_GPR_U32(ctx, 31, 0x2F2368u);
    ctx->pc = 0x2F2364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2360u;
    // 0x2f2364: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2F2360u, 0x2F2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2368u;
label_2f2368:
    // 0x2f2368: 0xc076de4  jal         func_1DB790
label_2f236c:
    if (ctx->pc == 0x2F236Cu) {
        ctx->pc = 0x2F236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2368u;
        // 0x2f236c: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2370u;
        goto label_2f2370;
    }
    ctx->pc = 0x2F2368u;
    SET_GPR_U32(ctx, 31, 0x2F2370u);
    ctx->pc = 0x2F236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2368u;
    // 0x2f236c: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x2F2368u, 0x2F2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2370u;
label_2f2370:
    // 0x2f2370: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x2f2370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2f2374:
    // 0x2f2374: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x2f2374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_2f2378:
    // 0x2f2378: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x2f2378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_2f237c:
    // 0x2f237c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2f237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_2f2380:
    // 0x2f2380: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x2f2380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_2f2384:
    // 0x2f2384: 0xc07682a  jal         func_1DA0A8
label_2f2388:
    if (ctx->pc == 0x2F2388u) {
        ctx->pc = 0x2F2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2384u;
        // 0x2f2388: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F238Cu;
        goto label_2f238c;
    }
    ctx->pc = 0x2F2384u;
    SET_GPR_U32(ctx, 31, 0x2F238Cu);
    ctx->pc = 0x2F2388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2384u;
    // 0x2f2388: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x2F2384u, 0x2F238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F238Cu;
label_2f238c:
    // 0x2f238c: 0xae400fd0  sw          $zero, 0xFD0($s2)
    ctx->pc = 0x2f238cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4048), GPR_U32(ctx, 0));
label_2f2390:
    // 0x2f2390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f2390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f2394:
    // 0x2f2394: 0xc08e40c  jal         func_239030
label_2f2398:
    if (ctx->pc == 0x2F2398u) {
        ctx->pc = 0x2F2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2394u;
        // 0x2f2398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F239Cu;
        goto label_2f239c;
    }
    ctx->pc = 0x2F2394u;
    SET_GPR_U32(ctx, 31, 0x2F239Cu);
    ctx->pc = 0x2F2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2394u;
    // 0x2f2398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239030u, 0x2F2394u, 0x2F239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F239Cu;
label_2f239c:
    // 0x2f239c: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2f239cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f23a0:
    // 0x2f23a0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f23a4:
    // 0x2f23a4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f23a8:
    // 0x2f23a8: 0x40f809  jalr        $v0
label_2f23ac:
    if (ctx->pc == 0x2F23ACu) {
        ctx->pc = 0x2F23B0u;
        goto label_2f23b0;
    }
    ctx->pc = 0x2F23A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F23B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F23A8u, 0x2F23B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F23B0u;
label_2f23b0:
    // 0x2f23b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f23b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f23b4:
    // 0x2f23b4: 0xc08bdc6  jal         func_22F718
label_2f23b8:
    if (ctx->pc == 0x2F23B8u) {
        ctx->pc = 0x2F23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23B4u;
        // 0x2f23b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23BCu;
        goto label_2f23bc;
    }
    ctx->pc = 0x2F23B4u;
    SET_GPR_U32(ctx, 31, 0x2F23BCu);
    ctx->pc = 0x2F23B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23B4u;
    // 0x2f23b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F718u, 0x2F23B4u, 0x2F23BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23BCu;
label_2f23bc:
    // 0x2f23bc: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x2f23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2f23c0:
    // 0x2f23c0: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x2f23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
label_2f23c4:
    // 0x2f23c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f23c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2f23c8:
    // 0x2f23c8: 0xae4003a4  sw          $zero, 0x3A4($s2)
    ctx->pc = 0x2f23c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 932), GPR_U32(ctx, 0));
label_2f23cc:
    // 0x2f23cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f23ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f23d0:
    // 0x2f23d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f23d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f23d4:
    // 0x2f23d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f23d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f23d8:
    // 0x2f23d8: 0xc0f773a  jal         func_3DDCE8
label_2f23dc:
    if (ctx->pc == 0x2F23DCu) {
        ctx->pc = 0x2F23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23D8u;
        // 0x2f23dc: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23E0u;
        goto label_2f23e0;
    }
    ctx->pc = 0x2F23D8u;
    SET_GPR_U32(ctx, 31, 0x2F23E0u);
    ctx->pc = 0x2F23DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23D8u;
    // 0x2f23dc: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDCE8u, 0x2F23D8u, 0x2F23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23E0u;
label_2f23e0:
    // 0x2f23e0: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x2f23e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
label_2f23e4:
    // 0x2f23e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f23e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f23e8:
    // 0x2f23e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f23e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f23ec:
    // 0x2f23ec: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2f23ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2f23f0:
    // 0x2f23f0: 0xc0cda26  jal         func_336898
label_2f23f4:
    if (ctx->pc == 0x2F23F4u) {
        ctx->pc = 0x2F23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23F0u;
        // 0x2f23f4: 0xe6400378  swc1        $f0, 0x378($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23F8u;
        goto label_2f23f8;
    }
    ctx->pc = 0x2F23F0u;
    SET_GPR_U32(ctx, 31, 0x2F23F8u);
    ctx->pc = 0x2F23F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23F0u;
    // 0x2f23f4: 0xe6400378  swc1        $f0, 0x378($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2F23F0u, 0x2F23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23F8u;
label_2f23f8:
    // 0x2f23f8: 0xc08bd98  jal         func_22F660
label_2f23fc:
    if (ctx->pc == 0x2F23FCu) {
        ctx->pc = 0x2F23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23F8u;
        // 0x2f23fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2400u;
        goto label_2f2400;
    }
    ctx->pc = 0x2F23F8u;
    SET_GPR_U32(ctx, 31, 0x2F2400u);
    ctx->pc = 0x2F23FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23F8u;
    // 0x2f23fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x2F23F8u, 0x2F2400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2400u;
label_2f2400:
    // 0x2f2400: 0xae6011e4  sw          $zero, 0x11E4($s3)
    ctx->pc = 0x2f2400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4580), GPR_U32(ctx, 0));
label_2f2404:
    // 0x2f2404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f2408:
    // 0x2f2408: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2f2408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2f240c:
    // 0x2f240c: 0xc08fed2  jal         func_23FB48
label_2f2410:
    if (ctx->pc == 0x2F2410u) {
        ctx->pc = 0x2F2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F240Cu;
        // 0x2f2410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2414u;
        goto label_2f2414;
    }
    ctx->pc = 0x2F240Cu;
    SET_GPR_U32(ctx, 31, 0x2F2414u);
    ctx->pc = 0x2F2410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F240Cu;
    // 0x2f2410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F240Cu, 0x2F2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2414u;
label_2f2414:
    // 0x2f2414: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2f2414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2f2418:
    // 0x2f2418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f241c:
    // 0x2f241c: 0xc08fed2  jal         func_23FB48
label_2f2420:
    if (ctx->pc == 0x2F2420u) {
        ctx->pc = 0x2F2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F241Cu;
        // 0x2f2420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2424u;
        goto label_2f2424;
    }
    ctx->pc = 0x2F241Cu;
    SET_GPR_U32(ctx, 31, 0x2F2424u);
    ctx->pc = 0x2F2420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F241Cu;
    // 0x2f2420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F241Cu, 0x2F2424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2424u;
label_2f2424:
    // 0x2f2424: 0xc08e528  jal         func_2394A0
label_2f2428:
    if (ctx->pc == 0x2F2428u) {
        ctx->pc = 0x2F2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2424u;
        // 0x2f2428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F242Cu;
        goto label_2f242c;
    }
    ctx->pc = 0x2F2424u;
    SET_GPR_U32(ctx, 31, 0x2F242Cu);
    ctx->pc = 0x2F2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2424u;
    // 0x2f2428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x2F2424u, 0x2F242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F242Cu;
label_2f242c:
    // 0x2f242c: 0x8e6311c0  lw          $v1, 0x11C0($s3)
    ctx->pc = 0x2f242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4544)));
label_2f2430:
    // 0x2f2430: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x2f2430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_2f2434:
    // 0x2f2434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2438:
    // 0x2f2438: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x2f2438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_2f243c:
    // 0x2f243c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f243cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2440:
    // 0x2f2440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2444:
    // 0x2f2444: 0xae6311c0  sw          $v1, 0x11C0($s3)
    ctx->pc = 0x2f2444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4544), GPR_U32(ctx, 3));
label_2f2448:
    // 0x2f2448: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x2f2448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
label_2f244c:
    // 0x2f244c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2f2450:
    // 0x2f2450: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2f2450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2454:
    // 0x2f2454: 0xe48000c0  swc1        $f0, 0xC0($a0)
    ctx->pc = 0x2f2454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
label_2f2458:
    // 0x2f2458: 0x8e6212bc  lw          $v0, 0x12BC($s3)
    ctx->pc = 0x2f2458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4796)));
label_2f245c:
    // 0x2f245c: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
label_2f2460:
    if (ctx->pc == 0x2F2460u) {
        ctx->pc = 0x2F2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F245Cu;
        // 0x2f2460: 0x8e6311c0  lw          $v1, 0x11C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2464u;
        goto label_2f2464;
    }
    ctx->pc = 0x2F245Cu;
    {
        const bool branch_taken_0x2f245c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2f245c) {
            ctx->pc = 0x2F2460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F245Cu;
            // 0x2f2460: 0x8e6311c0  lw          $v1, 0x11C0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2470u;
            goto label_2f2470;
        }
    }
    ctx->pc = 0x2F2464u;
label_2f2464:
    // 0x2f2464: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2f2464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2f2468:
    // 0x2f2468: 0xae6212bc  sw          $v0, 0x12BC($s3)
    ctx->pc = 0x2f2468u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4796), GPR_U32(ctx, 2));
label_2f246c:
    // 0x2f246c: 0x8e6311c0  lw          $v1, 0x11C0($s3)
    ctx->pc = 0x2f246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4544)));
label_2f2470:
    // 0x2f2470: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2f2470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_2f2474:
    // 0x2f2474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2478:
    // 0x2f2478: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x2f2478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2f247c:
    // 0x2f247c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f247cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2480:
    // 0x2f2480: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x2f2480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_2f2484:
    // 0x2f2484: 0xae6311c0  sw          $v1, 0x11C0($s3)
    ctx->pc = 0x2f2484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4544), GPR_U32(ctx, 3));
label_2f2488:
    // 0x2f2488: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x2f2488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2f248c:
    // 0x2f248c: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x2f248cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_2f2490:
    // 0x2f2490: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x2f2490u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_2f2494:
    // 0x2f2494: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x2f2494u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_2f2498:
    // 0x2f2498: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x2f2498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_2f249c:
    // 0x2f249c: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x2f249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f24a0:
    // 0x2f24a0: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x2f24a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f24a4:
    // 0x2f24a4: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x2f24a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f24a8:
    // 0x2f24a8: 0x3e00008  jr          $ra
label_2f24ac:
    if (ctx->pc == 0x2F24ACu) {
        ctx->pc = 0x2F24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24A8u;
        // 0x2f24ac: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F24B0u;
        goto label_fallthrough_0x2f24a8;
    }
    ctx->pc = 0x2F24A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24A8u;
        // 0x2f24ac: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F24A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f24a8:
    ctx->pc = 0x2F24B0u;
}
