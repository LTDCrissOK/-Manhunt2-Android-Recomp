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

// Function: sub_003D1870
// Address: 0x3d1870 - 0x3d1c98
void sub_003D1870_0x3d1870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1870_0x3d1870");
#endif

    switch (ctx->pc) {
        case 0x3d1870u: goto label_3d1870;
        case 0x3d1874u: goto label_3d1874;
        case 0x3d1878u: goto label_3d1878;
        case 0x3d187cu: goto label_3d187c;
        case 0x3d1880u: goto label_3d1880;
        case 0x3d1884u: goto label_3d1884;
        case 0x3d1888u: goto label_3d1888;
        case 0x3d188cu: goto label_3d188c;
        case 0x3d1890u: goto label_3d1890;
        case 0x3d1894u: goto label_3d1894;
        case 0x3d1898u: goto label_3d1898;
        case 0x3d189cu: goto label_3d189c;
        case 0x3d18a0u: goto label_3d18a0;
        case 0x3d18a4u: goto label_3d18a4;
        case 0x3d18a8u: goto label_3d18a8;
        case 0x3d18acu: goto label_3d18ac;
        case 0x3d18b0u: goto label_3d18b0;
        case 0x3d18b4u: goto label_3d18b4;
        case 0x3d18b8u: goto label_3d18b8;
        case 0x3d18bcu: goto label_3d18bc;
        case 0x3d18c0u: goto label_3d18c0;
        case 0x3d18c4u: goto label_3d18c4;
        case 0x3d18c8u: goto label_3d18c8;
        case 0x3d18ccu: goto label_3d18cc;
        case 0x3d18d0u: goto label_3d18d0;
        case 0x3d18d4u: goto label_3d18d4;
        case 0x3d18d8u: goto label_3d18d8;
        case 0x3d18dcu: goto label_3d18dc;
        case 0x3d18e0u: goto label_3d18e0;
        case 0x3d18e4u: goto label_3d18e4;
        case 0x3d18e8u: goto label_3d18e8;
        case 0x3d18ecu: goto label_3d18ec;
        case 0x3d18f0u: goto label_3d18f0;
        case 0x3d18f4u: goto label_3d18f4;
        case 0x3d18f8u: goto label_3d18f8;
        case 0x3d18fcu: goto label_3d18fc;
        case 0x3d1900u: goto label_3d1900;
        case 0x3d1904u: goto label_3d1904;
        case 0x3d1908u: goto label_3d1908;
        case 0x3d190cu: goto label_3d190c;
        case 0x3d1910u: goto label_3d1910;
        case 0x3d1914u: goto label_3d1914;
        case 0x3d1918u: goto label_3d1918;
        case 0x3d191cu: goto label_3d191c;
        case 0x3d1920u: goto label_3d1920;
        case 0x3d1924u: goto label_3d1924;
        case 0x3d1928u: goto label_3d1928;
        case 0x3d192cu: goto label_3d192c;
        case 0x3d1930u: goto label_3d1930;
        case 0x3d1934u: goto label_3d1934;
        case 0x3d1938u: goto label_3d1938;
        case 0x3d193cu: goto label_3d193c;
        case 0x3d1940u: goto label_3d1940;
        case 0x3d1944u: goto label_3d1944;
        case 0x3d1948u: goto label_3d1948;
        case 0x3d194cu: goto label_3d194c;
        case 0x3d1950u: goto label_3d1950;
        case 0x3d1954u: goto label_3d1954;
        case 0x3d1958u: goto label_3d1958;
        case 0x3d195cu: goto label_3d195c;
        case 0x3d1960u: goto label_3d1960;
        case 0x3d1964u: goto label_3d1964;
        case 0x3d1968u: goto label_3d1968;
        case 0x3d196cu: goto label_3d196c;
        case 0x3d1970u: goto label_3d1970;
        case 0x3d1974u: goto label_3d1974;
        case 0x3d1978u: goto label_3d1978;
        case 0x3d197cu: goto label_3d197c;
        case 0x3d1980u: goto label_3d1980;
        case 0x3d1984u: goto label_3d1984;
        case 0x3d1988u: goto label_3d1988;
        case 0x3d198cu: goto label_3d198c;
        case 0x3d1990u: goto label_3d1990;
        case 0x3d1994u: goto label_3d1994;
        case 0x3d1998u: goto label_3d1998;
        case 0x3d199cu: goto label_3d199c;
        case 0x3d19a0u: goto label_3d19a0;
        case 0x3d19a4u: goto label_3d19a4;
        case 0x3d19a8u: goto label_3d19a8;
        case 0x3d19acu: goto label_3d19ac;
        case 0x3d19b0u: goto label_3d19b0;
        case 0x3d19b4u: goto label_3d19b4;
        case 0x3d19b8u: goto label_3d19b8;
        case 0x3d19bcu: goto label_3d19bc;
        case 0x3d19c0u: goto label_3d19c0;
        case 0x3d19c4u: goto label_3d19c4;
        case 0x3d19c8u: goto label_3d19c8;
        case 0x3d19ccu: goto label_3d19cc;
        case 0x3d19d0u: goto label_3d19d0;
        case 0x3d19d4u: goto label_3d19d4;
        case 0x3d19d8u: goto label_3d19d8;
        case 0x3d19dcu: goto label_3d19dc;
        case 0x3d19e0u: goto label_3d19e0;
        case 0x3d19e4u: goto label_3d19e4;
        case 0x3d19e8u: goto label_3d19e8;
        case 0x3d19ecu: goto label_3d19ec;
        case 0x3d19f0u: goto label_3d19f0;
        case 0x3d19f4u: goto label_3d19f4;
        case 0x3d19f8u: goto label_3d19f8;
        case 0x3d19fcu: goto label_3d19fc;
        case 0x3d1a00u: goto label_3d1a00;
        case 0x3d1a04u: goto label_3d1a04;
        case 0x3d1a08u: goto label_3d1a08;
        case 0x3d1a0cu: goto label_3d1a0c;
        case 0x3d1a10u: goto label_3d1a10;
        case 0x3d1a14u: goto label_3d1a14;
        case 0x3d1a18u: goto label_3d1a18;
        case 0x3d1a1cu: goto label_3d1a1c;
        case 0x3d1a20u: goto label_3d1a20;
        case 0x3d1a24u: goto label_3d1a24;
        case 0x3d1a28u: goto label_3d1a28;
        case 0x3d1a2cu: goto label_3d1a2c;
        case 0x3d1a30u: goto label_3d1a30;
        case 0x3d1a34u: goto label_3d1a34;
        case 0x3d1a38u: goto label_3d1a38;
        case 0x3d1a3cu: goto label_3d1a3c;
        case 0x3d1a40u: goto label_3d1a40;
        case 0x3d1a44u: goto label_3d1a44;
        case 0x3d1a48u: goto label_3d1a48;
        case 0x3d1a4cu: goto label_3d1a4c;
        case 0x3d1a50u: goto label_3d1a50;
        case 0x3d1a54u: goto label_3d1a54;
        case 0x3d1a58u: goto label_3d1a58;
        case 0x3d1a5cu: goto label_3d1a5c;
        case 0x3d1a60u: goto label_3d1a60;
        case 0x3d1a64u: goto label_3d1a64;
        case 0x3d1a68u: goto label_3d1a68;
        case 0x3d1a6cu: goto label_3d1a6c;
        case 0x3d1a70u: goto label_3d1a70;
        case 0x3d1a74u: goto label_3d1a74;
        case 0x3d1a78u: goto label_3d1a78;
        case 0x3d1a7cu: goto label_3d1a7c;
        case 0x3d1a80u: goto label_3d1a80;
        case 0x3d1a84u: goto label_3d1a84;
        case 0x3d1a88u: goto label_3d1a88;
        case 0x3d1a8cu: goto label_3d1a8c;
        case 0x3d1a90u: goto label_3d1a90;
        case 0x3d1a94u: goto label_3d1a94;
        case 0x3d1a98u: goto label_3d1a98;
        case 0x3d1a9cu: goto label_3d1a9c;
        case 0x3d1aa0u: goto label_3d1aa0;
        case 0x3d1aa4u: goto label_3d1aa4;
        case 0x3d1aa8u: goto label_3d1aa8;
        case 0x3d1aacu: goto label_3d1aac;
        case 0x3d1ab0u: goto label_3d1ab0;
        case 0x3d1ab4u: goto label_3d1ab4;
        case 0x3d1ab8u: goto label_3d1ab8;
        case 0x3d1abcu: goto label_3d1abc;
        case 0x3d1ac0u: goto label_3d1ac0;
        case 0x3d1ac4u: goto label_3d1ac4;
        case 0x3d1ac8u: goto label_3d1ac8;
        case 0x3d1accu: goto label_3d1acc;
        case 0x3d1ad0u: goto label_3d1ad0;
        case 0x3d1ad4u: goto label_3d1ad4;
        case 0x3d1ad8u: goto label_3d1ad8;
        case 0x3d1adcu: goto label_3d1adc;
        case 0x3d1ae0u: goto label_3d1ae0;
        case 0x3d1ae4u: goto label_3d1ae4;
        case 0x3d1ae8u: goto label_3d1ae8;
        case 0x3d1aecu: goto label_3d1aec;
        case 0x3d1af0u: goto label_3d1af0;
        case 0x3d1af4u: goto label_3d1af4;
        case 0x3d1af8u: goto label_3d1af8;
        case 0x3d1afcu: goto label_3d1afc;
        case 0x3d1b00u: goto label_3d1b00;
        case 0x3d1b04u: goto label_3d1b04;
        case 0x3d1b08u: goto label_3d1b08;
        case 0x3d1b0cu: goto label_3d1b0c;
        case 0x3d1b10u: goto label_3d1b10;
        case 0x3d1b14u: goto label_3d1b14;
        case 0x3d1b18u: goto label_3d1b18;
        case 0x3d1b1cu: goto label_3d1b1c;
        case 0x3d1b20u: goto label_3d1b20;
        case 0x3d1b24u: goto label_3d1b24;
        case 0x3d1b28u: goto label_3d1b28;
        case 0x3d1b2cu: goto label_3d1b2c;
        case 0x3d1b30u: goto label_3d1b30;
        case 0x3d1b34u: goto label_3d1b34;
        case 0x3d1b38u: goto label_3d1b38;
        case 0x3d1b3cu: goto label_3d1b3c;
        case 0x3d1b40u: goto label_3d1b40;
        case 0x3d1b44u: goto label_3d1b44;
        case 0x3d1b48u: goto label_3d1b48;
        case 0x3d1b4cu: goto label_3d1b4c;
        case 0x3d1b50u: goto label_3d1b50;
        case 0x3d1b54u: goto label_3d1b54;
        case 0x3d1b58u: goto label_3d1b58;
        case 0x3d1b5cu: goto label_3d1b5c;
        case 0x3d1b60u: goto label_3d1b60;
        case 0x3d1b64u: goto label_3d1b64;
        case 0x3d1b68u: goto label_3d1b68;
        case 0x3d1b6cu: goto label_3d1b6c;
        case 0x3d1b70u: goto label_3d1b70;
        case 0x3d1b74u: goto label_3d1b74;
        case 0x3d1b78u: goto label_3d1b78;
        case 0x3d1b7cu: goto label_3d1b7c;
        case 0x3d1b80u: goto label_3d1b80;
        case 0x3d1b84u: goto label_3d1b84;
        case 0x3d1b88u: goto label_3d1b88;
        case 0x3d1b8cu: goto label_3d1b8c;
        case 0x3d1b90u: goto label_3d1b90;
        case 0x3d1b94u: goto label_3d1b94;
        case 0x3d1b98u: goto label_3d1b98;
        case 0x3d1b9cu: goto label_3d1b9c;
        case 0x3d1ba0u: goto label_3d1ba0;
        case 0x3d1ba4u: goto label_3d1ba4;
        case 0x3d1ba8u: goto label_3d1ba8;
        case 0x3d1bacu: goto label_3d1bac;
        case 0x3d1bb0u: goto label_3d1bb0;
        case 0x3d1bb4u: goto label_3d1bb4;
        case 0x3d1bb8u: goto label_3d1bb8;
        case 0x3d1bbcu: goto label_3d1bbc;
        case 0x3d1bc0u: goto label_3d1bc0;
        case 0x3d1bc4u: goto label_3d1bc4;
        case 0x3d1bc8u: goto label_3d1bc8;
        case 0x3d1bccu: goto label_3d1bcc;
        case 0x3d1bd0u: goto label_3d1bd0;
        case 0x3d1bd4u: goto label_3d1bd4;
        case 0x3d1bd8u: goto label_3d1bd8;
        case 0x3d1bdcu: goto label_3d1bdc;
        case 0x3d1be0u: goto label_3d1be0;
        case 0x3d1be4u: goto label_3d1be4;
        case 0x3d1be8u: goto label_3d1be8;
        case 0x3d1becu: goto label_3d1bec;
        case 0x3d1bf0u: goto label_3d1bf0;
        case 0x3d1bf4u: goto label_3d1bf4;
        case 0x3d1bf8u: goto label_3d1bf8;
        case 0x3d1bfcu: goto label_3d1bfc;
        case 0x3d1c00u: goto label_3d1c00;
        case 0x3d1c04u: goto label_3d1c04;
        case 0x3d1c08u: goto label_3d1c08;
        case 0x3d1c0cu: goto label_3d1c0c;
        case 0x3d1c10u: goto label_3d1c10;
        case 0x3d1c14u: goto label_3d1c14;
        case 0x3d1c18u: goto label_3d1c18;
        case 0x3d1c1cu: goto label_3d1c1c;
        case 0x3d1c20u: goto label_3d1c20;
        case 0x3d1c24u: goto label_3d1c24;
        case 0x3d1c28u: goto label_3d1c28;
        case 0x3d1c2cu: goto label_3d1c2c;
        case 0x3d1c30u: goto label_3d1c30;
        case 0x3d1c34u: goto label_3d1c34;
        case 0x3d1c38u: goto label_3d1c38;
        case 0x3d1c3cu: goto label_3d1c3c;
        case 0x3d1c40u: goto label_3d1c40;
        case 0x3d1c44u: goto label_3d1c44;
        case 0x3d1c48u: goto label_3d1c48;
        case 0x3d1c4cu: goto label_3d1c4c;
        case 0x3d1c50u: goto label_3d1c50;
        case 0x3d1c54u: goto label_3d1c54;
        case 0x3d1c58u: goto label_3d1c58;
        case 0x3d1c5cu: goto label_3d1c5c;
        case 0x3d1c60u: goto label_3d1c60;
        case 0x3d1c64u: goto label_3d1c64;
        case 0x3d1c68u: goto label_3d1c68;
        case 0x3d1c6cu: goto label_3d1c6c;
        case 0x3d1c70u: goto label_3d1c70;
        case 0x3d1c74u: goto label_3d1c74;
        case 0x3d1c78u: goto label_3d1c78;
        case 0x3d1c7cu: goto label_3d1c7c;
        case 0x3d1c80u: goto label_3d1c80;
        case 0x3d1c84u: goto label_3d1c84;
        case 0x3d1c88u: goto label_3d1c88;
        case 0x3d1c8cu: goto label_3d1c8c;
        case 0x3d1c90u: goto label_3d1c90;
        case 0x3d1c94u: goto label_3d1c94;
        default: break;
    }

    ctx->pc = 0x3d1870u;

