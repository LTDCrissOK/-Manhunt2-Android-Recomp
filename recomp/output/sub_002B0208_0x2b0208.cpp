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

// Function: sub_002B0208
// Address: 0x2b0208 - 0x2b1bf8
void sub_002B0208_0x2b0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0208_0x2b0208");
#endif

    switch (ctx->pc) {
        case 0x2b023cu: goto label_2b023c;
        case 0x2b0248u: goto label_2b0248;
        case 0x2b0254u: goto label_2b0254;
        case 0x2b0264u: goto label_2b0264;
        case 0x2b0278u: goto label_2b0278;
        case 0x2b0280u: goto label_2b0280;
        case 0x2b0290u: goto label_2b0290;
        case 0x2b02a0u: goto label_2b02a0;
        case 0x2b02d0u: goto label_2b02d0;
        case 0x2b02f4u: goto label_2b02f4;
        case 0x2b0304u: goto label_2b0304;
        case 0x2b0310u: goto label_2b0310;
        case 0x2b0334u: goto label_2b0334;
        case 0x2b0358u: goto label_2b0358;
        case 0x2b0360u: goto label_2b0360;
        case 0x2b0368u: goto label_2b0368;
        case 0x2b0378u: goto label_2b0378;
        case 0x2b0380u: goto label_2b0380;
        case 0x2b038cu: goto label_2b038c;
        case 0x2b03b8u: goto label_2b03b8;
        case 0x2b03c8u: goto label_2b03c8;
        case 0x2b03d4u: goto label_2b03d4;
        case 0x2b0404u: goto label_2b0404;
        case 0x2b0418u: goto label_2b0418;
        case 0x2b0430u: goto label_2b0430;
        case 0x2b0438u: goto label_2b0438;
        case 0x2b0448u: goto label_2b0448;
        case 0x2b0470u: goto label_2b0470;
        case 0x2b048cu: goto label_2b048c;
        case 0x2b0494u: goto label_2b0494;
        case 0x2b049cu: goto label_2b049c;
        case 0x2b04b4u: goto label_2b04b4;
        case 0x2b04bcu: goto label_2b04bc;
        case 0x2b04ccu: goto label_2b04cc;
        case 0x2b04d4u: goto label_2b04d4;
        case 0x2b04e4u: goto label_2b04e4;
        case 0x2b04ecu: goto label_2b04ec;
        case 0x2b04f4u: goto label_2b04f4;
        case 0x2b0528u: goto label_2b0528;
        case 0x2b0544u: goto label_2b0544;
        case 0x2b054cu: goto label_2b054c;
        case 0x2b0554u: goto label_2b0554;
        case 0x2b0568u: goto label_2b0568;
        case 0x2b0570u: goto label_2b0570;
        case 0x2b0580u: goto label_2b0580;
        case 0x2b0588u: goto label_2b0588;
        case 0x2b0598u: goto label_2b0598;
        case 0x2b05a0u: goto label_2b05a0;
        case 0x2b05a8u: goto label_2b05a8;
        case 0x2b0624u: goto label_2b0624;
        case 0x2b0640u: goto label_2b0640;
        case 0x2b0648u: goto label_2b0648;
        case 0x2b0650u: goto label_2b0650;
        case 0x2b0664u: goto label_2b0664;
        case 0x2b066cu: goto label_2b066c;
        case 0x2b067cu: goto label_2b067c;
        case 0x2b0684u: goto label_2b0684;
        case 0x2b0694u: goto label_2b0694;
        case 0x2b069cu: goto label_2b069c;
        case 0x2b06a4u: goto label_2b06a4;
        case 0x2b0720u: goto label_2b0720;
        case 0x2b073cu: goto label_2b073c;
        case 0x2b0744u: goto label_2b0744;
        case 0x2b074cu: goto label_2b074c;
        case 0x2b0760u: goto label_2b0760;
        case 0x2b0768u: goto label_2b0768;
        case 0x2b0778u: goto label_2b0778;
        case 0x2b0780u: goto label_2b0780;
        case 0x2b0790u: goto label_2b0790;
        case 0x2b0798u: goto label_2b0798;
        case 0x2b07a0u: goto label_2b07a0;
        case 0x2b081cu: goto label_2b081c;
        case 0x2b0838u: goto label_2b0838;
        case 0x2b0840u: goto label_2b0840;
        case 0x2b0848u: goto label_2b0848;
        case 0x2b085cu: goto label_2b085c;
        case 0x2b0864u: goto label_2b0864;
        case 0x2b0874u: goto label_2b0874;
        case 0x2b087cu: goto label_2b087c;
        case 0x2b0888u: goto label_2b0888;
        case 0x2b0904u: goto label_2b0904;
        case 0x2b0920u: goto label_2b0920;
        case 0x2b0928u: goto label_2b0928;
        case 0x2b0930u: goto label_2b0930;
        case 0x2b0944u: goto label_2b0944;
        case 0x2b094cu: goto label_2b094c;
        case 0x2b095cu: goto label_2b095c;
        case 0x2b0964u: goto label_2b0964;
        case 0x2b0970u: goto label_2b0970;
        case 0x2b09ecu: goto label_2b09ec;
        case 0x2b0a08u: goto label_2b0a08;
        case 0x2b0a10u: goto label_2b0a10;
        case 0x2b0a18u: goto label_2b0a18;
        case 0x2b0a2cu: goto label_2b0a2c;
        case 0x2b0a34u: goto label_2b0a34;
        case 0x2b0a44u: goto label_2b0a44;
        case 0x2b0a4cu: goto label_2b0a4c;
        case 0x2b0a58u: goto label_2b0a58;
        case 0x2b0ad4u: goto label_2b0ad4;
        case 0x2b0af0u: goto label_2b0af0;
        case 0x2b0af8u: goto label_2b0af8;
        case 0x2b0b00u: goto label_2b0b00;
        case 0x2b0b14u: goto label_2b0b14;
        case 0x2b0b1cu: goto label_2b0b1c;
        case 0x2b0b2cu: goto label_2b0b2c;
        case 0x2b0b34u: goto label_2b0b34;
        case 0x2b0b44u: goto label_2b0b44;
        case 0x2b0b4cu: goto label_2b0b4c;
        case 0x2b0b54u: goto label_2b0b54;
        case 0x2b0bd0u: goto label_2b0bd0;
        case 0x2b0becu: goto label_2b0bec;
        case 0x2b0bf4u: goto label_2b0bf4;
        case 0x2b0bfcu: goto label_2b0bfc;
        case 0x2b0c10u: goto label_2b0c10;
        case 0x2b0c18u: goto label_2b0c18;
        case 0x2b0c28u: goto label_2b0c28;
        case 0x2b0c30u: goto label_2b0c30;
        case 0x2b0c40u: goto label_2b0c40;
        case 0x2b0c48u: goto label_2b0c48;
        case 0x2b0c50u: goto label_2b0c50;
        case 0x2b0cccu: goto label_2b0ccc;
        case 0x2b0ce8u: goto label_2b0ce8;
        case 0x2b0cf0u: goto label_2b0cf0;
        case 0x2b0cf8u: goto label_2b0cf8;
        case 0x2b0d0cu: goto label_2b0d0c;
        case 0x2b0d14u: goto label_2b0d14;
        case 0x2b0d24u: goto label_2b0d24;
        case 0x2b0d2cu: goto label_2b0d2c;
        case 0x2b0d3cu: goto label_2b0d3c;
        case 0x2b0d44u: goto label_2b0d44;
        case 0x2b0d4cu: goto label_2b0d4c;
        case 0x2b0dc8u: goto label_2b0dc8;
        case 0x2b0de4u: goto label_2b0de4;
        case 0x2b0decu: goto label_2b0dec;
        case 0x2b0df4u: goto label_2b0df4;
        case 0x2b0e08u: goto label_2b0e08;
        case 0x2b0e10u: goto label_2b0e10;
        case 0x2b0e20u: goto label_2b0e20;
        case 0x2b0e28u: goto label_2b0e28;
        case 0x2b0e38u: goto label_2b0e38;
        case 0x2b0e40u: goto label_2b0e40;
        case 0x2b0e48u: goto label_2b0e48;
        case 0x2b0ec4u: goto label_2b0ec4;
        case 0x2b0ee0u: goto label_2b0ee0;
        case 0x2b0ee8u: goto label_2b0ee8;
        case 0x2b0ef0u: goto label_2b0ef0;
        case 0x2b0f04u: goto label_2b0f04;
        case 0x2b0f0cu: goto label_2b0f0c;
        case 0x2b0f1cu: goto label_2b0f1c;
        case 0x2b0f24u: goto label_2b0f24;
        case 0x2b0f34u: goto label_2b0f34;
        case 0x2b0f3cu: goto label_2b0f3c;
        case 0x2b0f44u: goto label_2b0f44;
        case 0x2b0fc0u: goto label_2b0fc0;
        case 0x2b0fdcu: goto label_2b0fdc;
        case 0x2b0fe4u: goto label_2b0fe4;
        case 0x2b1000u: goto label_2b1000;
        case 0x2b101cu: goto label_2b101c;
        case 0x2b1024u: goto label_2b1024;
        case 0x2b1040u: goto label_2b1040;
        case 0x2b1068u: goto label_2b1068;
        case 0x2b1090u: goto label_2b1090;
        case 0x2b10b8u: goto label_2b10b8;
        case 0x2b10e0u: goto label_2b10e0;
        case 0x2b1108u: goto label_2b1108;
        case 0x2b1130u: goto label_2b1130;
        case 0x2b1158u: goto label_2b1158;
        case 0x2b1180u: goto label_2b1180;
        case 0x2b11a8u: goto label_2b11a8;
        case 0x2b11d0u: goto label_2b11d0;
        case 0x2b11f8u: goto label_2b11f8;
        case 0x2b1220u: goto label_2b1220;
        case 0x2b123cu: goto label_2b123c;
        case 0x2b1244u: goto label_2b1244;
        case 0x2b1288u: goto label_2b1288;
        case 0x2b12acu: goto label_2b12ac;
        case 0x2b12d4u: goto label_2b12d4;
        case 0x2b12f8u: goto label_2b12f8;
        case 0x2b1320u: goto label_2b1320;
        case 0x2b1348u: goto label_2b1348;
        case 0x2b1370u: goto label_2b1370;
        case 0x2b1398u: goto label_2b1398;
        case 0x2b13c0u: goto label_2b13c0;
        case 0x2b13e8u: goto label_2b13e8;
        case 0x2b1410u: goto label_2b1410;
        case 0x2b1438u: goto label_2b1438;
        case 0x2b1458u: goto label_2b1458;
        case 0x2b1460u: goto label_2b1460;
        case 0x2b1470u: goto label_2b1470;
        case 0x2b1478u: goto label_2b1478;
        case 0x2b1488u: goto label_2b1488;
        case 0x2b1490u: goto label_2b1490;
        case 0x2b14e8u: goto label_2b14e8;
        case 0x2b1510u: goto label_2b1510;
        case 0x2b1538u: goto label_2b1538;
        case 0x2b1560u: goto label_2b1560;
        case 0x2b1588u: goto label_2b1588;
        case 0x2b15b0u: goto label_2b15b0;
        case 0x2b15d8u: goto label_2b15d8;
        case 0x2b15f8u: goto label_2b15f8;
        case 0x2b1600u: goto label_2b1600;
        case 0x2b1610u: goto label_2b1610;
        case 0x2b1618u: goto label_2b1618;
        case 0x2b1628u: goto label_2b1628;
        case 0x2b1630u: goto label_2b1630;
        case 0x2b164cu: goto label_2b164c;
        case 0x2b166cu: goto label_2b166c;
        case 0x2b1674u: goto label_2b1674;
        case 0x2b1684u: goto label_2b1684;
        case 0x2b168cu: goto label_2b168c;
        case 0x2b169cu: goto label_2b169c;
        case 0x2b16a4u: goto label_2b16a4;
        case 0x2b16c0u: goto label_2b16c0;
        case 0x2b16e0u: goto label_2b16e0;
        case 0x2b16e8u: goto label_2b16e8;
        case 0x2b16f8u: goto label_2b16f8;
        case 0x2b1700u: goto label_2b1700;
        case 0x2b1710u: goto label_2b1710;
        case 0x2b1718u: goto label_2b1718;
        case 0x2b1734u: goto label_2b1734;
        case 0x2b1754u: goto label_2b1754;
        case 0x2b175cu: goto label_2b175c;
        case 0x2b176cu: goto label_2b176c;
        case 0x2b1774u: goto label_2b1774;
        case 0x2b1784u: goto label_2b1784;
        case 0x2b178cu: goto label_2b178c;
        case 0x2b17a8u: goto label_2b17a8;
        case 0x2b17d0u: goto label_2b17d0;
        case 0x2b17ecu: goto label_2b17ec;
        case 0x2b17f4u: goto label_2b17f4;
        case 0x2b1810u: goto label_2b1810;
        case 0x2b1838u: goto label_2b1838;
        case 0x2b1860u: goto label_2b1860;
        case 0x2b187cu: goto label_2b187c;
        case 0x2b1884u: goto label_2b1884;
        case 0x2b189cu: goto label_2b189c;
        case 0x2b18b0u: goto label_2b18b0;
        case 0x2b18d0u: goto label_2b18d0;
        case 0x2b18d8u: goto label_2b18d8;
        case 0x2b18e8u: goto label_2b18e8;
        case 0x2b18f0u: goto label_2b18f0;
        case 0x2b1984u: goto label_2b1984;
        case 0x2b19a4u: goto label_2b19a4;
        case 0x2b19acu: goto label_2b19ac;
        case 0x2b19bcu: goto label_2b19bc;
        case 0x2b19c4u: goto label_2b19c4;
        case 0x2b1a58u: goto label_2b1a58;
        case 0x2b1a78u: goto label_2b1a78;
        case 0x2b1a80u: goto label_2b1a80;
        case 0x2b1a90u: goto label_2b1a90;
        case 0x2b1a98u: goto label_2b1a98;
        case 0x2b1aa8u: goto label_2b1aa8;
        case 0x2b1ab0u: goto label_2b1ab0;
        case 0x2b1accu: goto label_2b1acc;
        case 0x2b1aecu: goto label_2b1aec;
        case 0x2b1af4u: goto label_2b1af4;
        case 0x2b1b04u: goto label_2b1b04;
        case 0x2b1b0cu: goto label_2b1b0c;
        case 0x2b1b28u: goto label_2b1b28;
        case 0x2b1b48u: goto label_2b1b48;
        case 0x2b1b50u: goto label_2b1b50;
        case 0x2b1b64u: goto label_2b1b64;
        case 0x2b1b80u: goto label_2b1b80;
        case 0x2b1b88u: goto label_2b1b88;
        case 0x2b1ba4u: goto label_2b1ba4;
        case 0x2b1bacu: goto label_2b1bac;
        case 0x2b1bbcu: goto label_2b1bbc;
        default: break;
    }

    ctx->pc = 0x2b0208u;

    // 0x2b0208: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2b0208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2b020c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2b020cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2b0210: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2b0210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2b0214: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2b0214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2b0218: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2b0218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x2b021c: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2b021cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2b0220: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x2b0220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x2b0224: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x2b0224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x2b0228: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x2b0228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x2b022c: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x2b022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x2b0230: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x2b0230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x2b0234: 0xc0ac014  jal         func_2B0050
    ctx->pc = 0x2B0234u;
    SET_GPR_U32(ctx, 31, 0x2B023Cu);
    ctx->pc = 0x2B0238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0234u;
    // 0x2b0238: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0050u, 0x2B0234u, 0x2B023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B023Cu;
label_2b023c:
    // 0x2b023c: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x2b023cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x2b0240: 0x10000651  b           . + 4 + (0x651 << 2)
    ctx->pc = 0x2B0240u;
    {
        const bool branch_taken_0x2b0240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0240u;
        // 0x2b0244: 0x3c1e0047  lui         $fp, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0240) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0248u;
label_2b0248:
    // 0x2b0248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b024c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B024Cu;
    SET_GPR_U32(ctx, 31, 0x2B0254u);
    ctx->pc = 0x2B0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B024Cu;
    // 0x2b0250: 0x24a5ed50  addiu       $a1, $a1, -0x12B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B024Cu, 0x2B0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0254u;
label_2b0254:
    // 0x2b0254: 0x5440006d  bnel        $v0, $zero, . + 4 + (0x6D << 2)
    ctx->pc = 0x2B0254u;
    {
        const bool branch_taken_0x2b0254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0254) {
            ctx->pc = 0x2B0258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0254u;
            // 0x2b0258: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B040Cu;
            goto label_2b040c;
        }
    }
    ctx->pc = 0x2B025Cu;
    // 0x2b025c: 0xc0ac040  jal         func_2B0100
    ctx->pc = 0x2B025Cu;
    SET_GPR_U32(ctx, 31, 0x2B0264u);
    ctx->pc = 0x2B0260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B025Cu;
    // 0x2b0260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0100u, 0x2B025Cu, 0x2B0264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0264u;
label_2b0264:
    // 0x2b0264: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0268: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b026c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b026cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0270: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0270u;
    SET_GPR_U32(ctx, 31, 0x2B0278u);
    ctx->pc = 0x2B0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0270u;
    // 0x2b0274: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0270u, 0x2B0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0278u;
label_2b0278:
    // 0x2b0278: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0278u;
    SET_GPR_U32(ctx, 31, 0x2B0280u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0278u, 0x2B0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0280u;
label_2b0280:
    // 0x2b0280: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b0280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b0284: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0288: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0288u;
    SET_GPR_U32(ctx, 31, 0x2B0290u);
    ctx->pc = 0x2B028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0288u;
    // 0x2b028c: 0x24a5ed58  addiu       $a1, $a1, -0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0288u, 0x2B0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0290u;
label_2b0290:
    // 0x2b0290: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2B0290u;
    {
        const bool branch_taken_0x2b0290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0290u;
        // 0x2b0294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0290) {
            ctx->pc = 0x2B03ECu;
            goto label_2b03ec;
        }
    }
    ctx->pc = 0x2B0298u;
    // 0x2b0298: 0xc0ac026  jal         func_2B0098
    ctx->pc = 0x2B0298u;
    SET_GPR_U32(ctx, 31, 0x2B02A0u);
    ctx->pc = 0x2B029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0298u;
    // 0x2b029c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0098u, 0x2B0298u, 0x2B02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02A0u;
label_2b02a0:
    // 0x2b02a0: 0x2a970035  slti        $s7, $s4, 0x35
    ctx->pc = 0x2b02a0u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x2b02a4: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x2B02A4u;
    {
        const bool branch_taken_0x2b02a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02A4u;
        // 0x2b02a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02a4) {
            ctx->pc = 0x2B02D0u;
            goto label_2b02d0;
        }
    }
    ctx->pc = 0x2B02ACu;
    // 0x2b02ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b02acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b02b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b02b4: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x2b02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
    // 0x2b02b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b02b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b02c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b02c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02c4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2b02c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b02c8: 0xc0ac00a  jal         func_2B0028
    ctx->pc = 0x2B02C8u;
    SET_GPR_U32(ctx, 31, 0x2B02D0u);
    ctx->pc = 0x2B02CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02C8u;
    // 0x2b02cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0028u, 0x2B02C8u, 0x2B02D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02D0u;
