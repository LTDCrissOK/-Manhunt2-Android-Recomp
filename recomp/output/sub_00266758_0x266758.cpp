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

// Function: sub_00266758
// Address: 0x266758 - 0x266c60
void sub_00266758_0x266758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266758_0x266758");
#endif

    switch (ctx->pc) {
        case 0x266758u: goto label_266758;
        case 0x26675cu: goto label_26675c;
        case 0x266760u: goto label_266760;
        case 0x266764u: goto label_266764;
        case 0x266768u: goto label_266768;
        case 0x26676cu: goto label_26676c;
        case 0x266770u: goto label_266770;
        case 0x266774u: goto label_266774;
        case 0x266778u: goto label_266778;
        case 0x26677cu: goto label_26677c;
        case 0x266780u: goto label_266780;
        case 0x266784u: goto label_266784;
        case 0x266788u: goto label_266788;
        case 0x26678cu: goto label_26678c;
        case 0x266790u: goto label_266790;
        case 0x266794u: goto label_266794;
        case 0x266798u: goto label_266798;
        case 0x26679cu: goto label_26679c;
        case 0x2667a0u: goto label_2667a0;
        case 0x2667a4u: goto label_2667a4;
        case 0x2667a8u: goto label_2667a8;
        case 0x2667acu: goto label_2667ac;
        case 0x2667b0u: goto label_2667b0;
        case 0x2667b4u: goto label_2667b4;
        case 0x2667b8u: goto label_2667b8;
        case 0x2667bcu: goto label_2667bc;
        case 0x2667c0u: goto label_2667c0;
        case 0x2667c4u: goto label_2667c4;
        case 0x2667c8u: goto label_2667c8;
        case 0x2667ccu: goto label_2667cc;
        case 0x2667d0u: goto label_2667d0;
        case 0x2667d4u: goto label_2667d4;
        case 0x2667d8u: goto label_2667d8;
        case 0x2667dcu: goto label_2667dc;
        case 0x2667e0u: goto label_2667e0;
        case 0x2667e4u: goto label_2667e4;
        case 0x2667e8u: goto label_2667e8;
        case 0x2667ecu: goto label_2667ec;
        case 0x2667f0u: goto label_2667f0;
        case 0x2667f4u: goto label_2667f4;
        case 0x2667f8u: goto label_2667f8;
        case 0x2667fcu: goto label_2667fc;
        case 0x266800u: goto label_266800;
        case 0x266804u: goto label_266804;
        case 0x266808u: goto label_266808;
        case 0x26680cu: goto label_26680c;
        case 0x266810u: goto label_266810;
        case 0x266814u: goto label_266814;
        case 0x266818u: goto label_266818;
        case 0x26681cu: goto label_26681c;
        case 0x266820u: goto label_266820;
        case 0x266824u: goto label_266824;
        case 0x266828u: goto label_266828;
        case 0x26682cu: goto label_26682c;
        case 0x266830u: goto label_266830;
        case 0x266834u: goto label_266834;
        case 0x266838u: goto label_266838;
        case 0x26683cu: goto label_26683c;
        case 0x266840u: goto label_266840;
        case 0x266844u: goto label_266844;
        case 0x266848u: goto label_266848;
        case 0x26684cu: goto label_26684c;
        case 0x266850u: goto label_266850;
        case 0x266854u: goto label_266854;
        case 0x266858u: goto label_266858;
        case 0x26685cu: goto label_26685c;
        case 0x266860u: goto label_266860;
        case 0x266864u: goto label_266864;
        case 0x266868u: goto label_266868;
        case 0x26686cu: goto label_26686c;
        case 0x266870u: goto label_266870;
        case 0x266874u: goto label_266874;
        case 0x266878u: goto label_266878;
        case 0x26687cu: goto label_26687c;
        case 0x266880u: goto label_266880;
        case 0x266884u: goto label_266884;
        case 0x266888u: goto label_266888;
        case 0x26688cu: goto label_26688c;
        case 0x266890u: goto label_266890;
        case 0x266894u: goto label_266894;
        case 0x266898u: goto label_266898;
        case 0x26689cu: goto label_26689c;
        case 0x2668a0u: goto label_2668a0;
        case 0x2668a4u: goto label_2668a4;
        case 0x2668a8u: goto label_2668a8;
        case 0x2668acu: goto label_2668ac;
        case 0x2668b0u: goto label_2668b0;
        case 0x2668b4u: goto label_2668b4;
        case 0x2668b8u: goto label_2668b8;
        case 0x2668bcu: goto label_2668bc;
        case 0x2668c0u: goto label_2668c0;
        case 0x2668c4u: goto label_2668c4;
        case 0x2668c8u: goto label_2668c8;
        case 0x2668ccu: goto label_2668cc;
        case 0x2668d0u: goto label_2668d0;
        case 0x2668d4u: goto label_2668d4;
        case 0x2668d8u: goto label_2668d8;
        case 0x2668dcu: goto label_2668dc;
        case 0x2668e0u: goto label_2668e0;
        case 0x2668e4u: goto label_2668e4;
        case 0x2668e8u: goto label_2668e8;
        case 0x2668ecu: goto label_2668ec;
        case 0x2668f0u: goto label_2668f0;
        case 0x2668f4u: goto label_2668f4;
        case 0x2668f8u: goto label_2668f8;
        case 0x2668fcu: goto label_2668fc;
        case 0x266900u: goto label_266900;
        case 0x266904u: goto label_266904;
        case 0x266908u: goto label_266908;
        case 0x26690cu: goto label_26690c;
        case 0x266910u: goto label_266910;
        case 0x266914u: goto label_266914;
        case 0x266918u: goto label_266918;
        case 0x26691cu: goto label_26691c;
        case 0x266920u: goto label_266920;
        case 0x266924u: goto label_266924;
        case 0x266928u: goto label_266928;
        case 0x26692cu: goto label_26692c;
        case 0x266930u: goto label_266930;
        case 0x266934u: goto label_266934;
        case 0x266938u: goto label_266938;
        case 0x26693cu: goto label_26693c;
        case 0x266940u: goto label_266940;
        case 0x266944u: goto label_266944;
        case 0x266948u: goto label_266948;
        case 0x26694cu: goto label_26694c;
        case 0x266950u: goto label_266950;
        case 0x266954u: goto label_266954;
        case 0x266958u: goto label_266958;
        case 0x26695cu: goto label_26695c;
        case 0x266960u: goto label_266960;
        case 0x266964u: goto label_266964;
        case 0x266968u: goto label_266968;
        case 0x26696cu: goto label_26696c;
        case 0x266970u: goto label_266970;
        case 0x266974u: goto label_266974;
        case 0x266978u: goto label_266978;
        case 0x26697cu: goto label_26697c;
        case 0x266980u: goto label_266980;
        case 0x266984u: goto label_266984;
        case 0x266988u: goto label_266988;
        case 0x26698cu: goto label_26698c;
        case 0x266990u: goto label_266990;
        case 0x266994u: goto label_266994;
        case 0x266998u: goto label_266998;
        case 0x26699cu: goto label_26699c;
        case 0x2669a0u: goto label_2669a0;
        case 0x2669a4u: goto label_2669a4;
        case 0x2669a8u: goto label_2669a8;
        case 0x2669acu: goto label_2669ac;
        case 0x2669b0u: goto label_2669b0;
        case 0x2669b4u: goto label_2669b4;
        case 0x2669b8u: goto label_2669b8;
        case 0x2669bcu: goto label_2669bc;
        case 0x2669c0u: goto label_2669c0;
        case 0x2669c4u: goto label_2669c4;
        case 0x2669c8u: goto label_2669c8;
        case 0x2669ccu: goto label_2669cc;
        case 0x2669d0u: goto label_2669d0;
        case 0x2669d4u: goto label_2669d4;
        case 0x2669d8u: goto label_2669d8;
        case 0x2669dcu: goto label_2669dc;
        case 0x2669e0u: goto label_2669e0;
        case 0x2669e4u: goto label_2669e4;
        case 0x2669e8u: goto label_2669e8;
        case 0x2669ecu: goto label_2669ec;
        case 0x2669f0u: goto label_2669f0;
        case 0x2669f4u: goto label_2669f4;
        case 0x2669f8u: goto label_2669f8;
        case 0x2669fcu: goto label_2669fc;
        case 0x266a00u: goto label_266a00;
        case 0x266a04u: goto label_266a04;
        case 0x266a08u: goto label_266a08;
        case 0x266a0cu: goto label_266a0c;
        case 0x266a10u: goto label_266a10;
        case 0x266a14u: goto label_266a14;
        case 0x266a18u: goto label_266a18;
        case 0x266a1cu: goto label_266a1c;
        case 0x266a20u: goto label_266a20;
        case 0x266a24u: goto label_266a24;
        case 0x266a28u: goto label_266a28;
        case 0x266a2cu: goto label_266a2c;
        case 0x266a30u: goto label_266a30;
        case 0x266a34u: goto label_266a34;
        case 0x266a38u: goto label_266a38;
        case 0x266a3cu: goto label_266a3c;
        case 0x266a40u: goto label_266a40;
        case 0x266a44u: goto label_266a44;
        case 0x266a48u: goto label_266a48;
        case 0x266a4cu: goto label_266a4c;
        case 0x266a50u: goto label_266a50;
        case 0x266a54u: goto label_266a54;
        case 0x266a58u: goto label_266a58;
        case 0x266a5cu: goto label_266a5c;
        case 0x266a60u: goto label_266a60;
        case 0x266a64u: goto label_266a64;
        case 0x266a68u: goto label_266a68;
        case 0x266a6cu: goto label_266a6c;
        case 0x266a70u: goto label_266a70;
        case 0x266a74u: goto label_266a74;
        case 0x266a78u: goto label_266a78;
        case 0x266a7cu: goto label_266a7c;
        case 0x266a80u: goto label_266a80;
        case 0x266a84u: goto label_266a84;
        case 0x266a88u: goto label_266a88;
        case 0x266a8cu: goto label_266a8c;
        case 0x266a90u: goto label_266a90;
        case 0x266a94u: goto label_266a94;
        case 0x266a98u: goto label_266a98;
        case 0x266a9cu: goto label_266a9c;
        case 0x266aa0u: goto label_266aa0;
        case 0x266aa4u: goto label_266aa4;
        case 0x266aa8u: goto label_266aa8;
        case 0x266aacu: goto label_266aac;
        case 0x266ab0u: goto label_266ab0;
        case 0x266ab4u: goto label_266ab4;
        case 0x266ab8u: goto label_266ab8;
        case 0x266abcu: goto label_266abc;
        case 0x266ac0u: goto label_266ac0;
        case 0x266ac4u: goto label_266ac4;
        case 0x266ac8u: goto label_266ac8;
        case 0x266accu: goto label_266acc;
        case 0x266ad0u: goto label_266ad0;
        case 0x266ad4u: goto label_266ad4;
        case 0x266ad8u: goto label_266ad8;
        case 0x266adcu: goto label_266adc;
        case 0x266ae0u: goto label_266ae0;
        case 0x266ae4u: goto label_266ae4;
        case 0x266ae8u: goto label_266ae8;
        case 0x266aecu: goto label_266aec;
        case 0x266af0u: goto label_266af0;
        case 0x266af4u: goto label_266af4;
        case 0x266af8u: goto label_266af8;
        case 0x266afcu: goto label_266afc;
        case 0x266b00u: goto label_266b00;
        case 0x266b04u: goto label_266b04;
        case 0x266b08u: goto label_266b08;
        case 0x266b0cu: goto label_266b0c;
        case 0x266b10u: goto label_266b10;
        case 0x266b14u: goto label_266b14;
        case 0x266b18u: goto label_266b18;
        case 0x266b1cu: goto label_266b1c;
        case 0x266b20u: goto label_266b20;
        case 0x266b24u: goto label_266b24;
        case 0x266b28u: goto label_266b28;
        case 0x266b2cu: goto label_266b2c;
        case 0x266b30u: goto label_266b30;
        case 0x266b34u: goto label_266b34;
        case 0x266b38u: goto label_266b38;
        case 0x266b3cu: goto label_266b3c;
        case 0x266b40u: goto label_266b40;
        case 0x266b44u: goto label_266b44;
        case 0x266b48u: goto label_266b48;
        case 0x266b4cu: goto label_266b4c;
        case 0x266b50u: goto label_266b50;
        case 0x266b54u: goto label_266b54;
        case 0x266b58u: goto label_266b58;
        case 0x266b5cu: goto label_266b5c;
        case 0x266b60u: goto label_266b60;
        case 0x266b64u: goto label_266b64;
        case 0x266b68u: goto label_266b68;
        case 0x266b6cu: goto label_266b6c;
        case 0x266b70u: goto label_266b70;
        case 0x266b74u: goto label_266b74;
        case 0x266b78u: goto label_266b78;
        case 0x266b7cu: goto label_266b7c;
        case 0x266b80u: goto label_266b80;
        case 0x266b84u: goto label_266b84;
        case 0x266b88u: goto label_266b88;
        case 0x266b8cu: goto label_266b8c;
        case 0x266b90u: goto label_266b90;
        case 0x266b94u: goto label_266b94;
        case 0x266b98u: goto label_266b98;
        case 0x266b9cu: goto label_266b9c;
        case 0x266ba0u: goto label_266ba0;
        case 0x266ba4u: goto label_266ba4;
        case 0x266ba8u: goto label_266ba8;
        case 0x266bacu: goto label_266bac;
        case 0x266bb0u: goto label_266bb0;
        case 0x266bb4u: goto label_266bb4;
        case 0x266bb8u: goto label_266bb8;
        case 0x266bbcu: goto label_266bbc;
        case 0x266bc0u: goto label_266bc0;
        case 0x266bc4u: goto label_266bc4;
        case 0x266bc8u: goto label_266bc8;
        case 0x266bccu: goto label_266bcc;
        case 0x266bd0u: goto label_266bd0;
        case 0x266bd4u: goto label_266bd4;
        case 0x266bd8u: goto label_266bd8;
        case 0x266bdcu: goto label_266bdc;
        case 0x266be0u: goto label_266be0;
        case 0x266be4u: goto label_266be4;
        case 0x266be8u: goto label_266be8;
        case 0x266becu: goto label_266bec;
        case 0x266bf0u: goto label_266bf0;
        case 0x266bf4u: goto label_266bf4;
        case 0x266bf8u: goto label_266bf8;
        case 0x266bfcu: goto label_266bfc;
        case 0x266c00u: goto label_266c00;
        case 0x266c04u: goto label_266c04;
        case 0x266c08u: goto label_266c08;
        case 0x266c0cu: goto label_266c0c;
        case 0x266c10u: goto label_266c10;
        case 0x266c14u: goto label_266c14;
        case 0x266c18u: goto label_266c18;
        case 0x266c1cu: goto label_266c1c;
        case 0x266c20u: goto label_266c20;
        case 0x266c24u: goto label_266c24;
        case 0x266c28u: goto label_266c28;
        case 0x266c2cu: goto label_266c2c;
        case 0x266c30u: goto label_266c30;
        case 0x266c34u: goto label_266c34;
        case 0x266c38u: goto label_266c38;
        case 0x266c3cu: goto label_266c3c;
        case 0x266c40u: goto label_266c40;
        case 0x266c44u: goto label_266c44;
        case 0x266c48u: goto label_266c48;
        case 0x266c4cu: goto label_266c4c;
        case 0x266c50u: goto label_266c50;
        case 0x266c54u: goto label_266c54;
        case 0x266c58u: goto label_266c58;
        case 0x266c5cu: goto label_266c5c;
        default: break;
    }

    ctx->pc = 0x266758u;