label_3d1870:
    // 0x3d1870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d1870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d1874:
    // 0x3d1874: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3d1874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3d1878:
    // 0x3d1878: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d1878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3d187c:
    // 0x3d187c: 0x24841f98  addiu       $a0, $a0, 0x1F98
    ctx->pc = 0x3d187cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8088));
label_3d1880:
    // 0x3d1880: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d1880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3d1884:
    // 0x3d1884: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x3d1884u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
label_3d1888:
    // 0x3d1888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d1888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3d188c:
    // 0x3d188c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d1890:
    // 0x3d1890: 0x2650ec98  addiu       $s0, $s2, -0x1368
    ctx->pc = 0x3d1890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962328));
label_3d1894:
    // 0x3d1894: 0x8e45ec98  lw          $a1, -0x1368($s2)
    ctx->pc = 0x3d1894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962328)));
label_3d1898:
    // 0x3d1898: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x3d1898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d189c:
    // 0x3d189c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x3d189cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d18a0:
    // 0x3d18a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3d18a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d18a4:
    // 0x3d18a4: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x3d18a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3d18a8:
    // 0x3d18a8: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3d18a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_3d18ac:
    // 0x3d18ac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3d18acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3d18b0:
    // 0x3d18b0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3d18b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3d18b4:
    // 0x3d18b4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3d18b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3d18b8:
    // 0x3d18b8: 0xc0f3070  jal         func_3CC1C0