label_2b02d0:
    // 0x2b02d0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2b02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2b02d4: 0x27a40081  addiu       $a0, $sp, 0x81
    ctx->pc = 0x2b02d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 129));
    // 0x2b02d8: 0x9043ed60  lbu         $v1, -0x12A0($v0)
    ctx->pc = 0x2b02d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x46ED60u));
    // 0x2b02dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b02dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02e0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b02e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b02e4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b02e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b02e8: 0xa3a30080  sb          $v1, 0x80($sp)
    ctx->pc = 0x2b02e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b02ec: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2B02ECu;
    SET_GPR_U32(ctx, 31, 0x2B02F4u);
    ctx->pc = 0x2B02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02ECu;
    // 0x2b02f0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2B02ECu, 0x2B02F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02F4u;
label_2b02f4:
    // 0x2b02f4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b02f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b02f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b02f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02fc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B02FCu;
    SET_GPR_U32(ctx, 31, 0x2B0304u);
    ctx->pc = 0x2B0300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02FCu;
    // 0x2b0300: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B02FCu, 0x2B0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0304u;
label_2b0304:
    // 0x2b0304: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0308: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0308u;
    SET_GPR_U32(ctx, 31, 0x2B0310u);
    ctx->pc = 0x2B030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0308u;
    // 0x2b030c: 0x2605ed68  addiu       $a1, $s0, -0x1298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0308u, 0x2B0310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0310u;
label_2b0310:
    // 0x2b0310: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0310u;
    {
        const bool branch_taken_0x2b0310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0310u;
        // 0x2b0314: 0x3c110047  lui         $s1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0310) {
            ctx->pc = 0x2B0324u;
            goto label_2b0324;
        }
    }
    ctx->pc = 0x2B0318u;
    // 0x2b0318: 0x8e02ed68  lw          $v0, -0x1298($s0)
    ctx->pc = 0x2b0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962536)));
    // 0x2b031c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2b031cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0320: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2b0320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_2b0324:
    // 0x2b0324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0328: 0x2630ed70  addiu       $s0, $s1, -0x1290
    ctx->pc = 0x2b0328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962544));
    // 0x2b032c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B032Cu;
    SET_GPR_U32(ctx, 31, 0x2B0334u);
    ctx->pc = 0x2B0330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B032Cu;
    // 0x2b0330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B032Cu, 0x2B0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0334u;
label_2b0334:
    // 0x2b0334: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B0334u;
    {
        const bool branch_taken_0x2b0334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0334) {
            ctx->pc = 0x2B0338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0334u;
            // 0x2b0338: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B03C8u;
            goto label_2b03c8;
        }
    }
    ctx->pc = 0x2B033Cu;
    // 0x2b033c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2b033cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b0340: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2b0340u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b0344: 0x9623ed70  lhu         $v1, -0x1290($s1)
    ctx->pc = 0x2b0344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294962544)));
    // 0x2b0348: 0xa3a20082  sb          $v0, 0x82($sp)
    ctx->pc = 0x2b0348u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b034c: 0xa7a30080  sh          $v1, 0x80($sp)
    ctx->pc = 0x2b034cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b0350: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B0350u;
    {
        const bool branch_taken_0x2b0350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0350u;
        // 0x2b0354: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0350) {
            ctx->pc = 0x2B03C8u;
            goto label_2b03c8;
        }
    }
    ctx->pc = 0x2B0358u;
label_2b0358:
    // 0x2b0358: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0358u;
    SET_GPR_U32(ctx, 31, 0x2B0360u);
    ctx->pc = 0x2B035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0358u;
    // 0x2b035c: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0358u, 0x2B0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0360u;
label_2b0360:
    // 0x2b0360: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0360u;
    SET_GPR_U32(ctx, 31, 0x2B0368u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0360u, 0x2B0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0368u;
label_2b0368:
    // 0x2b0368: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b036c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b036cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0370: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0370u;
    SET_GPR_U32(ctx, 31, 0x2B0378u);
    ctx->pc = 0x2B0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0370u;
    // 0x2b0374: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0370u, 0x2B0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0378u;
label_2b0378:
    // 0x2b0378: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0378u;
    SET_GPR_U32(ctx, 31, 0x2B0380u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0378u, 0x2B0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0380u;
label_2b0380:
    // 0x2b0380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0384: 0xc0ac026  jal         func_2B0098
    ctx->pc = 0x2B0384u;
    SET_GPR_U32(ctx, 31, 0x2B038Cu);
    ctx->pc = 0x2B0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0384u;
    // 0x2b0388: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0098u, 0x2B0384u, 0x2B038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B038Cu;
label_2b038c:
    // 0x2b038c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b038cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b0390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0394: 0x2466aa90  addiu       $a2, $v1, -0x5570
    ctx->pc = 0x2b0394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945424));
    // 0x2b0398: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b0398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b039c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b039cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b03a0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b03a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b03a4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B03A4u;
    {
        const bool branch_taken_0x2b03a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03A4u;
        // 0x2b03a8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03a4) {
            ctx->pc = 0x2B03B8u;
            goto label_2b03b8;
        }
    }
    ctx->pc = 0x2B03ACu;
    // 0x2b03ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b03acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b03b0: 0xc0ac00a  jal         func_2B0028
    ctx->pc = 0x2B03B0u;
    SET_GPR_U32(ctx, 31, 0x2B03B8u);
    ctx->pc = 0x2B03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B03B0u;
    // 0x2b03b4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0028u, 0x2B03B0u, 0x2B03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03B8u;
label_2b03b8:
    // 0x2b03b8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b03b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b03bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b03bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b03c0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B03C0u;
    SET_GPR_U32(ctx, 31, 0x2B03C8u);
    ctx->pc = 0x2B03C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B03C0u;
    // 0x2b03c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B03C0u, 0x2B03C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03C8u;
label_2b03c8:
    // 0x2b03c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b03c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b03cc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B03CCu;
    SET_GPR_U32(ctx, 31, 0x2B03D4u);
    ctx->pc = 0x2B03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B03CCu;
    // 0x2b03d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B03CCu, 0x2B03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03D4u;