label_266758:
    // 0x266758: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x266758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_26675c:
    // 0x26675c: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x26675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_266760:
    // 0x266760: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x266760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
label_266764:
    // 0x266764: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x266764u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_266768:
    // 0x266768: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x266768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
label_26676c:
    // 0x26676c: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x26676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
label_266770:
    // 0x266770: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x266770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
label_266774:
    // 0x266774: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x266774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
label_266778:
    // 0x266778: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x266778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
label_26677c:
    // 0x26677c: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x26677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
label_266780:
    // 0x266780: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x266780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_266784:
    // 0x266784: 0x8ec2032c  lw          $v0, 0x32C($s6)
    ctx->pc = 0x266784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 812)));
label_266788:
    // 0x266788: 0x14400129  bnez        $v0, . + 4 + (0x129 << 2)
label_26678c:
    if (ctx->pc == 0x26678Cu) {
        ctx->pc = 0x26678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266788u;
        // 0x26678c: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266790u;
        goto label_266790;
    }
    ctx->pc = 0x266788u;
    {
        const bool branch_taken_0x266788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266788u;
        // 0x26678c: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266788) {
            ctx->pc = 0x266C30u;
            goto label_266c30;
        }
    }
    ctx->pc = 0x266790u;
label_266790:
    // 0x266790: 0xaed7032c  sw          $s7, 0x32C($s6)
    ctx->pc = 0x266790u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 812), GPR_U32(ctx, 23));