label_3d18bc:
    if (ctx->pc == 0x3D18BCu) {
        ctx->pc = 0x3D18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18B8u;
        // 0x3d18bc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18C0u;
        goto label_3d18c0;
    }
    ctx->pc = 0x3D18B8u;
    SET_GPR_U32(ctx, 31, 0x3D18C0u);
    ctx->pc = 0x3D18BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D18B8u;
    // 0x3d18bc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC1C0u, 0x3D18B8u, 0x3D18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D18C0u;
label_3d18c0:
    // 0x3d18c0: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x3d18c0u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
label_3d18c4:
    // 0x3d18c4: 0x40f  sync.p
    ctx->pc = 0x3d18c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3d18c8:
    // 0x3d18c8: 0x8e51ec98  lw          $s1, -0x1368($s2)
    ctx->pc = 0x3d18c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962328)));
label_3d18cc:
    // 0x3d18cc: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x3d18ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_3d18d0:
    // 0x3d18d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3d18d4:
    if (ctx->pc == 0x3D18D4u) {
        ctx->pc = 0x3D18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18D0u;
        // 0x3d18d4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18D8u;
        goto label_3d18d8;
    }
    ctx->pc = 0x3D18D0u;
    {
        const bool branch_taken_0x3d18d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18D0u;
        // 0x3d18d4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d18d0) {
            ctx->pc = 0x3D18ECu;
            goto label_3d18ec;
        }
    }
    ctx->pc = 0x3D18D8u;
label_3d18d8:
    // 0x3d18d8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3d18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3d18dc:
    // 0x3d18dc: 0xc0f3070  jal         func_3CC1C0
label_3d18e0:
    if (ctx->pc == 0x3D18E0u) {
        ctx->pc = 0x3D18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18DCu;
        // 0x3d18e0: 0x24841fd0  addiu       $a0, $a0, 0x1FD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18E4u;
        goto label_3d18e4;
    }
    ctx->pc = 0x3D18DCu;
    SET_GPR_U32(ctx, 31, 0x3D18E4u);
    ctx->pc = 0x3D18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D18DCu;
    // 0x3d18e0: 0x24841fd0  addiu       $a0, $a0, 0x1FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC1C0u, 0x3D18DCu, 0x3D18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D18E4u;