label_2b03d4:
    // 0x2b03d4: 0x27d0ed18  addiu       $s0, $fp, -0x12E8
    ctx->pc = 0x2b03d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962456));
    // 0x2b03d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b03d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b03dc: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2B03DCu;
    {
        const bool branch_taken_0x2b03dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03DCu;
        // 0x2b03e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03dc) {
            ctx->pc = 0x2B0358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0358;
        }
    }
    ctx->pc = 0x2B03E4u;
    // 0x2b03e4: 0x100005e9  b           . + 4 + (0x5E9 << 2)
    ctx->pc = 0x2B03E4u;
    {
        const bool branch_taken_0x2b03e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03E4u;
        // 0x2b03e8: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03e4) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B03ECu;
label_2b03ec:
    // 0x2b03ec: 0x2a820035  slti        $v0, $s4, 0x35
    ctx->pc = 0x2b03ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x2b03f0: 0x104005e5  beqz        $v0, . + 4 + (0x5E5 << 2)
    ctx->pc = 0x2B03F0u;
    {
        const bool branch_taken_0x2b03f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03F0u;
        // 0x2b03f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03f0) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B03F8u;
    // 0x2b03f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b03f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b03fc: 0xc0ac00a  jal         func_2B0028
    ctx->pc = 0x2B03FCu;
    SET_GPR_U32(ctx, 31, 0x2B0404u);
    ctx->pc = 0x2B0400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B03FCu;
    // 0x2b0400: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0028u, 0x2B03FCu, 0x2B0404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0404u;
label_2b0404:
    // 0x2b0404: 0x100005e1  b           . + 4 + (0x5E1 << 2)
    ctx->pc = 0x2B0404u;
    {
        const bool branch_taken_0x2b0404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0404u;
        // 0x2b0408: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0404) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B040Cu;
label_2b040c:
    // 0x2b040c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0410: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0410u;
    SET_GPR_U32(ctx, 31, 0x2B0418u);
    ctx->pc = 0x2B0414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0410u;
    // 0x2b0414: 0x24a5ed78  addiu       $a1, $a1, -0x1288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0410u, 0x2B0418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0418u;
label_2b0418:
    // 0x2b0418: 0x144005dc  bnez        $v0, . + 4 + (0x5DC << 2)
    ctx->pc = 0x2B0418u;
    {
        const bool branch_taken_0x2b0418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0418u;
        // 0x2b041c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0418) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0420u;
    // 0x2b0420: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0424: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0428: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0428u;
    SET_GPR_U32(ctx, 31, 0x2B0430u);
    ctx->pc = 0x2B042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0428u;
    // 0x2b042c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0428u, 0x2B0430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0430u;
label_2b0430:
    // 0x2b0430: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0430u;
    SET_GPR_U32(ctx, 31, 0x2B0438u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0430u, 0x2B0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0438u;
label_2b0438:
    // 0x2b0438: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b0438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b043c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0440: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0440u;
    SET_GPR_U32(ctx, 31, 0x2B0448u);
    ctx->pc = 0x2B0444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0440u;
    // 0x2b0444: 0x24a5ed80  addiu       $a1, $a1, -0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0440u, 0x2B0448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0448u;
label_2b0448:
    // 0x2b0448: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0448u;
    {
        const bool branch_taken_0x2b0448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0448) {
            ctx->pc = 0x2B044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0448u;
            // 0x2b044c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0464u;
            goto label_2b0464;
        }
    }
    ctx->pc = 0x2B0450u;
    // 0x2b0450: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b0450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b0454: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0458: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b0458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b045c: 0x100005b8  b           . + 4 + (0x5B8 << 2)
    ctx->pc = 0x2B045Cu;
    {
        const bool branch_taken_0x2b045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B045Cu;
        // 0x2b0460: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b045c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B0464u;
label_2b0464:
    // 0x2b0464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0468: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0468u;
    SET_GPR_U32(ctx, 31, 0x2B0470u);
    ctx->pc = 0x2B046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0468u;
    // 0x2b046c: 0x24a5ed98  addiu       $a1, $a1, -0x1268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0468u, 0x2B0470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0470u;
label_2b0470:
    // 0x2b0470: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B0470u;
    {
        const bool branch_taken_0x2b0470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0470) {
            ctx->pc = 0x2B0474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0470u;
            // 0x2b0474: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B051Cu;
            goto label_2b051c;
        }
    }
    ctx->pc = 0x2B0478u;
    // 0x2b0478: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2b0478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b047c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0480: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0484: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0484u;
    SET_GPR_U32(ctx, 31, 0x2B048Cu);
    ctx->pc = 0x2B0488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0484u;
    // 0x2b0488: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0484u, 0x2B048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B048Cu;
label_2b048c:
    // 0x2b048c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B048Cu;
    SET_GPR_U32(ctx, 31, 0x2B0494u);
    ctx->pc = 0x2B0490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B048Cu;
    // 0x2b0490: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B048Cu, 0x2B0494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0494u;
label_2b0494:
    // 0x2b0494: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0494u;
    SET_GPR_U32(ctx, 31, 0x2B049Cu);
    ctx->pc = 0x2B0498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0494u;
    // 0x2b0498: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0494u, 0x2B049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B049Cu;
label_2b049c:
    // 0x2b049c: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x2b049cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b04a0: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b04a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b04a4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b04a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b04a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b04a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b04ac: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B04ACu;
    SET_GPR_U32(ctx, 31, 0x2B04B4u);
    ctx->pc = 0x2B04B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B04ACu;
    // 0x2b04b0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B04ACu, 0x2B04B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B04B4u;
label_2b04b4:
    // 0x2b04b4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B04B4u;
    SET_GPR_U32(ctx, 31, 0x2B04BCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B04B4u, 0x2B04BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B04BCu;
label_2b04bc:
    // 0x2b04bc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b04bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b04c0: 0x27a600d4  addiu       $a2, $sp, 0xD4
    ctx->pc = 0x2b04c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2b04c4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B04C4u;
    SET_GPR_U32(ctx, 31, 0x2B04CCu);
    ctx->pc = 0x2B04C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B04C4u;
    // 0x2b04c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B04C4u, 0x2B04CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B04CCu;
label_2b04cc:
    // 0x2b04cc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B04CCu;
    SET_GPR_U32(ctx, 31, 0x2B04D4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B04CCu, 0x2B04D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B04D4u;
label_2b04d4:
    // 0x2b04d4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b04d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b04d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b04d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b04dc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B04DCu;
    SET_GPR_U32(ctx, 31, 0x2B04E4u);
    ctx->pc = 0x2B04E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B04DCu;
    // 0x2b04e0: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B04DCu, 0x2B04E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B04E4u;
label_2b04e4:
    // 0x2b04e4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B04E4u;
    SET_GPR_U32(ctx, 31, 0x2B04ECu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B04E4u, 0x2B04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B04ECu;
label_2b04ec:
    // 0x2b04ec: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B04ECu;
    SET_GPR_U32(ctx, 31, 0x2B04F4u);
    ctx->pc = 0x2B04F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B04ECu;
    // 0x2b04f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B04ECu, 0x2B04F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B04F4u;
label_2b04f4:
    // 0x2b04f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b04f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b04f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b04fc: 0x106205a2  beq         $v1, $v0, . + 4 + (0x5A2 << 2)
    ctx->pc = 0x2B04FCu;
    {
        const bool branch_taken_0x2b04fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04FCu;
        // 0x2b0500: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04fc) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0504u;
    // 0x2b0504: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2b0504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b0508: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x2b0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2b050c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2b050cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b0510: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2b0510u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b0514: 0x1000059d  b           . + 4 + (0x59D << 2)
    ctx->pc = 0x2B0514u;
    {
        const bool branch_taken_0x2b0514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0514u;
        // 0x2b0518: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0514) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B051Cu;
label_2b051c:
    // 0x2b051c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b051cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0520: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0520u;
    SET_GPR_U32(ctx, 31, 0x2B0528u);
    ctx->pc = 0x2B0524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0520u;
    // 0x2b0524: 0x24a5eda8  addiu       $a1, $a1, -0x1258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0520u, 0x2B0528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0528u;
label_2b0528:
    // 0x2b0528: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B0528u;
    {
        const bool branch_taken_0x2b0528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0528) {
            ctx->pc = 0x2B052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0528u;
            // 0x2b052c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0618u;
            goto label_2b0618;
        }
    }
    ctx->pc = 0x2B0530u;
    // 0x2b0530: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b0530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b0534: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0538: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b053c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B053Cu;
    SET_GPR_U32(ctx, 31, 0x2B0544u);
    ctx->pc = 0x2B0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B053Cu;
    // 0x2b0540: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B053Cu, 0x2B0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0544u;
label_2b0544:
    // 0x2b0544: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0544u;
    SET_GPR_U32(ctx, 31, 0x2B054Cu);
    ctx->pc = 0x2B0548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0544u;
    // 0x2b0548: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0544u, 0x2B054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B054Cu;
label_2b054c:
    // 0x2b054c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B054Cu;
    SET_GPR_U32(ctx, 31, 0x2B0554u);
    ctx->pc = 0x2B0550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B054Cu;
    // 0x2b0550: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B054Cu, 0x2B0554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0554u;
label_2b0554:
    // 0x2b0554: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0558: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b055c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b055cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b0560: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0560u;
    SET_GPR_U32(ctx, 31, 0x2B0568u);
    ctx->pc = 0x2B0564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0560u;
    // 0x2b0564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0560u, 0x2B0568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0568u;
label_2b0568:
    // 0x2b0568: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0568u;
    SET_GPR_U32(ctx, 31, 0x2B0570u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0568u, 0x2B0570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0570u;
label_2b0570:
    // 0x2b0570: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0574: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x2b0574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2b0578: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0578u;
    SET_GPR_U32(ctx, 31, 0x2B0580u);
    ctx->pc = 0x2B057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0578u;
    // 0x2b057c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0578u, 0x2B0580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0580u;
label_2b0580:
    // 0x2b0580: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0580u;
    SET_GPR_U32(ctx, 31, 0x2B0588u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0580u, 0x2B0588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0588u;
label_2b0588:
    // 0x2b0588: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b058c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b058cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0590: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0590u;
    SET_GPR_U32(ctx, 31, 0x2B0598u);
    ctx->pc = 0x2B0594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0590u;
    // 0x2b0594: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0590u, 0x2B0598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0598u;
label_2b0598:
    // 0x2b0598: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0598u;
    SET_GPR_U32(ctx, 31, 0x2B05A0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0598u, 0x2B05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B05A0u;
label_2b05a0:
    // 0x2b05a0: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B05A0u;
    SET_GPR_U32(ctx, 31, 0x2B05A8u);
    ctx->pc = 0x2B05A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B05A0u;
    // 0x2b05a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B05A0u, 0x2B05A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B05A8u;
label_2b05a8:
    // 0x2b05a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b05a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b05ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b05b0: 0x10820575  beq         $a0, $v0, . + 4 + (0x575 << 2)
    ctx->pc = 0x2B05B0u;
    {
        const bool branch_taken_0x2b05b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05B0u;
        // 0x2b05b4: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05b0) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B05B8u;
    // 0x2b05b8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b05b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b05bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b05bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b05c0: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b05c4: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b05c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b05c8: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b05c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b05cc: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x2b05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2b05d0: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b05d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b05d4: 0x0  nop
    ctx->pc = 0x2b05d4u;
    // NOP
    // 0x2b05d8: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b05d8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b05dc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b05dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b05e0: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b05e0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b05e4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b05e4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b05e8: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b05ec: 0x0  nop
    ctx->pc = 0x2b05ecu;
    // NOP
    // 0x2b05f0: 0x0  nop
    ctx->pc = 0x2b05f0u;
    // NOP
    // 0x2b05f4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b05f4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b05f8: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x2b05f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2b05fc: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x2b05fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2b0600: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x2b0600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2b0604: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2b0604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2b0608: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b060c: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x2b060cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b0610: 0x1000055e  b           . + 4 + (0x55E << 2)
    ctx->pc = 0x2B0610u;
    {
        const bool branch_taken_0x2b0610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0610u;
        // 0x2b0614: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0610) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0618u;
label_2b0618:
    // 0x2b0618: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b061c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B061Cu;
    SET_GPR_U32(ctx, 31, 0x2B0624u);
    ctx->pc = 0x2B0620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B061Cu;
    // 0x2b0620: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B061Cu, 0x2B0624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0624u;
label_2b0624:
    // 0x2b0624: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B0624u;
    {
        const bool branch_taken_0x2b0624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0624) {
            ctx->pc = 0x2B0628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0624u;
            // 0x2b0628: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0714u;
            goto label_2b0714;
        }
    }
    ctx->pc = 0x2B062Cu;
    // 0x2b062c: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b062cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b0630: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0634: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0638: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0638u;
    SET_GPR_U32(ctx, 31, 0x2B0640u);
    ctx->pc = 0x2B063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0638u;
    // 0x2b063c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0638u, 0x2B0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0640u;
label_2b0640:
    // 0x2b0640: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0640u;
    SET_GPR_U32(ctx, 31, 0x2B0648u);
    ctx->pc = 0x2B0644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0640u;
    // 0x2b0644: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0640u, 0x2B0648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0648u;
label_2b0648:
    // 0x2b0648: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0648u;
    SET_GPR_U32(ctx, 31, 0x2B0650u);
    ctx->pc = 0x2B064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0648u;
    // 0x2b064c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0648u, 0x2B0650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0650u;
label_2b0650:
    // 0x2b0650: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0654: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0658: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b065c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B065Cu;
    SET_GPR_U32(ctx, 31, 0x2B0664u);
    ctx->pc = 0x2B0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B065Cu;
    // 0x2b0660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B065Cu, 0x2B0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0664u;
label_2b0664:
    // 0x2b0664: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0664u;
    SET_GPR_U32(ctx, 31, 0x2B066Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0664u, 0x2B066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B066Cu;
label_2b066c:
    // 0x2b066c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b066cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0670: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x2b0670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2b0674: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0674u;
    SET_GPR_U32(ctx, 31, 0x2B067Cu);
    ctx->pc = 0x2B0678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0674u;
    // 0x2b0678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0674u, 0x2B067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B067Cu;
label_2b067c:
    // 0x2b067c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B067Cu;
    SET_GPR_U32(ctx, 31, 0x2B0684u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B067Cu, 0x2B0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0684u;
label_2b0684:
    // 0x2b0684: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b068c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B068Cu;
    SET_GPR_U32(ctx, 31, 0x2B0694u);
    ctx->pc = 0x2B0690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B068Cu;
    // 0x2b0690: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B068Cu, 0x2B0694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0694u;
label_2b0694:
    // 0x2b0694: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0694u;
    SET_GPR_U32(ctx, 31, 0x2B069Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0694u, 0x2B069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B069Cu;
label_2b069c:
    // 0x2b069c: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B069Cu;
    SET_GPR_U32(ctx, 31, 0x2B06A4u);
    ctx->pc = 0x2B06A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B069Cu;
    // 0x2b06a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B069Cu, 0x2B06A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B06A4u;
label_2b06a4:
    // 0x2b06a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b06a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b06ac: 0x10820536  beq         $a0, $v0, . + 4 + (0x536 << 2)
    ctx->pc = 0x2B06ACu;
    {
        const bool branch_taken_0x2b06ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06ACu;
        // 0x2b06b0: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06ac) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B06B4u;
    // 0x2b06b4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b06b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b06b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b06b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b06bc: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b06bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b06c0: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b06c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b06c4: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b06c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b06c8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b06cc: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b06ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b06d0: 0x0  nop
    ctx->pc = 0x2b06d0u;
    // NOP
    // 0x2b06d4: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b06d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b06d8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b06d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b06dc: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b06dcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b06e0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b06e0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b06e4: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b06e8: 0x0  nop
    ctx->pc = 0x2b06e8u;
    // NOP
    // 0x2b06ec: 0x0  nop
    ctx->pc = 0x2b06ecu;
    // NOP
    // 0x2b06f0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b06f0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b06f4: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b06f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b06f8: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b06f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b06fc: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b06fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b0700: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b0700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b0704: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0708: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x2b0708u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b070c: 0x1000051f  b           . + 4 + (0x51F << 2)
    ctx->pc = 0x2B070Cu;
    {
        const bool branch_taken_0x2b070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B070Cu;
        // 0x2b0710: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b070c) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0714u;
label_2b0714:
    // 0x2b0714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0718: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0718u;
    SET_GPR_U32(ctx, 31, 0x2B0720u);
    ctx->pc = 0x2B071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0718u;
    // 0x2b071c: 0x24a5edd0  addiu       $a1, $a1, -0x1230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0718u, 0x2B0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0720u;
label_2b0720:
    // 0x2b0720: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B0720u;
    {
        const bool branch_taken_0x2b0720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0720) {
            ctx->pc = 0x2B0724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0720u;
            // 0x2b0724: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0810u;
            goto label_2b0810;
        }
    }
    ctx->pc = 0x2B0728u;
    // 0x2b0728: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b0728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b072c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0730: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0734: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0734u;
    SET_GPR_U32(ctx, 31, 0x2B073Cu);
    ctx->pc = 0x2B0738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0734u;
    // 0x2b0738: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0734u, 0x2B073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B073Cu;
label_2b073c:
    // 0x2b073c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B073Cu;
    SET_GPR_U32(ctx, 31, 0x2B0744u);
    ctx->pc = 0x2B0740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B073Cu;
    // 0x2b0740: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B073Cu, 0x2B0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0744u;
label_2b0744:
    // 0x2b0744: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0744u;
    SET_GPR_U32(ctx, 31, 0x2B074Cu);
    ctx->pc = 0x2B0748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0744u;
    // 0x2b0748: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0744u, 0x2B074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B074Cu;
label_2b074c:
    // 0x2b074c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0750: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0754: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b0758: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0758u;
    SET_GPR_U32(ctx, 31, 0x2B0760u);
    ctx->pc = 0x2B075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0758u;
    // 0x2b075c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0758u, 0x2B0760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0760u;
label_2b0760:
    // 0x2b0760: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0760u;
    SET_GPR_U32(ctx, 31, 0x2B0768u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0760u, 0x2B0768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0768u;
label_2b0768:
    // 0x2b0768: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b076c: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x2b076cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2b0770: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0770u;
    SET_GPR_U32(ctx, 31, 0x2B0778u);
    ctx->pc = 0x2B0774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0770u;
    // 0x2b0774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0770u, 0x2B0778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0778u;
label_2b0778:
    // 0x2b0778: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0778u;
    SET_GPR_U32(ctx, 31, 0x2B0780u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0778u, 0x2B0780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0780u;
label_2b0780:
    // 0x2b0780: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0788: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0788u;
    SET_GPR_U32(ctx, 31, 0x2B0790u);
    ctx->pc = 0x2B078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0788u;
    // 0x2b078c: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0788u, 0x2B0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0790u;
label_2b0790:
    // 0x2b0790: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0790u;
    SET_GPR_U32(ctx, 31, 0x2B0798u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0790u, 0x2B0798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0798u;
label_2b0798:
    // 0x2b0798: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B0798u;
    SET_GPR_U32(ctx, 31, 0x2B07A0u);
    ctx->pc = 0x2B079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0798u;
    // 0x2b079c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B0798u, 0x2B07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B07A0u;
label_2b07a0:
    // 0x2b07a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b07a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b07a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b07a8: 0x108204f7  beq         $a0, $v0, . + 4 + (0x4F7 << 2)
    ctx->pc = 0x2B07A8u;
    {
        const bool branch_taken_0x2b07a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07A8u;
        // 0x2b07ac: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07a8) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B07B0u;
    // 0x2b07b0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b07b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b07b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b07b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b07b8: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b07b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b07bc: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b07bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b07c0: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b07c4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b07c8: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b07cc: 0x0  nop
    ctx->pc = 0x2b07ccu;
    // NOP
    // 0x2b07d0: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b07d0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b07d4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b07d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b07d8: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b07d8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b07dc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b07dcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b07e0: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b07e4: 0x0  nop
    ctx->pc = 0x2b07e4u;
    // NOP
    // 0x2b07e8: 0x0  nop
    ctx->pc = 0x2b07e8u;
    // NOP
    // 0x2b07ec: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b07ecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b07f0: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b07f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b07f4: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b07f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b07f8: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b07f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b07fc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b07fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b0800: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0800u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0804: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2b0804u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b0808: 0x100004e0  b           . + 4 + (0x4E0 << 2)
    ctx->pc = 0x2B0808u;
    {
        const bool branch_taken_0x2b0808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0808u;
        // 0x2b080c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0808) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0810u;
label_2b0810:
    // 0x2b0810: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0814: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0814u;
    SET_GPR_U32(ctx, 31, 0x2B081Cu);
    ctx->pc = 0x2B0818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0814u;
    // 0x2b0818: 0x24a5ede8  addiu       $a1, $a1, -0x1218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0814u, 0x2B081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B081Cu;
label_2b081c:
    // 0x2b081c: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2B081Cu;
    {
        const bool branch_taken_0x2b081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b081c) {
            ctx->pc = 0x2B0820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B081Cu;
            // 0x2b0820: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B08F8u;
            goto label_2b08f8;
        }
    }
    ctx->pc = 0x2B0824u;
    // 0x2b0824: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b0824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b0828: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b082c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b082cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0830: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0830u;
    SET_GPR_U32(ctx, 31, 0x2B0838u);
    ctx->pc = 0x2B0834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0830u;
    // 0x2b0834: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0830u, 0x2B0838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0838u;
label_2b0838:
    // 0x2b0838: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0838u;
    SET_GPR_U32(ctx, 31, 0x2B0840u);
    ctx->pc = 0x2B083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0838u;
    // 0x2b083c: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0838u, 0x2B0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0840u;
label_2b0840:
    // 0x2b0840: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0840u;
    SET_GPR_U32(ctx, 31, 0x2B0848u);
    ctx->pc = 0x2B0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0840u;
    // 0x2b0844: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0840u, 0x2B0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0848u;
label_2b0848:
    // 0x2b0848: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b084c: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b084cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0850: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b0854: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0854u;
    SET_GPR_U32(ctx, 31, 0x2B085Cu);
    ctx->pc = 0x2B0858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0854u;
    // 0x2b0858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0854u, 0x2B085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B085Cu;
label_2b085c:
    // 0x2b085c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B085Cu;
    SET_GPR_U32(ctx, 31, 0x2B0864u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B085Cu, 0x2B0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0864u;
label_2b0864:
    // 0x2b0864: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b086c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B086Cu;
    SET_GPR_U32(ctx, 31, 0x2B0874u);
    ctx->pc = 0x2B0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B086Cu;
    // 0x2b0870: 0x27a600c4  addiu       $a2, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B086Cu, 0x2B0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0874u;
label_2b0874:
    // 0x2b0874: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0874u;
    SET_GPR_U32(ctx, 31, 0x2B087Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0874u, 0x2B087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B087Cu;
label_2b087c:
    // 0x2b087c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0880: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B0880u;
    SET_GPR_U32(ctx, 31, 0x2B0888u);
    ctx->pc = 0x2B0884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0880u;
    // 0x2b0884: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B0880u, 0x2B0888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0888u;
label_2b0888:
    // 0x2b0888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b088c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0890: 0x108204bd  beq         $a0, $v0, . + 4 + (0x4BD << 2)
    ctx->pc = 0x2B0890u;
    {
        const bool branch_taken_0x2b0890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0890u;
        // 0x2b0894: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0890) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0898u;
    // 0x2b0898: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b089c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b089cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b08a0: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b08a4: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b08a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b08a8: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b08ac: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b08acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b08b0: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b08b4: 0x0  nop
    ctx->pc = 0x2b08b4u;
    // NOP
    // 0x2b08b8: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b08b8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b08bc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b08bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b08c0: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b08c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b08c4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b08c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b08c8: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b08cc: 0x0  nop
    ctx->pc = 0x2b08ccu;
    // NOP
    // 0x2b08d0: 0x0  nop
    ctx->pc = 0x2b08d0u;
    // NOP
    // 0x2b08d4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b08d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b08d8: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b08d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b08dc: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b08dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b08e0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b08e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b08e4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b08e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b08e8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b08e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b08ec: 0xf8410050  sqc2        $vf1, 0x50($v0)
    ctx->pc = 0x2b08ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b08f0: 0x100004a6  b           . + 4 + (0x4A6 << 2)
    ctx->pc = 0x2B08F0u;
    {
        const bool branch_taken_0x2b08f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08F0u;
        // 0x2b08f4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08f0) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B08F8u;
label_2b08f8:
    // 0x2b08f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b08f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b08fc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B08FCu;
    SET_GPR_U32(ctx, 31, 0x2B0904u);
    ctx->pc = 0x2B0900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B08FCu;
    // 0x2b0900: 0x24a5ee00  addiu       $a1, $a1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B08FCu, 0x2B0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0904u;
label_2b0904:
    // 0x2b0904: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2B0904u;
    {
        const bool branch_taken_0x2b0904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0904) {
            ctx->pc = 0x2B0908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0904u;
            // 0x2b0908: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B09E0u;
            goto label_2b09e0;
        }
    }
    ctx->pc = 0x2B090Cu;
    // 0x2b090c: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b090cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b0910: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0914: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0918: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0918u;
    SET_GPR_U32(ctx, 31, 0x2B0920u);
    ctx->pc = 0x2B091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0918u;
    // 0x2b091c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0918u, 0x2B0920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0920u;
label_2b0920:
    // 0x2b0920: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0920u;
    SET_GPR_U32(ctx, 31, 0x2B0928u);
    ctx->pc = 0x2B0924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0920u;
    // 0x2b0924: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0920u, 0x2B0928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0928u;
label_2b0928:
    // 0x2b0928: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0928u;
    SET_GPR_U32(ctx, 31, 0x2B0930u);
    ctx->pc = 0x2B092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0928u;
    // 0x2b092c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0928u, 0x2B0930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0930u;
label_2b0930:
    // 0x2b0930: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0934: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0938: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b093c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B093Cu;
    SET_GPR_U32(ctx, 31, 0x2B0944u);
    ctx->pc = 0x2B0940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B093Cu;
    // 0x2b0940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B093Cu, 0x2B0944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0944u;
label_2b0944:
    // 0x2b0944: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0944u;
    SET_GPR_U32(ctx, 31, 0x2B094Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0944u, 0x2B094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B094Cu;
label_2b094c:
    // 0x2b094c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0954: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0954u;
    SET_GPR_U32(ctx, 31, 0x2B095Cu);
    ctx->pc = 0x2B0958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0954u;
    // 0x2b0958: 0x27a600c4  addiu       $a2, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0954u, 0x2B095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B095Cu;
label_2b095c:
    // 0x2b095c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B095Cu;
    SET_GPR_U32(ctx, 31, 0x2B0964u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B095Cu, 0x2B0964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0964u;
label_2b0964:
    // 0x2b0964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0968: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B0968u;
    SET_GPR_U32(ctx, 31, 0x2B0970u);
    ctx->pc = 0x2B096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0968u;
    // 0x2b096c: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B0968u, 0x2B0970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0970u;
label_2b0970:
    // 0x2b0970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0974: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b0974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0978: 0x10820483  beq         $a0, $v0, . + 4 + (0x483 << 2)
    ctx->pc = 0x2B0978u;
    {
        const bool branch_taken_0x2b0978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0978u;
        // 0x2b097c: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0978) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0980u;
    // 0x2b0980: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b0984: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0988: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b0988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b098c: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b098cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b0990: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b0990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0994: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b0994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b0998: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b0998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b099c: 0x0  nop
    ctx->pc = 0x2b099cu;
    // NOP
    // 0x2b09a0: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b09a0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b09a4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b09a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b09a8: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b09a8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b09ac: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b09acu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b09b0: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b09b4: 0x0  nop
    ctx->pc = 0x2b09b4u;
    // NOP
    // 0x2b09b8: 0x0  nop
    ctx->pc = 0x2b09b8u;
    // NOP
    // 0x2b09bc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b09bcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b09c0: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b09c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b09c4: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b09c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b09c8: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b09c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b09cc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b09ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b09d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b09d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b09d4: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x2b09d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b09d8: 0x1000046c  b           . + 4 + (0x46C << 2)
    ctx->pc = 0x2B09D8u;
    {
        const bool branch_taken_0x2b09d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B09DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09D8u;
        // 0x2b09dc: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09d8) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B09E0u;
label_2b09e0:
    // 0x2b09e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b09e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b09e4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B09E4u;
    SET_GPR_U32(ctx, 31, 0x2B09ECu);
    ctx->pc = 0x2B09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09E4u;
    // 0x2b09e8: 0x24a5ee10  addiu       $a1, $a1, -0x11F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B09E4u, 0x2B09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09ECu;
label_2b09ec:
    // 0x2b09ec: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2B09ECu;
    {
        const bool branch_taken_0x2b09ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b09ec) {
            ctx->pc = 0x2B09F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B09ECu;
            // 0x2b09f0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0AC8u;
            goto label_2b0ac8;
        }
    }
    ctx->pc = 0x2B09F4u;
    // 0x2b09f4: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b09f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b09f8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b09fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b09fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0a00: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0A00u;
    SET_GPR_U32(ctx, 31, 0x2B0A08u);
    ctx->pc = 0x2B0A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A00u;
    // 0x2b0a04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0A00u, 0x2B0A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A08u;
label_2b0a08:
    // 0x2b0a08: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0A08u;
    SET_GPR_U32(ctx, 31, 0x2B0A10u);
    ctx->pc = 0x2B0A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A08u;
    // 0x2b0a0c: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0A08u, 0x2B0A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A10u;
label_2b0a10:
    // 0x2b0a10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0A10u;
    SET_GPR_U32(ctx, 31, 0x2B0A18u);
    ctx->pc = 0x2B0A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A10u;
    // 0x2b0a14: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0A10u, 0x2B0A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A18u;
label_2b0a18:
    // 0x2b0a18: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0a1c: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0a20: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b0a24: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0A24u;
    SET_GPR_U32(ctx, 31, 0x2B0A2Cu);
    ctx->pc = 0x2B0A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A24u;
    // 0x2b0a28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0A24u, 0x2B0A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A2Cu;
label_2b0a2c:
    // 0x2b0a2c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0A2Cu;
    SET_GPR_U32(ctx, 31, 0x2B0A34u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0A2Cu, 0x2B0A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A34u;
label_2b0a34:
    // 0x2b0a34: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0a3c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0A3Cu;
    SET_GPR_U32(ctx, 31, 0x2B0A44u);
    ctx->pc = 0x2B0A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A3Cu;
    // 0x2b0a40: 0x27a600c4  addiu       $a2, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0A3Cu, 0x2B0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A44u;
label_2b0a44:
    // 0x2b0a44: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0A44u;
    SET_GPR_U32(ctx, 31, 0x2B0A4Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0A44u, 0x2B0A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A4Cu;
label_2b0a4c:
    // 0x2b0a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0a50: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B0A50u;
    SET_GPR_U32(ctx, 31, 0x2B0A58u);
    ctx->pc = 0x2B0A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A50u;
    // 0x2b0a54: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B0A50u, 0x2B0A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A58u;
label_2b0a58:
    // 0x2b0a58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0a5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0a60: 0x10820449  beq         $a0, $v0, . + 4 + (0x449 << 2)
    ctx->pc = 0x2B0A60u;
    {
        const bool branch_taken_0x2b0a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A60u;
        // 0x2b0a64: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a60) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0A68u;
    // 0x2b0a68: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b0a6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0a70: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b0a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b0a74: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b0a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b0a78: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b0a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0a7c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b0a80: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b0a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0a84: 0x0  nop
    ctx->pc = 0x2b0a84u;
    // NOP
    // 0x2b0a88: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b0a88u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b0a8c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b0a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0a90: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b0a90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b0a94: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b0a94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b0a98: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b0a9c: 0x0  nop
    ctx->pc = 0x2b0a9cu;
    // NOP
    // 0x2b0aa0: 0x0  nop
    ctx->pc = 0x2b0aa0u;
    // NOP
    // 0x2b0aa4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b0aa4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b0aa8: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b0aa8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b0aac: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b0aacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b0ab0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b0ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b0ab4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b0ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b0ab8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0abc: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x2b0abcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b0ac0: 0x10000432  b           . + 4 + (0x432 << 2)
    ctx->pc = 0x2B0AC0u;
    {
        const bool branch_taken_0x2b0ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AC0u;
        // 0x2b0ac4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ac0) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0AC8u;
label_2b0ac8:
    // 0x2b0ac8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0acc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0ACCu;
    SET_GPR_U32(ctx, 31, 0x2B0AD4u);
    ctx->pc = 0x2B0AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0ACCu;
    // 0x2b0ad0: 0x24a5ee20  addiu       $a1, $a1, -0x11E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0ACCu, 0x2B0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AD4u;
label_2b0ad4:
    // 0x2b0ad4: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B0AD4u;
    {
        const bool branch_taken_0x2b0ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ad4) {
            ctx->pc = 0x2B0AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0AD4u;
            // 0x2b0ad8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0BC4u;
            goto label_2b0bc4;
        }
    }
    ctx->pc = 0x2B0ADCu;
    // 0x2b0adc: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b0adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b0ae0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0ae4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ae8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0AE8u;
    SET_GPR_U32(ctx, 31, 0x2B0AF0u);
    ctx->pc = 0x2B0AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0AE8u;
    // 0x2b0aec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0AE8u, 0x2B0AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AF0u;
label_2b0af0:
    // 0x2b0af0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0AF0u;
    SET_GPR_U32(ctx, 31, 0x2B0AF8u);
    ctx->pc = 0x2B0AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0AF0u;
    // 0x2b0af4: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0AF0u, 0x2B0AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0AF8u;
label_2b0af8:
    // 0x2b0af8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0AF8u;
    SET_GPR_U32(ctx, 31, 0x2B0B00u);
    ctx->pc = 0x2B0AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0AF8u;
    // 0x2b0afc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0AF8u, 0x2B0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B00u;
label_2b0b00:
    // 0x2b0b00: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0b04: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0b08: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b0b0c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0B0Cu;
    SET_GPR_U32(ctx, 31, 0x2B0B14u);
    ctx->pc = 0x2B0B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B0Cu;
    // 0x2b0b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0B0Cu, 0x2B0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B14u;
label_2b0b14:
    // 0x2b0b14: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0B14u;
    SET_GPR_U32(ctx, 31, 0x2B0B1Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0B14u, 0x2B0B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B1Cu;
label_2b0b1c:
    // 0x2b0b1c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0b20: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x2b0b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2b0b24: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0B24u;
    SET_GPR_U32(ctx, 31, 0x2B0B2Cu);
    ctx->pc = 0x2B0B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B24u;
    // 0x2b0b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0B24u, 0x2B0B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B2Cu;
label_2b0b2c:
    // 0x2b0b2c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0B2Cu;
    SET_GPR_U32(ctx, 31, 0x2B0B34u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0B2Cu, 0x2B0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B34u;
label_2b0b34:
    // 0x2b0b34: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0b3c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0B3Cu;
    SET_GPR_U32(ctx, 31, 0x2B0B44u);
    ctx->pc = 0x2B0B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B3Cu;
    // 0x2b0b40: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0B3Cu, 0x2B0B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B44u;
label_2b0b44:
    // 0x2b0b44: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0B44u;
    SET_GPR_U32(ctx, 31, 0x2B0B4Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0B44u, 0x2B0B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B4Cu;
label_2b0b4c:
    // 0x2b0b4c: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B0B4Cu;
    SET_GPR_U32(ctx, 31, 0x2B0B54u);
    ctx->pc = 0x2B0B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B4Cu;
    // 0x2b0b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B0B4Cu, 0x2B0B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B54u;
label_2b0b54:
    // 0x2b0b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0b58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0b5c: 0x1082040a  beq         $a0, $v0, . + 4 + (0x40A << 2)
    ctx->pc = 0x2B0B5Cu;
    {
        const bool branch_taken_0x2b0b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B5Cu;
        // 0x2b0b60: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b5c) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0B64u;
    // 0x2b0b64: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b0b68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0b6c: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b0b70: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b0b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b0b74: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b0b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0b78: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b0b7c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b0b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0b80: 0x0  nop
    ctx->pc = 0x2b0b80u;
    // NOP
    // 0x2b0b84: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b0b84u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b0b88: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b0b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0b8c: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b0b8cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b0b90: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b0b90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b0b94: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b0b98: 0x0  nop
    ctx->pc = 0x2b0b98u;
    // NOP
    // 0x2b0b9c: 0x0  nop
    ctx->pc = 0x2b0b9cu;
    // NOP
    // 0x2b0ba0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b0ba0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b0ba4: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b0ba4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b0ba8: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b0ba8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b0bac: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b0bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b0bb0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b0bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b0bb4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0bb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0bb8: 0xf8410080  sqc2        $vf1, 0x80($v0)
    ctx->pc = 0x2b0bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b0bbc: 0x100003f3  b           . + 4 + (0x3F3 << 2)
    ctx->pc = 0x2B0BBCu;
    {
        const bool branch_taken_0x2b0bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BBCu;
        // 0x2b0bc0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bbc) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0BC4u;
label_2b0bc4:
    // 0x2b0bc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0bc8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0BC8u;
    SET_GPR_U32(ctx, 31, 0x2B0BD0u);
    ctx->pc = 0x2B0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BC8u;
    // 0x2b0bcc: 0x24a5ee38  addiu       $a1, $a1, -0x11C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0BC8u, 0x2B0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BD0u;
label_2b0bd0:
    // 0x2b0bd0: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B0BD0u;
    {
        const bool branch_taken_0x2b0bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0bd0) {
            ctx->pc = 0x2B0BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0BD0u;
            // 0x2b0bd4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0CC0u;
            goto label_2b0cc0;
        }
    }
    ctx->pc = 0x2B0BD8u;
    // 0x2b0bd8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b0bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b0bdc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0be0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b0be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0be4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0BE4u;
    SET_GPR_U32(ctx, 31, 0x2B0BECu);
    ctx->pc = 0x2B0BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BE4u;
    // 0x2b0be8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0BE4u, 0x2B0BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BECu;
label_2b0bec:
    // 0x2b0bec: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0BECu;
    SET_GPR_U32(ctx, 31, 0x2B0BF4u);
    ctx->pc = 0x2B0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BECu;
    // 0x2b0bf0: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0BECu, 0x2B0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BF4u;
label_2b0bf4:
    // 0x2b0bf4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0BF4u;
    SET_GPR_U32(ctx, 31, 0x2B0BFCu);
    ctx->pc = 0x2B0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BF4u;
    // 0x2b0bf8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0BF4u, 0x2B0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BFCu;
label_2b0bfc:
    // 0x2b0bfc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0c00: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0c04: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b0c08: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0C08u;
    SET_GPR_U32(ctx, 31, 0x2B0C10u);
    ctx->pc = 0x2B0C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C08u;
    // 0x2b0c0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0C08u, 0x2B0C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C10u;
label_2b0c10:
    // 0x2b0c10: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0C10u;
    SET_GPR_U32(ctx, 31, 0x2B0C18u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0C10u, 0x2B0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C18u;
label_2b0c18:
    // 0x2b0c18: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0c1c: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x2b0c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2b0c20: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0C20u;
    SET_GPR_U32(ctx, 31, 0x2B0C28u);
    ctx->pc = 0x2B0C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C20u;
    // 0x2b0c24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0C20u, 0x2B0C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C28u;
label_2b0c28:
    // 0x2b0c28: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0C28u;
    SET_GPR_U32(ctx, 31, 0x2B0C30u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0C28u, 0x2B0C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C30u;
label_2b0c30:
    // 0x2b0c30: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c38: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0C38u;
    SET_GPR_U32(ctx, 31, 0x2B0C40u);
    ctx->pc = 0x2B0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C38u;
    // 0x2b0c3c: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0C38u, 0x2B0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C40u;
label_2b0c40:
    // 0x2b0c40: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0C40u;
    SET_GPR_U32(ctx, 31, 0x2B0C48u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0C40u, 0x2B0C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C48u;
label_2b0c48:
    // 0x2b0c48: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B0C48u;
    SET_GPR_U32(ctx, 31, 0x2B0C50u);
    ctx->pc = 0x2B0C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C48u;
    // 0x2b0c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B0C48u, 0x2B0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C50u;
label_2b0c50:
    // 0x2b0c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0c58: 0x108203cb  beq         $a0, $v0, . + 4 + (0x3CB << 2)
    ctx->pc = 0x2B0C58u;
    {
        const bool branch_taken_0x2b0c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C58u;
        // 0x2b0c5c: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c58) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0C60u;
    // 0x2b0c60: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b0c64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0c68: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b0c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b0c6c: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b0c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b0c70: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b0c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0c74: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b0c78: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b0c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0c7c: 0x0  nop
    ctx->pc = 0x2b0c7cu;
    // NOP
    // 0x2b0c80: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b0c80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b0c84: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b0c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0c88: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b0c88u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b0c8c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b0c8cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b0c90: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b0c94: 0x0  nop
    ctx->pc = 0x2b0c94u;
    // NOP
    // 0x2b0c98: 0x0  nop
    ctx->pc = 0x2b0c98u;
    // NOP
    // 0x2b0c9c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b0c9cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b0ca0: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b0ca0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b0ca4: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b0ca4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b0ca8: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b0ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b0cac: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b0cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b0cb0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0cb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0cb4: 0xf8410090  sqc2        $vf1, 0x90($v0)
    ctx->pc = 0x2b0cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b0cb8: 0x100003b4  b           . + 4 + (0x3B4 << 2)
    ctx->pc = 0x2B0CB8u;
    {
        const bool branch_taken_0x2b0cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CB8u;
        // 0x2b0cbc: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cb8) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0CC0u;
label_2b0cc0:
    // 0x2b0cc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0cc4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0CC4u;
    SET_GPR_U32(ctx, 31, 0x2B0CCCu);
    ctx->pc = 0x2B0CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CC4u;
    // 0x2b0cc8: 0x24a5ee50  addiu       $a1, $a1, -0x11B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0CC4u, 0x2B0CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CCCu;
label_2b0ccc:
    // 0x2b0ccc: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B0CCCu;
    {
        const bool branch_taken_0x2b0ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ccc) {
            ctx->pc = 0x2B0CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0CCCu;
            // 0x2b0cd0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0DBCu;
            goto label_2b0dbc;
        }
    }
    ctx->pc = 0x2B0CD4u;
    // 0x2b0cd4: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b0cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b0cd8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0cdc: 0x27c5ed18  addiu       $a1, $fp, -0x12E8
    ctx->pc = 0x2b0cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962456));
    // 0x2b0ce0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0CE0u;
    SET_GPR_U32(ctx, 31, 0x2B0CE8u);
    ctx->pc = 0x2B0CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CE0u;
    // 0x2b0ce4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0CE0u, 0x2B0CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CE8u;
label_2b0ce8:
    // 0x2b0ce8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0CE8u;
    SET_GPR_U32(ctx, 31, 0x2B0CF0u);
    ctx->pc = 0x2B0CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CE8u;
    // 0x2b0cec: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0CE8u, 0x2B0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CF0u;
label_2b0cf0:
    // 0x2b0cf0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0CF0u;
    SET_GPR_U32(ctx, 31, 0x2B0CF8u);
    ctx->pc = 0x2B0CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CF0u;
    // 0x2b0cf4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0CF0u, 0x2B0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CF8u;
label_2b0cf8:
    // 0x2b0cf8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0cfc: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0d00: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b0d04: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0D04u;
    SET_GPR_U32(ctx, 31, 0x2B0D0Cu);
    ctx->pc = 0x2B0D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D04u;
    // 0x2b0d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0D04u, 0x2B0D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D0Cu;
label_2b0d0c:
    // 0x2b0d0c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0D0Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D14u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0D0Cu, 0x2B0D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D14u;
label_2b0d14:
    // 0x2b0d14: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0d18: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x2b0d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2b0d1c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0D1Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D24u);
    ctx->pc = 0x2B0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D1Cu;
    // 0x2b0d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0D1Cu, 0x2B0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D24u;
label_2b0d24:
    // 0x2b0d24: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0D24u;
    SET_GPR_U32(ctx, 31, 0x2B0D2Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0D24u, 0x2B0D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D2Cu;
label_2b0d2c:
    // 0x2b0d2c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d34: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0D34u;
    SET_GPR_U32(ctx, 31, 0x2B0D3Cu);
    ctx->pc = 0x2B0D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D34u;
    // 0x2b0d38: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0D34u, 0x2B0D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D3Cu;
label_2b0d3c:
    // 0x2b0d3c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0D3Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D44u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0D3Cu, 0x2B0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D44u;
label_2b0d44:
    // 0x2b0d44: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B0D44u;
    SET_GPR_U32(ctx, 31, 0x2B0D4Cu);
    ctx->pc = 0x2B0D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D44u;
    // 0x2b0d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B0D44u, 0x2B0D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D4Cu;
label_2b0d4c:
    // 0x2b0d4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0d54: 0x1082038c  beq         $a0, $v0, . + 4 + (0x38C << 2)
    ctx->pc = 0x2B0D54u;
    {
        const bool branch_taken_0x2b0d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D54u;
        // 0x2b0d58: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d54) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0D5Cu;
    // 0x2b0d5c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b0d60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0d64: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b0d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b0d68: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b0d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b0d6c: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b0d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0d70: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b0d74: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b0d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0d78: 0x0  nop
    ctx->pc = 0x2b0d78u;
    // NOP
    // 0x2b0d7c: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b0d7cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b0d80: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b0d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0d84: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b0d84u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b0d88: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b0d88u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b0d8c: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b0d90: 0x0  nop
    ctx->pc = 0x2b0d90u;
    // NOP
    // 0x2b0d94: 0x0  nop
    ctx->pc = 0x2b0d94u;
    // NOP
    // 0x2b0d98: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b0d98u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b0d9c: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b0d9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b0da0: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b0da0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b0da4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b0da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b0da8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b0da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b0dac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0db0: 0xf84100a0  sqc2        $vf1, 0xA0($v0)
    ctx->pc = 0x2b0db0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b0db4: 0x10000375  b           . + 4 + (0x375 << 2)
    ctx->pc = 0x2B0DB4u;
    {
        const bool branch_taken_0x2b0db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DB4u;
        // 0x2b0db8: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0db4) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0DBCu;
label_2b0dbc:
    // 0x2b0dbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0dc0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0DC0u;
    SET_GPR_U32(ctx, 31, 0x2B0DC8u);
    ctx->pc = 0x2B0DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DC0u;
    // 0x2b0dc4: 0x24a5ee60  addiu       $a1, $a1, -0x11A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0DC0u, 0x2B0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DC8u;
label_2b0dc8:
    // 0x2b0dc8: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B0DC8u;
    {
        const bool branch_taken_0x2b0dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0dc8) {
            ctx->pc = 0x2B0DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0DC8u;
            // 0x2b0dcc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0EB8u;
            goto label_2b0eb8;
        }
    }
    ctx->pc = 0x2B0DD0u;
    // 0x2b0dd0: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b0dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b0dd4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0dd8: 0x27c5ed18  addiu       $a1, $fp, -0x12E8
    ctx->pc = 0x2b0dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962456));
    // 0x2b0ddc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0DDCu;
    SET_GPR_U32(ctx, 31, 0x2B0DE4u);
    ctx->pc = 0x2B0DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DDCu;
    // 0x2b0de0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0DDCu, 0x2B0DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DE4u;
label_2b0de4:
    // 0x2b0de4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0DE4u;
    SET_GPR_U32(ctx, 31, 0x2B0DECu);
    ctx->pc = 0x2B0DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DE4u;
    // 0x2b0de8: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0DE4u, 0x2B0DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DECu;
label_2b0dec:
    // 0x2b0dec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0DECu;
    SET_GPR_U32(ctx, 31, 0x2B0DF4u);
    ctx->pc = 0x2B0DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DECu;
    // 0x2b0df0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0DECu, 0x2B0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DF4u;
label_2b0df4:
    // 0x2b0df4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0df8: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0dfc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b0e00: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0E00u;
    SET_GPR_U32(ctx, 31, 0x2B0E08u);
    ctx->pc = 0x2B0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E00u;
    // 0x2b0e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0E00u, 0x2B0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E08u;
label_2b0e08:
    // 0x2b0e08: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0E08u;
    SET_GPR_U32(ctx, 31, 0x2B0E10u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0E08u, 0x2B0E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E10u;
label_2b0e10:
    // 0x2b0e10: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0e14: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x2b0e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2b0e18: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0E18u;
    SET_GPR_U32(ctx, 31, 0x2B0E20u);
    ctx->pc = 0x2B0E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E18u;
    // 0x2b0e1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0E18u, 0x2B0E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E20u;
label_2b0e20:
    // 0x2b0e20: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0E20u;
    SET_GPR_U32(ctx, 31, 0x2B0E28u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0E20u, 0x2B0E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E28u;
label_2b0e28:
    // 0x2b0e28: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0e2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0e30: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0E30u;
    SET_GPR_U32(ctx, 31, 0x2B0E38u);
    ctx->pc = 0x2B0E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E30u;
    // 0x2b0e34: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0E30u, 0x2B0E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E38u;
label_2b0e38:
    // 0x2b0e38: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0E38u;
    SET_GPR_U32(ctx, 31, 0x2B0E40u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0E38u, 0x2B0E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E40u;
label_2b0e40:
    // 0x2b0e40: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B0E40u;
    SET_GPR_U32(ctx, 31, 0x2B0E48u);
    ctx->pc = 0x2B0E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E40u;
    // 0x2b0e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B0E40u, 0x2B0E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E48u;
label_2b0e48:
    // 0x2b0e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0e4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0e50: 0x1082034d  beq         $a0, $v0, . + 4 + (0x34D << 2)
    ctx->pc = 0x2B0E50u;
    {
        const bool branch_taken_0x2b0e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E50u;
        // 0x2b0e54: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e50) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0E58u;
    // 0x2b0e58: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b0e5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0e60: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b0e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b0e64: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b0e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b0e68: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b0e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0e6c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b0e70: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b0e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0e74: 0x0  nop
    ctx->pc = 0x2b0e74u;
    // NOP
    // 0x2b0e78: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b0e78u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b0e7c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b0e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0e80: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b0e80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b0e84: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b0e84u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b0e88: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b0e8c: 0x0  nop
    ctx->pc = 0x2b0e8cu;
    // NOP
    // 0x2b0e90: 0x0  nop
    ctx->pc = 0x2b0e90u;
    // NOP
    // 0x2b0e94: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b0e94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b0e98: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b0e98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b0e9c: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b0e9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b0ea0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b0ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b0ea4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b0ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b0ea8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0ea8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0eac: 0xf84100b0  sqc2        $vf1, 0xB0($v0)
    ctx->pc = 0x2b0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b0eb0: 0x10000336  b           . + 4 + (0x336 << 2)
    ctx->pc = 0x2B0EB0u;
    {
        const bool branch_taken_0x2b0eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EB0u;
        // 0x2b0eb4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0eb0) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0EB8u;
label_2b0eb8:
    // 0x2b0eb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ebc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0EBCu;
    SET_GPR_U32(ctx, 31, 0x2B0EC4u);
    ctx->pc = 0x2B0EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0EBCu;
    // 0x2b0ec0: 0x24a5ee70  addiu       $a1, $a1, -0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0EBCu, 0x2B0EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0EC4u;
label_2b0ec4:
    // 0x2b0ec4: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B0EC4u;
    {
        const bool branch_taken_0x2b0ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ec4) {
            ctx->pc = 0x2B0EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0EC4u;
            // 0x2b0ec8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0FB4u;
            goto label_2b0fb4;
        }
    }
    ctx->pc = 0x2B0ECCu;
    // 0x2b0ecc: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2b0eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b0ed0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0ed4: 0x27c5ed18  addiu       $a1, $fp, -0x12E8
    ctx->pc = 0x2b0ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962456));
    // 0x2b0ed8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0ED8u;
    SET_GPR_U32(ctx, 31, 0x2B0EE0u);
    ctx->pc = 0x2B0EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0ED8u;
    // 0x2b0edc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0ED8u, 0x2B0EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0EE0u;
label_2b0ee0:
    // 0x2b0ee0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0EE0u;
    SET_GPR_U32(ctx, 31, 0x2B0EE8u);
    ctx->pc = 0x2B0EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0EE0u;
    // 0x2b0ee4: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0EE0u, 0x2B0EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0EE8u;
label_2b0ee8:
    // 0x2b0ee8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2B0EE8u;
    SET_GPR_U32(ctx, 31, 0x2B0EF0u);
    ctx->pc = 0x2B0EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0EE8u;
    // 0x2b0eec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2B0EE8u, 0x2B0EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0EF0u;
label_2b0ef0:
    // 0x2b0ef0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0ef4: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b0ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b0ef8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2b0ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b0efc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0EFCu;
    SET_GPR_U32(ctx, 31, 0x2B0F04u);
    ctx->pc = 0x2B0F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0EFCu;
    // 0x2b0f00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0EFCu, 0x2B0F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F04u;
label_2b0f04:
    // 0x2b0f04: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0F04u;
    SET_GPR_U32(ctx, 31, 0x2B0F0Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0F04u, 0x2B0F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F0Cu;
label_2b0f0c:
    // 0x2b0f0c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0f10: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x2b0f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2b0f14: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0F14u;
    SET_GPR_U32(ctx, 31, 0x2B0F1Cu);
    ctx->pc = 0x2B0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F14u;
    // 0x2b0f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0F14u, 0x2B0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F1Cu;
label_2b0f1c:
    // 0x2b0f1c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0F1Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F24u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0F1Cu, 0x2B0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F24u;
label_2b0f24:
    // 0x2b0f24: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0f28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f2c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0F2Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F34u);
    ctx->pc = 0x2B0F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F2Cu;
    // 0x2b0f30: 0x27a600c8  addiu       $a2, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0F2Cu, 0x2B0F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F34u;
label_2b0f34:
    // 0x2b0f34: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0F34u;
    SET_GPR_U32(ctx, 31, 0x2B0F3Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0F34u, 0x2B0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F3Cu;
label_2b0f3c:
    // 0x2b0f3c: 0xc0ac062  jal         func_2B0188
    ctx->pc = 0x2B0F3Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F44u);
    ctx->pc = 0x2B0F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F3Cu;
    // 0x2b0f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0188u, 0x2B0F3Cu, 0x2B0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F44u;
label_2b0f44:
    // 0x2b0f44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0f4c: 0x1082030e  beq         $a0, $v0, . + 4 + (0x30E << 2)
    ctx->pc = 0x2B0F4Cu;
    {
        const bool branch_taken_0x2b0f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F4Cu;
        // 0x2b0f50: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f4c) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0F54u;
    // 0x2b0f54: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2b0f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2b0f58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0f5c: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x2b0f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b0f60: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x2b0f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b0f64: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x2b0f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0f68: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2b0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b0f6c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2b0f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0f70: 0x0  nop
    ctx->pc = 0x2b0f70u;
    // NOP
    // 0x2b0f74: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x2b0f74u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x2b0f78: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2b0f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0f7c: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x2b0f7cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2b0f80: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2b0f80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2b0f84: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2b0f88: 0x0  nop
    ctx->pc = 0x2b0f88u;
    // NOP
    // 0x2b0f8c: 0x0  nop
    ctx->pc = 0x2b0f8cu;
    // NOP
    // 0x2b0f90: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b0f90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2b0f94: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x2b0f94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b0f98: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x2b0f98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2b0f9c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b0f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b0fa0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b0fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b0fa4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2b0fa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0fa8: 0xf84100c0  sqc2        $vf1, 0xC0($v0)
    ctx->pc = 0x2b0fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b0fac: 0x100002f7  b           . + 4 + (0x2F7 << 2)
    ctx->pc = 0x2B0FACu;
    {
        const bool branch_taken_0x2b0fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FACu;
        // 0x2b0fb0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fac) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B0FB4u;
label_2b0fb4:
    // 0x2b0fb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0fb8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0FB8u;
    SET_GPR_U32(ctx, 31, 0x2B0FC0u);
    ctx->pc = 0x2B0FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0FB8u;
    // 0x2b0fbc: 0x24a5ee80  addiu       $a1, $a1, -0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0FB8u, 0x2B0FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FC0u;
label_2b0fc0:
    // 0x2b0fc0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0FC0u;
    {
        const bool branch_taken_0x2b0fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0fc0) {
            ctx->pc = 0x2B0FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0FC0u;
            // 0x2b0fc4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0FF4u;
            goto label_2b0ff4;
        }
    }
    ctx->pc = 0x2B0FC8u;
    // 0x2b0fc8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b0fcc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b0fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b0fd0: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b0fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b0fd4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0FD4u;
    SET_GPR_U32(ctx, 31, 0x2B0FDCu);
    ctx->pc = 0x2B0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0FD4u;
    // 0x2b0fd8: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0FD4u, 0x2B0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FDCu;
label_2b0fdc:
    // 0x2b0fdc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B0FDCu;
    SET_GPR_U32(ctx, 31, 0x2B0FE4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B0FDCu, 0x2B0FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FE4u;
label_2b0fe4:
    // 0x2b0fe4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2b0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b0fe8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b0fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b0fec: 0x100002e6  b           . + 4 + (0x2E6 << 2)
    ctx->pc = 0x2B0FECu;
    {
        const bool branch_taken_0x2b0fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FECu;
        // 0x2b0ff0: 0xa24203d0  sb          $v0, 0x3D0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 976), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fec) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B0FF4u;
label_2b0ff4:
    // 0x2b0ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b0ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ff8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0FF8u;
    SET_GPR_U32(ctx, 31, 0x2B1000u);
    ctx->pc = 0x2B0FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0FF8u;
    // 0x2b0ffc: 0x24a5eea0  addiu       $a1, $a1, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0FF8u, 0x2B1000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1000u;
label_2b1000:
    // 0x2b1000: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B1000u;
    {
        const bool branch_taken_0x2b1000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1000) {
            ctx->pc = 0x2B1004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1000u;
            // 0x2b1004: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1034u;
            goto label_2b1034;
        }
    }
    ctx->pc = 0x2B1008u;
    // 0x2b1008: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b100c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b100cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1010: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b1010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b1014: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1014u;
    SET_GPR_U32(ctx, 31, 0x2B101Cu);
    ctx->pc = 0x2B1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1014u;
    // 0x2b1018: 0x27a600f4  addiu       $a2, $sp, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1014u, 0x2B101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B101Cu;
label_2b101c:
    // 0x2b101c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B101Cu;
    SET_GPR_U32(ctx, 31, 0x2B1024u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B101Cu, 0x2B1024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1024u;
label_2b1024:
    // 0x2b1024: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x2b1024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2b1028: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b1028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b102c: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x2B102Cu;
    {
        const bool branch_taken_0x2b102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B102Cu;
        // 0x2b1030: 0xa2420004  sb          $v0, 0x4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b102c) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B1034u;
label_2b1034:
    // 0x2b1034: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1038: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1038u;
    SET_GPR_U32(ctx, 31, 0x2B1040u);
    ctx->pc = 0x2B103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1038u;
    // 0x2b103c: 0x24a5eeb0  addiu       $a1, $a1, -0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1038u, 0x2B1040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1040u;
label_2b1040:
    // 0x2b1040: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1040u;
    {
        const bool branch_taken_0x2b1040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1040) {
            ctx->pc = 0x2B1044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1040u;
            // 0x2b1044: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B105Cu;
            goto label_2b105c;
        }
    }
    ctx->pc = 0x2B1048u;
    // 0x2b1048: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b104c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b104cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1050: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1054: 0x100002ba  b           . + 4 + (0x2BA << 2)
    ctx->pc = 0x2B1054u;
    {
        const bool branch_taken_0x2b1054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1054u;
        // 0x2b1058: 0x264603d4  addiu       $a2, $s2, 0x3D4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 980));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1054) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B105Cu;
label_2b105c:
    // 0x2b105c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1060: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1060u;
    SET_GPR_U32(ctx, 31, 0x2B1068u);
    ctx->pc = 0x2B1064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1060u;
    // 0x2b1064: 0x24a5eec0  addiu       $a1, $a1, -0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1060u, 0x2B1068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1068u;
label_2b1068:
    // 0x2b1068: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1068u;
    {
        const bool branch_taken_0x2b1068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1068) {
            ctx->pc = 0x2B106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1068u;
            // 0x2b106c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1084u;
            goto label_2b1084;
        }
    }
    ctx->pc = 0x2B1070u;
    // 0x2b1070: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1074: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1078: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b107c: 0x100002b0  b           . + 4 + (0x2B0 << 2)
    ctx->pc = 0x2B107Cu;
    {
        const bool branch_taken_0x2b107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B107Cu;
        // 0x2b1080: 0x264603d8  addiu       $a2, $s2, 0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b107c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1084u;
label_2b1084:
    // 0x2b1084: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1088: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1088u;
    SET_GPR_U32(ctx, 31, 0x2B1090u);
    ctx->pc = 0x2B108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1088u;
    // 0x2b108c: 0x24a5eed8  addiu       $a1, $a1, -0x1128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1088u, 0x2B1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1090u;
label_2b1090:
    // 0x2b1090: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1090u;
    {
        const bool branch_taken_0x2b1090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1090) {
            ctx->pc = 0x2B1094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1090u;
            // 0x2b1094: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B10ACu;
            goto label_2b10ac;
        }
    }
    ctx->pc = 0x2B1098u;
    // 0x2b1098: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b109c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b109cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b10a0: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b10a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b10a4: 0x100002a6  b           . + 4 + (0x2A6 << 2)
    ctx->pc = 0x2B10A4u;
    {
        const bool branch_taken_0x2b10a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10A4u;
        // 0x2b10a8: 0x264603dc  addiu       $a2, $s2, 0x3DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 988));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10a4) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B10ACu;
label_2b10ac:
    // 0x2b10ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b10acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10b0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B10B0u;
    SET_GPR_U32(ctx, 31, 0x2B10B8u);
    ctx->pc = 0x2B10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B10B0u;
    // 0x2b10b4: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B10B0u, 0x2B10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B10B8u;
label_2b10b8:
    // 0x2b10b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B10B8u;
    {
        const bool branch_taken_0x2b10b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b10b8) {
            ctx->pc = 0x2B10BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B10B8u;
            // 0x2b10bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B10D4u;
            goto label_2b10d4;
        }
    }
    ctx->pc = 0x2B10C0u;
    // 0x2b10c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b10c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b10c4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b10c8: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b10c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b10cc: 0x1000029c  b           . + 4 + (0x29C << 2)
    ctx->pc = 0x2B10CCu;
    {
        const bool branch_taken_0x2b10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10CCu;
        // 0x2b10d0: 0x264603e0  addiu       $a2, $s2, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10cc) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B10D4u;
label_2b10d4:
    // 0x2b10d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b10d8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B10D8u;
    SET_GPR_U32(ctx, 31, 0x2B10E0u);
    ctx->pc = 0x2B10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B10D8u;
    // 0x2b10dc: 0x24a5ef10  addiu       $a1, $a1, -0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B10D8u, 0x2B10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B10E0u;
label_2b10e0:
    // 0x2b10e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B10E0u;
    {
        const bool branch_taken_0x2b10e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b10e0) {
            ctx->pc = 0x2B10E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B10E0u;
            // 0x2b10e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B10FCu;
            goto label_2b10fc;
        }
    }
    ctx->pc = 0x2B10E8u;
    // 0x2b10e8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b10e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b10ec: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b10ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b10f0: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b10f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b10f4: 0x10000292  b           . + 4 + (0x292 << 2)
    ctx->pc = 0x2B10F4u;
    {
        const bool branch_taken_0x2b10f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10F4u;
        // 0x2b10f8: 0x264603e4  addiu       $a2, $s2, 0x3E4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 996));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10f4) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B10FCu;
label_2b10fc:
    // 0x2b10fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b10fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1100: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1100u;
    SET_GPR_U32(ctx, 31, 0x2B1108u);
    ctx->pc = 0x2B1104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1100u;
    // 0x2b1104: 0x24a5ef30  addiu       $a1, $a1, -0x10D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1100u, 0x2B1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1108u;
label_2b1108:
    // 0x2b1108: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1108u;
    {
        const bool branch_taken_0x2b1108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1108) {
            ctx->pc = 0x2B110Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1108u;
            // 0x2b110c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1124u;
            goto label_2b1124;
        }
    }
    ctx->pc = 0x2B1110u;
    // 0x2b1110: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1114: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1118: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b111c: 0x10000288  b           . + 4 + (0x288 << 2)
    ctx->pc = 0x2B111Cu;
    {
        const bool branch_taken_0x2b111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B111Cu;
        // 0x2b1120: 0x264603e8  addiu       $a2, $s2, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b111c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1124u;
label_2b1124:
    // 0x2b1124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1128: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1128u;
    SET_GPR_U32(ctx, 31, 0x2B1130u);
    ctx->pc = 0x2B112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1128u;
    // 0x2b112c: 0x24a5ef48  addiu       $a1, $a1, -0x10B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1128u, 0x2B1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1130u;
label_2b1130:
    // 0x2b1130: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1130u;
    {
        const bool branch_taken_0x2b1130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1130) {
            ctx->pc = 0x2B1134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1130u;
            // 0x2b1134: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B114Cu;
            goto label_2b114c;
        }
    }
    ctx->pc = 0x2B1138u;
    // 0x2b1138: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b113c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1140: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1144: 0x1000027e  b           . + 4 + (0x27E << 2)
    ctx->pc = 0x2B1144u;
    {
        const bool branch_taken_0x2b1144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1144u;
        // 0x2b1148: 0x264603ec  addiu       $a2, $s2, 0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1004));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1144) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B114Cu;
label_2b114c:
    // 0x2b114c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1150: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1150u;
    SET_GPR_U32(ctx, 31, 0x2B1158u);
    ctx->pc = 0x2B1154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1150u;
    // 0x2b1154: 0x24a5ef60  addiu       $a1, $a1, -0x10A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1150u, 0x2B1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1158u;
label_2b1158:
    // 0x2b1158: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1158u;
    {
        const bool branch_taken_0x2b1158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1158) {
            ctx->pc = 0x2B115Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1158u;
            // 0x2b115c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1174u;
            goto label_2b1174;
        }
    }
    ctx->pc = 0x2B1160u;
    // 0x2b1160: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1164: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1168: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b116c: 0x10000274  b           . + 4 + (0x274 << 2)
    ctx->pc = 0x2B116Cu;
    {
        const bool branch_taken_0x2b116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B116Cu;
        // 0x2b1170: 0x264603f0  addiu       $a2, $s2, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b116c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1174u;
label_2b1174:
    // 0x2b1174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1178: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1178u;
    SET_GPR_U32(ctx, 31, 0x2B1180u);
    ctx->pc = 0x2B117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1178u;
    // 0x2b117c: 0x24a5ef80  addiu       $a1, $a1, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1178u, 0x2B1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1180u;
label_2b1180:
    // 0x2b1180: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1180u;
    {
        const bool branch_taken_0x2b1180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1180) {
            ctx->pc = 0x2B1184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1180u;
            // 0x2b1184: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B119Cu;
            goto label_2b119c;
        }
    }
    ctx->pc = 0x2B1188u;
    // 0x2b1188: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b118c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b118cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1190: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1194: 0x1000026a  b           . + 4 + (0x26A << 2)
    ctx->pc = 0x2B1194u;
    {
        const bool branch_taken_0x2b1194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1194u;
        // 0x2b1198: 0x264603f4  addiu       $a2, $s2, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1194) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B119Cu;
label_2b119c:
    // 0x2b119c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b119cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b11a0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B11A0u;
    SET_GPR_U32(ctx, 31, 0x2B11A8u);
    ctx->pc = 0x2B11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11A0u;
    // 0x2b11a4: 0x24a5efa0  addiu       $a1, $a1, -0x1060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B11A0u, 0x2B11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11A8u;
label_2b11a8:
    // 0x2b11a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B11A8u;
    {
        const bool branch_taken_0x2b11a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b11a8) {
            ctx->pc = 0x2B11ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B11A8u;
            // 0x2b11ac: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B11C4u;
            goto label_2b11c4;
        }
    }
    ctx->pc = 0x2B11B0u;
    // 0x2b11b0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b11b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b11b4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b11b8: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b11b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b11bc: 0x10000260  b           . + 4 + (0x260 << 2)
    ctx->pc = 0x2B11BCu;
    {
        const bool branch_taken_0x2b11bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11BCu;
        // 0x2b11c0: 0x26460488  addiu       $a2, $s2, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11bc) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B11C4u;
label_2b11c4:
    // 0x2b11c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b11c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b11c8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B11C8u;
    SET_GPR_U32(ctx, 31, 0x2B11D0u);
    ctx->pc = 0x2B11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11C8u;
    // 0x2b11cc: 0x24a5efb8  addiu       $a1, $a1, -0x1048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B11C8u, 0x2B11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11D0u;
label_2b11d0:
    // 0x2b11d0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B11D0u;
    {
        const bool branch_taken_0x2b11d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b11d0) {
            ctx->pc = 0x2B11D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B11D0u;
            // 0x2b11d4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B11ECu;
            goto label_2b11ec;
        }
    }
    ctx->pc = 0x2B11D8u;
    // 0x2b11d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b11dc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b11e0: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b11e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b11e4: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x2B11E4u;
    {
        const bool branch_taken_0x2b11e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11E4u;
        // 0x2b11e8: 0x2646048c  addiu       $a2, $s2, 0x48C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11e4) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B11ECu;
label_2b11ec:
    // 0x2b11ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b11ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b11f0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B11F0u;
    SET_GPR_U32(ctx, 31, 0x2B11F8u);
    ctx->pc = 0x2B11F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11F0u;
    // 0x2b11f4: 0x24a5efd0  addiu       $a1, $a1, -0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B11F0u, 0x2B11F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11F8u;
label_2b11f8:
    // 0x2b11f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B11F8u;
    {
        const bool branch_taken_0x2b11f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b11f8) {
            ctx->pc = 0x2B11FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B11F8u;
            // 0x2b11fc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1214u;
            goto label_2b1214;
        }
    }
    ctx->pc = 0x2B1200u;
    // 0x2b1200: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1204: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1208: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b120c: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x2B120Cu;
    {
        const bool branch_taken_0x2b120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B120Cu;
        // 0x2b1210: 0x26460490  addiu       $a2, $s2, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b120c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1214u;
label_2b1214:
    // 0x2b1214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1218: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1218u;
    SET_GPR_U32(ctx, 31, 0x2B1220u);
    ctx->pc = 0x2B121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1218u;
    // 0x2b121c: 0x24a5efe8  addiu       $a1, $a1, -0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1218u, 0x2B1220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1220u;
label_2b1220:
    // 0x2b1220: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B1220u;
    {
        const bool branch_taken_0x2b1220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1220u;
        // 0x2b1224: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1220) {
            ctx->pc = 0x2B12A0u;
            goto label_2b12a0;
        }
    }
    ctx->pc = 0x2B1228u;
    // 0x2b1228: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b122c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b122cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1230: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1234: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1234u;
    SET_GPR_U32(ctx, 31, 0x2B123Cu);
    ctx->pc = 0x2B1238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1234u;
    // 0x2b1238: 0x26460494  addiu       $a2, $s2, 0x494 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1234u, 0x2B123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B123Cu;
label_2b123c:
    // 0x2b123c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B123Cu;
    SET_GPR_U32(ctx, 31, 0x2B1244u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B123Cu, 0x2B1244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1244u;
label_2b1244:
    // 0x2b1244: 0xc6410494  lwc1        $f1, 0x494($s2)
    ctx->pc = 0x2b1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1248: 0x3c01bf7a  lui         $at, 0xBF7A
    ctx->pc = 0x2b1248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49018 << 16));
    // 0x2b124c: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x2b124cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x2b1250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1254: 0x0  nop
    ctx->pc = 0x2b1254u;
    // NOP
    // 0x2b1258: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b1258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b125c: 0x0  nop
    ctx->pc = 0x2b125cu;
    // NOP
    // 0x2b1260: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2B1260u;
    {
        const bool branch_taken_0x2b1260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1260) {
            ctx->pc = 0x2B1290u;
            goto label_2b1290;
        }
    }
    ctx->pc = 0x2B1268u;
    // 0x2b1268: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2b1268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2b126c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2b126cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2b1270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1274: 0x0  nop
    ctx->pc = 0x2b1274u;
    // NOP
    // 0x2b1278: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b1278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b127c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b127cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b1280: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2B1280u;
    SET_GPR_U32(ctx, 31, 0x2B1288u);
    ctx->pc = 0x2B1284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1280u;
    // 0x2b1284: 0xe6400494  swc1        $f0, 0x494($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2B1280u, 0x2B1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1288u;
label_2b1288:
    // 0x2b1288: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x2B1288u;
    {
        const bool branch_taken_0x2b1288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1288u;
        // 0x2b128c: 0xe6400494  swc1        $f0, 0x494($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1288) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B1290u;
label_2b1290:
    // 0x2b1290: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b1290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b1294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1298: 0x1000023b  b           . + 4 + (0x23B << 2)
    ctx->pc = 0x2B1298u;
    {
        const bool branch_taken_0x2b1298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1298u;
        // 0x2b129c: 0xe6400494  swc1        $f0, 0x494($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1298) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B12A0u;
label_2b12a0:
    // 0x2b12a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b12a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b12a4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B12A4u;
    SET_GPR_U32(ctx, 31, 0x2B12ACu);
    ctx->pc = 0x2B12A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B12A4u;
    // 0x2b12a8: 0x24a5f000  addiu       $a1, $a1, -0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B12A4u, 0x2B12ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B12ACu;
label_2b12ac:
    // 0x2b12ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B12ACu;
    {
        const bool branch_taken_0x2b12ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b12ac) {
            ctx->pc = 0x2B12B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B12ACu;
            // 0x2b12b0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B12C8u;
            goto label_2b12c8;
        }
    }
    ctx->pc = 0x2B12B4u;
    // 0x2b12b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b12b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b12b8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b12b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b12bc: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b12bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b12c0: 0x1000021f  b           . + 4 + (0x21F << 2)
    ctx->pc = 0x2B12C0u;
    {
        const bool branch_taken_0x2b12c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12C0u;
        // 0x2b12c4: 0x26460484  addiu       $a2, $s2, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12c0) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B12C8u;
label_2b12c8:
    // 0x2b12c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b12c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b12cc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B12CCu;
    SET_GPR_U32(ctx, 31, 0x2B12D4u);
    ctx->pc = 0x2B12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B12CCu;
    // 0x2b12d0: 0x24a5f018  addiu       $a1, $a1, -0xFE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B12CCu, 0x2B12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B12D4u;
label_2b12d4:
    // 0x2b12d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B12D4u;
    {
        const bool branch_taken_0x2b12d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b12d4) {
            ctx->pc = 0x2B12D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B12D4u;
            // 0x2b12d8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B12ECu;
            goto label_2b12ec;
        }
    }
    ctx->pc = 0x2B12DCu;
    // 0x2b12dc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b12dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b12e0: 0x27c5ed18  addiu       $a1, $fp, -0x12E8
    ctx->pc = 0x2b12e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962456));
    // 0x2b12e4: 0x10000216  b           . + 4 + (0x216 << 2)
    ctx->pc = 0x2B12E4u;
    {
        const bool branch_taken_0x2b12e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12E4u;
        // 0x2b12e8: 0x26460498  addiu       $a2, $s2, 0x498 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12e4) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B12ECu;
label_2b12ec:
    // 0x2b12ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b12ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b12f0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B12F0u;
    SET_GPR_U32(ctx, 31, 0x2B12F8u);
    ctx->pc = 0x2B12F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B12F0u;
    // 0x2b12f4: 0x24a5f028  addiu       $a1, $a1, -0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B12F0u, 0x2B12F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B12F8u;
label_2b12f8:
    // 0x2b12f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B12F8u;
    {
        const bool branch_taken_0x2b12f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b12f8) {
            ctx->pc = 0x2B12FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B12F8u;
            // 0x2b12fc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1314u;
            goto label_2b1314;
        }
    }
    ctx->pc = 0x2B1300u;
    // 0x2b1300: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1304: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1308: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b1308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b130c: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x2B130Cu;
    {
        const bool branch_taken_0x2b130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B130Cu;
        // 0x2b1310: 0x264604d8  addiu       $a2, $s2, 0x4D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b130c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1314u;
label_2b1314:
    // 0x2b1314: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1318: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1318u;
    SET_GPR_U32(ctx, 31, 0x2B1320u);
    ctx->pc = 0x2B131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1318u;
    // 0x2b131c: 0x24a5f038  addiu       $a1, $a1, -0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1318u, 0x2B1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1320u;
label_2b1320:
    // 0x2b1320: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1320u;
    {
        const bool branch_taken_0x2b1320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1320) {
            ctx->pc = 0x2B1324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1320u;
            // 0x2b1324: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B133Cu;
            goto label_2b133c;
        }
    }
    ctx->pc = 0x2B1328u;
    // 0x2b1328: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b132c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1330: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b1330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b1334: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x2B1334u;
    {
        const bool branch_taken_0x2b1334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1334u;
        // 0x2b1338: 0x264604dc  addiu       $a2, $s2, 0x4DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1334) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B133Cu;
label_2b133c:
    // 0x2b133c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1340: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1340u;
    SET_GPR_U32(ctx, 31, 0x2B1348u);
    ctx->pc = 0x2B1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1340u;
    // 0x2b1344: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1340u, 0x2B1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1348u;
label_2b1348:
    // 0x2b1348: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1348u;
    {
        const bool branch_taken_0x2b1348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1348) {
            ctx->pc = 0x2B134Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1348u;
            // 0x2b134c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1364u;
            goto label_2b1364;
        }
    }
    ctx->pc = 0x2B1350u;
    // 0x2b1350: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1354: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1358: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b1358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b135c: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x2B135Cu;
    {
        const bool branch_taken_0x2b135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B135Cu;
        // 0x2b1360: 0x264604e0  addiu       $a2, $s2, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b135c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1364u;
label_2b1364:
    // 0x2b1364: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1368: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1368u;
    SET_GPR_U32(ctx, 31, 0x2B1370u);
    ctx->pc = 0x2B136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1368u;
    // 0x2b136c: 0x24a5f068  addiu       $a1, $a1, -0xF98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1368u, 0x2B1370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1370u;
label_2b1370:
    // 0x2b1370: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1370u;
    {
        const bool branch_taken_0x2b1370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1370) {
            ctx->pc = 0x2B1374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1370u;
            // 0x2b1374: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B138Cu;
            goto label_2b138c;
        }
    }
    ctx->pc = 0x2B1378u;
    // 0x2b1378: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b137c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b137cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1380: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b1380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b1384: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x2B1384u;
    {
        const bool branch_taken_0x2b1384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1384u;
        // 0x2b1388: 0x264604e4  addiu       $a2, $s2, 0x4E4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1384) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B138Cu;
label_2b138c:
    // 0x2b138c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b138cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1390: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1390u;
    SET_GPR_U32(ctx, 31, 0x2B1398u);
    ctx->pc = 0x2B1394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1390u;
    // 0x2b1394: 0x24a5f078  addiu       $a1, $a1, -0xF88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1390u, 0x2B1398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1398u;
label_2b1398:
    // 0x2b1398: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1398u;
    {
        const bool branch_taken_0x2b1398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1398) {
            ctx->pc = 0x2B139Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1398u;
            // 0x2b139c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B13B4u;
            goto label_2b13b4;
        }
    }
    ctx->pc = 0x2B13A0u;
    // 0x2b13a0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b13a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b13a4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b13a8: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b13ac: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x2B13ACu;
    {
        const bool branch_taken_0x2b13ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B13ACu;
        // 0x2b13b0: 0x264604e8  addiu       $a2, $s2, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13ac) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B13B4u;
label_2b13b4:
    // 0x2b13b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b13b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13b8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B13B8u;
    SET_GPR_U32(ctx, 31, 0x2B13C0u);
    ctx->pc = 0x2B13BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B13B8u;
    // 0x2b13bc: 0x24a5f090  addiu       $a1, $a1, -0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B13B8u, 0x2B13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B13C0u;
label_2b13c0:
    // 0x2b13c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B13C0u;
    {
        const bool branch_taken_0x2b13c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b13c0) {
            ctx->pc = 0x2B13C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B13C0u;
            // 0x2b13c4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B13DCu;
            goto label_2b13dc;
        }
    }
    ctx->pc = 0x2B13C8u;
    // 0x2b13c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b13c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b13cc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b13ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b13d0: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b13d4: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x2B13D4u;
    {
        const bool branch_taken_0x2b13d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B13D4u;
        // 0x2b13d8: 0x264604ec  addiu       $a2, $s2, 0x4EC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13d4) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B13DCu;
label_2b13dc:
    // 0x2b13dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b13dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13e0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B13E0u;
    SET_GPR_U32(ctx, 31, 0x2B13E8u);
    ctx->pc = 0x2B13E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B13E0u;
    // 0x2b13e4: 0x24a5f0a0  addiu       $a1, $a1, -0xF60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B13E0u, 0x2B13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B13E8u;
label_2b13e8:
    // 0x2b13e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B13E8u;
    {
        const bool branch_taken_0x2b13e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b13e8) {
            ctx->pc = 0x2B13ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B13E8u;
            // 0x2b13ec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1404u;
            goto label_2b1404;
        }
    }
    ctx->pc = 0x2B13F0u;
    // 0x2b13f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b13f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b13f4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b13f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b13f8: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b13f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b13fc: 0x100001d0  b           . + 4 + (0x1D0 << 2)
    ctx->pc = 0x2B13FCu;
    {
        const bool branch_taken_0x2b13fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B13FCu;
        // 0x2b1400: 0x264604f0  addiu       $a2, $s2, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13fc) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1404u;
label_2b1404:
    // 0x2b1404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1408: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1408u;
    SET_GPR_U32(ctx, 31, 0x2B1410u);
    ctx->pc = 0x2B140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1408u;
    // 0x2b140c: 0x24a5f0b0  addiu       $a1, $a1, -0xF50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1408u, 0x2B1410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1410u;
label_2b1410:
    // 0x2b1410: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1410u;
    {
        const bool branch_taken_0x2b1410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1410) {
            ctx->pc = 0x2B1414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1410u;
            // 0x2b1414: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B142Cu;
            goto label_2b142c;
        }
    }
    ctx->pc = 0x2B1418u;
    // 0x2b1418: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b141c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1420: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b1420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b1424: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x2B1424u;
    {
        const bool branch_taken_0x2b1424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1424u;
        // 0x2b1428: 0x264604f4  addiu       $a2, $s2, 0x4F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1424) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B142Cu;
label_2b142c:
    // 0x2b142c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1430: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1430u;
    SET_GPR_U32(ctx, 31, 0x2B1438u);
    ctx->pc = 0x2B1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1430u;
    // 0x2b1434: 0x24a5f0c8  addiu       $a1, $a1, -0xF38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1430u, 0x2B1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1438u;
label_2b1438:
    // 0x2b1438: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B1438u;
    {
        const bool branch_taken_0x2b1438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1438u;
        // 0x2b143c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1438) {
            ctx->pc = 0x2B14DCu;
            goto label_2b14dc;
        }
    }
    ctx->pc = 0x2B1440u;
    // 0x2b1440: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b1440u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b1444: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1448: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b1448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b144c: 0x26460500  addiu       $a2, $s2, 0x500
    ctx->pc = 0x2b144cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
    // 0x2b1450: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1450u;
    SET_GPR_U32(ctx, 31, 0x2B1458u);
    ctx->pc = 0x2B1454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1450u;
    // 0x2b1454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1450u, 0x2B1458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1458u;
label_2b1458:
    // 0x2b1458: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1458u;
    SET_GPR_U32(ctx, 31, 0x2B1460u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1458u, 0x2B1460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1460u;
label_2b1460:
    // 0x2b1460: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1468: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1468u;
    SET_GPR_U32(ctx, 31, 0x2B1470u);
    ctx->pc = 0x2B146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1468u;
    // 0x2b146c: 0x26460504  addiu       $a2, $s2, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1468u, 0x2B1470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1470u;
label_2b1470:
    // 0x2b1470: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1470u;
    SET_GPR_U32(ctx, 31, 0x2B1478u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1470u, 0x2B1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1478u;
label_2b1478:
    // 0x2b1478: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b147c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b147cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1480: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1480u;
    SET_GPR_U32(ctx, 31, 0x2B1488u);
    ctx->pc = 0x2B1484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1480u;
    // 0x2b1484: 0x26460508  addiu       $a2, $s2, 0x508 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1480u, 0x2B1488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1488u;
label_2b1488:
    // 0x2b1488: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1488u;
    SET_GPR_U32(ctx, 31, 0x2B1490u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1488u, 0x2B1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1490u;
label_2b1490:
    // 0x2b1490: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b1490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1494: 0xc6400500  lwc1        $f0, 0x500($s2)
    ctx->pc = 0x2b1494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1498: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b1498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b149c: 0x0  nop
    ctx->pc = 0x2b149cu;
    // NOP
    // 0x2b14a0: 0x450001ba  bc1f        . + 4 + (0x1BA << 2)
    ctx->pc = 0x2B14A0u;
    {
        const bool branch_taken_0x2b14a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14A0u;
        // 0x2b14a4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14a0) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B14A8u;
    // 0x2b14a8: 0xc6400504  lwc1        $f0, 0x504($s2)
    ctx->pc = 0x2b14a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b14ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b14acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b14b0: 0x0  nop
    ctx->pc = 0x2b14b0u;
    // NOP
    // 0x2b14b4: 0x450001b6  bc1f        . + 4 + (0x1B6 << 2)
    ctx->pc = 0x2B14B4u;
    {
        const bool branch_taken_0x2b14b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14B4u;
        // 0x2b14b8: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14b4) {
            ctx->pc = 0x2B1B90u;
            goto label_2b1b90;
        }
    }
    ctx->pc = 0x2B14BCu;
    // 0x2b14bc: 0xc6400508  lwc1        $f0, 0x508($s2)
    ctx->pc = 0x2b14bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b14c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b14c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b14c4: 0x0  nop
    ctx->pc = 0x2b14c4u;
    // NOP
    // 0x2b14c8: 0x450001af  bc1f        . + 4 + (0x1AF << 2)
    ctx->pc = 0x2B14C8u;
    {
        const bool branch_taken_0x2b14c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14C8u;
        // 0x2b14cc: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14c8) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B14D0u;
    // 0x2b14d0: 0xc440f28c  lwc1        $f0, -0xD74($v0)
    ctx->pc = 0x2b14d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b14d4: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x2B14D4u;
    {
        const bool branch_taken_0x2b14d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14D4u;
        // 0x2b14d8: 0xe6400500  swc1        $f0, 0x500($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14d4) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B14DCu;
label_2b14dc:
    // 0x2b14dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b14dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b14e0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B14E0u;
    SET_GPR_U32(ctx, 31, 0x2B14E8u);
    ctx->pc = 0x2B14E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B14E0u;
    // 0x2b14e4: 0x24a5f0e0  addiu       $a1, $a1, -0xF20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B14E0u, 0x2B14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B14E8u;
label_2b14e8:
    // 0x2b14e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B14E8u;
    {
        const bool branch_taken_0x2b14e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b14e8) {
            ctx->pc = 0x2B14ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B14E8u;
            // 0x2b14ec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1504u;
            goto label_2b1504;
        }
    }
    ctx->pc = 0x2B14F0u;
    // 0x2b14f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b14f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b14f4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b14f8: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b14f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b14fc: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x2B14FCu;
    {
        const bool branch_taken_0x2b14fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14FCu;
        // 0x2b1500: 0x26460510  addiu       $a2, $s2, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14fc) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1504u;
label_2b1504:
    // 0x2b1504: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1508: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1508u;
    SET_GPR_U32(ctx, 31, 0x2B1510u);
    ctx->pc = 0x2B150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1508u;
    // 0x2b150c: 0x24a5f0f8  addiu       $a1, $a1, -0xF08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1508u, 0x2B1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1510u;
label_2b1510:
    // 0x2b1510: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1510u;
    {
        const bool branch_taken_0x2b1510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1510) {
            ctx->pc = 0x2B1514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1510u;
            // 0x2b1514: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B152Cu;
            goto label_2b152c;
        }
    }
    ctx->pc = 0x2B1518u;
    // 0x2b1518: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b151c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1520: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1524: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x2B1524u;
    {
        const bool branch_taken_0x2b1524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1524u;
        // 0x2b1528: 0x26460514  addiu       $a2, $s2, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1524) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B152Cu;
label_2b152c:
    // 0x2b152c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1530: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1530u;
    SET_GPR_U32(ctx, 31, 0x2B1538u);
    ctx->pc = 0x2B1534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1530u;
    // 0x2b1534: 0x24a5f110  addiu       $a1, $a1, -0xEF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1530u, 0x2B1538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1538u;
label_2b1538:
    // 0x2b1538: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1538u;
    {
        const bool branch_taken_0x2b1538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1538) {
            ctx->pc = 0x2B153Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1538u;
            // 0x2b153c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1554u;
            goto label_2b1554;
        }
    }
    ctx->pc = 0x2B1540u;
    // 0x2b1540: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1544: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1548: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b154c: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x2B154Cu;
    {
        const bool branch_taken_0x2b154c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B154Cu;
        // 0x2b1550: 0x26460518  addiu       $a2, $s2, 0x518 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b154c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1554u;
label_2b1554:
    // 0x2b1554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1558: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1558u;
    SET_GPR_U32(ctx, 31, 0x2B1560u);
    ctx->pc = 0x2B155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1558u;
    // 0x2b155c: 0x24a5f128  addiu       $a1, $a1, -0xED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1558u, 0x2B1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1560u;
label_2b1560:
    // 0x2b1560: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1560u;
    {
        const bool branch_taken_0x2b1560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1560) {
            ctx->pc = 0x2B1564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1560u;
            // 0x2b1564: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B157Cu;
            goto label_2b157c;
        }
    }
    ctx->pc = 0x2B1568u;
    // 0x2b1568: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b156c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1570: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1574: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x2B1574u;
    {
        const bool branch_taken_0x2b1574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1574u;
        // 0x2b1578: 0x2646051c  addiu       $a2, $s2, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1574) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B157Cu;
label_2b157c:
    // 0x2b157c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1580: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1580u;
    SET_GPR_U32(ctx, 31, 0x2B1588u);
    ctx->pc = 0x2B1584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1580u;
    // 0x2b1584: 0x24a5f140  addiu       $a1, $a1, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1580u, 0x2B1588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1588u;
label_2b1588:
    // 0x2b1588: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1588u;
    {
        const bool branch_taken_0x2b1588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1588) {
            ctx->pc = 0x2B158Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1588u;
            // 0x2b158c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B15A4u;
            goto label_2b15a4;
        }
    }
    ctx->pc = 0x2B1590u;
    // 0x2b1590: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1594: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1598: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b1598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b159c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x2B159Cu;
    {
        const bool branch_taken_0x2b159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B159Cu;
        // 0x2b15a0: 0x26460520  addiu       $a2, $s2, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b159c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B15A4u;
label_2b15a4:
    // 0x2b15a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b15a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b15a8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B15A8u;
    SET_GPR_U32(ctx, 31, 0x2B15B0u);
    ctx->pc = 0x2B15ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B15A8u;
    // 0x2b15ac: 0x24a5f158  addiu       $a1, $a1, -0xEA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B15A8u, 0x2B15B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B15B0u;
label_2b15b0:
    // 0x2b15b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B15B0u;
    {
        const bool branch_taken_0x2b15b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b15b0) {
            ctx->pc = 0x2B15B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B15B0u;
            // 0x2b15b4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B15CCu;
            goto label_2b15cc;
        }
    }
    ctx->pc = 0x2B15B8u;
    // 0x2b15b8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b15b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b15bc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b15c0: 0x24a5ee98  addiu       $a1, $a1, -0x1168
    ctx->pc = 0x2b15c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962840));
    // 0x2b15c4: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x2B15C4u;
    {
        const bool branch_taken_0x2b15c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15C4u;
        // 0x2b15c8: 0x26460558  addiu       $a2, $s2, 0x558 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15c4) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B15CCu;
label_2b15cc:
    // 0x2b15cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b15ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b15d0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B15D0u;
    SET_GPR_U32(ctx, 31, 0x2B15D8u);
    ctx->pc = 0x2B15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B15D0u;
    // 0x2b15d4: 0x24a5f168  addiu       $a1, $a1, -0xE98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B15D0u, 0x2B15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B15D8u;
label_2b15d8:
    // 0x2b15d8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B15D8u;
    {
        const bool branch_taken_0x2b15d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b15d8) {
            ctx->pc = 0x2B15DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B15D8u;
            // 0x2b15dc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1640u;
            goto label_2b1640;
        }
    }
    ctx->pc = 0x2B15E0u;
    // 0x2b15e0: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b15e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b15e4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b15e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b15e8: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b15e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b15ec: 0x264603f8  addiu       $a2, $s2, 0x3F8
    ctx->pc = 0x2b15ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1016));
    // 0x2b15f0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B15F0u;
    SET_GPR_U32(ctx, 31, 0x2B15F8u);
    ctx->pc = 0x2B15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B15F0u;
    // 0x2b15f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B15F0u, 0x2B15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B15F8u;
label_2b15f8:
    // 0x2b15f8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B15F8u;
    SET_GPR_U32(ctx, 31, 0x2B1600u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B15F8u, 0x2B1600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1600u;
label_2b1600:
    // 0x2b1600: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1608: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1608u;
    SET_GPR_U32(ctx, 31, 0x2B1610u);
    ctx->pc = 0x2B160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1608u;
    // 0x2b160c: 0x264603fc  addiu       $a2, $s2, 0x3FC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1020));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1608u, 0x2B1610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1610u;
label_2b1610:
    // 0x2b1610: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1610u;
    SET_GPR_U32(ctx, 31, 0x2B1618u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1610u, 0x2B1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1618u;
label_2b1618:
    // 0x2b1618: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b161c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1620: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1620u;
    SET_GPR_U32(ctx, 31, 0x2B1628u);
    ctx->pc = 0x2B1624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1620u;
    // 0x2b1624: 0x26460400  addiu       $a2, $s2, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1620u, 0x2B1628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1628u;
label_2b1628:
    // 0x2b1628: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1628u;
    SET_GPR_U32(ctx, 31, 0x2B1630u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1628u, 0x2B1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1630u;
label_2b1630:
    // 0x2b1630: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1638: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x2B1638u;
    {
        const bool branch_taken_0x2b1638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1638u;
        // 0x2b163c: 0x26460404  addiu       $a2, $s2, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1638) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1640u;
label_2b1640:
    // 0x2b1640: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1644: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1644u;
    SET_GPR_U32(ctx, 31, 0x2B164Cu);
    ctx->pc = 0x2B1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1644u;
    // 0x2b1648: 0x24a5f178  addiu       $a1, $a1, -0xE88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1644u, 0x2B164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B164Cu;
label_2b164c:
    // 0x2b164c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B164Cu;
    {
        const bool branch_taken_0x2b164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b164c) {
            ctx->pc = 0x2B1650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B164Cu;
            // 0x2b1650: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B16B4u;
            goto label_2b16b4;
        }
    }
    ctx->pc = 0x2B1654u;
    // 0x2b1654: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b1654u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b1658: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b165c: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b165cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b1660: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x2b1660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x2b1664: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1664u;
    SET_GPR_U32(ctx, 31, 0x2B166Cu);
    ctx->pc = 0x2B1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1664u;
    // 0x2b1668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1664u, 0x2B166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B166Cu;
label_2b166c:
    // 0x2b166c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B166Cu;
    SET_GPR_U32(ctx, 31, 0x2B1674u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B166Cu, 0x2B1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1674u;
label_2b1674:
    // 0x2b1674: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b167c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B167Cu;
    SET_GPR_U32(ctx, 31, 0x2B1684u);
    ctx->pc = 0x2B1680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B167Cu;
    // 0x2b1680: 0x26460410  addiu       $a2, $s2, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B167Cu, 0x2B1684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1684u;
label_2b1684:
    // 0x2b1684: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1684u;
    SET_GPR_U32(ctx, 31, 0x2B168Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1684u, 0x2B168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B168Cu;
label_2b168c:
    // 0x2b168c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1694: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1694u;
    SET_GPR_U32(ctx, 31, 0x2B169Cu);
    ctx->pc = 0x2B1698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1694u;
    // 0x2b1698: 0x26460414  addiu       $a2, $s2, 0x414 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1044));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1694u, 0x2B169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B169Cu;
label_2b169c:
    // 0x2b169c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B169Cu;
    SET_GPR_U32(ctx, 31, 0x2B16A4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B169Cu, 0x2B16A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16A4u;
label_2b16a4:
    // 0x2b16a4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b16a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b16a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b16a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16ac: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x2B16ACu;
    {
        const bool branch_taken_0x2b16ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B16B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16ACu;
        // 0x2b16b0: 0x26460418  addiu       $a2, $s2, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16ac) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B16B4u;
label_2b16b4:
    // 0x2b16b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b16b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16b8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B16B8u;
    SET_GPR_U32(ctx, 31, 0x2B16C0u);
    ctx->pc = 0x2B16BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16B8u;
    // 0x2b16bc: 0x24a5f188  addiu       $a1, $a1, -0xE78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B16B8u, 0x2B16C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16C0u;
label_2b16c0:
    // 0x2b16c0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B16C0u;
    {
        const bool branch_taken_0x2b16c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b16c0) {
            ctx->pc = 0x2B16C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B16C0u;
            // 0x2b16c4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1728u;
            goto label_2b1728;
        }
    }
    ctx->pc = 0x2B16C8u;
    // 0x2b16c8: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b16c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b16cc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b16d0: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b16d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b16d4: 0x26460420  addiu       $a2, $s2, 0x420
    ctx->pc = 0x2b16d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
    // 0x2b16d8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B16D8u;
    SET_GPR_U32(ctx, 31, 0x2B16E0u);
    ctx->pc = 0x2B16DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16D8u;
    // 0x2b16dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B16D8u, 0x2B16E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16E0u;
label_2b16e0:
    // 0x2b16e0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B16E0u;
    SET_GPR_U32(ctx, 31, 0x2B16E8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B16E0u, 0x2B16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16E8u;
label_2b16e8:
    // 0x2b16e8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b16e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b16ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b16ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16f0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B16F0u;
    SET_GPR_U32(ctx, 31, 0x2B16F8u);
    ctx->pc = 0x2B16F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16F0u;
    // 0x2b16f4: 0x26460424  addiu       $a2, $s2, 0x424 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B16F0u, 0x2B16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16F8u;
label_2b16f8:
    // 0x2b16f8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B16F8u;
    SET_GPR_U32(ctx, 31, 0x2B1700u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B16F8u, 0x2B1700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1700u;
label_2b1700:
    // 0x2b1700: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1708: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1708u;
    SET_GPR_U32(ctx, 31, 0x2B1710u);
    ctx->pc = 0x2B170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1708u;
    // 0x2b170c: 0x26460428  addiu       $a2, $s2, 0x428 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1708u, 0x2B1710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1710u;
label_2b1710:
    // 0x2b1710: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1710u;
    SET_GPR_U32(ctx, 31, 0x2B1718u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1710u, 0x2B1718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1718u;
label_2b1718:
    // 0x2b1718: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b171c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1720: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x2B1720u;
    {
        const bool branch_taken_0x2b1720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1720u;
        // 0x2b1724: 0x2646042c  addiu       $a2, $s2, 0x42C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1068));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1720) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1728u;
label_2b1728:
    // 0x2b1728: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b172c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B172Cu;
    SET_GPR_U32(ctx, 31, 0x2B1734u);
    ctx->pc = 0x2B1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B172Cu;
    // 0x2b1730: 0x24a5f198  addiu       $a1, $a1, -0xE68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B172Cu, 0x2B1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1734u;
label_2b1734:
    // 0x2b1734: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B1734u;
    {
        const bool branch_taken_0x2b1734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1734) {
            ctx->pc = 0x2B1738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1734u;
            // 0x2b1738: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B179Cu;
            goto label_2b179c;
        }
    }
    ctx->pc = 0x2B173Cu;
    // 0x2b173c: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b173cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b1740: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1744: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b1744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b1748: 0x26460434  addiu       $a2, $s2, 0x434
    ctx->pc = 0x2b1748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1076));
    // 0x2b174c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B174Cu;
    SET_GPR_U32(ctx, 31, 0x2B1754u);
    ctx->pc = 0x2B1750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B174Cu;
    // 0x2b1750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B174Cu, 0x2B1754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1754u;
label_2b1754:
    // 0x2b1754: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1754u;
    SET_GPR_U32(ctx, 31, 0x2B175Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1754u, 0x2B175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B175Cu;
label_2b175c:
    // 0x2b175c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1764: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1764u;
    SET_GPR_U32(ctx, 31, 0x2B176Cu);
    ctx->pc = 0x2B1768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1764u;
    // 0x2b1768: 0x26460438  addiu       $a2, $s2, 0x438 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1764u, 0x2B176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B176Cu;
label_2b176c:
    // 0x2b176c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B176Cu;
    SET_GPR_U32(ctx, 31, 0x2B1774u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B176Cu, 0x2B1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1774u;
label_2b1774:
    // 0x2b1774: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b177c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B177Cu;
    SET_GPR_U32(ctx, 31, 0x2B1784u);
    ctx->pc = 0x2B1780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B177Cu;
    // 0x2b1780: 0x2646043c  addiu       $a2, $s2, 0x43C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B177Cu, 0x2B1784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1784u;
label_2b1784:
    // 0x2b1784: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1784u;
    SET_GPR_U32(ctx, 31, 0x2B178Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1784u, 0x2B178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B178Cu;
label_2b178c:
    // 0x2b178c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b178cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1790: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1794: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x2B1794u;
    {
        const bool branch_taken_0x2b1794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1794u;
        // 0x2b1798: 0x26460440  addiu       $a2, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1794) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B179Cu;
label_2b179c:
    // 0x2b179c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b179cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17a0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B17A0u;
    SET_GPR_U32(ctx, 31, 0x2B17A8u);
    ctx->pc = 0x2B17A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17A0u;
    // 0x2b17a4: 0x24a5f1a8  addiu       $a1, $a1, -0xE58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B17A0u, 0x2B17A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17A8u;
label_2b17a8:
    // 0x2b17a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B17A8u;
    {
        const bool branch_taken_0x2b17a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b17a8) {
            ctx->pc = 0x2B17ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B17A8u;
            // 0x2b17ac: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B17C4u;
            goto label_2b17c4;
        }
    }
    ctx->pc = 0x2B17B0u;
    // 0x2b17b0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b17b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b17b4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b17b8: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b17bc: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x2B17BCu;
    {
        const bool branch_taken_0x2b17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17BCu;
        // 0x2b17c0: 0x2646046c  addiu       $a2, $s2, 0x46C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17bc) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B17C4u;
label_2b17c4:
    // 0x2b17c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b17c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17c8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B17C8u;
    SET_GPR_U32(ctx, 31, 0x2B17D0u);
    ctx->pc = 0x2B17CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17C8u;
    // 0x2b17cc: 0x24a5f1c0  addiu       $a1, $a1, -0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B17C8u, 0x2B17D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17D0u;
label_2b17d0:
    // 0x2b17d0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B17D0u;
    {
        const bool branch_taken_0x2b17d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b17d0) {
            ctx->pc = 0x2B17D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B17D0u;
            // 0x2b17d4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1804u;
            goto label_2b1804;
        }
    }
    ctx->pc = 0x2B17D8u;
    // 0x2b17d8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b17d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b17dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b17dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b17e0: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b17e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b17e4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B17E4u;
    SET_GPR_U32(ctx, 31, 0x2B17ECu);
    ctx->pc = 0x2B17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17E4u;
    // 0x2b17e8: 0x27a600f8  addiu       $a2, $sp, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B17E4u, 0x2B17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17ECu;
label_2b17ec:
    // 0x2b17ec: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B17ECu;
    SET_GPR_U32(ctx, 31, 0x2B17F4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B17ECu, 0x2B17F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17F4u;
label_2b17f4:
    // 0x2b17f4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2b17f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b17f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b17f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b17fc: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x2B17FCu;
    {
        const bool branch_taken_0x2b17fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17FCu;
        // 0x2b1800: 0xe6400478  swc1        $f0, 0x478($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17fc) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B1804u;
label_2b1804:
    // 0x2b1804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1808: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1808u;
    SET_GPR_U32(ctx, 31, 0x2B1810u);
    ctx->pc = 0x2B180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1808u;
    // 0x2b180c: 0x24a5f1d0  addiu       $a1, $a1, -0xE30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1808u, 0x2B1810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1810u;
label_2b1810:
    // 0x2b1810: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1810u;
    {
        const bool branch_taken_0x2b1810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1810) {
            ctx->pc = 0x2B1814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1810u;
            // 0x2b1814: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B182Cu;
            goto label_2b182c;
        }
    }
    ctx->pc = 0x2B1818u;
    // 0x2b1818: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b181c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b181cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1820: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1824: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x2B1824u;
    {
        const bool branch_taken_0x2b1824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1824u;
        // 0x2b1828: 0x2646047c  addiu       $a2, $s2, 0x47C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1824) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B182Cu;
label_2b182c:
    // 0x2b182c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1830: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1830u;
    SET_GPR_U32(ctx, 31, 0x2B1838u);
    ctx->pc = 0x2B1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1830u;
    // 0x2b1834: 0x24a5f1f0  addiu       $a1, $a1, -0xE10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1830u, 0x2B1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1838u;
label_2b1838:
    // 0x2b1838: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1838u;
    {
        const bool branch_taken_0x2b1838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1838) {
            ctx->pc = 0x2B183Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1838u;
            // 0x2b183c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1854u;
            goto label_2b1854;
        }
    }
    ctx->pc = 0x2B1840u;
    // 0x2b1840: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1844: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1848: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b184c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2B184Cu;
    {
        const bool branch_taken_0x2b184c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B184Cu;
        // 0x2b1850: 0x26460480  addiu       $a2, $s2, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b184c) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1854u;
label_2b1854:
    // 0x2b1854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1858: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1858u;
    SET_GPR_U32(ctx, 31, 0x2B1860u);
    ctx->pc = 0x2B185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1858u;
    // 0x2b185c: 0x24a5f208  addiu       $a1, $a1, -0xDF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1858u, 0x2B1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1860u;
label_2b1860:
    // 0x2b1860: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B1860u;
    {
        const bool branch_taken_0x2b1860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1860) {
            ctx->pc = 0x2B1864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1860u;
            // 0x2b1864: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B18A4u;
            goto label_2b18a4;
        }
    }
    ctx->pc = 0x2B1868u;
    // 0x2b1868: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b186c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b186cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1870: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1874: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1874u;
    SET_GPR_U32(ctx, 31, 0x2B187Cu);
    ctx->pc = 0x2B1878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1874u;
    // 0x2b1878: 0x26460470  addiu       $a2, $s2, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1874u, 0x2B187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B187Cu;
label_2b187c:
    // 0x2b187c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B187Cu;
    SET_GPR_U32(ctx, 31, 0x2B1884u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B187Cu, 0x2B1884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1884u;
label_2b1884:
    // 0x2b1884: 0xc6400470  lwc1        $f0, 0x470($s2)
    ctx->pc = 0x2b1884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1888: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2b1888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2b188c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2b188cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2b1890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b1890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1894: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2B1894u;
    SET_GPR_U32(ctx, 31, 0x2B189Cu);
    ctx->pc = 0x2B1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1894u;
    // 0x2b1898: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2B1894u, 0x2B189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B189Cu;
label_2b189c:
    // 0x2b189c: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2B189Cu;
    {
        const bool branch_taken_0x2b189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B189Cu;
        // 0x2b18a0: 0xe6400474  swc1        $f0, 0x474($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b189c) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B18A4u;
label_2b18a4:
    // 0x2b18a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b18a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18a8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B18A8u;
    SET_GPR_U32(ctx, 31, 0x2B18B0u);
    ctx->pc = 0x2B18ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B18A8u;
    // 0x2b18ac: 0x24a5f218  addiu       $a1, $a1, -0xDE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B18A8u, 0x2B18B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18B0u;
label_2b18b0:
    // 0x2b18b0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B18B0u;
    {
        const bool branch_taken_0x2b18b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18B0u;
        // 0x2b18b4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b18b0) {
            ctx->pc = 0x2B1978u;
            goto label_2b1978;
        }
    }
    ctx->pc = 0x2B18B8u;
    // 0x2b18b8: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b18b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b18bc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b18bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b18c0: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b18c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b18c4: 0x2646045c  addiu       $a2, $s2, 0x45C
    ctx->pc = 0x2b18c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1116));
    // 0x2b18c8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B18C8u;
    SET_GPR_U32(ctx, 31, 0x2B18D0u);
    ctx->pc = 0x2B18CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B18C8u;
    // 0x2b18cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B18C8u, 0x2B18D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18D0u;
label_2b18d0:
    // 0x2b18d0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B18D0u;
    SET_GPR_U32(ctx, 31, 0x2B18D8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B18D0u, 0x2B18D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18D8u;
label_2b18d8:
    // 0x2b18d8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b18dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b18dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18e0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B18E0u;
    SET_GPR_U32(ctx, 31, 0x2B18E8u);
    ctx->pc = 0x2B18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B18E0u;
    // 0x2b18e4: 0x26460460  addiu       $a2, $s2, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B18E0u, 0x2B18E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18E8u;
label_2b18e8:
    // 0x2b18e8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B18E8u;
    SET_GPR_U32(ctx, 31, 0x2B18F0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B18E8u, 0x2B18F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B18F0u;
label_2b18f0:
    // 0x2b18f0: 0xc641045c  lwc1        $f1, 0x45C($s2)
    ctx->pc = 0x2b18f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b18f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b18f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b18f8: 0x0  nop
    ctx->pc = 0x2b18f8u;
    // NOP
    // 0x2b18fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b18fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1900: 0x0  nop
    ctx->pc = 0x2b1900u;
    // NOP
    // 0x2b1904: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1904u;
    {
        const bool branch_taken_0x2b1904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1904) {
            ctx->pc = 0x2B1924u;
            goto label_2b1924;
        }
    }
    ctx->pc = 0x2B190Cu;
    // 0x2b190c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b190cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1914: 0x0  nop
    ctx->pc = 0x2b1914u;
    // NOP
    // 0x2b1918: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b1918u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b191c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B191Cu;
    {
        const bool branch_taken_0x2b191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B191Cu;
        // 0x2b1920: 0xe640045c  swc1        $f0, 0x45C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b191c) {
            ctx->pc = 0x2B1934u;
            goto label_2b1934;
        }
    }
    ctx->pc = 0x2B1924u;
label_2b1924:
    // 0x2b1924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1928: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b192c: 0x0  nop
    ctx->pc = 0x2b192cu;
    // NOP
    // 0x2b1930: 0xe640045c  swc1        $f0, 0x45C($s2)
    ctx->pc = 0x2b1930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1116), bits); }
label_2b1934:
    // 0x2b1934: 0xc6410460  lwc1        $f1, 0x460($s2)
    ctx->pc = 0x2b1934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b1938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b193c: 0x0  nop
    ctx->pc = 0x2b193cu;
    // NOP
    // 0x2b1940: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b1940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1944: 0x0  nop
    ctx->pc = 0x2b1944u;
    // NOP
    // 0x2b1948: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1948u;
    {
        const bool branch_taken_0x2b1948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1948) {
            ctx->pc = 0x2B1968u;
            goto label_2b1968;
        }
    }
    ctx->pc = 0x2B1950u;
    // 0x2b1950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1958: 0x0  nop
    ctx->pc = 0x2b1958u;
    // NOP
    // 0x2b195c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b195cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b1960: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2B1960u;
    {
        const bool branch_taken_0x2b1960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1960u;
        // 0x2b1964: 0xe6400460  swc1        $f0, 0x460($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1960) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B1968u;
label_2b1968:
    // 0x2b1968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b196c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b196cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1970: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2B1970u;
    {
        const bool branch_taken_0x2b1970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1970u;
        // 0x2b1974: 0xe6400460  swc1        $f0, 0x460($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1970) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B1978u;
label_2b1978:
    // 0x2b1978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b197c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B197Cu;
    SET_GPR_U32(ctx, 31, 0x2B1984u);
    ctx->pc = 0x2B1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B197Cu;
    // 0x2b1980: 0x24a5f228  addiu       $a1, $a1, -0xDD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B197Cu, 0x2B1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1984u;
label_2b1984:
    // 0x2b1984: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B1984u;
    {
        const bool branch_taken_0x2b1984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1984u;
        // 0x2b1988: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1984) {
            ctx->pc = 0x2B1A4Cu;
            goto label_2b1a4c;
        }
    }
    ctx->pc = 0x2B198Cu;
    // 0x2b198c: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b198cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b1990: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1994: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b1994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b1998: 0x26460464  addiu       $a2, $s2, 0x464
    ctx->pc = 0x2b1998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1124));
    // 0x2b199c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B199Cu;
    SET_GPR_U32(ctx, 31, 0x2B19A4u);
    ctx->pc = 0x2B19A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B199Cu;
    // 0x2b19a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B199Cu, 0x2B19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19A4u;
label_2b19a4:
    // 0x2b19a4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B19A4u;
    SET_GPR_U32(ctx, 31, 0x2B19ACu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B19A4u, 0x2B19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19ACu;
label_2b19ac:
    // 0x2b19ac: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b19acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b19b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b19b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19b4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B19B4u;
    SET_GPR_U32(ctx, 31, 0x2B19BCu);
    ctx->pc = 0x2B19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19B4u;
    // 0x2b19b8: 0x26460468  addiu       $a2, $s2, 0x468 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B19B4u, 0x2B19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19BCu;
label_2b19bc:
    // 0x2b19bc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B19BCu;
    SET_GPR_U32(ctx, 31, 0x2B19C4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B19BCu, 0x2B19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19C4u;
label_2b19c4:
    // 0x2b19c4: 0xc6410464  lwc1        $f1, 0x464($s2)
    ctx->pc = 0x2b19c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b19c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b19c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b19cc: 0x0  nop
    ctx->pc = 0x2b19ccu;
    // NOP
    // 0x2b19d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b19d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b19d4: 0x0  nop
    ctx->pc = 0x2b19d4u;
    // NOP
    // 0x2b19d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B19D8u;
    {
        const bool branch_taken_0x2b19d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b19d8) {
            ctx->pc = 0x2B19F8u;
            goto label_2b19f8;
        }
    }
    ctx->pc = 0x2B19E0u;
    // 0x2b19e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b19e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b19e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b19e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b19e8: 0x0  nop
    ctx->pc = 0x2b19e8u;
    // NOP
    // 0x2b19ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b19ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b19f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B19F0u;
    {
        const bool branch_taken_0x2b19f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19F0u;
        // 0x2b19f4: 0xe6400464  swc1        $f0, 0x464($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b19f0) {
            ctx->pc = 0x2B1A08u;
            goto label_2b1a08;
        }
    }
    ctx->pc = 0x2B19F8u;
label_2b19f8:
    // 0x2b19f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b19f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b19fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b19fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a00: 0x0  nop
    ctx->pc = 0x2b1a00u;
    // NOP
    // 0x2b1a04: 0xe6400464  swc1        $f0, 0x464($s2)
    ctx->pc = 0x2b1a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1124), bits); }
label_2b1a08:
    // 0x2b1a08: 0xc6410468  lwc1        $f1, 0x468($s2)
    ctx->pc = 0x2b1a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1a0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b1a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a10: 0x0  nop
    ctx->pc = 0x2b1a10u;
    // NOP
    // 0x2b1a14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b1a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1a18: 0x0  nop
    ctx->pc = 0x2b1a18u;
    // NOP
    // 0x2b1a1c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1A1Cu;
    {
        const bool branch_taken_0x2b1a1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1a1c) {
            ctx->pc = 0x2B1A3Cu;
            goto label_2b1a3c;
        }
    }
    ctx->pc = 0x2B1A24u;
    // 0x2b1a24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a2c: 0x0  nop
    ctx->pc = 0x2b1a2cu;
    // NOP
    // 0x2b1a30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b1a30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b1a34: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2B1A34u;
    {
        const bool branch_taken_0x2b1a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A34u;
        // 0x2b1a38: 0xe6400468  swc1        $f0, 0x468($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a34) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B1A3Cu;
label_2b1a3c:
    // 0x2b1a3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1a44: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2B1A44u;
    {
        const bool branch_taken_0x2b1a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1A44u;
        // 0x2b1a48: 0xe6400468  swc1        $f0, 0x468($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1a44) {
            ctx->pc = 0x2B1B88u;
            goto label_2b1b88;
        }
    }
    ctx->pc = 0x2B1A4Cu;
label_2b1a4c:
    // 0x2b1a4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a50: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1A50u;
    SET_GPR_U32(ctx, 31, 0x2B1A58u);
    ctx->pc = 0x2B1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A50u;
    // 0x2b1a54: 0x24a5f238  addiu       $a1, $a1, -0xDC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1A50u, 0x2B1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A58u;
label_2b1a58:
    // 0x2b1a58: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B1A58u;
    {
        const bool branch_taken_0x2b1a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1a58) {
            ctx->pc = 0x2B1A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1A58u;
            // 0x2b1a5c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1AC0u;
            goto label_2b1ac0;
        }
    }
    ctx->pc = 0x2B1A60u;
    // 0x2b1a60: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b1a60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b1a64: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1a68: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b1a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b1a6c: 0x26460540  addiu       $a2, $s2, 0x540
    ctx->pc = 0x2b1a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1344));
    // 0x2b1a70: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1A70u;
    SET_GPR_U32(ctx, 31, 0x2B1A78u);
    ctx->pc = 0x2B1A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A70u;
    // 0x2b1a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1A70u, 0x2B1A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A78u;
label_2b1a78:
    // 0x2b1a78: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1A78u;
    SET_GPR_U32(ctx, 31, 0x2B1A80u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1A78u, 0x2B1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A80u;
label_2b1a80:
    // 0x2b1a80: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a88: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1A88u;
    SET_GPR_U32(ctx, 31, 0x2B1A90u);
    ctx->pc = 0x2B1A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A88u;
    // 0x2b1a8c: 0x26460544  addiu       $a2, $s2, 0x544 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1A88u, 0x2B1A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A90u;
label_2b1a90:
    // 0x2b1a90: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1A90u;
    SET_GPR_U32(ctx, 31, 0x2B1A98u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1A90u, 0x2B1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A98u;
label_2b1a98:
    // 0x2b1a98: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1aa0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1AA0u;
    SET_GPR_U32(ctx, 31, 0x2B1AA8u);
    ctx->pc = 0x2B1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AA0u;
    // 0x2b1aa4: 0x26460548  addiu       $a2, $s2, 0x548 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1AA0u, 0x2B1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AA8u;
label_2b1aa8:
    // 0x2b1aa8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1AA8u;
    SET_GPR_U32(ctx, 31, 0x2B1AB0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1AA8u, 0x2B1AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AB0u;
label_2b1ab0:
    // 0x2b1ab0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1ab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ab8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B1AB8u;
    {
        const bool branch_taken_0x2b1ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AB8u;
        // 0x2b1abc: 0x2646054c  addiu       $a2, $s2, 0x54C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ab8) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1AC0u;
label_2b1ac0:
    // 0x2b1ac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ac4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1AC4u;
    SET_GPR_U32(ctx, 31, 0x2B1ACCu);
    ctx->pc = 0x2B1AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AC4u;
    // 0x2b1ac8: 0x24a5f250  addiu       $a1, $a1, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1AC4u, 0x2B1ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1ACCu;
label_2b1acc:
    // 0x2b1acc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B1ACCu;
    {
        const bool branch_taken_0x2b1acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1acc) {
            ctx->pc = 0x2B1AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1ACCu;
            // 0x2b1ad0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B1Cu;
            goto label_2b1b1c;
        }
    }
    ctx->pc = 0x2B1AD4u;
    // 0x2b1ad4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2b1ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2b1ad8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1adc: 0x2610ed90  addiu       $s0, $s0, -0x1270
    ctx->pc = 0x2b1adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962576));
    // 0x2b1ae0: 0x26460530  addiu       $a2, $s2, 0x530
    ctx->pc = 0x2b1ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1328));
    // 0x2b1ae4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1AE4u;
    SET_GPR_U32(ctx, 31, 0x2B1AECu);
    ctx->pc = 0x2B1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AE4u;
    // 0x2b1ae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1AE4u, 0x2B1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AECu;
label_2b1aec:
    // 0x2b1aec: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1AECu;
    SET_GPR_U32(ctx, 31, 0x2B1AF4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1AECu, 0x2B1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AF4u;
label_2b1af4:
    // 0x2b1af4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1af8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1afc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1AFCu;
    SET_GPR_U32(ctx, 31, 0x2B1B04u);
    ctx->pc = 0x2B1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AFCu;
    // 0x2b1b00: 0x26460534  addiu       $a2, $s2, 0x534 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1AFCu, 0x2B1B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B04u;
label_2b1b04:
    // 0x2b1b04: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1B04u;
    SET_GPR_U32(ctx, 31, 0x2B1B0Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1B04u, 0x2B1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B0Cu;
label_2b1b0c:
    // 0x2b1b0c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1b10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B1B14u;
    {
        const bool branch_taken_0x2b1b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B14u;
        // 0x2b1b18: 0x26460538  addiu       $a2, $s2, 0x538 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b14) {
            ctx->pc = 0x2B1B40u;
            goto label_2b1b40;
        }
    }
    ctx->pc = 0x2B1B1Cu;
label_2b1b1c:
    // 0x2b1b1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b20: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1B20u;
    SET_GPR_U32(ctx, 31, 0x2B1B28u);
    ctx->pc = 0x2B1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B20u;
    // 0x2b1b24: 0x24a5f268  addiu       $a1, $a1, -0xD98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1B20u, 0x2B1B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B28u;
label_2b1b28:
    // 0x2b1b28: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B1B28u;
    {
        const bool branch_taken_0x2b1b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1b28) {
            ctx->pc = 0x2B1B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1B28u;
            // 0x2b1b2c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B58u;
            goto label_2b1b58;
        }
    }
    ctx->pc = 0x2B1B30u;
    // 0x2b1b30: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1b34: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1b38: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1b3c: 0x26460550  addiu       $a2, $s2, 0x550
    ctx->pc = 0x2b1b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
label_2b1b40:
    // 0x2b1b40: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1B40u;
    SET_GPR_U32(ctx, 31, 0x2B1B48u);
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1B40u, 0x2B1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B48u;
label_2b1b48:
    // 0x2b1b48: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1B48u;
    SET_GPR_U32(ctx, 31, 0x2B1B50u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1B48u, 0x2B1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B50u;
label_2b1b50:
    // 0x2b1b50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B1B50u;
    {
        const bool branch_taken_0x2b1b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B50u;
        // 0x2b1b54: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b50) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B1B58u;
label_2b1b58:
    // 0x2b1b58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b1b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b5c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1B5Cu;
    SET_GPR_U32(ctx, 31, 0x2B1B64u);
    ctx->pc = 0x2B1B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B5Cu;
    // 0x2b1b60: 0x24a5f278  addiu       $a1, $a1, -0xD88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1B5Cu, 0x2B1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B64u;
label_2b1b64:
    // 0x2b1b64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1B64u;
    {
        const bool branch_taken_0x2b1b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B64u;
        // 0x2b1b68: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b64) {
            ctx->pc = 0x2B1B8Cu;
            goto label_2b1b8c;
        }
    }
    ctx->pc = 0x2B1B6Cu;
    // 0x2b1b6c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b1b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b1b70: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2b1b74: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x2b1b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x2b1b78: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1B78u;
    SET_GPR_U32(ctx, 31, 0x2B1B80u);
    ctx->pc = 0x2B1B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B78u;
    // 0x2b1b7c: 0x26460554  addiu       $a2, $s2, 0x554 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1B78u, 0x2B1B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B80u;
label_2b1b80:
    // 0x2b1b80: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1B80u;
    SET_GPR_U32(ctx, 31, 0x2B1B88u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1B80u, 0x2B1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B88u;
label_2b1b88:
    // 0x2b1b88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2b1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2b1b8c:
    // 0x2b1b8c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2b1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
label_2b1b90:
    // 0x2b1b90: 0x2450c230  addiu       $s0, $v0, -0x3DD0
    ctx->pc = 0x2b1b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951472));
    // 0x2b1b94: 0x27d5ed18  addiu       $s5, $fp, -0x12E8
    ctx->pc = 0x2b1b94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962456));
    // 0x2b1b98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b1b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b9c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B1B9Cu;
    SET_GPR_U32(ctx, 31, 0x2B1BA4u);
    ctx->pc = 0x2B1BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B9Cu;
    // 0x2b1ba0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B1B9Cu, 0x2B1BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BA4u;
label_2b1ba4:
    // 0x2b1ba4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B1BA4u;
    SET_GPR_U32(ctx, 31, 0x2B1BACu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B1BA4u, 0x2B1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BACu;
label_2b1bac:
    // 0x2b1bac: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2b1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2b1bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1bb4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B1BB4u;
    SET_GPR_U32(ctx, 31, 0x2B1BBCu);
    ctx->pc = 0x2B1BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1BB4u;
    // 0x2b1bb8: 0x2445ed48  addiu       $a1, $v0, -0x12B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B1BB4u, 0x2B1BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BBCu;
label_2b1bbc:
    // 0x2b1bbc: 0x5440f9a2  bnel        $v0, $zero, . + 4 + (-0x65E << 2)
    ctx->pc = 0x2B1BBCu;
    {
        const bool branch_taken_0x2b1bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1bbc) {
            ctx->pc = 0x2B1BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1BBCu;
            // 0x2b1bc0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0248;
        }
    }
    ctx->pc = 0x2B1BC4u;
    // 0x2b1bc4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2b1bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b1bc8: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2b1bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2b1bcc: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2b1bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b1bd0: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2b1bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2b1bd4: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2b1bd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2b1bd8: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x2b1bd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2b1bdc: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x2b1bdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2b1be0: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x2b1be0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2b1be4: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x2b1be4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2b1be8: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x2b1be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2b1bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BECu;
        // 0x2b1bf0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1BF4u;
    // 0x2b1bf4: 0x0  nop
    ctx->pc = 0x2b1bf4u;
    // NOP
    ctx->pc = 0x2b1bf8u;
}