label_266794:
    // 0x266794: 0xaef6032c  sw          $s6, 0x32C($s7)
    ctx->pc = 0x266794u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 812), GPR_U32(ctx, 22));
label_266798:
    // 0x266798: 0x8ee30218  lw          $v1, 0x218($s7)
    ctx->pc = 0x266798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 536)));
label_26679c:
    // 0x26679c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x26679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2667a0:
    // 0x2667a0: 0x40f809  jalr        $v0
label_2667a4:
    if (ctx->pc == 0x2667A4u) {
        ctx->pc = 0x2667A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667A0u;
        // 0x2667a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2667A8u;
        goto label_2667a8;
    }
    ctx->pc = 0x2667A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2667A8u);
        ctx->pc = 0x2667A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667A0u;
        // 0x2667a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2667A0u, 0x2667A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2667A8u;
label_2667a8:
    // 0x2667a8: 0x8ec30218  lw          $v1, 0x218($s6)
    ctx->pc = 0x2667a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 536)));
label_2667ac:
    // 0x2667ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2667acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2667b0:
    // 0x2667b0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2667b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2667b4:
    // 0x2667b4: 0x40f809  jalr        $v0
label_2667b8:
    if (ctx->pc == 0x2667B8u) {
        ctx->pc = 0x2667B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667B4u;
        // 0x2667b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2667BCu;
        goto label_2667bc;
    }
    ctx->pc = 0x2667B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2667BCu);
        ctx->pc = 0x2667B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667B4u;
        // 0x2667b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2667B4u, 0x2667BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2667BCu;