label_3d18e4:
    // 0x3d18e4: 0xc0f4126  jal         func_3D0498
label_3d18e8:
    if (ctx->pc == 0x3D18E8u) {
        ctx->pc = 0x3D18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18E4u;
        // 0x3d18e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18ECu;
        goto label_3d18ec;
    }
    ctx->pc = 0x3D18E4u;
    SET_GPR_U32(ctx, 31, 0x3D18ECu);
    ctx->pc = 0x3D18E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D18E4u;
    // 0x3d18e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0498u, 0x3D18E4u, 0x3D18ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D18ECu;
label_3d18ec:
    // 0x3d18ec: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3d18ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3d18f0:
    // 0x3d18f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3d18f4:
    if (ctx->pc == 0x3D18F4u) {
        ctx->pc = 0x3D18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18F0u;
        // 0x3d18f4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D18F8u;
        goto label_3d18f8;
    }
    ctx->pc = 0x3D18F0u;
    {
        const bool branch_taken_0x3d18f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18F0u;
        // 0x3d18f4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d18f0) {
            ctx->pc = 0x3D1928u;
            goto label_3d1928;
        }
    }
    ctx->pc = 0x3D18F8u;
label_3d18f8:
    // 0x3d18f8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3d18f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d18fc:
    // 0x3d18fc: 0x0  nop
    ctx->pc = 0x3d18fcu;
    // NOP
label_3d1900:
    // 0x3d1900: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3d1900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3d1904:
    // 0x3d1904: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3d1904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d1908:
    // 0x3d1908: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3d1908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d190c:
    // 0x3d190c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3d190cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d1910:
    // 0x3d1910: 0xc0f4608  jal         func_3D1820
label_3d1914:
    if (ctx->pc == 0x3D1914u) {
        ctx->pc = 0x3D1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1910u;
        // 0x3d1914: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1918u;
        goto label_3d1918;
    }
    ctx->pc = 0x3D1910u;
    SET_GPR_U32(ctx, 31, 0x3D1918u);
    ctx->pc = 0x3D1914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1910u;
    // 0x3d1914: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1820u, 0x3D1910u, 0x3D1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1918u;
label_3d1918:
    // 0x3d1918: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x3d1918u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_3d191c:
    // 0x3d191c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3d191cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3d1920:
    // 0x3d1920: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_3d1924:
    if (ctx->pc == 0x3D1924u) {
        ctx->pc = 0x3D1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1920u;
        // 0x3d1924: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1928u;
        goto label_3d1928;
    }
    ctx->pc = 0x3D1920u;
    {
        const bool branch_taken_0x3d1920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1920) {
            ctx->pc = 0x3D1924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1920u;
            // 0x3d1924: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1900;
        }
    }
    ctx->pc = 0x3D1928u;
label_3d1928:
    // 0x3d1928: 0x2650ec98  addiu       $s0, $s2, -0x1368
    ctx->pc = 0x3d1928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962328));
label_3d192c:
    // 0x3d192c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d1930:
    // 0x3d1930: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x3d1930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_3d1934:
    // 0x3d1934: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x3d1934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_3d1938:
    // 0x3d1938: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3d193c:
    if (ctx->pc == 0x3D193Cu) {
        ctx->pc = 0x3D193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1938u;
        // 0x3d193c: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1940u;
        goto label_3d1940;
    }
    ctx->pc = 0x3D1938u;
    {
        const bool branch_taken_0x3d1938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1938u;
        // 0x3d193c: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1938) {
            ctx->pc = 0x3D1958u;
            goto label_3d1958;
        }
    }
    ctx->pc = 0x3D1940u;
label_3d1940:
    // 0x3d1940: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3d1940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3d1944:
    // 0x3d1944: 0xc0f3070  jal         func_3CC1C0
label_3d1948:
    if (ctx->pc == 0x3D1948u) {
        ctx->pc = 0x3D1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1944u;
        // 0x3d1948: 0x24841fe8  addiu       $a0, $a0, 0x1FE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D194Cu;
        goto label_3d194c;
    }
    ctx->pc = 0x3D1944u;
    SET_GPR_U32(ctx, 31, 0x3D194Cu);
    ctx->pc = 0x3D1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1944u;
    // 0x3d1948: 0x24841fe8  addiu       $a0, $a0, 0x1FE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC1C0u, 0x3D1944u, 0x3D194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D194Cu;
label_3d194c:
    // 0x3d194c: 0xc0f4126  jal         func_3D0498
label_3d1950:
    if (ctx->pc == 0x3D1950u) {
        ctx->pc = 0x3D1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D194Cu;
        // 0x3d1950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1954u;
        goto label_3d1954;
    }
    ctx->pc = 0x3D194Cu;
    SET_GPR_U32(ctx, 31, 0x3D1954u);
    ctx->pc = 0x3D1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D194Cu;
    // 0x3d1950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0498u, 0x3D194Cu, 0x3D1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1954u;
label_3d1954:
    // 0x3d1954: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3d1954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3d1958:
    // 0x3d1958: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3d195c:
    if (ctx->pc == 0x3D195Cu) {
        ctx->pc = 0x3D195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1958u;
        // 0x3d195c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1960u;
        goto label_3d1960;
    }
    ctx->pc = 0x3D1958u;
    {
        const bool branch_taken_0x3d1958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1958u;
        // 0x3d195c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1958) {
            ctx->pc = 0x3D1990u;
            goto label_3d1990;
        }
    }
    ctx->pc = 0x3D1960u;
label_3d1960:
    // 0x3d1960: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3d1960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d1964:
    // 0x3d1964: 0x0  nop
    ctx->pc = 0x3d1964u;
    // NOP
label_3d1968:
    // 0x3d1968: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3d1968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3d196c:
    // 0x3d196c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3d196cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d1970:
    // 0x3d1970: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3d1970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d1974:
    // 0x3d1974: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3d1974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d1978:
    // 0x3d1978: 0xc0f4608  jal         func_3D1820
label_3d197c:
    if (ctx->pc == 0x3D197Cu) {
        ctx->pc = 0x3D197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1978u;
        // 0x3d197c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1980u;
        goto label_3d1980;
    }
    ctx->pc = 0x3D1978u;
    SET_GPR_U32(ctx, 31, 0x3D1980u);
    ctx->pc = 0x3D197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1978u;
    // 0x3d197c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1820u, 0x3D1978u, 0x3D1980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1980u;
label_3d1980:
    // 0x3d1980: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x3d1980u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_3d1984:
    // 0x3d1984: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3d1984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3d1988:
    // 0x3d1988: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_3d198c:
    if (ctx->pc == 0x3D198Cu) {
        ctx->pc = 0x3D198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1988u;
        // 0x3d198c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1990u;
        goto label_3d1990;
    }
    ctx->pc = 0x3D1988u;
    {
        const bool branch_taken_0x3d1988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1988) {
            ctx->pc = 0x3D198Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1988u;
            // 0x3d198c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1968;
        }
    }
    ctx->pc = 0x3D1990u;
label_3d1990:
    // 0x3d1990: 0x2650ec98  addiu       $s0, $s2, -0x1368
    ctx->pc = 0x3d1990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962328));
label_3d1994:
    // 0x3d1994: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x3d1994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
label_3d1998:
    // 0x3d1998: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x3d1998u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
label_3d199c:
    // 0x3d199c: 0x40f  sync.p
    ctx->pc = 0x3d199cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3d19a0:
    // 0x3d19a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3d19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d19a4:
    // 0x3d19a4: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_3d19a8:
    if (ctx->pc == 0x3D19A8u) {
        ctx->pc = 0x3D19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19A4u;
        // 0x3d19a8: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19ACu;
        goto label_3d19ac;
    }
    ctx->pc = 0x3D19A4u;
    {
        const bool branch_taken_0x3d19a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d19a4) {
            ctx->pc = 0x3D19A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D19A4u;
            // 0x3d19a8: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1A0Cu;
            goto label_3d1a0c;
        }
    }
    ctx->pc = 0x3D19ACu;
label_3d19ac:
    // 0x3d19ac: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x3d19acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_3d19b0:
    // 0x3d19b0: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x3d19b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_3d19b4:
    // 0x3d19b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3d19b8:
    if (ctx->pc == 0x3D19B8u) {
        ctx->pc = 0x3D19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19B4u;
        // 0x3d19b8: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19BCu;
        goto label_3d19bc;
    }
    ctx->pc = 0x3D19B4u;
    {
        const bool branch_taken_0x3d19b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19B4u;
        // 0x3d19b8: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d19b4) {
            ctx->pc = 0x3D19D4u;
            goto label_3d19d4;
        }
    }
    ctx->pc = 0x3D19BCu;
label_3d19bc:
    // 0x3d19bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3d19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3d19c0:
    // 0x3d19c0: 0xc0f3070  jal         func_3CC1C0
label_3d19c4:
    if (ctx->pc == 0x3D19C4u) {
        ctx->pc = 0x3D19C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19C0u;
        // 0x3d19c4: 0x24842000  addiu       $a0, $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19C8u;
        goto label_3d19c8;
    }
    ctx->pc = 0x3D19C0u;
    SET_GPR_U32(ctx, 31, 0x3D19C8u);
    ctx->pc = 0x3D19C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19C0u;
    // 0x3d19c4: 0x24842000  addiu       $a0, $a0, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC1C0u, 0x3D19C0u, 0x3D19C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19C8u;
label_3d19c8:
    // 0x3d19c8: 0xc0f4126  jal         func_3D0498
label_3d19cc:
    if (ctx->pc == 0x3D19CCu) {
        ctx->pc = 0x3D19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19C8u;
        // 0x3d19cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19D0u;
        goto label_3d19d0;
    }
    ctx->pc = 0x3D19C8u;
    SET_GPR_U32(ctx, 31, 0x3D19D0u);
    ctx->pc = 0x3D19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19C8u;
    // 0x3d19cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0498u, 0x3D19C8u, 0x3D19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19D0u;
label_3d19d0:
    // 0x3d19d0: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3d19d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3d19d4:
    // 0x3d19d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3d19d8:
    if (ctx->pc == 0x3D19D8u) {
        ctx->pc = 0x3D19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19D4u;
        // 0x3d19d8: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19DCu;
        goto label_3d19dc;
    }
    ctx->pc = 0x3D19D4u;
    {
        const bool branch_taken_0x3d19d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19D4u;
        // 0x3d19d8: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d19d4) {
            ctx->pc = 0x3D1A08u;
            goto label_3d1a08;
        }
    }
    ctx->pc = 0x3D19DCu;
label_3d19dc:
    // 0x3d19dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3d19dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d19e0:
    // 0x3d19e0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3d19e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3d19e4:
    // 0x3d19e4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3d19e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d19e8:
    // 0x3d19e8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3d19e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d19ec:
    // 0x3d19ec: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3d19ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d19f0:
    // 0x3d19f0: 0xc0f4608  jal         func_3D1820
label_3d19f4:
    if (ctx->pc == 0x3D19F4u) {
        ctx->pc = 0x3D19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19F0u;
        // 0x3d19f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D19F8u;
        goto label_3d19f8;
    }
    ctx->pc = 0x3D19F0u;
    SET_GPR_U32(ctx, 31, 0x3D19F8u);
    ctx->pc = 0x3D19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19F0u;
    // 0x3d19f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1820u, 0x3D19F0u, 0x3D19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19F8u;
label_3d19f8:
    // 0x3d19f8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x3d19f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_3d19fc:
    // 0x3d19fc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3d19fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3d1a00:
    // 0x3d1a00: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_3d1a04:
    if (ctx->pc == 0x3D1A04u) {
        ctx->pc = 0x3D1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A00u;
        // 0x3d1a04: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A08u;
        goto label_3d1a08;
    }
    ctx->pc = 0x3D1A00u;
    {
        const bool branch_taken_0x3d1a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1a00) {
            ctx->pc = 0x3D1A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1A00u;
            // 0x3d1a04: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D19E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d19e0;
        }
    }
    ctx->pc = 0x3D1A08u;