label_2667bc:
    // 0x2667bc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2667bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2667c0:
    // 0x2667c0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2667c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2667c4:
    // 0x2667c4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2667c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2667c8:
    // 0x2667c8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2667c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2667cc:
    // 0x2667cc: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2667ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2667d0:
    // 0x2667d0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2667d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2667d4:
    // 0x2667d4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2667d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2667d8:
    // 0x2667d8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2667d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2667dc:
    // 0x2667dc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2667dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2667e0:
    // 0x2667e0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2667e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2667e4:
    // 0x2667e4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2667e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2667e8:
    // 0x2667e8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2667e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2667ec:
    // 0x2667ec: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2667ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2667f0:
    // 0x2667f0: 0x8ec30218  lw          $v1, 0x218($s6)
    ctx->pc = 0x2667f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 536)));
label_2667f4:
    // 0x2667f4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2667f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2667f8:
    // 0x2667f8: 0x40f809  jalr        $v0
label_2667fc:
    if (ctx->pc == 0x2667FCu) {
        ctx->pc = 0x2667FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667F8u;
        // 0x2667fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266800u;
        goto label_266800;
    }
    ctx->pc = 0x2667F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x266800u);
        ctx->pc = 0x2667FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667F8u;
        // 0x2667fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2667F8u, 0x266800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266800u;
label_266800:
    // 0x266800: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x266800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_266804:
    // 0x266804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x266804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_266808:
    // 0x266808: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x266808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26680c:
    // 0x26680c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x26680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266810:
    // 0x266810: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x266810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_266814:
    // 0x266814: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x266814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266818:
    // 0x266818: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x266818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26681c:
    // 0x26681c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x26681cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_266820:
    // 0x266820: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x266820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266824:
    // 0x266824: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x266824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_266828:
    // 0x266828: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x266828u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_26682c:
    // 0x26682c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26682cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_266830:
    // 0x266830: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x266830u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_266834:
    // 0x266834: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x266834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_266838:
    // 0x266838: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x266838u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26683c:
    // 0x26683c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_266840:
    // 0x266840: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x266840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_266844:
    // 0x266844: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x266844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_266848:
    // 0x266848: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x266848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26684c:
    // 0x26684c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x26684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_266850:
    // 0x266850: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x266850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266854:
    // 0x266854: 0x26d00310  addiu       $s0, $s6, 0x310
    ctx->pc = 0x266854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 784));