label_3d1a08:
    // 0x3d1a08: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x3d1a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a0c:
    // 0x3d1a0c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x3d1a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_3d1a10:
    // 0x3d1a10: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3d1a14:
    if (ctx->pc == 0x3D1A14u) {
        ctx->pc = 0x3D1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A10u;
        // 0x3d1a14: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A18u;
        goto label_3d1a18;
    }
    ctx->pc = 0x3D1A10u;
    {
        const bool branch_taken_0x3d1a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A10u;
        // 0x3d1a14: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1a10) {
            ctx->pc = 0x3D1A48u;
            goto label_3d1a48;
        }
    }
    ctx->pc = 0x3D1A18u;
label_3d1a18:
    // 0x3d1a18: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x3d1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_3d1a1c:
    // 0x3d1a1c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x3d1a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_3d1a20:
    // 0x3d1a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d1a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a24:
    // 0x3d1a24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d1a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a28:
    // 0x3d1a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d1a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a2c:
    // 0x3d1a2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d1a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a30:
    // 0x3d1a30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d1a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a34:
    // 0x3d1a34: 0xc0f4608  jal         func_3D1820
label_3d1a38:
    if (ctx->pc == 0x3D1A38u) {
        ctx->pc = 0x3D1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A34u;
        // 0x3d1a38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A3Cu;
        goto label_3d1a3c;
    }
    ctx->pc = 0x3D1A34u;
    SET_GPR_U32(ctx, 31, 0x3D1A3Cu);
    ctx->pc = 0x3D1A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1A34u;
    // 0x3d1a38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1820u, 0x3D1A34u, 0x3D1A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1A3Cu;
label_3d1a3c:
    // 0x3d1a3c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x3d1a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_3d1a40:
    // 0x3d1a40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3d1a44:
    if (ctx->pc == 0x3D1A44u) {
        ctx->pc = 0x3D1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A40u;
        // 0x3d1a44: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A48u;
        goto label_3d1a48;
    }
    ctx->pc = 0x3D1A40u;
    {
        const bool branch_taken_0x3d1a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A40u;
        // 0x3d1a44: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1a40) {
            ctx->pc = 0x3D1A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1a20;
        }
    }
    ctx->pc = 0x3D1A48u;
label_3d1a48:
    // 0x3d1a48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d1a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d1a4c:
    // 0x3d1a4c: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x3d1a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3d1a50:
    // 0x3d1a50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d1a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1a54:
    // 0x3d1a54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d1a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1a58:
    // 0x3d1a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d1a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1a5c:
    // 0x3d1a5c: 0x3e00008  jr          $ra
label_3d1a60:
    if (ctx->pc == 0x3D1A60u) {
        ctx->pc = 0x3D1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A5Cu;
        // 0x3d1a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A64u;
        goto label_3d1a64;
    }
    ctx->pc = 0x3D1A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A5Cu;
        // 0x3d1a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1A64u;
label_3d1a64:
    // 0x3d1a64: 0x0  nop
    ctx->pc = 0x3d1a64u;
    // NOP
label_3d1a68:
    // 0x3d1a68: 0x0  nop
    ctx->pc = 0x3d1a68u;
    // NOP
label_3d1a6c:
    // 0x3d1a6c: 0x0  nop
    ctx->pc = 0x3d1a6cu;
    // NOP
label_3d1a70:
    // 0x3d1a70: 0x0  nop
    ctx->pc = 0x3d1a70u;
    // NOP
label_3d1a74:
    // 0x3d1a74: 0x0  nop
    ctx->pc = 0x3d1a74u;
    // NOP
label_3d1a78:
    // 0x3d1a78: 0x0  nop
    ctx->pc = 0x3d1a78u;
    // NOP
label_3d1a7c:
    // 0x3d1a7c: 0x0  nop
    ctx->pc = 0x3d1a7cu;
    // NOP
label_3d1a80:
    // 0x3d1a80: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x3d1a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
label_3d1a84:
    // 0x3d1a84: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x3d1a84u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
label_3d1a88:
    // 0x3d1a88: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x3d1a88u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
label_3d1a8c:
    // 0x3d1a8c: 0x20f809  jalr        $at
label_3d1a90:
    if (ctx->pc == 0x3D1A90u) {
        ctx->pc = 0x3D1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A8Cu;
        // 0x3d1a90: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1A94u;
        goto label_3d1a94;
    }
    ctx->pc = 0x3D1A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x3D1A94u);
        ctx->pc = 0x3D1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A8Cu;
        // 0x3d1a90: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1A8Cu, 0x3D1A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1A94u;
label_3d1a94:
    // 0x3d1a94: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x3d1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_3d1a98:
    // 0x3d1a98: 0xc  syscall     0
    ctx->pc = 0x3d1a98u;
    ctx->pc = 0x3D1A9Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3d1a9c:
    // 0x3d1a9c: 0x0  nop
    ctx->pc = 0x3d1a9cu;
    // NOP
label_3d1aa0:
    // 0x3d1aa0: 0x0  nop
    ctx->pc = 0x3d1aa0u;
    // NOP
label_3d1aa4:
    // 0x3d1aa4: 0x0  nop
    ctx->pc = 0x3d1aa4u;
    // NOP
label_3d1aa8:
    // 0x3d1aa8: 0x0  nop
    ctx->pc = 0x3d1aa8u;
    // NOP
label_3d1aac:
    // 0x3d1aac: 0x0  nop
    ctx->pc = 0x3d1aacu;
    // NOP
label_3d1ab0:
    // 0x3d1ab0: 0x0  nop
    ctx->pc = 0x3d1ab0u;
    // NOP
label_3d1ab4:
    // 0x3d1ab4: 0x0  nop
    ctx->pc = 0x3d1ab4u;
    // NOP
label_3d1ab8:
    // 0x3d1ab8: 0x0  nop
    ctx->pc = 0x3d1ab8u;
    // NOP
label_3d1abc:
    // 0x3d1abc: 0x0  nop
    ctx->pc = 0x3d1abcu;
    // NOP
label_3d1ac0:
    // 0x3d1ac0: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x3d1ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_3d1ac4:
    // 0x3d1ac4: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x3d1ac4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_3d1ac8:
    // 0x3d1ac8: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x3d1ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_3d1acc:
    // 0x3d1acc: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x3d1accu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_3d1ad0:
    // 0x3d1ad0: 0x40f  sync.p
    ctx->pc = 0x3d1ad0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3d1ad4:
    // 0x3d1ad4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3d1ad8:
    // 0x3d1ad8: 0x8c428e28  lw          $v0, -0x71D8($v0)
    ctx->pc = 0x3d1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938152)));
label_3d1adc:
    // 0x3d1adc: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x3d1adcu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_3d1ae0:
    // 0x3d1ae0: 0x40f  sync.p
    ctx->pc = 0x3d1ae0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3d1ae4:
    // 0x3d1ae4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3d1ae8:
    // 0x3d1ae8: 0xdc428e00  ld          $v0, -0x7200($v0)
    ctx->pc = 0x3d1ae8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294938112)));
label_3d1aec:
    // 0x3d1aec: 0x400011  mthi        $v0
    ctx->pc = 0x3d1aecu;
    ctx->hi = GPR_U64(ctx, 2);
label_3d1af0:
    // 0x3d1af0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3d1af4:
    // 0x3d1af4: 0xdc428e08  ld          $v0, -0x71F8($v0)
    ctx->pc = 0x3d1af4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294938120)));
label_3d1af8:
    // 0x3d1af8: 0x70400011  mthi1       $v0
    ctx->pc = 0x3d1af8u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_3d1afc:
    // 0x3d1afc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3d1b00:
    // 0x3d1b00: 0xdc428e10  ld          $v0, -0x71F0($v0)
    ctx->pc = 0x3d1b00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294938128)));
label_3d1b04:
    // 0x3d1b04: 0x400013  mtlo        $v0
    ctx->pc = 0x3d1b04u;
    ctx->lo = GPR_U64(ctx, 2);
label_3d1b08:
    // 0x3d1b08: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3d1b0c:
    // 0x3d1b0c: 0xdc428e18  ld          $v0, -0x71E8($v0)
    ctx->pc = 0x3d1b0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294938136)));
label_3d1b10:
    // 0x3d1b10: 0x70400013  mtlo1       $v0
    ctx->pc = 0x3d1b10u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_3d1b14:
    // 0x3d1b14: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3d1b18:
    // 0x3d1b18: 0xdc428e20  ld          $v0, -0x71E0($v0)
    ctx->pc = 0x3d1b18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294938144)));
label_3d1b1c:
    // 0x3d1b1c: 0x400029  mtsa        $v0
    ctx->pc = 0x3d1b1cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_3d1b20:
    // 0x3d1b20: 0x40f  sync.p
    ctx->pc = 0x3d1b20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3d1b24:
    // 0x3d1b24: 0x3c1a0067  lui         $k0, 0x67
    ctx->pc = 0x3d1b24u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)103 << 16));
label_3d1b28:
    // 0x3d1b28: 0x275a8c00  addiu       $k0, $k0, -0x7400
    ctx->pc = 0x3d1b28u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294937600));
label_3d1b2c:
    // 0x3d1b2c: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x3d1b2cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_3d1b30:
    // 0x3d1b30: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x3d1b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_3d1b34:
    // 0x3d1b34: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x3d1b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_3d1b38:
    // 0x3d1b38: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x3d1b38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_3d1b3c:
    // 0x3d1b3c: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x3d1b3cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_3d1b40:
    // 0x3d1b40: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x3d1b40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_3d1b44:
    // 0x3d1b44: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x3d1b44u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_3d1b48:
    // 0x3d1b48: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x3d1b48u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_3d1b4c:
    // 0x3d1b4c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x3d1b4cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_3d1b50:
    // 0x3d1b50: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x3d1b50u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_3d1b54:
    // 0x3d1b54: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x3d1b54u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_3d1b58:
    // 0x3d1b58: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x3d1b58u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_3d1b5c:
    // 0x3d1b5c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x3d1b5cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_3d1b60:
    // 0x3d1b60: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x3d1b60u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_3d1b64:
    // 0x3d1b64: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x3d1b64u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_3d1b68:
    // 0x3d1b68: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x3d1b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_3d1b6c:
    // 0x3d1b6c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x3d1b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_3d1b70:
    // 0x3d1b70: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x3d1b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_3d1b74:
    // 0x3d1b74: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x3d1b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_3d1b78:
    // 0x3d1b78: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x3d1b78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_3d1b7c:
    // 0x3d1b7c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x3d1b7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_3d1b80:
    // 0x3d1b80: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x3d1b80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_3d1b84:
    // 0x3d1b84: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x3d1b84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_3d1b88:
    // 0x3d1b88: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x3d1b88u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_3d1b8c:
    // 0x3d1b8c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x3d1b8cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_3d1b90:
    // 0x3d1b90: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x3d1b90u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_3d1b94:
    // 0x3d1b94: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x3d1b94u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_3d1b98:
    // 0x3d1b98: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x3d1b98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_3d1b9c:
    // 0x3d1b9c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x3d1b9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_3d1ba0:
    // 0x3d1ba0: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x3d1ba0u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_3d1ba4:
    // 0x3d1ba4: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x3d1ba4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_3d1ba8:
    // 0x3d1ba8: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x3d1ba8u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_3d1bac:
    // 0x3d1bac: 0x40f  sync.p
    ctx->pc = 0x3d1bacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3d1bb0:
    // 0x3d1bb0: 0x42000018  eret
    ctx->pc = 0x3d1bb0u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_3d1bb4:
    // 0x3d1bb4: 0x0  nop
    ctx->pc = 0x3d1bb4u;
    // NOP
label_3d1bb8:
    // 0x3d1bb8: 0x0  nop
    ctx->pc = 0x3d1bb8u;
    // NOP
label_3d1bbc:
    // 0x3d1bbc: 0x0  nop
    ctx->pc = 0x3d1bbcu;
    // NOP
label_3d1bc0:
    // 0x3d1bc0: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x3d1bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
label_3d1bc4:
    // 0x3d1bc4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x3d1bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_3d1bc8:
    // 0x3d1bc8: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x3d1bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
label_3d1bcc:
    // 0x3d1bcc: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x3d1bccu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
label_3d1bd0:
    // 0x3d1bd0: 0x20f809  jalr        $at
label_3d1bd4:
    if (ctx->pc == 0x3D1BD4u) {
        ctx->pc = 0x3D1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BD0u;
        // 0x3d1bd4: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1BD8u;
        goto label_3d1bd8;
    }
    ctx->pc = 0x3D1BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x3D1BD8u);
        ctx->pc = 0x3D1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BD0u;
        // 0x3d1bd4: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1BD0u, 0x3D1BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1BD8u;