label_266858:
    // 0x266858: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x266858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26685c:
    // 0x26685c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x26685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266860:
    // 0x266860: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x266860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266864:
    // 0x266864: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x266864u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_266868:
    // 0x266868: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x266868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_26686c:
    // 0x26686c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26686cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_266870:
    // 0x266870: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x266870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_266874:
    // 0x266874: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x266874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_266878:
    // 0x266878: 0xfac10310  sqc2        $vf1, 0x310($s6)
    ctx->pc = 0x266878u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 784), _mm_castps_si128(ctx->vu0_vf[1]));
label_26687c:
    // 0x26687c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26687cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_266880:
    // 0x266880: 0xfae10310  sqc2        $vf1, 0x310($s7)
    ctx->pc = 0x266880u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 784), _mm_castps_si128(ctx->vu0_vf[1]));
label_266884:
    // 0x266884: 0x26d502f0  addiu       $s5, $s6, 0x2F0
    ctx->pc = 0x266884u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 752));
label_266888:
    // 0x266888: 0x26d30300  addiu       $s3, $s6, 0x300
    ctx->pc = 0x266888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 768));
label_26688c:
    // 0x26688c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26688cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_266890:
    // 0x266890: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x266890u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_266894:
    // 0x266894: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x266894u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_266898:
    // 0x266898: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x266898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_26689c:
    // 0x26689c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x26689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2668a0:
    // 0x2668a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2668a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2668a4:
    // 0x2668a4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2668a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2668a8:
    // 0x2668a8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2668a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2668ac:
    // 0x2668ac: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x2668acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2668b0:
    // 0x2668b0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2668b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2668b4:
    // 0x2668b4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2668b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2668b8:
    // 0x2668b8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2668b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2668bc:
    // 0x2668bc: 0xc0f6a96  jal         func_3DAA58
label_2668c0:
    if (ctx->pc == 0x2668C0u) {
        ctx->pc = 0x2668C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668BCu;
        // 0x2668c0: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668C4u;
        goto label_2668c4;
    }
    ctx->pc = 0x2668BCu;
    SET_GPR_U32(ctx, 31, 0x2668C4u);
    ctx->pc = 0x2668C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668BCu;
    // 0x2668c0: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2668BCu, 0x2668C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668C4u;
label_2668c4:
    // 0x2668c4: 0xc0f6a96  jal         func_3DAA58
label_2668c8:
    if (ctx->pc == 0x2668C8u) {
        ctx->pc = 0x2668C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668C4u;
        // 0x2668c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668CCu;
        goto label_2668cc;
    }
    ctx->pc = 0x2668C4u;
    SET_GPR_U32(ctx, 31, 0x2668CCu);
    ctx->pc = 0x2668C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668C4u;
    // 0x2668c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2668C4u, 0x2668CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668CCu;
label_2668cc:
    // 0x2668cc: 0xc0f6a96  jal         func_3DAA58
label_2668d0:
    if (ctx->pc == 0x2668D0u) {
        ctx->pc = 0x2668D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668CCu;
        // 0x2668d0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668D4u;
        goto label_2668d4;
    }
    ctx->pc = 0x2668CCu;
    SET_GPR_U32(ctx, 31, 0x2668D4u);
    ctx->pc = 0x2668D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668CCu;
    // 0x2668d0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2668CCu, 0x2668D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668D4u;
label_2668d4:
    // 0x2668d4: 0xc0f6a96  jal         func_3DAA58
label_2668d8:
    if (ctx->pc == 0x2668D8u) {
        ctx->pc = 0x2668D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668D4u;
        // 0x2668d8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2668DCu;
        goto label_2668dc;
    }
    ctx->pc = 0x2668D4u;
    SET_GPR_U32(ctx, 31, 0x2668DCu);
    ctx->pc = 0x2668D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668D4u;
    // 0x2668d8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2668D4u, 0x2668DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668DCu;
label_2668dc:
    // 0x2668dc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2668dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2668e0:
    // 0x2668e0: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2668e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2668e4:
    // 0x2668e4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2668e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2668e8:
    // 0x2668e8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2668e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2668ec:
    // 0x2668ec: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2668ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2668f0:
    // 0x2668f0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2668f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2668f4:
    // 0x2668f4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2668f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2668f8:
    // 0x2668f8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2668f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2668fc:
    // 0x2668fc: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x2668fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266900:
    // 0x266900: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x266900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_266904:
    // 0x266904: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x266904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_266908:
    // 0x266908: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x266908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26690c:
    // 0x26690c: 0xe7a4006c  swc1        $f4, 0x6C($sp)
    ctx->pc = 0x26690cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_266910:
    // 0x266910: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x266910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266914:
    // 0x266914: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x266914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266918:
    // 0x266918: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x266918u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_26691c:
    // 0x26691c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x26691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266920:
    // 0x266920: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x266920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266924:
    // 0x266924: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x266924u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_266928:
    // 0x266928: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x266928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26692c:
    // 0x26692c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x26692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266930:
    // 0x266930: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x266930u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_266934:
    // 0x266934: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x266934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266938:
    // 0x266938: 0x0  nop
    ctx->pc = 0x266938u;
    // NOP
label_26693c:
    // 0x26693c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26693cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_266940:
    // 0x266940: 0x0  nop
    ctx->pc = 0x266940u;
    // NOP
label_266944:
    // 0x266944: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_266948:
    if (ctx->pc == 0x266948u) {
        ctx->pc = 0x266948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266944u;
        // 0x266948: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26694Cu;
        goto label_26694c;
    }
    ctx->pc = 0x266944u;
    {
        const bool branch_taken_0x266944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266944u;
        // 0x266948: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266944) {
            ctx->pc = 0x26695Cu;
            goto label_26695c;
        }
    }
    ctx->pc = 0x26694Cu;
label_26694c:
    // 0x26694c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x26694cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_266950:
    // 0x266950: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x266950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_266954:
    // 0x266954: 0x10000003  b           . + 4 + (0x3 << 2)
label_266958:
    if (ctx->pc == 0x266958u) {
        ctx->pc = 0x26695Cu;
        goto label_26695c;
    }
    ctx->pc = 0x266954u;
    {
        const bool branch_taken_0x266954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266954) {
            ctx->pc = 0x266964u;
            goto label_266964;
        }
    }
    ctx->pc = 0x26695Cu;
label_26695c:
    // 0x26695c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x26695cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_266960:
    // 0x266960: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x266960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_266964:
    // 0x266964: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x266964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_266968:
    // 0x266968: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x266968u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26696c:
    // 0x26696c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26696cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_266970:
    // 0x266970: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x266970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_266974:
    // 0x266974: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x266974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266978:
    // 0x266978: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x266978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26697c:
    // 0x26697c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x26697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266980:
    // 0x266980: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x266980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266984:
    // 0x266984: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x266984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_266988:
    // 0x266988: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x266988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26698c:
    // 0x26698c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x26698cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_266990:
    // 0x266990: 0xe7a4006c  swc1        $f4, 0x6C($sp)
    ctx->pc = 0x266990u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_266994:
    // 0x266994: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x266994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266998:
    // 0x266998: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x266998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26699c:
    // 0x26699c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x26699cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2669a0:
    // 0x2669a0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2669a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2669a4:
    // 0x2669a4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2669a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2669a8:
    // 0x2669a8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2669a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2669ac:
    // 0x2669ac: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2669acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2669b0:
    // 0x2669b0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2669b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2669b4:
    // 0x2669b4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2669b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2669b8:
    // 0x2669b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2669b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2669bc:
    // 0x2669bc: 0x0  nop
    ctx->pc = 0x2669bcu;
    // NOP
label_2669c0:
    // 0x2669c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2669c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2669c4:
    // 0x2669c4: 0x0  nop
    ctx->pc = 0x2669c4u;
    // NOP
label_2669c8:
    // 0x2669c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2669cc:
    if (ctx->pc == 0x2669CCu) {
        ctx->pc = 0x2669D0u;
        goto label_2669d0;
    }
    ctx->pc = 0x2669C8u;
    {
        const bool branch_taken_0x2669c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2669c8) {
            ctx->pc = 0x2669E0u;
            goto label_2669e0;
        }
    }
    ctx->pc = 0x2669D0u;
label_2669d0:
    // 0x2669d0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2669d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2669d4:
    // 0x2669d4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2669d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2669d8:
    // 0x2669d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2669dc:
    if (ctx->pc == 0x2669DCu) {
        ctx->pc = 0x2669DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669D8u;
        // 0x2669dc: 0x26e202f0  addiu       $v0, $s7, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2669E0u;
        goto label_2669e0;
    }
    ctx->pc = 0x2669D8u;
    {
        const bool branch_taken_0x2669d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669D8u;
        // 0x2669dc: 0x26e202f0  addiu       $v0, $s7, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669d8) {
            ctx->pc = 0x2669ECu;
            goto label_2669ec;
        }
    }
    ctx->pc = 0x2669E0u;
label_2669e0:
    // 0x2669e0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2669e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2669e4:
    // 0x2669e4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2669e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2669e8:
    // 0x2669e8: 0x26e202f0  addiu       $v0, $s7, 0x2F0
    ctx->pc = 0x2669e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 752));
label_2669ec:
    // 0x2669ec: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2669ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2669f0:
    // 0x2669f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2669f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2669f4:
    // 0x2669f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2669f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2669f8:
    // 0x2669f8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2669f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2669fc:
    // 0x2669fc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2669fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266a00:
    // 0x266a00: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x266a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266a04:
    // 0x266a04: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x266a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266a08:
    // 0x266a08: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x266a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266a0c:
    // 0x266a0c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x266a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_266a10:
    // 0x266a10: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x266a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_266a14:
    // 0x266a14: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x266a14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_266a18:
    // 0x266a18: 0xe7a4006c  swc1        $f4, 0x6C($sp)
    ctx->pc = 0x266a18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_266a1c:
    // 0x266a1c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x266a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266a20:
    // 0x266a20: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x266a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266a24:
    // 0x266a24: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x266a24u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_266a28:
    // 0x266a28: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x266a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266a2c:
    // 0x266a2c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x266a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266a30:
    // 0x266a30: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x266a30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_266a34:
    // 0x266a34: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x266a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266a38:
    // 0x266a38: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x266a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266a3c:
    // 0x266a3c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x266a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_266a40:
    // 0x266a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x266a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266a44:
    // 0x266a44: 0x0  nop
    ctx->pc = 0x266a44u;
    // NOP
label_266a48:
    // 0x266a48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x266a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_266a4c:
    // 0x266a4c: 0x0  nop
    ctx->pc = 0x266a4cu;
    // NOP
label_266a50:
    // 0x266a50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_266a54:
    if (ctx->pc == 0x266A54u) {
        ctx->pc = 0x266A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A50u;
        // 0x266a54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A58u;
        goto label_266a58;
    }
    ctx->pc = 0x266A50u;
    {
        const bool branch_taken_0x266a50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A50u;
        // 0x266a54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a50) {
            ctx->pc = 0x266A68u;
            goto label_266a68;
        }
    }
    ctx->pc = 0x266A58u;