label_3d1bd8:
    // 0x3d1bd8: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x3d1bd8u;
    runtime->handleBreak(rdram, ctx);
label_3d1bdc:
    // 0x3d1bdc: 0x0  nop
    ctx->pc = 0x3d1bdcu;
    // NOP
label_3d1be0:
    // 0x3d1be0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3d1be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d1be4:
    // 0x3d1be4: 0x0  nop
    ctx->pc = 0x3d1be4u;
    // NOP
label_3d1be8:
    // 0x3d1be8: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x3d1be8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
label_3d1bec:
    // 0x3d1bec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d1becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d1bf0:
    // 0x3d1bf0: 0x8ce50098  lw          $a1, 0x98($a3)
    ctx->pc = 0x3d1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
label_3d1bf4:
    // 0x3d1bf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d1bf8:
    // 0x3d1bf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d1bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d1bfc:
    // 0x3d1bfc: 0x24e30098  addiu       $v1, $a3, 0x98
    ctx->pc = 0x3d1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 152));
label_3d1c00:
    // 0x3d1c00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d1c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3d1c04:
    // 0x3d1c04: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_3d1c08:
    if (ctx->pc == 0x3D1C08u) {
        ctx->pc = 0x3D1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C04u;
        // 0x3d1c08: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C0Cu;
        goto label_3d1c0c;
    }
    ctx->pc = 0x3D1C04u;
    {
        const bool branch_taken_0x3d1c04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C04u;
        // 0x3d1c08: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c04) {
            ctx->pc = 0x3D1C4Cu;
            goto label_3d1c4c;
        }
    }
    ctx->pc = 0x3D1C0Cu;
label_3d1c0c:
    // 0x3d1c0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d1c10:
    // 0x3d1c10: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3d1c14:
    if (ctx->pc == 0x3D1C14u) {
        ctx->pc = 0x3D1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C10u;
        // 0x3d1c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C18u;
        goto label_3d1c18;
    }
    ctx->pc = 0x3D1C10u;
    {
        const bool branch_taken_0x3d1c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C10u;
        // 0x3d1c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c10) {
            ctx->pc = 0x3D1C4Cu;
            goto label_3d1c4c;
        }
    }
    ctx->pc = 0x3D1C18u;
label_3d1c18:
    // 0x3d1c18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d1c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d1c1c:
    // 0x3d1c1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3d1c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c20:
    // 0x3d1c20: 0x24e40098  addiu       $a0, $a3, 0x98
    ctx->pc = 0x3d1c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 152));
label_3d1c24:
    // 0x3d1c24: 0x0  nop
    ctx->pc = 0x3d1c24u;
    // NOP
label_3d1c28:
    // 0x3d1c28: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x3d1c28u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_3d1c2c:
    // 0x3d1c2c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3d1c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d1c30:
    // 0x3d1c30: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3d1c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_3d1c34:
    // 0x3d1c34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d1c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3d1c38:
    // 0x3d1c38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3d1c3c:
    // 0x3d1c3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d1c40:
    // 0x3d1c40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d1c44:
    // 0x3d1c44: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_3d1c48:
    if (ctx->pc == 0x3D1C48u) {
        ctx->pc = 0x3D1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C44u;
        // 0x3d1c48: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C4Cu;
        goto label_3d1c4c;
    }
    ctx->pc = 0x3D1C44u;
    {
        const bool branch_taken_0x3d1c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1c44) {
            ctx->pc = 0x3D1C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1C44u;
            // 0x3d1c48: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1c28;
        }
    }
    ctx->pc = 0x3D1C4Cu;
label_3d1c4c:
    // 0x3d1c4c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x3d1c4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_3d1c50:
    // 0x3d1c50: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x3d1c50u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_3d1c54:
    // 0x3d1c54: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3d1c58:
    if (ctx->pc == 0x3D1C58u) {
        ctx->pc = 0x3D1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C54u;
        // 0x3d1c58: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C5Cu;
        goto label_3d1c5c;
    }
    ctx->pc = 0x3D1C54u;
    {
        const bool branch_taken_0x3d1c54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C54u;
        // 0x3d1c58: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c54) {
            ctx->pc = 0x3D1C84u;
            goto label_3d1c84;
        }
    }
    ctx->pc = 0x3D1C5Cu;
label_3d1c5c:
    // 0x3d1c5c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3d1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3d1c60:
    // 0x3d1c60: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x3d1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_3d1c64:
    // 0x3d1c64: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3d1c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d1c68:
    // 0x3d1c68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d1c6c:
    // 0x3d1c6c: 0x0  nop
    ctx->pc = 0x3d1c6cu;
    // NOP
label_3d1c70:
    // 0x3d1c70: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d1c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d1c74:
    // 0x3d1c74: 0x40f809  jalr        $v0
label_3d1c78:
    if (ctx->pc == 0x3D1C78u) {
        ctx->pc = 0x3D1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C74u;
        // 0x3d1c78: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C7Cu;
        goto label_3d1c7c;
    }
    ctx->pc = 0x3D1C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D1C7Cu);
        ctx->pc = 0x3D1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C74u;
        // 0x3d1c78: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1C74u, 0x3D1C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1C7Cu;
label_3d1c7c:
    // 0x3d1c7c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_3d1c80:
    if (ctx->pc == 0x3D1C80u) {
        ctx->pc = 0x3D1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C7Cu;
        // 0x3d1c80: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C84u;
        goto label_3d1c84;
    }
    ctx->pc = 0x3D1C7Cu;
    {
        const bool branch_taken_0x3d1c7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1c7c) {
            ctx->pc = 0x3D1C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1C7Cu;
            // 0x3d1c80: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1c70;
        }
    }
    ctx->pc = 0x3D1C84u;
label_3d1c84:
    // 0x3d1c84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d1c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1c88:
    // 0x3d1c88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d1c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1c8c:
    // 0x3d1c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d1c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1c90:
    // 0x3d1c90: 0x3e00008  jr          $ra
label_3d1c94:
    if (ctx->pc == 0x3D1C94u) {
        ctx->pc = 0x3D1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C90u;
        // 0x3d1c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1C98u;
        goto label_fallthrough_0x3d1c90;
    }
    ctx->pc = 0x3D1C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C90u;
        // 0x3d1c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d1c90:
    ctx->pc = 0x3D1C98u;
}