label_266a58:
    // 0x266a58: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x266a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_266a5c:
    // 0x266a5c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x266a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_266a60:
    // 0x266a60: 0x10000004  b           . + 4 + (0x4 << 2)
label_266a64:
    if (ctx->pc == 0x266A64u) {
        ctx->pc = 0x266A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A60u;
        // 0x266a64: 0x26e20300  addiu       $v0, $s7, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266A68u;
        goto label_266a68;
    }
    ctx->pc = 0x266A60u;
    {
        const bool branch_taken_0x266a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A60u;
        // 0x266a64: 0x26e20300  addiu       $v0, $s7, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a60) {
            ctx->pc = 0x266A74u;
            goto label_266a74;
        }
    }
    ctx->pc = 0x266A68u;
label_266a68:
    // 0x266a68: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x266a68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_266a6c:
    // 0x266a6c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x266a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_266a70:
    // 0x266a70: 0x26e20300  addiu       $v0, $s7, 0x300
    ctx->pc = 0x266a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 768));
label_266a74:
    // 0x266a74: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x266a74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_266a78:
    // 0x266a78: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x266a78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_266a7c:
    // 0x266a7c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x266a7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_266a80:
    // 0x266a80: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x266a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_266a84:
    // 0x266a84: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x266a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266a88:
    // 0x266a88: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x266a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266a8c:
    // 0x266a8c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x266a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266a90:
    // 0x266a90: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x266a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266a94:
    // 0x266a94: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x266a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_266a98:
    // 0x266a98: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x266a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_266a9c:
    // 0x266a9c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x266a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_266aa0:
    // 0x266aa0: 0xe7a4006c  swc1        $f4, 0x6C($sp)
    ctx->pc = 0x266aa0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_266aa4:
    // 0x266aa4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x266aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266aa8:
    // 0x266aa8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x266aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266aac:
    // 0x266aac: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x266aacu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_266ab0:
    // 0x266ab0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x266ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266ab4:
    // 0x266ab4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x266ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266ab8:
    // 0x266ab8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x266ab8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_266abc:
    // 0x266abc: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x266abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266ac0:
    // 0x266ac0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x266ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266ac4:
    // 0x266ac4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x266ac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_266ac8:
    // 0x266ac8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x266ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266acc:
    // 0x266acc: 0x0  nop
    ctx->pc = 0x266accu;
    // NOP
label_266ad0:
    // 0x266ad0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x266ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_266ad4:
    // 0x266ad4: 0x0  nop
    ctx->pc = 0x266ad4u;
    // NOP
label_266ad8:
    // 0x266ad8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_266adc:
    if (ctx->pc == 0x266ADCu) {
        ctx->pc = 0x266ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AD8u;
        // 0x266adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266AE0u;
        goto label_266ae0;
    }
    ctx->pc = 0x266AD8u;
    {
        const bool branch_taken_0x266ad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AD8u;
        // 0x266adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ad8) {
            ctx->pc = 0x266AF0u;
            goto label_266af0;
        }
    }
    ctx->pc = 0x266AE0u;
label_266ae0:
    // 0x266ae0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x266ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_266ae4:
    // 0x266ae4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x266ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_266ae8:
    // 0x266ae8: 0x10000004  b           . + 4 + (0x4 << 2)
label_266aec:
    if (ctx->pc == 0x266AECu) {
        ctx->pc = 0x266AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AE8u;
        // 0x266aec: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266AF0u;
        goto label_266af0;
    }
    ctx->pc = 0x266AE8u;
    {
        const bool branch_taken_0x266ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AE8u;
        // 0x266aec: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ae8) {
            ctx->pc = 0x266AFCu;
            goto label_266afc;
        }
    }
    ctx->pc = 0x266AF0u;
label_266af0:
    // 0x266af0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x266af0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_266af4:
    // 0x266af4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x266af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_266af8:
    // 0x266af8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x266af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_266afc:
    // 0x266afc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x266afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_266b00:
    // 0x266b00: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x266b00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_266b04:
    // 0x266b04: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x266b04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_266b08:
    // 0x266b08: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x266b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_266b0c:
    // 0x266b0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x266b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_266b10:
    // 0x266b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x266b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_266b14:
    // 0x266b14: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x266b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_266b18:
    // 0x266b18: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x266b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266b1c:
    // 0x266b1c: 0xc7a70094  lwc1        $f7, 0x94($sp)
    ctx->pc = 0x266b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_266b20:
    // 0x266b20: 0xc7a80098  lwc1        $f8, 0x98($sp)
    ctx->pc = 0x266b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_266b24:
    // 0x266b24: 0x46001142  mul.s       $f5, $f2, $f0
    ctx->pc = 0x266b24u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_266b28:
    // 0x266b28: 0xc7a6009c  lwc1        $f6, 0x9C($sp)
    ctx->pc = 0x266b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_266b2c:
    // 0x266b2c: 0x460038c2  mul.s       $f3, $f7, $f0
    ctx->pc = 0x266b2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_266b30:
    // 0x266b30: 0x46004102  mul.s       $f4, $f8, $f0
    ctx->pc = 0x266b30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_266b34:
    // 0x266b34: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x266b34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_266b38:
    // 0x266b38: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x266b38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_266b3c:
    // 0x266b3c: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x266b3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_266b40:
    // 0x266b40: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x266b40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_266b44:
    // 0x266b44: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x266b44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_266b48:
    // 0x266b48: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x266b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_266b4c:
    // 0x266b4c: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x266b4cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_266b50:
    // 0x266b50: 0xe7a80088  swc1        $f8, 0x88($sp)
    ctx->pc = 0x266b50u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_266b54:
    // 0x266b54: 0xe7a6008c  swc1        $f6, 0x8C($sp)
    ctx->pc = 0x266b54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_266b58:
    // 0x266b58: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x266b58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_266b5c:
    // 0x266b5c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x266b5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_266b60:
    // 0x266b60: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x266b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_266b64:
    // 0x266b64: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x266b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_266b68:
    // 0x266b68: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x266b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266b6c:
    // 0x266b6c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x266b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_266b70:
    // 0x266b70: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x266b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266b74:
    // 0x266b74: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x266b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266b78:
    // 0x266b78: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x266b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266b7c:
    // 0x266b7c: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x266b7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_266b80:
    // 0x266b80: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x266b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_266b84:
    // 0x266b84: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x266b84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_266b88:
    // 0x266b88: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x266b88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_266b8c:
    // 0x266b8c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x266b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_266b90:
    // 0x266b90: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x266b90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_266b94:
    // 0x266b94: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x266b94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_266b98:
    // 0x266b98: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x266b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_266b9c:
    // 0x266b9c: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x266b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266ba0:
    // 0x266ba0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x266ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_266ba4:
    // 0x266ba4: 0xc7a600a4  lwc1        $f6, 0xA4($sp)
    ctx->pc = 0x266ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_266ba8:
    // 0x266ba8: 0xc7a700a8  lwc1        $f7, 0xA8($sp)
    ctx->pc = 0x266ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_266bac:
    // 0x266bac: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x266bacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_266bb0:
    // 0x266bb0: 0xc7a500ac  lwc1        $f5, 0xAC($sp)
    ctx->pc = 0x266bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_266bb4:
    // 0x266bb4: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x266bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_266bb8:
    // 0x266bb8: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x266bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_266bbc:
    // 0x266bbc: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x266bbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_266bc0:
    // 0x266bc0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x266bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_266bc4:
    // 0x266bc4: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x266bc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_266bc8:
    // 0x266bc8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x266bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_266bcc:
    // 0x266bcc: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x266bccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_266bd0:
    // 0x266bd0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x266bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_266bd4:
    // 0x266bd4: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x266bd4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_266bd8:
    // 0x266bd8: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x266bd8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_266bdc:
    // 0x266bdc: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x266bdcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_266be0:
    // 0x266be0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x266be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_266be4:
    // 0x266be4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x266be4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_266be8:
    // 0x266be8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x266be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_266bec:
    // 0x266bec: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x266becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_266bf0:
    // 0x266bf0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x266bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266bf4:
    // 0x266bf4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x266bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266bf8:
    // 0x266bf8: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x266bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266bfc:
    // 0x266bfc: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x266bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266c00:
    // 0x266c00: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x266c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_266c04:
    // 0x266c04: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x266c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_266c08:
    // 0x266c08: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x266c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_266c0c:
    // 0x266c0c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x266c0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_266c10:
    // 0x266c10: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x266c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_266c14:
    // 0x266c14: 0xfae102f0  sqc2        $vf1, 0x2F0($s7)
    ctx->pc = 0x266c14u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 752), _mm_castps_si128(ctx->vu0_vf[1]));
label_266c18:
    // 0x266c18: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x266c18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_266c1c:
    // 0x266c1c: 0xfac102f0  sqc2        $vf1, 0x2F0($s6)
    ctx->pc = 0x266c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 752), _mm_castps_si128(ctx->vu0_vf[1]));
label_266c20:
    // 0x266c20: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x266c20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_266c24:
    // 0x266c24: 0xfae10300  sqc2        $vf1, 0x300($s7)
    ctx->pc = 0x266c24u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 768), _mm_castps_si128(ctx->vu0_vf[1]));
label_266c28:
    // 0x266c28: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x266c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_266c2c:
    // 0x266c2c: 0xfac10300  sqc2        $vf1, 0x300($s6)
    ctx->pc = 0x266c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 768), _mm_castps_si128(ctx->vu0_vf[1]));
label_266c30:
    // 0x266c30: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x266c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_266c34:
    // 0x266c34: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x266c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_266c38:
    // 0x266c38: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x266c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_266c3c:
    // 0x266c3c: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x266c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_266c40:
    // 0x266c40: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x266c40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_266c44:
    // 0x266c44: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x266c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_266c48:
    // 0x266c48: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x266c48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_266c4c:
    // 0x266c4c: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x266c4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_266c50:
    // 0x266c50: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x266c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_266c54:
    // 0x266c54: 0x3e00008  jr          $ra
label_266c58:
    if (ctx->pc == 0x266C58u) {
        ctx->pc = 0x266C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C54u;
        // 0x266c58: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266C5Cu;
        goto label_266c5c;
    }
    ctx->pc = 0x266C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C54u;
        // 0x266c58: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266C5Cu;
label_266c5c:
    // 0x266c5c: 0x0  nop
    ctx->pc = 0x266c5cu;
    // NOP
    ctx->pc = 0x266c60u;
}
