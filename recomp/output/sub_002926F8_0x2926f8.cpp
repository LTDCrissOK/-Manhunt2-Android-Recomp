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

// Function: sub_002926F8
// Address: 0x2926f8 - 0x294328
void sub_002926F8_0x2926f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002926F8_0x2926f8");
#endif

    switch (ctx->pc) {
        case 0x29273cu: goto label_29273c;
        case 0x292744u: goto label_292744;
        case 0x29274cu: goto label_29274c;
        case 0x292760u: goto label_292760;
        case 0x29276cu: goto label_29276c;
        case 0x29278cu: goto label_29278c;
        case 0x292794u: goto label_292794;
        case 0x2927a4u: goto label_2927a4;
        case 0x2927acu: goto label_2927ac;
        case 0x2927bcu: goto label_2927bc;
        case 0x2927c4u: goto label_2927c4;
        case 0x2927d4u: goto label_2927d4;
        case 0x2927dcu: goto label_2927dc;
        case 0x2927e8u: goto label_2927e8;
        case 0x2927f8u: goto label_2927f8;
        case 0x292818u: goto label_292818;
        case 0x292820u: goto label_292820;
        case 0x292830u: goto label_292830;
        case 0x292838u: goto label_292838;
        case 0x292848u: goto label_292848;
        case 0x292850u: goto label_292850;
        case 0x292860u: goto label_292860;
        case 0x292868u: goto label_292868;
        case 0x292878u: goto label_292878;
        case 0x29288cu: goto label_29288c;
        case 0x2928acu: goto label_2928ac;
        case 0x2928b4u: goto label_2928b4;
        case 0x2928c4u: goto label_2928c4;
        case 0x2928ccu: goto label_2928cc;
        case 0x2928dcu: goto label_2928dc;
        case 0x2928e4u: goto label_2928e4;
        case 0x2928f4u: goto label_2928f4;
        case 0x2928fcu: goto label_2928fc;
        case 0x29290cu: goto label_29290c;
        case 0x292920u: goto label_292920;
        case 0x292940u: goto label_292940;
        case 0x292948u: goto label_292948;
        case 0x292958u: goto label_292958;
        case 0x292960u: goto label_292960;
        case 0x292970u: goto label_292970;
        case 0x292978u: goto label_292978;
        case 0x292988u: goto label_292988;
        case 0x292990u: goto label_292990;
        case 0x2929a0u: goto label_2929a0;
        case 0x2929b4u: goto label_2929b4;
        case 0x2929d4u: goto label_2929d4;
        case 0x2929dcu: goto label_2929dc;
        case 0x2929ecu: goto label_2929ec;
        case 0x2929f4u: goto label_2929f4;
        case 0x292a04u: goto label_292a04;
        case 0x292a0cu: goto label_292a0c;
        case 0x292a1cu: goto label_292a1c;
        case 0x292a24u: goto label_292a24;
        case 0x292a34u: goto label_292a34;
        case 0x292a48u: goto label_292a48;
        case 0x292a68u: goto label_292a68;
        case 0x292a70u: goto label_292a70;
        case 0x292a80u: goto label_292a80;
        case 0x292a88u: goto label_292a88;
        case 0x292a98u: goto label_292a98;
        case 0x292aa0u: goto label_292aa0;
        case 0x292ab0u: goto label_292ab0;
        case 0x292ab8u: goto label_292ab8;
        case 0x292ac8u: goto label_292ac8;
        case 0x292adcu: goto label_292adc;
        case 0x292afcu: goto label_292afc;
        case 0x292b04u: goto label_292b04;
        case 0x292b14u: goto label_292b14;
        case 0x292b1cu: goto label_292b1c;
        case 0x292b2cu: goto label_292b2c;
        case 0x292b34u: goto label_292b34;
        case 0x292b44u: goto label_292b44;
        case 0x292b4cu: goto label_292b4c;
        case 0x292b5cu: goto label_292b5c;
        case 0x292b70u: goto label_292b70;
        case 0x292b9cu: goto label_292b9c;
        case 0x292ba4u: goto label_292ba4;
        case 0x292bb4u: goto label_292bb4;
        case 0x292bbcu: goto label_292bbc;
        case 0x292bc8u: goto label_292bc8;
        case 0x292bdcu: goto label_292bdc;
        case 0x292c08u: goto label_292c08;
        case 0x292c10u: goto label_292c10;
        case 0x292c20u: goto label_292c20;
        case 0x292c28u: goto label_292c28;
        case 0x292c34u: goto label_292c34;
        case 0x292c48u: goto label_292c48;
        case 0x292c64u: goto label_292c64;
        case 0x292c6cu: goto label_292c6c;
        case 0x292c78u: goto label_292c78;
        case 0x292c8cu: goto label_292c8c;
        case 0x292cccu: goto label_292ccc;
        case 0x292cd4u: goto label_292cd4;
        case 0x292ce4u: goto label_292ce4;
        case 0x292cecu: goto label_292cec;
        case 0x292cfcu: goto label_292cfc;
        case 0x292d04u: goto label_292d04;
        case 0x292d14u: goto label_292d14;
        case 0x292d1cu: goto label_292d1c;
        case 0x292d2cu: goto label_292d2c;
        case 0x292d34u: goto label_292d34;
        case 0x292d40u: goto label_292d40;
        case 0x292df4u: goto label_292df4;
        case 0x292e18u: goto label_292e18;
        case 0x292ed0u: goto label_292ed0;
        case 0x292f38u: goto label_292f38;
        case 0x292f64u: goto label_292f64;
        case 0x292fa8u: goto label_292fa8;
        case 0x292fb0u: goto label_292fb0;
        case 0x292fc0u: goto label_292fc0;
        case 0x292fc8u: goto label_292fc8;
        case 0x292fd8u: goto label_292fd8;
        case 0x292fe0u: goto label_292fe0;
        case 0x292ff0u: goto label_292ff0;
        case 0x292ff8u: goto label_292ff8;
        case 0x293008u: goto label_293008;
        case 0x293010u: goto label_293010;
        case 0x29301cu: goto label_29301c;
        case 0x29308cu: goto label_29308c;
        case 0x2930b0u: goto label_2930b0;
        case 0x293168u: goto label_293168;
        case 0x2931d0u: goto label_2931d0;
        case 0x2931fcu: goto label_2931fc;
        case 0x29323cu: goto label_29323c;
        case 0x293244u: goto label_293244;
        case 0x293254u: goto label_293254;
        case 0x29325cu: goto label_29325c;
        case 0x29326cu: goto label_29326c;
        case 0x293274u: goto label_293274;
        case 0x293284u: goto label_293284;
        case 0x29328cu: goto label_29328c;
        case 0x29329cu: goto label_29329c;
        case 0x2932a4u: goto label_2932a4;
        case 0x2932b0u: goto label_2932b0;
        case 0x293324u: goto label_293324;
        case 0x293348u: goto label_293348;
        case 0x293400u: goto label_293400;
        case 0x293468u: goto label_293468;
        case 0x293494u: goto label_293494;
        case 0x2934d8u: goto label_2934d8;
        case 0x2934e0u: goto label_2934e0;
        case 0x2934f0u: goto label_2934f0;
        case 0x2934f8u: goto label_2934f8;
        case 0x293508u: goto label_293508;
        case 0x293510u: goto label_293510;
        case 0x293520u: goto label_293520;
        case 0x293528u: goto label_293528;
        case 0x293538u: goto label_293538;
        case 0x293540u: goto label_293540;
        case 0x29354cu: goto label_29354c;
        case 0x2935bcu: goto label_2935bc;
        case 0x2935e0u: goto label_2935e0;
        case 0x293698u: goto label_293698;
        case 0x293700u: goto label_293700;
        case 0x29372cu: goto label_29372c;
        case 0x29376cu: goto label_29376c;
        case 0x293774u: goto label_293774;
        case 0x293784u: goto label_293784;
        case 0x29378cu: goto label_29378c;
        case 0x29379cu: goto label_29379c;
        case 0x2937a4u: goto label_2937a4;
        case 0x2937b4u: goto label_2937b4;
        case 0x2937bcu: goto label_2937bc;
        case 0x2937ccu: goto label_2937cc;
        case 0x2937d4u: goto label_2937d4;
        case 0x2937e0u: goto label_2937e0;
        case 0x293854u: goto label_293854;
        case 0x293878u: goto label_293878;
        case 0x293930u: goto label_293930;
        case 0x293998u: goto label_293998;
        case 0x2939c4u: goto label_2939c4;
        case 0x293a04u: goto label_293a04;
        case 0x293a0cu: goto label_293a0c;
        case 0x293a1cu: goto label_293a1c;
        case 0x293a24u: goto label_293a24;
        case 0x293a34u: goto label_293a34;
        case 0x293a3cu: goto label_293a3c;
        case 0x293a4cu: goto label_293a4c;
        case 0x293a54u: goto label_293a54;
        case 0x293a64u: goto label_293a64;
        case 0x293a6cu: goto label_293a6c;
        case 0x293a78u: goto label_293a78;
        case 0x293b3cu: goto label_293b3c;
        case 0x293b60u: goto label_293b60;
        case 0x293c18u: goto label_293c18;
        case 0x293c80u: goto label_293c80;
        case 0x293ca8u: goto label_293ca8;
        case 0x293cc8u: goto label_293cc8;
        case 0x293cdcu: goto label_293cdc;
        case 0x293d20u: goto label_293d20;
        case 0x293d28u: goto label_293d28;
        case 0x293d38u: goto label_293d38;
        case 0x293d40u: goto label_293d40;
        case 0x293d50u: goto label_293d50;
        case 0x293d58u: goto label_293d58;
        case 0x293d68u: goto label_293d68;
        case 0x293d70u: goto label_293d70;
        case 0x293d80u: goto label_293d80;
        case 0x293d88u: goto label_293d88;
        case 0x293d94u: goto label_293d94;
        case 0x293e54u: goto label_293e54;
        case 0x293e78u: goto label_293e78;
        case 0x293f30u: goto label_293f30;
        case 0x293f98u: goto label_293f98;
        case 0x293fc0u: goto label_293fc0;
        case 0x293fe0u: goto label_293fe0;
        case 0x293ff4u: goto label_293ff4;
        case 0x294038u: goto label_294038;
        case 0x294040u: goto label_294040;
        case 0x294050u: goto label_294050;
        case 0x294058u: goto label_294058;
        case 0x294068u: goto label_294068;
        case 0x294070u: goto label_294070;
        case 0x294080u: goto label_294080;
        case 0x294088u: goto label_294088;
        case 0x294098u: goto label_294098;
        case 0x2940a0u: goto label_2940a0;
        case 0x2940acu: goto label_2940ac;
        case 0x29416cu: goto label_29416c;
        case 0x294190u: goto label_294190;
        case 0x294248u: goto label_294248;
        case 0x2942b0u: goto label_2942b0;
        case 0x2942d8u: goto label_2942d8;
        case 0x2942f8u: goto label_2942f8;
        case 0x294310u: goto label_294310;
        case 0x294318u: goto label_294318;
        default: break;
    }

    ctx->pc = 0x2926f8u;

    // 0x2926f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2926f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2926fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2926fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x292700: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x292700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x292704: 0x8c44a8ac  lw          $a0, -0x5754($v0)
    ctx->pc = 0x292704u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA8ACu));
    // 0x292708: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x292708u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29270c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x29270cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x292710: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x292710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x292714: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x292714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x292718: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x292718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x29271c: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x29271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x292720: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x292720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x292724: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x292724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x292728: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x292728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x29272c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29272Cu;
    {
        const bool branch_taken_0x29272c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29272Cu;
        // 0x292730: 0xffbf00d8  sd          $ra, 0xD8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29272c) {
            ctx->pc = 0x29273Cu;
            goto label_29273c;
        }
    }
    ctx->pc = 0x292734u;
    // 0x292734: 0xc0f86c0  jal         func_3E1B00
    ctx->pc = 0x292734u;
    SET_GPR_U32(ctx, 31, 0x29273Cu);
    ctx->pc = 0x292738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292734u;
    // 0x292738: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1B00u, 0x292734u, 0x29273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29273Cu;
label_29273c:
    // 0x29273c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29273Cu;
    SET_GPR_U32(ctx, 31, 0x292744u);
    ctx->pc = 0x292740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29273Cu;
    // 0x292740: 0x24040144  addiu       $a0, $zero, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29273Cu, 0x292744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292744u;
label_292744:
    // 0x292744: 0xc0f870a  jal         func_3E1C28
    ctx->pc = 0x292744u;
    SET_GPR_U32(ctx, 31, 0x29274Cu);
    ctx->pc = 0x292748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292744u;
    // 0x292748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C28u, 0x292744u, 0x29274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29274Cu;
label_29274c:
    // 0x29274c: 0xaee2a8ac  sw          $v0, -0x5754($s7)
    ctx->pc = 0x29274cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294944940), GPR_U32(ctx, 2));
    // 0x292750: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x292754: 0x100006e8  b           . + 4 + (0x6E8 << 2)
    ctx->pc = 0x292754u;
    {
        const bool branch_taken_0x292754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292754u;
        // 0x292758: 0x3c1e006c  lui         $fp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292754) {
            ctx->pc = 0x2942F8u;
            goto label_2942f8;
        }
    }
    ctx->pc = 0x29275Cu;
    // 0x29275c: 0x0  nop
    ctx->pc = 0x29275cu;
    // NOP
label_292760:
    // 0x292760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292764: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292764u;
    SET_GPR_U32(ctx, 31, 0x29276Cu);
    ctx->pc = 0x292768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292764u;
    // 0x292768: 0x24a5b628  addiu       $a1, $a1, -0x49D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292764u, 0x29276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29276Cu;
label_29276c:
    // 0x29276c: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x29276Cu;
    {
        const bool branch_taken_0x29276c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29276c) {
            ctx->pc = 0x292770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29276Cu;
            // 0x292770: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2927ECu;
            goto label_2927ec;
        }
    }
    ctx->pc = 0x292774u;
    // 0x292774: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292778: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x29277c: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x29277cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292780: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x292780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292784: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292784u;
    SET_GPR_U32(ctx, 31, 0x29278Cu);
    ctx->pc = 0x292788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292784u;
    // 0x292788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292784u, 0x29278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29278Cu;
label_29278c:
    // 0x29278c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29278Cu;
    SET_GPR_U32(ctx, 31, 0x292794u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29278Cu, 0x292794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292794u;
label_292794:
    // 0x292794: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292798: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x292798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x29279c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29279Cu;
    SET_GPR_U32(ctx, 31, 0x2927A4u);
    ctx->pc = 0x2927A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29279Cu;
    // 0x2927a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29279Cu, 0x2927A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927A4u;
label_2927a4:
    // 0x2927a4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2927A4u;
    SET_GPR_U32(ctx, 31, 0x2927ACu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2927A4u, 0x2927ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927ACu;
label_2927ac:
    // 0x2927ac: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2927acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2927b0: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2927b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2927b4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2927B4u;
    SET_GPR_U32(ctx, 31, 0x2927BCu);
    ctx->pc = 0x2927B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927B4u;
    // 0x2927b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2927B4u, 0x2927BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927BCu;
label_2927bc:
    // 0x2927bc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2927BCu;
    SET_GPR_U32(ctx, 31, 0x2927C4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2927BCu, 0x2927C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927C4u;
label_2927c4:
    // 0x2927c4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2927c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2927c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2927c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927cc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2927CCu;
    SET_GPR_U32(ctx, 31, 0x2927D4u);
    ctx->pc = 0x2927D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927CCu;
    // 0x2927d0: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2927CCu, 0x2927D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927D4u;
label_2927d4:
    // 0x2927d4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2927D4u;
    SET_GPR_U32(ctx, 31, 0x2927DCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2927D4u, 0x2927DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927DCu;
label_2927dc:
    // 0x2927dc: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x2927dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x2927e0: 0xc0aad66  jal         func_2AB598
    ctx->pc = 0x2927E0u;
    SET_GPR_U32(ctx, 31, 0x2927E8u);
    ctx->pc = 0x2927E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927E0u;
    // 0x2927e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB598u, 0x2927E0u, 0x2927E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927E8u;
label_2927e8:
    // 0x2927e8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2927e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2927ec:
    // 0x2927ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2927ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927f0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2927F0u;
    SET_GPR_U32(ctx, 31, 0x2927F8u);
    ctx->pc = 0x2927F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927F0u;
    // 0x2927f4: 0x24a5b678  addiu       $a1, $a1, -0x4988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2927F0u, 0x2927F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927F8u;
label_2927f8:
    // 0x2927f8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2927F8u;
    {
        const bool branch_taken_0x2927f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2927FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927F8u;
        // 0x2927fc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927f8) {
            ctx->pc = 0x292880u;
            goto label_292880;
        }
    }
    ctx->pc = 0x292800u;
    // 0x292800: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292800u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292804: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292808: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x29280c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29280cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292810: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292810u;
    SET_GPR_U32(ctx, 31, 0x292818u);
    ctx->pc = 0x292814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292810u;
    // 0x292814: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292810u, 0x292818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292818u;
label_292818:
    // 0x292818: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292818u;
    SET_GPR_U32(ctx, 31, 0x292820u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292818u, 0x292820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292820u;
label_292820:
    // 0x292820: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292824: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x292824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x292828: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292828u;
    SET_GPR_U32(ctx, 31, 0x292830u);
    ctx->pc = 0x29282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292828u;
    // 0x29282c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292828u, 0x292830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292830u;
label_292830:
    // 0x292830: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292830u;
    SET_GPR_U32(ctx, 31, 0x292838u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292830u, 0x292838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292838u;
label_292838:
    // 0x292838: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x29283c: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x29283cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x292840: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292840u;
    SET_GPR_U32(ctx, 31, 0x292848u);
    ctx->pc = 0x292844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292840u;
    // 0x292844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292840u, 0x292848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292848u;
label_292848:
    // 0x292848: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292848u;
    SET_GPR_U32(ctx, 31, 0x292850u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292848u, 0x292850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292850u;
label_292850:
    // 0x292850: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292858: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292858u;
    SET_GPR_U32(ctx, 31, 0x292860u);
    ctx->pc = 0x29285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292858u;
    // 0x29285c: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292858u, 0x292860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292860u;
label_292860:
    // 0x292860: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292860u;
    SET_GPR_U32(ctx, 31, 0x292868u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292860u, 0x292868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292868u;
label_292868:
    // 0x292868: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x292868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x29286c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29286cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292870: 0xc0aad70  jal         func_2AB5C0
    ctx->pc = 0x292870u;
    SET_GPR_U32(ctx, 31, 0x292878u);
    ctx->pc = 0x292874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292870u;
    // 0x292874: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB5C0u, 0x292870u, 0x292878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292878u;
label_292878:
    // 0x292878: 0x100006a0  b           . + 4 + (0x6A0 << 2)
    ctx->pc = 0x292878u;
    {
        const bool branch_taken_0x292878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292878u;
        // 0x29287c: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292878) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x292880u;
label_292880:
    // 0x292880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292884: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292884u;
    SET_GPR_U32(ctx, 31, 0x29288Cu);
    ctx->pc = 0x292888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292884u;
    // 0x292888: 0x24a5b690  addiu       $a1, $a1, -0x4970 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292884u, 0x29288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29288Cu;
label_29288c:
    // 0x29288c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x29288Cu;
    {
        const bool branch_taken_0x29288c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29288Cu;
        // 0x292890: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29288c) {
            ctx->pc = 0x292914u;
            goto label_292914;
        }
    }
    ctx->pc = 0x292894u;
    // 0x292894: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292898: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x29289c: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x29289cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x2928a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2928a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928a4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2928A4u;
    SET_GPR_U32(ctx, 31, 0x2928ACu);
    ctx->pc = 0x2928A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928A4u;
    // 0x2928a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2928A4u, 0x2928ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928ACu;
label_2928ac:
    // 0x2928ac: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2928ACu;
    SET_GPR_U32(ctx, 31, 0x2928B4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2928ACu, 0x2928B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928B4u;
label_2928b4:
    // 0x2928b4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2928b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2928b8: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2928b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2928bc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2928BCu;
    SET_GPR_U32(ctx, 31, 0x2928C4u);
    ctx->pc = 0x2928C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928BCu;
    // 0x2928c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2928BCu, 0x2928C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928C4u;
label_2928c4:
    // 0x2928c4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2928C4u;
    SET_GPR_U32(ctx, 31, 0x2928CCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2928C4u, 0x2928CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928CCu;
label_2928cc:
    // 0x2928cc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2928ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2928d0: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2928d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2928d4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2928D4u;
    SET_GPR_U32(ctx, 31, 0x2928DCu);
    ctx->pc = 0x2928D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928D4u;
    // 0x2928d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2928D4u, 0x2928DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928DCu;
label_2928dc:
    // 0x2928dc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2928DCu;
    SET_GPR_U32(ctx, 31, 0x2928E4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2928DCu, 0x2928E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928E4u;
label_2928e4:
    // 0x2928e4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2928e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2928e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2928e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928ec: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2928ECu;
    SET_GPR_U32(ctx, 31, 0x2928F4u);
    ctx->pc = 0x2928F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928ECu;
    // 0x2928f0: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2928ECu, 0x2928F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928F4u;
label_2928f4:
    // 0x2928f4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2928F4u;
    SET_GPR_U32(ctx, 31, 0x2928FCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2928F4u, 0x2928FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928FCu;
label_2928fc:
    // 0x2928fc: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x2928fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x292900: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x292900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292904: 0xc0aad7c  jal         func_2AB5F0
    ctx->pc = 0x292904u;
    SET_GPR_U32(ctx, 31, 0x29290Cu);
    ctx->pc = 0x292908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292904u;
    // 0x292908: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB5F0u, 0x292904u, 0x29290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29290Cu;
label_29290c:
    // 0x29290c: 0x1000067b  b           . + 4 + (0x67B << 2)
    ctx->pc = 0x29290Cu;
    {
        const bool branch_taken_0x29290c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29290Cu;
        // 0x292910: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29290c) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x292914u;
label_292914:
    // 0x292914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292918: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292918u;
    SET_GPR_U32(ctx, 31, 0x292920u);
    ctx->pc = 0x29291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292918u;
    // 0x29291c: 0x24a5b6a0  addiu       $a1, $a1, -0x4960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292918u, 0x292920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292920u;
label_292920:
    // 0x292920: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x292920u;
    {
        const bool branch_taken_0x292920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292920u;
        // 0x292924: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292920) {
            ctx->pc = 0x2929A8u;
            goto label_2929a8;
        }
    }
    ctx->pc = 0x292928u;
    // 0x292928: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292928u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x29292c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x29292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292930: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292934: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x292934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292938: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292938u;
    SET_GPR_U32(ctx, 31, 0x292940u);
    ctx->pc = 0x29293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292938u;
    // 0x29293c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292938u, 0x292940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292940u;
label_292940:
    // 0x292940: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292940u;
    SET_GPR_U32(ctx, 31, 0x292948u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292940u, 0x292948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292948u;
label_292948:
    // 0x292948: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x29294c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x29294cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x292950: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292950u;
    SET_GPR_U32(ctx, 31, 0x292958u);
    ctx->pc = 0x292954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292950u;
    // 0x292954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292950u, 0x292958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292958u;
label_292958:
    // 0x292958: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292958u;
    SET_GPR_U32(ctx, 31, 0x292960u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292958u, 0x292960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292960u;
label_292960:
    // 0x292960: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292964: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x292964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x292968: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292968u;
    SET_GPR_U32(ctx, 31, 0x292970u);
    ctx->pc = 0x29296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292968u;
    // 0x29296c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292968u, 0x292970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292970u;
label_292970:
    // 0x292970: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292970u;
    SET_GPR_U32(ctx, 31, 0x292978u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292970u, 0x292978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292978u;
label_292978:
    // 0x292978: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x29297c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29297cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292980: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292980u;
    SET_GPR_U32(ctx, 31, 0x292988u);
    ctx->pc = 0x292984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292980u;
    // 0x292984: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292980u, 0x292988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292988u;
label_292988:
    // 0x292988: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292988u;
    SET_GPR_U32(ctx, 31, 0x292990u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292988u, 0x292990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292990u;
label_292990:
    // 0x292990: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x292990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x292994: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x292994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292998: 0xc0aad70  jal         func_2AB5C0
    ctx->pc = 0x292998u;
    SET_GPR_U32(ctx, 31, 0x2929A0u);
    ctx->pc = 0x29299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292998u;
    // 0x29299c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB5C0u, 0x292998u, 0x2929A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929A0u;
label_2929a0:
    // 0x2929a0: 0x10000656  b           . + 4 + (0x656 << 2)
    ctx->pc = 0x2929A0u;
    {
        const bool branch_taken_0x2929a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929A0u;
        // 0x2929a4: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929a0) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x2929A8u;
label_2929a8:
    // 0x2929a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2929a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929ac: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2929ACu;
    SET_GPR_U32(ctx, 31, 0x2929B4u);
    ctx->pc = 0x2929B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929ACu;
    // 0x2929b0: 0x24a5b6b8  addiu       $a1, $a1, -0x4948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2929ACu, 0x2929B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929B4u;
label_2929b4:
    // 0x2929b4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2929B4u;
    {
        const bool branch_taken_0x2929b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2929B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929B4u;
        // 0x2929b8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929b4) {
            ctx->pc = 0x292A3Cu;
            goto label_292a3c;
        }
    }
    ctx->pc = 0x2929BCu;
    // 0x2929bc: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2929bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2929c0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2929c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2929c4: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x2929c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x2929c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2929c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929cc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2929CCu;
    SET_GPR_U32(ctx, 31, 0x2929D4u);
    ctx->pc = 0x2929D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929CCu;
    // 0x2929d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2929CCu, 0x2929D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929D4u;
label_2929d4:
    // 0x2929d4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2929D4u;
    SET_GPR_U32(ctx, 31, 0x2929DCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2929D4u, 0x2929DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929DCu;
label_2929dc:
    // 0x2929dc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2929dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2929e0: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2929e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2929e4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2929E4u;
    SET_GPR_U32(ctx, 31, 0x2929ECu);
    ctx->pc = 0x2929E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929E4u;
    // 0x2929e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2929E4u, 0x2929ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929ECu;
label_2929ec:
    // 0x2929ec: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2929ECu;
    SET_GPR_U32(ctx, 31, 0x2929F4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2929ECu, 0x2929F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929F4u;
label_2929f4:
    // 0x2929f4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2929f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2929f8: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2929f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2929fc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2929FCu;
    SET_GPR_U32(ctx, 31, 0x292A04u);
    ctx->pc = 0x292A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929FCu;
    // 0x292a00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2929FCu, 0x292A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A04u;
label_292a04:
    // 0x292a04: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292A04u;
    SET_GPR_U32(ctx, 31, 0x292A0Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292A04u, 0x292A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A0Cu;
label_292a0c:
    // 0x292a0c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a14: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292A14u;
    SET_GPR_U32(ctx, 31, 0x292A1Cu);
    ctx->pc = 0x292A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A14u;
    // 0x292a18: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292A14u, 0x292A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A1Cu;
label_292a1c:
    // 0x292a1c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292A1Cu;
    SET_GPR_U32(ctx, 31, 0x292A24u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292A1Cu, 0x292A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A24u;
label_292a24:
    // 0x292a24: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x292a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x292a28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x292a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a2c: 0xc0aad7c  jal         func_2AB5F0
    ctx->pc = 0x292A2Cu;
    SET_GPR_U32(ctx, 31, 0x292A34u);
    ctx->pc = 0x292A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A2Cu;
    // 0x292a30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB5F0u, 0x292A2Cu, 0x292A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A34u;
label_292a34:
    // 0x292a34: 0x10000631  b           . + 4 + (0x631 << 2)
    ctx->pc = 0x292A34u;
    {
        const bool branch_taken_0x292a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A34u;
        // 0x292a38: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a34) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x292A3Cu;
label_292a3c:
    // 0x292a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a40: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292A40u;
    SET_GPR_U32(ctx, 31, 0x292A48u);
    ctx->pc = 0x292A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A40u;
    // 0x292a44: 0x24a5b6c8  addiu       $a1, $a1, -0x4938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292A40u, 0x292A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A48u;
label_292a48:
    // 0x292a48: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x292A48u;
    {
        const bool branch_taken_0x292a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A48u;
        // 0x292a4c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a48) {
            ctx->pc = 0x292AD0u;
            goto label_292ad0;
        }
    }
    ctx->pc = 0x292A50u;
    // 0x292a50: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292a50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292a54: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292a58: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292a5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x292a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a60: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292A60u;
    SET_GPR_U32(ctx, 31, 0x292A68u);
    ctx->pc = 0x292A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A60u;
    // 0x292a64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292A60u, 0x292A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A68u;
label_292a68:
    // 0x292a68: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292A68u;
    SET_GPR_U32(ctx, 31, 0x292A70u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292A68u, 0x292A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A70u;
label_292a70:
    // 0x292a70: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292a74: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x292a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x292a78: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292A78u;
    SET_GPR_U32(ctx, 31, 0x292A80u);
    ctx->pc = 0x292A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A78u;
    // 0x292a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292A78u, 0x292A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A80u;
label_292a80:
    // 0x292a80: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292A80u;
    SET_GPR_U32(ctx, 31, 0x292A88u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292A80u, 0x292A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A88u;
label_292a88:
    // 0x292a88: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292a8c: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x292a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x292a90: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292A90u;
    SET_GPR_U32(ctx, 31, 0x292A98u);
    ctx->pc = 0x292A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A90u;
    // 0x292a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292A90u, 0x292A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A98u;
label_292a98:
    // 0x292a98: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292A98u;
    SET_GPR_U32(ctx, 31, 0x292AA0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292A98u, 0x292AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AA0u;
label_292aa0:
    // 0x292aa0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292aa8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292AA8u;
    SET_GPR_U32(ctx, 31, 0x292AB0u);
    ctx->pc = 0x292AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AA8u;
    // 0x292aac: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292AA8u, 0x292AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AB0u;
label_292ab0:
    // 0x292ab0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292AB0u;
    SET_GPR_U32(ctx, 31, 0x292AB8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292AB0u, 0x292AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AB8u;
label_292ab8:
    // 0x292ab8: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x292ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x292abc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x292abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ac0: 0xc0aad88  jal         func_2AB620
    ctx->pc = 0x292AC0u;
    SET_GPR_U32(ctx, 31, 0x292AC8u);
    ctx->pc = 0x292AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AC0u;
    // 0x292ac4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB620u, 0x292AC0u, 0x292AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AC8u;
label_292ac8:
    // 0x292ac8: 0x1000060c  b           . + 4 + (0x60C << 2)
    ctx->pc = 0x292AC8u;
    {
        const bool branch_taken_0x292ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AC8u;
        // 0x292acc: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ac8) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x292AD0u;
label_292ad0:
    // 0x292ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ad4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292AD4u;
    SET_GPR_U32(ctx, 31, 0x292ADCu);
    ctx->pc = 0x292AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AD4u;
    // 0x292ad8: 0x24a5b6d8  addiu       $a1, $a1, -0x4928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292AD4u, 0x292ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292ADCu;
label_292adc:
    // 0x292adc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x292ADCu;
    {
        const bool branch_taken_0x292adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292ADCu;
        // 0x292ae0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292adc) {
            ctx->pc = 0x292B64u;
            goto label_292b64;
        }
    }
    ctx->pc = 0x292AE4u;
    // 0x292ae4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292ae8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292aec: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292af0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x292af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292af4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292AF4u;
    SET_GPR_U32(ctx, 31, 0x292AFCu);
    ctx->pc = 0x292AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AF4u;
    // 0x292af8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292AF4u, 0x292AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AFCu;
label_292afc:
    // 0x292afc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292AFCu;
    SET_GPR_U32(ctx, 31, 0x292B04u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292AFCu, 0x292B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B04u;
label_292b04:
    // 0x292b04: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292b08: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x292b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x292b0c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292B0Cu;
    SET_GPR_U32(ctx, 31, 0x292B14u);
    ctx->pc = 0x292B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B0Cu;
    // 0x292b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292B0Cu, 0x292B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B14u;
label_292b14:
    // 0x292b14: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292B14u;
    SET_GPR_U32(ctx, 31, 0x292B1Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292B14u, 0x292B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B1Cu;
label_292b1c:
    // 0x292b1c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292b20: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x292b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x292b24: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292B24u;
    SET_GPR_U32(ctx, 31, 0x292B2Cu);
    ctx->pc = 0x292B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B24u;
    // 0x292b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292B24u, 0x292B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B2Cu;
label_292b2c:
    // 0x292b2c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292B2Cu;
    SET_GPR_U32(ctx, 31, 0x292B34u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292B2Cu, 0x292B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B34u;
label_292b34:
    // 0x292b34: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b3c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292B3Cu;
    SET_GPR_U32(ctx, 31, 0x292B44u);
    ctx->pc = 0x292B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B3Cu;
    // 0x292b40: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292B3Cu, 0x292B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B44u;
label_292b44:
    // 0x292b44: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292B44u;
    SET_GPR_U32(ctx, 31, 0x292B4Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292B44u, 0x292B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B4Cu;
label_292b4c:
    // 0x292b4c: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x292b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x292b50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x292b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b54: 0xc0aad88  jal         func_2AB620
    ctx->pc = 0x292B54u;
    SET_GPR_U32(ctx, 31, 0x292B5Cu);
    ctx->pc = 0x292B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B54u;
    // 0x292b58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB620u, 0x292B54u, 0x292B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B5Cu;
label_292b5c:
    // 0x292b5c: 0x100005e7  b           . + 4 + (0x5E7 << 2)
    ctx->pc = 0x292B5Cu;
    {
        const bool branch_taken_0x292b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B5Cu;
        // 0x292b60: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b5c) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x292B64u;
label_292b64:
    // 0x292b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b68: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292B68u;
    SET_GPR_U32(ctx, 31, 0x292B70u);
    ctx->pc = 0x292B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B68u;
    // 0x292b6c: 0x24a5b6e8  addiu       $a1, $a1, -0x4918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292B68u, 0x292B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B70u;
label_292b70:
    // 0x292b70: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x292B70u;
    {
        const bool branch_taken_0x292b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B70u;
        // 0x292b74: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b70) {
            ctx->pc = 0x292BD0u;
            goto label_292bd0;
        }
    }
    ctx->pc = 0x292B78u;
    // 0x292b78: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292b78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292b7c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x292b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x292b80: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292b84: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292b88: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x292b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x292b8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b90: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x292b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x292b94: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292B94u;
    SET_GPR_U32(ctx, 31, 0x292B9Cu);
    ctx->pc = 0x292B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B94u;
    // 0x292b98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292B94u, 0x292B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B9Cu;
label_292b9c:
    // 0x292b9c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292B9Cu;
    SET_GPR_U32(ctx, 31, 0x292BA4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292B9Cu, 0x292BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BA4u;
label_292ba4:
    // 0x292ba4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292ba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bac: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292BACu;
    SET_GPR_U32(ctx, 31, 0x292BB4u);
    ctx->pc = 0x292BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292BACu;
    // 0x292bb0: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292BACu, 0x292BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BB4u;
label_292bb4:
    // 0x292bb4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292BB4u;
    SET_GPR_U32(ctx, 31, 0x292BBCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292BB4u, 0x292BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BBCu;
label_292bbc:
    // 0x292bbc: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x292bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x292bc0: 0xc0aad94  jal         func_2AB650
    ctx->pc = 0x292BC0u;
    SET_GPR_U32(ctx, 31, 0x292BC8u);
    ctx->pc = 0x292BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292BC0u;
    // 0x292bc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB650u, 0x292BC0u, 0x292BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BC8u;
label_292bc8:
    // 0x292bc8: 0x100005cc  b           . + 4 + (0x5CC << 2)
    ctx->pc = 0x292BC8u;
    {
        const bool branch_taken_0x292bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BC8u;
        // 0x292bcc: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292bc8) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x292BD0u;
label_292bd0:
    // 0x292bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bd4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292BD4u;
    SET_GPR_U32(ctx, 31, 0x292BDCu);
    ctx->pc = 0x292BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292BD4u;
    // 0x292bd8: 0x24a5b700  addiu       $a1, $a1, -0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292BD4u, 0x292BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BDCu;
label_292bdc:
    // 0x292bdc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x292BDCu;
    {
        const bool branch_taken_0x292bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BDCu;
        // 0x292be0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292bdc) {
            ctx->pc = 0x292C3Cu;
            goto label_292c3c;
        }
    }
    ctx->pc = 0x292BE4u;
    // 0x292be4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292be4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292be8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x292be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x292bec: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292bf0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292bf4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x292bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x292bf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bfc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x292bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x292c00: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292C00u;
    SET_GPR_U32(ctx, 31, 0x292C08u);
    ctx->pc = 0x292C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C00u;
    // 0x292c04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292C00u, 0x292C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C08u;
label_292c08:
    // 0x292c08: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292C08u;
    SET_GPR_U32(ctx, 31, 0x292C10u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292C08u, 0x292C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C10u;
label_292c10:
    // 0x292c10: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c18: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292C18u;
    SET_GPR_U32(ctx, 31, 0x292C20u);
    ctx->pc = 0x292C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C18u;
    // 0x292c1c: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292C18u, 0x292C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C20u;
label_292c20:
    // 0x292c20: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292C20u;
    SET_GPR_U32(ctx, 31, 0x292C28u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292C20u, 0x292C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C28u;
label_292c28:
    // 0x292c28: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x292c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x292c2c: 0xc0aad9a  jal         func_2AB668
    ctx->pc = 0x292C2Cu;
    SET_GPR_U32(ctx, 31, 0x292C34u);
    ctx->pc = 0x292C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C2Cu;
    // 0x292c30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB668u, 0x292C2Cu, 0x292C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C34u;
label_292c34:
    // 0x292c34: 0x100005b1  b           . + 4 + (0x5B1 << 2)
    ctx->pc = 0x292C34u;
    {
        const bool branch_taken_0x292c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C34u;
        // 0x292c38: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c34) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x292C3Cu;
label_292c3c:
    // 0x292c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c40: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292C40u;
    SET_GPR_U32(ctx, 31, 0x292C48u);
    ctx->pc = 0x292C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C40u;
    // 0x292c44: 0x24a5b718  addiu       $a1, $a1, -0x48E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292C40u, 0x292C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C48u;
label_292c48:
    // 0x292c48: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x292C48u;
    {
        const bool branch_taken_0x292c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C48u;
        // 0x292c4c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c48) {
            ctx->pc = 0x292C80u;
            goto label_292c80;
        }
    }
    ctx->pc = 0x292C50u;
    // 0x292c50: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292c54: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x292c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x292c58: 0x24a5b4c8  addiu       $a1, $a1, -0x4B38
    ctx->pc = 0x292c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948040));
    // 0x292c5c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292C5Cu;
    SET_GPR_U32(ctx, 31, 0x292C64u);
    ctx->pc = 0x292C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C5Cu;
    // 0x292c60: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292C5Cu, 0x292C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C64u;
label_292c64:
    // 0x292c64: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292C64u;
    SET_GPR_U32(ctx, 31, 0x292C6Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292C64u, 0x292C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C6Cu;
label_292c6c:
    // 0x292c6c: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x292c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x292c70: 0xc0aada0  jal         func_2AB680
    ctx->pc = 0x292C70u;
    SET_GPR_U32(ctx, 31, 0x292C78u);
    ctx->pc = 0x292C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C70u;
    // 0x292c74: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB680u, 0x292C70u, 0x292C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C78u;
label_292c78:
    // 0x292c78: 0x100005a0  b           . + 4 + (0x5A0 << 2)
    ctx->pc = 0x292C78u;
    {
        const bool branch_taken_0x292c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C78u;
        // 0x292c7c: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c78) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x292C80u;
label_292c80:
    // 0x292c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c84: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292C84u;
    SET_GPR_U32(ctx, 31, 0x292C8Cu);
    ctx->pc = 0x292C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C84u;
    // 0x292c88: 0x24a5b728  addiu       $a1, $a1, -0x48D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292C84u, 0x292C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C8Cu;
label_292c8c:
    // 0x292c8c: 0x544000b2  bnel        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x292C8Cu;
    {
        const bool branch_taken_0x292c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292c8c) {
            ctx->pc = 0x292C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292C8Cu;
            // 0x292c90: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292F58u;
            goto label_292f58;
        }
    }
    ctx->pc = 0x292C94u;
    // 0x292c94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x292c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x292c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292c9c: 0x27b10028  addiu       $s1, $sp, 0x28
    ctx->pc = 0x292c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x292ca0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x292ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x292ca4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292ca8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x292ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x292cac: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292cb0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x292cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x292cb4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x292cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x292cb8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x292cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x292cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292cc0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x292cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x292cc4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292CC4u;
    SET_GPR_U32(ctx, 31, 0x292CCCu);
    ctx->pc = 0x292CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CC4u;
    // 0x292cc8: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292CC4u, 0x292CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CCCu;
label_292ccc:
    // 0x292ccc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292CCCu;
    SET_GPR_U32(ctx, 31, 0x292CD4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292CCCu, 0x292CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CD4u;
label_292cd4:
    // 0x292cd4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292cd8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x292cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x292cdc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292CDCu;
    SET_GPR_U32(ctx, 31, 0x292CE4u);
    ctx->pc = 0x292CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CDCu;
    // 0x292ce0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292CDCu, 0x292CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CE4u;
label_292ce4:
    // 0x292ce4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292CE4u;
    SET_GPR_U32(ctx, 31, 0x292CECu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292CE4u, 0x292CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CECu;
label_292cec:
    // 0x292cec: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292cf0: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x292cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x292cf4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292CF4u;
    SET_GPR_U32(ctx, 31, 0x292CFCu);
    ctx->pc = 0x292CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CF4u;
    // 0x292cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292CF4u, 0x292CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CFCu;
label_292cfc:
    // 0x292cfc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292CFCu;
    SET_GPR_U32(ctx, 31, 0x292D04u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292CFCu, 0x292D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D04u;
label_292d04:
    // 0x292d04: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292d08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x292d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d0c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292D0Cu;
    SET_GPR_U32(ctx, 31, 0x292D14u);
    ctx->pc = 0x292D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D0Cu;
    // 0x292d10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292D0Cu, 0x292D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D14u;
label_292d14:
    // 0x292d14: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292D14u;
    SET_GPR_U32(ctx, 31, 0x292D1Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292D14u, 0x292D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D1Cu;
label_292d1c:
    // 0x292d1c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d24: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292D24u;
    SET_GPR_U32(ctx, 31, 0x292D2Cu);
    ctx->pc = 0x292D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D24u;
    // 0x292d28: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292D24u, 0x292D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D2Cu;
label_292d2c:
    // 0x292d2c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292D2Cu;
    SET_GPR_U32(ctx, 31, 0x292D34u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292D2Cu, 0x292D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D34u;
label_292d34:
    // 0x292d34: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x292d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x292d38: 0xc0aadc2  jal         func_2AB708
    ctx->pc = 0x292D38u;
    SET_GPR_U32(ctx, 31, 0x292D40u);
    ctx->pc = 0x292D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D38u;
    // 0x292d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB708u, 0x292D38u, 0x292D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D40u;
label_292d40:
    // 0x292d40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x292d40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d44: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x292d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292d48: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x292d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292d4c: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x292d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x292d50: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x292d50u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x292d54: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x292d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x292d58: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x292d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292d5c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x292d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x292d60: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x292D60u;
    {
        const bool branch_taken_0x292d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D60u;
        // 0x292d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d60) {
            ctx->pc = 0x292DA8u;
            goto label_292da8;
        }
    }
    ctx->pc = 0x292D68u;
    // 0x292d68: 0x1060035d  beqz        $v1, . + 4 + (0x35D << 2)
    ctx->pc = 0x292D68u;
    {
        const bool branch_taken_0x292d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D68u;
        // 0x292d6c: 0x24620008  addiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d68) {
            ctx->pc = 0x293AE0u;
            goto label_293ae0;
        }
    }
    ctx->pc = 0x292D70u;
    // 0x292d70: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x292d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x292d74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x292d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x292d78: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x292d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x292d7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x292d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x292d80: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x292d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292d84: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x292d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x292d88: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x292d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292d8c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x292d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x292d90: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x292d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292d94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x292d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x292d98: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x292d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292d9c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x292d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x292da0: 0x1000034e  b           . + 4 + (0x34E << 2)
    ctx->pc = 0x292DA0u;
    {
        const bool branch_taken_0x292da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DA0u;
        // 0x292da4: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292da0) {
            ctx->pc = 0x293ADCu;
            goto label_293adc;
        }
    }
    ctx->pc = 0x292DA8u;
label_292da8:
    // 0x292da8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x292da8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292dac: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x292dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x292db0: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x292db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x292db4: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x292db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x292db8: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x292db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x292dbc: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x292dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x292dc0: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x292dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x292dc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x292dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292dc8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x292dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292dcc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x292dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292dd0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x292dd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x292dd4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x292dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x292dd8: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x292dd8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x292ddc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x292ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x292de0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x292de0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292de4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x292DE4u;
    {
        const bool branch_taken_0x292de4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DE4u;
        // 0x292de8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292de4) {
            ctx->pc = 0x292DFCu;
            goto label_292dfc;
        }
    }
    ctx->pc = 0x292DECu;
    // 0x292dec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x292DECu;
    SET_GPR_U32(ctx, 31, 0x292DF4u);
    ctx->pc = 0x292DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292DECu;
    // 0x292df0: 0x2842018  mult        $a0, $s4, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x292DECu, 0x292DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292DF4u;
label_292df4:
    // 0x292df4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292DF4u;
    {
        const bool branch_taken_0x292df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DF4u;
        // 0x292df8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292df4) {
            ctx->pc = 0x292E04u;
            goto label_292e04;
        }
    }
    ctx->pc = 0x292DFCu;
label_292dfc:
    // 0x292dfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x292dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292e04:
    // 0x292e04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x292e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x292e08: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x292e08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e0c: 0x10720016  beq         $v1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x292E0Cu;
    {
        const bool branch_taken_0x292e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x292E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E0Cu;
        // 0x292e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e0c) {
            ctx->pc = 0x292E68u;
            goto label_292e68;
        }
    }
    ctx->pc = 0x292E14u;
    // 0x292e14: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x292e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_292e18:
    // 0x292e18: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x292E18u;
    {
        const bool branch_taken_0x292e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e18) {
            ctx->pc = 0x292E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292E18u;
            // 0x292e1c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292E5Cu;
            goto label_292e5c;
        }
    }
    ctx->pc = 0x292E20u;
    // 0x292e20: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x292e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x292e24: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x292e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x292e28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x292e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x292e2c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x292e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x292e30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x292e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292e34: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x292e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x292e38: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x292e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292e3c: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x292e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x292e40: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x292e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292e44: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x292e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x292e48: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x292e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292e4c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x292e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x292e50: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x292e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292e54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x292e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x292e58: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x292e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_292e5c:
    // 0x292e5c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x292e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x292e60: 0x1472ffed  bne         $v1, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x292E60u;
    {
        const bool branch_taken_0x292e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x292E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E60u;
        // 0x292e64: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e60) {
            ctx->pc = 0x292E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292e18;
        }
    }
    ctx->pc = 0x292E68u;
label_292e68:
    // 0x292e68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x292e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x292e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292e70: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x292E70u;
    {
        const bool branch_taken_0x292e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E70u;
        // 0x292e74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e70) {
            ctx->pc = 0x292EC0u;
            goto label_292ec0;
        }
    }
    ctx->pc = 0x292E78u;
    // 0x292e78: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x292E78u;
    {
        const bool branch_taken_0x292e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E78u;
        // 0x292e7c: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e78) {
            ctx->pc = 0x292EB8u;
            goto label_292eb8;
        }
    }
    ctx->pc = 0x292E80u;
    // 0x292e80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x292e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x292e84: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x292e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x292e88: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x292e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x292e8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x292e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x292e90: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x292e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292e94: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x292e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x292e98: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x292e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292e9c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x292e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x292ea0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x292ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292ea4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x292ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x292ea8: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x292ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292eac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x292eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x292eb0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x292eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292eb4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x292eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_292eb8:
    // 0x292eb8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x292EB8u;
    {
        const bool branch_taken_0x292eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EB8u;
        // 0x292ebc: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292eb8) {
            ctx->pc = 0x292F20u;
            goto label_292f20;
        }
    }
    ctx->pc = 0x292EC0u;
label_292ec0:
    // 0x292ec0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x292EC0u;
    {
        const bool branch_taken_0x292ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EC0u;
        // 0x292ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ec0) {
            ctx->pc = 0x292F1Cu;
            goto label_292f1c;
        }
    }
    ctx->pc = 0x292EC8u;
    // 0x292ec8: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x292ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x292ecc: 0x0  nop
    ctx->pc = 0x292eccu;
    // NOP
label_292ed0:
    // 0x292ed0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x292ED0u;
    {
        const bool branch_taken_0x292ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292ED0u;
        // 0x292ed4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ed0) {
            ctx->pc = 0x292F10u;
            goto label_292f10;
        }
    }
    ctx->pc = 0x292ED8u;
    // 0x292ed8: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x292ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x292edc: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x292edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x292ee0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x292ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x292ee4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x292ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x292ee8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x292ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292eec: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x292eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x292ef0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x292ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292ef4: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x292ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x292ef8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x292ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292efc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x292efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x292f00: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x292f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292f04: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x292f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x292f08: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x292f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292f0c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x292f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_292f10:
    // 0x292f10: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x292f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x292f14: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x292F14u;
    {
        const bool branch_taken_0x292f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x292F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F14u;
        // 0x292f18: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f14) {
            ctx->pc = 0x292ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292ed0;
        }
    }
    ctx->pc = 0x292F1Cu;
label_292f1c:
    // 0x292f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x292f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_292f20:
    // 0x292f20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x292f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x292f24: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x292f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292f28: 0x1083035b  beq         $a0, $v1, . + 4 + (0x35B << 2)
    ctx->pc = 0x292F28u;
    {
        const bool branch_taken_0x292f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x292F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F28u;
        // 0x292f2c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f28) {
            ctx->pc = 0x293C98u;
            goto label_293c98;
        }
    }
    ctx->pc = 0x292F30u;
    // 0x292f30: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x292f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x292f34: 0x0  nop
    ctx->pc = 0x292f34u;
    // NOP
label_292f38:
    // 0x292f38: 0x0  nop
    ctx->pc = 0x292f38u;
    // NOP
    // 0x292f3c: 0x0  nop
    ctx->pc = 0x292f3cu;
    // NOP
    // 0x292f40: 0x0  nop
    ctx->pc = 0x292f40u;
    // NOP
    // 0x292f44: 0x0  nop
    ctx->pc = 0x292f44u;
    // NOP
    // 0x292f48: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x292F48u;
    {
        const bool branch_taken_0x292f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x292F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F48u;
        // 0x292f4c: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f48) {
            ctx->pc = 0x292F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292f38;
        }
    }
    ctx->pc = 0x292F50u;
    // 0x292f50: 0x10000351  b           . + 4 + (0x351 << 2)
    ctx->pc = 0x292F50u;
    {
        const bool branch_taken_0x292f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f50) {
            ctx->pc = 0x293C98u;
            goto label_293c98;
        }
    }
    ctx->pc = 0x292F58u;
label_292f58:
    // 0x292f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f5c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292F5Cu;
    SET_GPR_U32(ctx, 31, 0x292F64u);
    ctx->pc = 0x292F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F5Cu;
    // 0x292f60: 0x24a5b748  addiu       $a1, $a1, -0x48B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292F5Cu, 0x292F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F64u;
label_292f64:
    // 0x292f64: 0x544000a2  bnel        $v0, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x292F64u;
    {
        const bool branch_taken_0x292f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292f64) {
            ctx->pc = 0x292F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292F64u;
            // 0x292f68: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2931F0u;
            goto label_2931f0;
        }
    }
    ctx->pc = 0x292F6Cu;
    // 0x292f6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x292f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x292f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292f74: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x292f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x292f78: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x292f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x292f7c: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292f80: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x292f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x292f84: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292f88: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x292f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x292f8c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x292f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x292f90: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x292f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x292f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f98: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x292f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x292f9c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x292f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292fa0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292FA0u;
    SET_GPR_U32(ctx, 31, 0x292FA8u);
    ctx->pc = 0x292FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FA0u;
    // 0x292fa4: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292FA0u, 0x292FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FA8u;
label_292fa8:
    // 0x292fa8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292FA8u;
    SET_GPR_U32(ctx, 31, 0x292FB0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292FA8u, 0x292FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FB0u;
label_292fb0:
    // 0x292fb0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292fb4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x292fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x292fb8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292FB8u;
    SET_GPR_U32(ctx, 31, 0x292FC0u);
    ctx->pc = 0x292FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FB8u;
    // 0x292fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292FB8u, 0x292FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FC0u;
label_292fc0:
    // 0x292fc0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292FC0u;
    SET_GPR_U32(ctx, 31, 0x292FC8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292FC0u, 0x292FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FC8u;
label_292fc8:
    // 0x292fc8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292fcc: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x292fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x292fd0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292FD0u;
    SET_GPR_U32(ctx, 31, 0x292FD8u);
    ctx->pc = 0x292FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FD0u;
    // 0x292fd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292FD0u, 0x292FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FD8u;
label_292fd8:
    // 0x292fd8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292FD8u;
    SET_GPR_U32(ctx, 31, 0x292FE0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292FD8u, 0x292FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FE0u;
label_292fe0:
    // 0x292fe0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292fe4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x292fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fe8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292FE8u;
    SET_GPR_U32(ctx, 31, 0x292FF0u);
    ctx->pc = 0x292FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FE8u;
    // 0x292fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292FE8u, 0x292FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FF0u;
label_292ff0:
    // 0x292ff0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292FF0u;
    SET_GPR_U32(ctx, 31, 0x292FF8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292FF0u, 0x292FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FF8u;
label_292ff8:
    // 0x292ff8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x292ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x292ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293000: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293000u;
    SET_GPR_U32(ctx, 31, 0x293008u);
    ctx->pc = 0x293004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293000u;
    // 0x293004: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293000u, 0x293008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293008u;
label_293008:
    // 0x293008: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293008u;
    SET_GPR_U32(ctx, 31, 0x293010u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293008u, 0x293010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293010u;
label_293010:
    // 0x293010: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x293010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x293014: 0xc0aadc2  jal         func_2AB708
    ctx->pc = 0x293014u;
    SET_GPR_U32(ctx, 31, 0x29301Cu);
    ctx->pc = 0x293018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293014u;
    // 0x293018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB708u, 0x293014u, 0x29301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29301Cu;
label_29301c:
    // 0x29301c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29301cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293020: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x293020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293024: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x293024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293028: 0x26910008  addiu       $s1, $s4, 0x8
    ctx->pc = 0x293028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x29302c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x29302cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x293030: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x293030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x293034: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x293034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293038: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x293038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29303c: 0x14e2035f  bne         $a3, $v0, . + 4 + (0x35F << 2)
    ctx->pc = 0x29303Cu;
    {
        const bool branch_taken_0x29303c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x293040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29303Cu;
        // 0x293040: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29303c) {
            ctx->pc = 0x293DBCu;
            goto label_293dbc;
        }
    }
    ctx->pc = 0x293044u;
    // 0x293044: 0xafb20050  sw          $s2, 0x50($sp)
    ctx->pc = 0x293044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x293048: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x293048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x29304c: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x29304cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x293050: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x293050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x293054: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x293054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x293058: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29305c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29305cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293060: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x293060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x293064: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x293064u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x293068: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x293068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x29306c: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x29306cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x293070: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x293070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293074: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x293074u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293078: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x293078u;
    {
        const bool branch_taken_0x293078 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293078u;
        // 0x29307c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293078) {
            ctx->pc = 0x293094u;
            goto label_293094;
        }
    }
    ctx->pc = 0x293080u;
    // 0x293080: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x293080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x293084: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x293084u;
    SET_GPR_U32(ctx, 31, 0x29308Cu);
    ctx->pc = 0x293088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293084u;
    // 0x293088: 0x2a42018  mult        $a0, $s5, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x293084u, 0x29308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29308Cu;
label_29308c:
    // 0x29308c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29308Cu;
    {
        const bool branch_taken_0x29308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29308Cu;
        // 0x293090: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29308c) {
            ctx->pc = 0x29309Cu;
            goto label_29309c;
        }
    }
    ctx->pc = 0x293094u;
label_293094:
    // 0x293094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29309c:
    // 0x29309c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2930a0: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2930a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930a4: 0x10720016  beq         $v1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2930A4u;
    {
        const bool branch_taken_0x2930a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2930A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930A4u;
        // 0x2930a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930a4) {
            ctx->pc = 0x293100u;
            goto label_293100;
        }
    }
    ctx->pc = 0x2930ACu;
    // 0x2930ac: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2930acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2930b0:
    // 0x2930b0: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2930B0u;
    {
        const bool branch_taken_0x2930b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2930b0) {
            ctx->pc = 0x2930B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2930B0u;
            // 0x2930b4: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2930F4u;
            goto label_2930f4;
        }
    }
    ctx->pc = 0x2930B8u;
    // 0x2930b8: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x2930b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x2930bc: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x2930bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x2930c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2930c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2930c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2930c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2930c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2930c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2930cc: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x2930ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2930d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2930d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2930d4: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x2930d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2930d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2930d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2930dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2930dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2930e0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2930e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2930e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2930e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2930e8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2930e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2930ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2930ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2930f0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x2930f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_2930f4:
    // 0x2930f4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2930f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2930f8: 0x1472ffed  bne         $v1, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2930F8u;
    {
        const bool branch_taken_0x2930f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2930FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930F8u;
        // 0x2930fc: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930f8) {
            ctx->pc = 0x2930B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2930b0;
        }
    }
    ctx->pc = 0x293100u;
label_293100:
    // 0x293100: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x293100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293108: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x293108u;
    {
        const bool branch_taken_0x293108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293108u;
        // 0x29310c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293108) {
            ctx->pc = 0x293158u;
            goto label_293158;
        }
    }
    ctx->pc = 0x293110u;
    // 0x293110: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x293110u;
    {
        const bool branch_taken_0x293110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293110u;
        // 0x293114: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293110) {
            ctx->pc = 0x293150u;
            goto label_293150;
        }
    }
    ctx->pc = 0x293118u;
    // 0x293118: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x293118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29311c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29311cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x293120: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x293120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x293124: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293128: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29312c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x29312cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x293130: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293134: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x293134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x293138: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29313c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x29313cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x293140: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293144: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293148: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29314c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x29314cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_293150:
    // 0x293150: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x293150u;
    {
        const bool branch_taken_0x293150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293150u;
        // 0x293154: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293150) {
            ctx->pc = 0x2931B8u;
            goto label_2931b8;
        }
    }
    ctx->pc = 0x293158u;
label_293158:
    // 0x293158: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x293158u;
    {
        const bool branch_taken_0x293158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293158u;
        // 0x29315c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293158) {
            ctx->pc = 0x2931B4u;
            goto label_2931b4;
        }
    }
    ctx->pc = 0x293160u;
    // 0x293160: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x293160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x293164: 0x0  nop
    ctx->pc = 0x293164u;
    // NOP
label_293168:
    // 0x293168: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x293168u;
    {
        const bool branch_taken_0x293168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293168u;
        // 0x29316c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293168) {
            ctx->pc = 0x2931A8u;
            goto label_2931a8;
        }
    }
    ctx->pc = 0x293170u;
    // 0x293170: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x293170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x293174: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x293174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x293178: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x293178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29317c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29317cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293180: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293184: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x293184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293188: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29318c: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x29318cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x293190: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293194: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x293194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x293198: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29319c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29319cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2931a0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2931a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2931a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2931a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2931a8:
    // 0x2931a8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2931a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2931ac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2931ACu;
    {
        const bool branch_taken_0x2931ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2931B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931ACu;
        // 0x2931b0: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931ac) {
            ctx->pc = 0x293168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293168;
        }
    }
    ctx->pc = 0x2931B4u;
label_2931b4:
    // 0x2931b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2931b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2931b8:
    // 0x2931b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2931b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2931bc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2931bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2931c0: 0x1083037b  beq         $a0, $v1, . + 4 + (0x37B << 2)
    ctx->pc = 0x2931C0u;
    {
        const bool branch_taken_0x2931c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2931C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931C0u;
        // 0x2931c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931c0) {
            ctx->pc = 0x293FB0u;
            goto label_293fb0;
        }
    }
    ctx->pc = 0x2931C8u;
    // 0x2931c8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2931c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2931cc: 0x0  nop
    ctx->pc = 0x2931ccu;
    // NOP
label_2931d0:
    // 0x2931d0: 0x0  nop
    ctx->pc = 0x2931d0u;
    // NOP
    // 0x2931d4: 0x0  nop
    ctx->pc = 0x2931d4u;
    // NOP
    // 0x2931d8: 0x0  nop
    ctx->pc = 0x2931d8u;
    // NOP
    // 0x2931dc: 0x0  nop
    ctx->pc = 0x2931dcu;
    // NOP
    // 0x2931e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2931E0u;
    {
        const bool branch_taken_0x2931e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E0u;
        // 0x2931e4: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931e0) {
            ctx->pc = 0x2931D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2931d0;
        }
    }
    ctx->pc = 0x2931E8u;
    // 0x2931e8: 0x10000371  b           . + 4 + (0x371 << 2)
    ctx->pc = 0x2931E8u;
    {
        const bool branch_taken_0x2931e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931e8) {
            ctx->pc = 0x293FB0u;
            goto label_293fb0;
        }
    }
    ctx->pc = 0x2931F0u;
label_2931f0:
    // 0x2931f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2931f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2931f4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2931F4u;
    SET_GPR_U32(ctx, 31, 0x2931FCu);
    ctx->pc = 0x2931F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2931F4u;
    // 0x2931f8: 0x24a5b768  addiu       $a1, $a1, -0x4898 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2931F4u, 0x2931FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2931FCu;
label_2931fc:
    // 0x2931fc: 0x544000a2  bnel        $v0, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2931FCu;
    {
        const bool branch_taken_0x2931fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2931fc) {
            ctx->pc = 0x293200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2931FCu;
            // 0x293200: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293488u;
            goto label_293488;
        }
    }
    ctx->pc = 0x293204u;
    // 0x293204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29320c: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x29320cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x293210: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x293210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x293214: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x293214u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x293218: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x293218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29321c: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x29321cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x293220: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x293220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x293224: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x293224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x293228: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x293228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x29322c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29322cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293230: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x293230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x293234: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293234u;
    SET_GPR_U32(ctx, 31, 0x29323Cu);
    ctx->pc = 0x293238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293234u;
    // 0x293238: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293234u, 0x29323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29323Cu;
label_29323c:
    // 0x29323c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29323Cu;
    SET_GPR_U32(ctx, 31, 0x293244u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29323Cu, 0x293244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293244u;
label_293244:
    // 0x293244: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293248: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x293248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29324c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29324Cu;
    SET_GPR_U32(ctx, 31, 0x293254u);
    ctx->pc = 0x293250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29324Cu;
    // 0x293250: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29324Cu, 0x293254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293254u;
label_293254:
    // 0x293254: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293254u;
    SET_GPR_U32(ctx, 31, 0x29325Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293254u, 0x29325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29325Cu;
label_29325c:
    // 0x29325c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x29325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293260: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x293260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x293264: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293264u;
    SET_GPR_U32(ctx, 31, 0x29326Cu);
    ctx->pc = 0x293268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293264u;
    // 0x293268: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293264u, 0x29326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29326Cu;
label_29326c:
    // 0x29326c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29326Cu;
    SET_GPR_U32(ctx, 31, 0x293274u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29326Cu, 0x293274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293274u;
label_293274:
    // 0x293274: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293278: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x293278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29327c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29327Cu;
    SET_GPR_U32(ctx, 31, 0x293284u);
    ctx->pc = 0x293280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29327Cu;
    // 0x293280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29327Cu, 0x293284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293284u;
label_293284:
    // 0x293284: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293284u;
    SET_GPR_U32(ctx, 31, 0x29328Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293284u, 0x29328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29328Cu;
label_29328c:
    // 0x29328c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x29328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293294: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293294u;
    SET_GPR_U32(ctx, 31, 0x29329Cu);
    ctx->pc = 0x293298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293294u;
    // 0x293298: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293294u, 0x29329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29329Cu;
label_29329c:
    // 0x29329c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29329Cu;
    SET_GPR_U32(ctx, 31, 0x2932A4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29329Cu, 0x2932A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2932A4u;
label_2932a4:
    // 0x2932a4: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x2932a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x2932a8: 0xc0aadc8  jal         func_2AB720
    ctx->pc = 0x2932A8u;
    SET_GPR_U32(ctx, 31, 0x2932B0u);
    ctx->pc = 0x2932ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2932A8u;
    // 0x2932ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB720u, 0x2932A8u, 0x2932B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2932B0u;
label_2932b0:
    // 0x2932b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2932b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2932b4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2932b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2932b8: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2932b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2932bc: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x2932bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2932c0: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2932c0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2932c4: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2932c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2932c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2932c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2932cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2932ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2932d0: 0x146201f3  bne         $v1, $v0, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x2932D0u;
    {
        const bool branch_taken_0x2932d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2932D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932D0u;
        // 0x2932d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932d0) {
            ctx->pc = 0x293AA0u;
            goto label_293aa0;
        }
    }
    ctx->pc = 0x2932D8u;
    // 0x2932d8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2932d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2932dc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2932dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2932e0: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x2932e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x2932e4: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x2932e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x2932e8: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x2932e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2932ec: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2932ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2932f0: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2932f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2932f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2932f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2932f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2932f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2932fc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2932fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x293300: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x293300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x293304: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x293304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x293308: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x293308u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x29330c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293310: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x293310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293314: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x293314u;
    {
        const bool branch_taken_0x293314 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x293318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293314u;
        // 0x293318: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293314) {
            ctx->pc = 0x29332Cu;
            goto label_29332c;
        }
    }
    ctx->pc = 0x29331Cu;
    // 0x29331c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29331Cu;
    SET_GPR_U32(ctx, 31, 0x293324u);
    ctx->pc = 0x293320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29331Cu;
    // 0x293320: 0x2842018  mult        $a0, $s4, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29331Cu, 0x293324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293324u;
label_293324:
    // 0x293324: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x293324u;
    {
        const bool branch_taken_0x293324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293324u;
        // 0x293328: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293324) {
            ctx->pc = 0x293334u;
            goto label_293334;
        }
    }
    ctx->pc = 0x29332Cu;
label_29332c:
    // 0x29332c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29332cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293330: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293334:
    // 0x293334: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x293334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293338: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x293338u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29333c: 0x10720016  beq         $v1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x29333Cu;
    {
        const bool branch_taken_0x29333c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x293340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29333Cu;
        // 0x293340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29333c) {
            ctx->pc = 0x293398u;
            goto label_293398;
        }
    }
    ctx->pc = 0x293344u;
    // 0x293344: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x293344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_293348:
    // 0x293348: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x293348u;
    {
        const bool branch_taken_0x293348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293348) {
            ctx->pc = 0x29334Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293348u;
            // 0x29334c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29338Cu;
            goto label_29338c;
        }
    }
    ctx->pc = 0x293350u;
    // 0x293350: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x293350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x293354: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x293354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x293358: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x293358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29335c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29335cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293360: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x293360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293364: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x293364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293368: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x293368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29336c: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x29336cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x293370: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x293370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293374: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x293374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x293378: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x293378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29337c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29337cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293380: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x293380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293384: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x293384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x293388: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x293388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_29338c:
    // 0x29338c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x29338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293390: 0x1472ffed  bne         $v1, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x293390u;
    {
        const bool branch_taken_0x293390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x293394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293390u;
        // 0x293394: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293390) {
            ctx->pc = 0x293348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293348;
        }
    }
    ctx->pc = 0x293398u;
label_293398:
    // 0x293398: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x293398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29339c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2933a0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2933A0u;
    {
        const bool branch_taken_0x2933a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2933A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933A0u;
        // 0x2933a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933a0) {
            ctx->pc = 0x2933F0u;
            goto label_2933f0;
        }
    }
    ctx->pc = 0x2933A8u;
    // 0x2933a8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2933A8u;
    {
        const bool branch_taken_0x2933a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933A8u;
        // 0x2933ac: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933a8) {
            ctx->pc = 0x2933E8u;
            goto label_2933e8;
        }
    }
    ctx->pc = 0x2933B0u;
    // 0x2933b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2933b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2933b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2933b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2933b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2933b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2933bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2933bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2933c0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2933c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2933c4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2933c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2933c8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2933c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2933cc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2933ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2933d0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2933d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2933d4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2933d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2933d8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2933d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2933dc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2933dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2933e0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2933e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2933e4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2933e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2933e8:
    // 0x2933e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2933E8u;
    {
        const bool branch_taken_0x2933e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933E8u;
        // 0x2933ec: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933e8) {
            ctx->pc = 0x293450u;
            goto label_293450;
        }
    }
    ctx->pc = 0x2933F0u;
label_2933f0:
    // 0x2933f0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2933F0u;
    {
        const bool branch_taken_0x2933f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933F0u;
        // 0x2933f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933f0) {
            ctx->pc = 0x29344Cu;
            goto label_29344c;
        }
    }
    ctx->pc = 0x2933F8u;
    // 0x2933f8: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2933f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2933fc: 0x0  nop
    ctx->pc = 0x2933fcu;
    // NOP
label_293400:
    // 0x293400: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x293400u;
    {
        const bool branch_taken_0x293400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293400u;
        // 0x293404: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293400) {
            ctx->pc = 0x293440u;
            goto label_293440;
        }
    }
    ctx->pc = 0x293408u;
    // 0x293408: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x293408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x29340c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x29340cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x293410: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x293410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x293414: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293418: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29341c: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x29341cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293420: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293424: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x293424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x293428: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29342c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x293430: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293434: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293438: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29343c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29343cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_293440:
    // 0x293440: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293444: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x293444u;
    {
        const bool branch_taken_0x293444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293444u;
        // 0x293448: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293444) {
            ctx->pc = 0x293400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293400;
        }
    }
    ctx->pc = 0x29344Cu;
label_29344c:
    // 0x29344c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29344cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_293450:
    // 0x293450: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x293450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293454: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x293454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293458: 0x1083020f  beq         $a0, $v1, . + 4 + (0x20F << 2)
    ctx->pc = 0x293458u;
    {
        const bool branch_taken_0x293458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293458u;
        // 0x29345c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293458) {
            ctx->pc = 0x293C98u;
            goto label_293c98;
        }
    }
    ctx->pc = 0x293460u;
    // 0x293460: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293464: 0x0  nop
    ctx->pc = 0x293464u;
    // NOP
label_293468:
    // 0x293468: 0x0  nop
    ctx->pc = 0x293468u;
    // NOP
    // 0x29346c: 0x0  nop
    ctx->pc = 0x29346cu;
    // NOP
    // 0x293470: 0x0  nop
    ctx->pc = 0x293470u;
    // NOP
    // 0x293474: 0x0  nop
    ctx->pc = 0x293474u;
    // NOP
    // 0x293478: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x293478u;
    {
        const bool branch_taken_0x293478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293478u;
        // 0x29347c: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293478) {
            ctx->pc = 0x293468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293468;
        }
    }
    ctx->pc = 0x293480u;
    // 0x293480: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x293480u;
    {
        const bool branch_taken_0x293480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293480) {
            ctx->pc = 0x293C98u;
            goto label_293c98;
        }
    }
    ctx->pc = 0x293488u;
label_293488:
    // 0x293488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29348c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x29348Cu;
    SET_GPR_U32(ctx, 31, 0x293494u);
    ctx->pc = 0x293490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29348Cu;
    // 0x293490: 0x24a5b788  addiu       $a1, $a1, -0x4878 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x29348Cu, 0x293494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293494u;
label_293494:
    // 0x293494: 0x544000a2  bnel        $v0, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x293494u;
    {
        const bool branch_taken_0x293494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293494) {
            ctx->pc = 0x293498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293494u;
            // 0x293498: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293720u;
            goto label_293720;
        }
    }
    ctx->pc = 0x29349Cu;
    // 0x29349c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29349cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2934a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2934a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2934a4: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x2934a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2934a8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2934a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2934ac: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2934acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2934b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2934b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2934b4: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x2934b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x2934b8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2934b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2934bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2934bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2934c0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2934c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2934c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2934c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934c8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2934c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2934cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2934ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2934d0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2934D0u;
    SET_GPR_U32(ctx, 31, 0x2934D8u);
    ctx->pc = 0x2934D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934D0u;
    // 0x2934d4: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2934D0u, 0x2934D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934D8u;
label_2934d8:
    // 0x2934d8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2934D8u;
    SET_GPR_U32(ctx, 31, 0x2934E0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2934D8u, 0x2934E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934E0u;
label_2934e0:
    // 0x2934e0: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2934e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2934e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2934e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2934e8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2934E8u;
    SET_GPR_U32(ctx, 31, 0x2934F0u);
    ctx->pc = 0x2934ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934E8u;
    // 0x2934ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2934E8u, 0x2934F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934F0u;
label_2934f0:
    // 0x2934f0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2934F0u;
    SET_GPR_U32(ctx, 31, 0x2934F8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2934F0u, 0x2934F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934F8u;
label_2934f8:
    // 0x2934f8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2934f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2934fc: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2934fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x293500: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293500u;
    SET_GPR_U32(ctx, 31, 0x293508u);
    ctx->pc = 0x293504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293500u;
    // 0x293504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293500u, 0x293508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293508u;
label_293508:
    // 0x293508: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293508u;
    SET_GPR_U32(ctx, 31, 0x293510u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293508u, 0x293510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293510u;
label_293510:
    // 0x293510: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293514: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x293514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293518: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293518u;
    SET_GPR_U32(ctx, 31, 0x293520u);
    ctx->pc = 0x29351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293518u;
    // 0x29351c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293518u, 0x293520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293520u;
label_293520:
    // 0x293520: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293520u;
    SET_GPR_U32(ctx, 31, 0x293528u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293520u, 0x293528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293528u;
label_293528:
    // 0x293528: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x29352c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29352cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293530: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293530u;
    SET_GPR_U32(ctx, 31, 0x293538u);
    ctx->pc = 0x293534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293530u;
    // 0x293534: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293530u, 0x293538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293538u;
label_293538:
    // 0x293538: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293538u;
    SET_GPR_U32(ctx, 31, 0x293540u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293538u, 0x293540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293540u;
label_293540:
    // 0x293540: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x293540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x293544: 0xc0aadc8  jal         func_2AB720
    ctx->pc = 0x293544u;
    SET_GPR_U32(ctx, 31, 0x29354Cu);
    ctx->pc = 0x293548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293544u;
    // 0x293548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB720u, 0x293544u, 0x29354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29354Cu;
label_29354c:
    // 0x29354c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29354cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293550: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x293550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293554: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x293554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293558: 0x26910008  addiu       $s1, $s4, 0x8
    ctx->pc = 0x293558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x29355c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x29355cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x293560: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x293560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x293564: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x293564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293568: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x293568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29356c: 0x14e20213  bne         $a3, $v0, . + 4 + (0x213 << 2)
    ctx->pc = 0x29356Cu;
    {
        const bool branch_taken_0x29356c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x293570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29356Cu;
        // 0x293570: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29356c) {
            ctx->pc = 0x293DBCu;
            goto label_293dbc;
        }
    }
    ctx->pc = 0x293574u;
    // 0x293574: 0xafb20060  sw          $s2, 0x60($sp)
    ctx->pc = 0x293574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 18));
    // 0x293578: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x293578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x29357c: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x29357cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x293580: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x293580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x293584: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x293584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x293588: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29358c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29358cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293590: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x293590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x293594: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x293594u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x293598: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x293598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x29359c: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x29359cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x2935a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2935a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2935a4: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x2935a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2935a8: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2935A8u;
    {
        const bool branch_taken_0x2935a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2935ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935A8u;
        // 0x2935ac: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935a8) {
            ctx->pc = 0x2935C4u;
            goto label_2935c4;
        }
    }
    ctx->pc = 0x2935B0u;
    // 0x2935b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2935b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2935b4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2935B4u;
    SET_GPR_U32(ctx, 31, 0x2935BCu);
    ctx->pc = 0x2935B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2935B4u;
    // 0x2935b8: 0x2a42018  mult        $a0, $s5, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2935B4u, 0x2935BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935BCu;
label_2935bc:
    // 0x2935bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2935BCu;
    {
        const bool branch_taken_0x2935bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2935C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935BCu;
        // 0x2935c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935bc) {
            ctx->pc = 0x2935CCu;
            goto label_2935cc;
        }
    }
    ctx->pc = 0x2935C4u;
label_2935c4:
    // 0x2935c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2935c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2935c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2935cc:
    // 0x2935cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2935ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2935d0: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2935d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935d4: 0x10720016  beq         $v1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2935D4u;
    {
        const bool branch_taken_0x2935d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2935D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935D4u;
        // 0x2935d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935d4) {
            ctx->pc = 0x293630u;
            goto label_293630;
        }
    }
    ctx->pc = 0x2935DCu;
    // 0x2935dc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2935dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2935e0:
    // 0x2935e0: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2935E0u;
    {
        const bool branch_taken_0x2935e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935e0) {
            ctx->pc = 0x2935E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2935E0u;
            // 0x2935e4: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293624u;
            goto label_293624;
        }
    }
    ctx->pc = 0x2935E8u;
    // 0x2935e8: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x2935e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x2935ec: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x2935ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x2935f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2935f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2935f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2935f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2935f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2935f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935fc: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x2935fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293600: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x293600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293604: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x293604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x293608: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x293608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29360c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x293610: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x293610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293614: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293618: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x293618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29361c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29361cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x293620: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x293620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_293624:
    // 0x293624: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293628: 0x1472ffed  bne         $v1, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x293628u;
    {
        const bool branch_taken_0x293628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x29362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293628u;
        // 0x29362c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293628) {
            ctx->pc = 0x2935E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2935e0;
        }
    }
    ctx->pc = 0x293630u;
label_293630:
    // 0x293630: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x293630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293638: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x293638u;
    {
        const bool branch_taken_0x293638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293638u;
        // 0x29363c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293638) {
            ctx->pc = 0x293688u;
            goto label_293688;
        }
    }
    ctx->pc = 0x293640u;
    // 0x293640: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x293640u;
    {
        const bool branch_taken_0x293640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293640u;
        // 0x293644: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293640) {
            ctx->pc = 0x293680u;
            goto label_293680;
        }
    }
    ctx->pc = 0x293648u;
    // 0x293648: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x293648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29364c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29364cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x293650: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x293650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x293654: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293658: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29365c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x29365cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x293660: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293664: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x293664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x293668: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29366c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x29366cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x293670: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293674: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293678: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29367c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x29367cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_293680:
    // 0x293680: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x293680u;
    {
        const bool branch_taken_0x293680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293680u;
        // 0x293684: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293680) {
            ctx->pc = 0x2936E8u;
            goto label_2936e8;
        }
    }
    ctx->pc = 0x293688u;
label_293688:
    // 0x293688: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x293688u;
    {
        const bool branch_taken_0x293688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293688u;
        // 0x29368c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293688) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x293690u;
    // 0x293690: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x293690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x293694: 0x0  nop
    ctx->pc = 0x293694u;
    // NOP
label_293698:
    // 0x293698: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x293698u;
    {
        const bool branch_taken_0x293698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293698u;
        // 0x29369c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293698) {
            ctx->pc = 0x2936D8u;
            goto label_2936d8;
        }
    }
    ctx->pc = 0x2936A0u;
    // 0x2936a0: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x2936a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x2936a4: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x2936a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x2936a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2936a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2936ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2936acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2936b0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2936b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936b4: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x2936b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2936b8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2936b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2936bc: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x2936bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2936c0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2936c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2936c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2936c8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2936c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2936cc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2936ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2936d0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2936d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2936d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2936d8:
    // 0x2936d8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2936d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2936dc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2936DCu;
    {
        const bool branch_taken_0x2936dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2936E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936DCu;
        // 0x2936e0: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936dc) {
            ctx->pc = 0x293698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293698;
        }
    }
    ctx->pc = 0x2936E4u;
label_2936e4:
    // 0x2936e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2936e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2936e8:
    // 0x2936e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2936e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2936ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2936ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2936f0: 0x1083022f  beq         $a0, $v1, . + 4 + (0x22F << 2)
    ctx->pc = 0x2936F0u;
    {
        const bool branch_taken_0x2936f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2936F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936F0u;
        // 0x2936f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936f0) {
            ctx->pc = 0x293FB0u;
            goto label_293fb0;
        }
    }
    ctx->pc = 0x2936F8u;
    // 0x2936f8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2936f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2936fc: 0x0  nop
    ctx->pc = 0x2936fcu;
    // NOP
label_293700:
    // 0x293700: 0x0  nop
    ctx->pc = 0x293700u;
    // NOP
    // 0x293704: 0x0  nop
    ctx->pc = 0x293704u;
    // NOP
    // 0x293708: 0x0  nop
    ctx->pc = 0x293708u;
    // NOP
    // 0x29370c: 0x0  nop
    ctx->pc = 0x29370cu;
    // NOP
    // 0x293710: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x293710u;
    {
        const bool branch_taken_0x293710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x293714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293710u;
        // 0x293714: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293710) {
            ctx->pc = 0x293700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293700;
        }
    }
    ctx->pc = 0x293718u;
    // 0x293718: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x293718u;
    {
        const bool branch_taken_0x293718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293718) {
            ctx->pc = 0x293FB0u;
            goto label_293fb0;
        }
    }
    ctx->pc = 0x293720u;
label_293720:
    // 0x293720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293724: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x293724u;
    SET_GPR_U32(ctx, 31, 0x29372Cu);
    ctx->pc = 0x293728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293724u;
    // 0x293728: 0x24a5b7a8  addiu       $a1, $a1, -0x4858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x293724u, 0x29372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29372Cu;
label_29372c:
    // 0x29372c: 0x544000a2  bnel        $v0, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x29372Cu;
    {
        const bool branch_taken_0x29372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29372c) {
            ctx->pc = 0x293730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29372Cu;
            // 0x293730: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2939B8u;
            goto label_2939b8;
        }
    }
    ctx->pc = 0x293734u;
    // 0x293734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29373c: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x29373cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x293740: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x293740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x293744: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x293744u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x293748: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x293748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29374c: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x29374cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x293750: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x293750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x293754: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x293754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x293758: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x293758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x29375c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29375cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293760: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x293760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x293764: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293764u;
    SET_GPR_U32(ctx, 31, 0x29376Cu);
    ctx->pc = 0x293768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293764u;
    // 0x293768: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293764u, 0x29376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29376Cu;
label_29376c:
    // 0x29376c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29376Cu;
    SET_GPR_U32(ctx, 31, 0x293774u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29376Cu, 0x293774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293774u;
label_293774:
    // 0x293774: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293778: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x293778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29377c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29377Cu;
    SET_GPR_U32(ctx, 31, 0x293784u);
    ctx->pc = 0x293780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29377Cu;
    // 0x293780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29377Cu, 0x293784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293784u;
label_293784:
    // 0x293784: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293784u;
    SET_GPR_U32(ctx, 31, 0x29378Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293784u, 0x29378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29378Cu;
label_29378c:
    // 0x29378c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x29378cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293790: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x293790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x293794: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293794u;
    SET_GPR_U32(ctx, 31, 0x29379Cu);
    ctx->pc = 0x293798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293794u;
    // 0x293798: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293794u, 0x29379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29379Cu;
label_29379c:
    // 0x29379c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29379Cu;
    SET_GPR_U32(ctx, 31, 0x2937A4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29379Cu, 0x2937A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937A4u;
label_2937a4:
    // 0x2937a4: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2937a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2937a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2937a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2937ac: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2937ACu;
    SET_GPR_U32(ctx, 31, 0x2937B4u);
    ctx->pc = 0x2937B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2937ACu;
    // 0x2937b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2937ACu, 0x2937B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937B4u;
label_2937b4:
    // 0x2937b4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2937B4u;
    SET_GPR_U32(ctx, 31, 0x2937BCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2937B4u, 0x2937BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937BCu;
label_2937bc:
    // 0x2937bc: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2937bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x2937c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2937c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2937c4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2937C4u;
    SET_GPR_U32(ctx, 31, 0x2937CCu);
    ctx->pc = 0x2937C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2937C4u;
    // 0x2937c8: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2937C4u, 0x2937CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937CCu;
label_2937cc:
    // 0x2937cc: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2937CCu;
    SET_GPR_U32(ctx, 31, 0x2937D4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2937CCu, 0x2937D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937D4u;
label_2937d4:
    // 0x2937d4: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x2937d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x2937d8: 0xc0aadb6  jal         func_2AB6D8
    ctx->pc = 0x2937D8u;
    SET_GPR_U32(ctx, 31, 0x2937E0u);
    ctx->pc = 0x2937DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2937D8u;
    // 0x2937dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6D8u, 0x2937D8u, 0x2937E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937E0u;
label_2937e0:
    // 0x2937e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2937e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2937e4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2937e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2937e8: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2937e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2937ec: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x2937ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2937f0: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2937f0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2937f4: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2937f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2937f8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2937f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2937fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2937fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x293800: 0x146200a7  bne         $v1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x293800u;
    {
        const bool branch_taken_0x293800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x293804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293800u;
        // 0x293804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293800) {
            ctx->pc = 0x293AA0u;
            goto label_293aa0;
        }
    }
    ctx->pc = 0x293808u;
    // 0x293808: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x293808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29380c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x29380cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x293810: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x293810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x293814: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x293814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x293818: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x293818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x29381c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x29381cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x293820: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x293820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x293824: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293828: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x293828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29382c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x29382cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x293830: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x293830u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x293834: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x293834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x293838: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x293838u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x29383c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29383cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293840: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x293840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293844: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x293844u;
    {
        const bool branch_taken_0x293844 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x293848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293844u;
        // 0x293848: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293844) {
            ctx->pc = 0x29385Cu;
            goto label_29385c;
        }
    }
    ctx->pc = 0x29384Cu;
    // 0x29384c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29384Cu;
    SET_GPR_U32(ctx, 31, 0x293854u);
    ctx->pc = 0x293850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29384Cu;
    // 0x293850: 0x2842018  mult        $a0, $s4, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29384Cu, 0x293854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293854u;
label_293854:
    // 0x293854: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x293854u;
    {
        const bool branch_taken_0x293854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293854u;
        // 0x293858: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293854) {
            ctx->pc = 0x293864u;
            goto label_293864;
        }
    }
    ctx->pc = 0x29385Cu;
label_29385c:
    // 0x29385c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29385cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293864:
    // 0x293864: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x293864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293868: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x293868u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29386c: 0x10720016  beq         $v1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x29386Cu;
    {
        const bool branch_taken_0x29386c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x293870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29386Cu;
        // 0x293870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29386c) {
            ctx->pc = 0x2938C8u;
            goto label_2938c8;
        }
    }
    ctx->pc = 0x293874u;
    // 0x293874: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x293874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_293878:
    // 0x293878: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x293878u;
    {
        const bool branch_taken_0x293878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293878) {
            ctx->pc = 0x29387Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293878u;
            // 0x29387c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2938BCu;
            goto label_2938bc;
        }
    }
    ctx->pc = 0x293880u;
    // 0x293880: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x293880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x293884: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x293884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x293888: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x293888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29388c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29388cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293890: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x293890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293894: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x293894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293898: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x293898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29389c: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x29389cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2938a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2938a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2938a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2938a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2938a8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2938a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2938ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2938acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2938b0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2938b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2938b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2938b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2938b8: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x2938b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_2938bc:
    // 0x2938bc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2938bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2938c0: 0x1472ffed  bne         $v1, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2938C0u;
    {
        const bool branch_taken_0x2938c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2938C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938C0u;
        // 0x2938c4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938c0) {
            ctx->pc = 0x293878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293878;
        }
    }
    ctx->pc = 0x2938C8u;
label_2938c8:
    // 0x2938c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2938c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2938cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2938ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2938d0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2938D0u;
    {
        const bool branch_taken_0x2938d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2938D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938D0u;
        // 0x2938d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938d0) {
            ctx->pc = 0x293920u;
            goto label_293920;
        }
    }
    ctx->pc = 0x2938D8u;
    // 0x2938d8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2938D8u;
    {
        const bool branch_taken_0x2938d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2938DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938D8u;
        // 0x2938dc: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938d8) {
            ctx->pc = 0x293918u;
            goto label_293918;
        }
    }
    ctx->pc = 0x2938E0u;
    // 0x2938e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2938e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2938e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2938e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2938e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2938e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2938ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2938ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2938f0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2938f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2938f4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2938f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2938f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2938f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2938fc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2938fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x293900: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293904: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x293904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x293908: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29390c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29390cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293910: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293914: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x293914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_293918:
    // 0x293918: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x293918u;
    {
        const bool branch_taken_0x293918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293918u;
        // 0x29391c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293918) {
            ctx->pc = 0x293980u;
            goto label_293980;
        }
    }
    ctx->pc = 0x293920u;
label_293920:
    // 0x293920: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x293920u;
    {
        const bool branch_taken_0x293920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293920u;
        // 0x293924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293920) {
            ctx->pc = 0x29397Cu;
            goto label_29397c;
        }
    }
    ctx->pc = 0x293928u;
    // 0x293928: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x293928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29392c: 0x0  nop
    ctx->pc = 0x29392cu;
    // NOP
label_293930:
    // 0x293930: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x293930u;
    {
        const bool branch_taken_0x293930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293930u;
        // 0x293934: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293930) {
            ctx->pc = 0x293970u;
            goto label_293970;
        }
    }
    ctx->pc = 0x293938u;
    // 0x293938: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x293938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x29393c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x29393cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x293940: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x293940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x293944: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293948: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29394c: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x29394cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293950: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293954: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x293954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x293958: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29395c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29395cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x293960: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293964: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293968: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29396c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29396cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_293970:
    // 0x293970: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293974: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x293974u;
    {
        const bool branch_taken_0x293974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293974u;
        // 0x293978: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293974) {
            ctx->pc = 0x293930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293930;
        }
    }
    ctx->pc = 0x29397Cu;
label_29397c:
    // 0x29397c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29397cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_293980:
    // 0x293980: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x293980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293984: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x293984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293988: 0x108300c3  beq         $a0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x293988u;
    {
        const bool branch_taken_0x293988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293988u;
        // 0x29398c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293988) {
            ctx->pc = 0x293C98u;
            goto label_293c98;
        }
    }
    ctx->pc = 0x293990u;
    // 0x293990: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293994: 0x0  nop
    ctx->pc = 0x293994u;
    // NOP
label_293998:
    // 0x293998: 0x0  nop
    ctx->pc = 0x293998u;
    // NOP
    // 0x29399c: 0x0  nop
    ctx->pc = 0x29399cu;
    // NOP
    // 0x2939a0: 0x0  nop
    ctx->pc = 0x2939a0u;
    // NOP
    // 0x2939a4: 0x0  nop
    ctx->pc = 0x2939a4u;
    // NOP
    // 0x2939a8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2939A8u;
    {
        const bool branch_taken_0x2939a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2939ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939A8u;
        // 0x2939ac: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939a8) {
            ctx->pc = 0x293998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293998;
        }
    }
    ctx->pc = 0x2939B0u;
    // 0x2939b0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2939B0u;
    {
        const bool branch_taken_0x2939b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2939b0) {
            ctx->pc = 0x293C98u;
            goto label_293c98;
        }
    }
    ctx->pc = 0x2939B8u;
label_2939b8:
    // 0x2939b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2939b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2939bc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2939BCu;
    SET_GPR_U32(ctx, 31, 0x2939C4u);
    ctx->pc = 0x2939C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2939BCu;
    // 0x2939c0: 0x24a5b7c8  addiu       $a1, $a1, -0x4838 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2939BCu, 0x2939C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2939C4u;
label_2939c4:
    // 0x2939c4: 0x544000c2  bnel        $v0, $zero, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2939C4u;
    {
        const bool branch_taken_0x2939c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2939c4) {
            ctx->pc = 0x2939C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2939C4u;
            // 0x2939c8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293CD0u;
            goto label_293cd0;
        }
    }
    ctx->pc = 0x2939CCu;
    // 0x2939cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2939ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2939d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2939d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2939d4: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x2939d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2939d8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2939d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2939dc: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2939dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2939e0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2939e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2939e4: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x2939e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x2939e8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2939e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2939ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2939ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2939f0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2939f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2939f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2939f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2939f8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2939f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2939fc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2939FCu;
    SET_GPR_U32(ctx, 31, 0x293A04u);
    ctx->pc = 0x293A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2939FCu;
    // 0x293a00: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2939FCu, 0x293A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A04u;
label_293a04:
    // 0x293a04: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293A04u;
    SET_GPR_U32(ctx, 31, 0x293A0Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293A04u, 0x293A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A0Cu;
label_293a0c:
    // 0x293a0c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293a10: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x293a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x293a14: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293A14u;
    SET_GPR_U32(ctx, 31, 0x293A1Cu);
    ctx->pc = 0x293A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A14u;
    // 0x293a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293A14u, 0x293A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A1Cu;
label_293a1c:
    // 0x293a1c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293A1Cu;
    SET_GPR_U32(ctx, 31, 0x293A24u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293A1Cu, 0x293A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A24u;
label_293a24:
    // 0x293a24: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293a28: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x293a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x293a2c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293A2Cu;
    SET_GPR_U32(ctx, 31, 0x293A34u);
    ctx->pc = 0x293A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A2Cu;
    // 0x293a30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293A2Cu, 0x293A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A34u;
label_293a34:
    // 0x293a34: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293A34u;
    SET_GPR_U32(ctx, 31, 0x293A3Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293A34u, 0x293A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A3Cu;
label_293a3c:
    // 0x293a3c: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293a40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x293a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a44: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293A44u;
    SET_GPR_U32(ctx, 31, 0x293A4Cu);
    ctx->pc = 0x293A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A44u;
    // 0x293a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293A44u, 0x293A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A4Cu;
label_293a4c:
    // 0x293a4c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293A4Cu;
    SET_GPR_U32(ctx, 31, 0x293A54u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293A4Cu, 0x293A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A54u;
label_293a54:
    // 0x293a54: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a5c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293A5Cu;
    SET_GPR_U32(ctx, 31, 0x293A64u);
    ctx->pc = 0x293A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A5Cu;
    // 0x293a60: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293A5Cu, 0x293A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A64u;
label_293a64:
    // 0x293a64: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293A64u;
    SET_GPR_U32(ctx, 31, 0x293A6Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293A64u, 0x293A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A6Cu;
label_293a6c:
    // 0x293a6c: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x293a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x293a70: 0xc0aadbc  jal         func_2AB6F0
    ctx->pc = 0x293A70u;
    SET_GPR_U32(ctx, 31, 0x293A78u);
    ctx->pc = 0x293A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A70u;
    // 0x293a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6F0u, 0x293A70u, 0x293A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A78u;
label_293a78:
    // 0x293a78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x293a78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a7c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x293a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293a80: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x293a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293a84: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x293a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x293a88: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x293a88u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x293a8c: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x293a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x293a90: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x293a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293a94: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x293a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x293a98: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x293A98u;
    {
        const bool branch_taken_0x293a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x293A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A98u;
        // 0x293a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a98) {
            ctx->pc = 0x293AF0u;
            goto label_293af0;
        }
    }
    ctx->pc = 0x293AA0u;
label_293aa0:
    // 0x293aa0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x293AA0u;
    {
        const bool branch_taken_0x293aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AA0u;
        // 0x293aa4: 0x24620008  addiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293aa0) {
            ctx->pc = 0x293AE0u;
            goto label_293ae0;
        }
    }
    ctx->pc = 0x293AA8u;
    // 0x293aa8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x293aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x293aac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x293aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x293ab0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x293ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x293ab4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293ab8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293abc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x293abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x293ac0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293ac4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x293ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x293ac8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293acc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x293accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x293ad0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293ad4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293ad8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293adc:
    // 0x293adc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x293adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_293ae0:
    // 0x293ae0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293ae4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293ae8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x293AE8u;
    {
        const bool branch_taken_0x293ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AE8u;
        // 0x293aec: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ae8) {
            ctx->pc = 0x293CC0u;
            goto label_293cc0;
        }
    }
    ctx->pc = 0x293AF0u;
label_293af0:
    // 0x293af0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x293af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293af4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x293af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x293af8: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x293af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x293afc: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x293afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x293b00: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x293b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x293b04: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x293b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x293b08: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x293b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x293b0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293b10: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x293b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293b14: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x293b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x293b18: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x293b18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x293b1c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x293b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x293b20: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x293b20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x293b24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x293b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293b28: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x293b28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293b2c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x293B2Cu;
    {
        const bool branch_taken_0x293b2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x293B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B2Cu;
        // 0x293b30: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b2c) {
            ctx->pc = 0x293B44u;
            goto label_293b44;
        }
    }
    ctx->pc = 0x293B34u;
    // 0x293b34: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x293B34u;
    SET_GPR_U32(ctx, 31, 0x293B3Cu);
    ctx->pc = 0x293B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B34u;
    // 0x293b38: 0x2842018  mult        $a0, $s4, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x293B34u, 0x293B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B3Cu;
label_293b3c:
    // 0x293b3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x293B3Cu;
    {
        const bool branch_taken_0x293b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B3Cu;
        // 0x293b40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b3c) {
            ctx->pc = 0x293B4Cu;
            goto label_293b4c;
        }
    }
    ctx->pc = 0x293B44u;
label_293b44:
    // 0x293b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293b4c:
    // 0x293b4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x293b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293b50: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x293b50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b54: 0x10720016  beq         $v1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x293B54u;
    {
        const bool branch_taken_0x293b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x293B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B54u;
        // 0x293b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b54) {
            ctx->pc = 0x293BB0u;
            goto label_293bb0;
        }
    }
    ctx->pc = 0x293B5Cu;
    // 0x293b5c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x293b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_293b60:
    // 0x293b60: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x293B60u;
    {
        const bool branch_taken_0x293b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293b60) {
            ctx->pc = 0x293B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293B60u;
            // 0x293b64: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293BA4u;
            goto label_293ba4;
        }
    }
    ctx->pc = 0x293B68u;
    // 0x293b68: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x293b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x293b6c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x293b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x293b70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x293b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x293b74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293b78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x293b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293b7c: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x293b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293b80: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x293b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293b84: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x293b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x293b88: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x293b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293b8c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x293b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x293b90: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x293b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293b94: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293b98: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x293b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293b9c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x293b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x293ba0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x293ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_293ba4:
    // 0x293ba4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293ba8: 0x1472ffed  bne         $v1, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x293BA8u;
    {
        const bool branch_taken_0x293ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x293BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BA8u;
        // 0x293bac: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ba8) {
            ctx->pc = 0x293B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293b60;
        }
    }
    ctx->pc = 0x293BB0u;
label_293bb0:
    // 0x293bb0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x293bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293bb8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x293BB8u;
    {
        const bool branch_taken_0x293bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x293BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BB8u;
        // 0x293bbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bb8) {
            ctx->pc = 0x293C08u;
            goto label_293c08;
        }
    }
    ctx->pc = 0x293BC0u;
    // 0x293bc0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x293BC0u;
    {
        const bool branch_taken_0x293bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BC0u;
        // 0x293bc4: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bc0) {
            ctx->pc = 0x293C00u;
            goto label_293c00;
        }
    }
    ctx->pc = 0x293BC8u;
    // 0x293bc8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x293bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x293bcc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x293bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x293bd0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x293bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x293bd4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293bd8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293bdc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x293bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x293be0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293be4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x293be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x293be8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293bec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x293becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x293bf0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293bf4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293bf8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293bfc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x293bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_293c00:
    // 0x293c00: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x293C00u;
    {
        const bool branch_taken_0x293c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C00u;
        // 0x293c04: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c00) {
            ctx->pc = 0x293C68u;
            goto label_293c68;
        }
    }
    ctx->pc = 0x293C08u;
label_293c08:
    // 0x293c08: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x293C08u;
    {
        const bool branch_taken_0x293c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C08u;
        // 0x293c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c08) {
            ctx->pc = 0x293C64u;
            goto label_293c64;
        }
    }
    ctx->pc = 0x293C10u;
    // 0x293c10: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x293c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x293c14: 0x0  nop
    ctx->pc = 0x293c14u;
    // NOP
label_293c18:
    // 0x293c18: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x293C18u;
    {
        const bool branch_taken_0x293c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C18u;
        // 0x293c1c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c18) {
            ctx->pc = 0x293C58u;
            goto label_293c58;
        }
    }
    ctx->pc = 0x293C20u;
    // 0x293c20: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x293c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x293c24: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x293c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x293c28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x293c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x293c2c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293c30: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293c34: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x293c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293c38: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293c3c: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x293c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x293c40: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293c44: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x293c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x293c48: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293c4c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293c50: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293c54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x293c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_293c58:
    // 0x293c58: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293c5c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x293C5Cu;
    {
        const bool branch_taken_0x293c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C5Cu;
        // 0x293c60: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c5c) {
            ctx->pc = 0x293C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293c18;
        }
    }
    ctx->pc = 0x293C64u;
label_293c64:
    // 0x293c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x293c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_293c68:
    // 0x293c68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x293c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293c6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x293c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293c70: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x293C70u;
    {
        const bool branch_taken_0x293c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x293C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C70u;
        // 0x293c74: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c70) {
            ctx->pc = 0x293C98u;
            goto label_293c98;
        }
    }
    ctx->pc = 0x293C78u;
    // 0x293c78: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293c7c: 0x0  nop
    ctx->pc = 0x293c7cu;
    // NOP
label_293c80:
    // 0x293c80: 0x0  nop
    ctx->pc = 0x293c80u;
    // NOP
    // 0x293c84: 0x0  nop
    ctx->pc = 0x293c84u;
    // NOP
    // 0x293c88: 0x0  nop
    ctx->pc = 0x293c88u;
    // NOP
    // 0x293c8c: 0x0  nop
    ctx->pc = 0x293c8cu;
    // NOP
    // 0x293c90: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x293C90u;
    {
        const bool branch_taken_0x293c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x293C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C90u;
        // 0x293c94: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c90) {
            ctx->pc = 0x293C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293c80;
        }
    }
    ctx->pc = 0x293C98u;
label_293c98:
    // 0x293c98: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x293C98u;
    {
        const bool branch_taken_0x293c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C98u;
        // 0x293c9c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c98) {
            ctx->pc = 0x293CACu;
            goto label_293cac;
        }
    }
    ctx->pc = 0x293CA0u;
    // 0x293ca0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x293CA0u;
    SET_GPR_U32(ctx, 31, 0x293CA8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x293CA0u, 0x293CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293CA8u;
label_293ca8:
    // 0x293ca8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x293ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_293cac:
    // 0x293cac: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x293cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x293cb0: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x293cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x293cb4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x293cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x293cb8: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x293cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x293cbc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x293cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_293cc0:
    // 0x293cc0: 0xc0a9ec2  jal         func_2A7B08
    ctx->pc = 0x293CC0u;
    SET_GPR_U32(ctx, 31, 0x293CC8u);
    ctx->pc = 0x293CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293CC0u;
    // 0x293cc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B08u, 0x293CC0u, 0x293CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293CC8u;
label_293cc8:
    // 0x293cc8: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x293CC8u;
    {
        const bool branch_taken_0x293cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CC8u;
        // 0x293ccc: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293cc8) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x293CD0u;
label_293cd0:
    // 0x293cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293cd4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x293CD4u;
    SET_GPR_U32(ctx, 31, 0x293CDCu);
    ctx->pc = 0x293CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293CD4u;
    // 0x293cd8: 0x24a5b7e8  addiu       $a1, $a1, -0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x293CD4u, 0x293CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293CDCu;
label_293cdc:
    // 0x293cdc: 0x544000c2  bnel        $v0, $zero, . + 4 + (0xC2 << 2)
    ctx->pc = 0x293CDCu;
    {
        const bool branch_taken_0x293cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293cdc) {
            ctx->pc = 0x293CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293CDCu;
            // 0x293ce0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293FE8u;
            goto label_293fe8;
        }
    }
    ctx->pc = 0x293CE4u;
    // 0x293ce4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293cec: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x293cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x293cf0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x293cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x293cf4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x293cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x293cf8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x293cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x293cfc: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x293cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x293d00: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x293d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x293d04: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x293d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x293d08: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x293d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x293d0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d10: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x293d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x293d14: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x293d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293d18: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293D18u;
    SET_GPR_U32(ctx, 31, 0x293D20u);
    ctx->pc = 0x293D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D18u;
    // 0x293d1c: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293D18u, 0x293D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D20u;
label_293d20:
    // 0x293d20: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293D20u;
    SET_GPR_U32(ctx, 31, 0x293D28u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293D20u, 0x293D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D28u;
label_293d28:
    // 0x293d28: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293d2c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x293d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x293d30: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293D30u;
    SET_GPR_U32(ctx, 31, 0x293D38u);
    ctx->pc = 0x293D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D30u;
    // 0x293d34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293D30u, 0x293D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D38u;
label_293d38:
    // 0x293d38: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293D38u;
    SET_GPR_U32(ctx, 31, 0x293D40u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293D38u, 0x293D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D40u;
label_293d40:
    // 0x293d40: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293d44: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x293d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x293d48: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293D48u;
    SET_GPR_U32(ctx, 31, 0x293D50u);
    ctx->pc = 0x293D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D48u;
    // 0x293d4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293D48u, 0x293D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D50u;
label_293d50:
    // 0x293d50: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293D50u;
    SET_GPR_U32(ctx, 31, 0x293D58u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293D50u, 0x293D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D58u;
label_293d58:
    // 0x293d58: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293d5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x293d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d60: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293D60u;
    SET_GPR_U32(ctx, 31, 0x293D68u);
    ctx->pc = 0x293D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D60u;
    // 0x293d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293D60u, 0x293D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D68u;
label_293d68:
    // 0x293d68: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293D68u;
    SET_GPR_U32(ctx, 31, 0x293D70u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293D68u, 0x293D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D70u;
label_293d70:
    // 0x293d70: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x293d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x293d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d78: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x293D78u;
    SET_GPR_U32(ctx, 31, 0x293D80u);
    ctx->pc = 0x293D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D78u;
    // 0x293d7c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x293D78u, 0x293D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D80u;
label_293d80:
    // 0x293d80: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x293D80u;
    SET_GPR_U32(ctx, 31, 0x293D88u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x293D80u, 0x293D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D88u;
label_293d88:
    // 0x293d88: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x293d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x293d8c: 0xc0aadb6  jal         func_2AB6D8
    ctx->pc = 0x293D8Cu;
    SET_GPR_U32(ctx, 31, 0x293D94u);
    ctx->pc = 0x293D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D8Cu;
    // 0x293d90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6D8u, 0x293D8Cu, 0x293D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D94u;
label_293d94:
    // 0x293d94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x293d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293d98: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x293d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293d9c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x293d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293da0: 0x26910008  addiu       $s1, $s4, 0x8
    ctx->pc = 0x293da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x293da4: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x293da4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x293da8: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x293da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x293dac: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x293dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293db0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x293db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x293db4: 0x50e20015  beql        $a3, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x293DB4u;
    {
        const bool branch_taken_0x293db4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x293db4) {
            ctx->pc = 0x293DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293DB4u;
            // 0x293db8: 0xafb20078  sw          $s2, 0x78($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293E0Cu;
            goto label_293e0c;
        }
    }
    ctx->pc = 0x293DBCu;
label_293dbc:
    // 0x293dbc: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x293DBCu;
    {
        const bool branch_taken_0x293dbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x293DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DBCu;
        // 0x293dc0: 0x24e20008  addiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293dbc) {
            ctx->pc = 0x293DFCu;
            goto label_293dfc;
        }
    }
    ctx->pc = 0x293DC4u;
    // 0x293dc4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x293dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x293dc8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x293dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x293dcc: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x293dccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x293dd0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293dd4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293dd8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x293dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x293ddc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293de0: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x293de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x293de4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293de8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x293de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x293dec: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293df0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293df4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293df8: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x293df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_293dfc:
    // 0x293dfc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293e00: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293e04: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x293E04u;
    {
        const bool branch_taken_0x293e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E04u;
        // 0x293e08: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e04) {
            ctx->pc = 0x293FD8u;
            goto label_293fd8;
        }
    }
    ctx->pc = 0x293E0Cu;
label_293e0c:
    // 0x293e0c: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x293e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x293e10: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x293e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x293e14: 0x27a60074  addiu       $a2, $sp, 0x74
    ctx->pc = 0x293e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x293e18: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x293e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x293e1c: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x293e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x293e20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293e24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x293e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293e28: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x293e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x293e2c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x293e2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x293e30: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x293e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x293e34: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x293e34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x293e38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x293e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293e3c: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x293e3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293e40: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x293E40u;
    {
        const bool branch_taken_0x293e40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E40u;
        // 0x293e44: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e40) {
            ctx->pc = 0x293E5Cu;
            goto label_293e5c;
        }
    }
    ctx->pc = 0x293E48u;
    // 0x293e48: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x293e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x293e4c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x293E4Cu;
    SET_GPR_U32(ctx, 31, 0x293E54u);
    ctx->pc = 0x293E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E4Cu;
    // 0x293e50: 0x2a42018  mult        $a0, $s5, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x293E4Cu, 0x293E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E54u;
label_293e54:
    // 0x293e54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x293E54u;
    {
        const bool branch_taken_0x293e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E54u;
        // 0x293e58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e54) {
            ctx->pc = 0x293E64u;
            goto label_293e64;
        }
    }
    ctx->pc = 0x293E5Cu;
label_293e5c:
    // 0x293e5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293e64:
    // 0x293e64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x293e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293e68: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x293e68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e6c: 0x10720016  beq         $v1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x293E6Cu;
    {
        const bool branch_taken_0x293e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x293E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E6Cu;
        // 0x293e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e6c) {
            ctx->pc = 0x293EC8u;
            goto label_293ec8;
        }
    }
    ctx->pc = 0x293E74u;
    // 0x293e74: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x293e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_293e78:
    // 0x293e78: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x293E78u;
    {
        const bool branch_taken_0x293e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293e78) {
            ctx->pc = 0x293E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293E78u;
            // 0x293e7c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293EBCu;
            goto label_293ebc;
        }
    }
    ctx->pc = 0x293E80u;
    // 0x293e80: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x293e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x293e84: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x293e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x293e88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x293e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x293e8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293e90: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x293e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293e94: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x293e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293e98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x293e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293e9c: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x293e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x293ea0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x293ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293ea4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x293ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x293ea8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x293ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293eac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293eb0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x293eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293eb4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x293eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x293eb8: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x293eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_293ebc:
    // 0x293ebc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293ec0: 0x1472ffed  bne         $v1, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x293EC0u;
    {
        const bool branch_taken_0x293ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x293EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EC0u;
        // 0x293ec4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ec0) {
            ctx->pc = 0x293E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293e78;
        }
    }
    ctx->pc = 0x293EC8u;
label_293ec8:
    // 0x293ec8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x293ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x293ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293ed0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x293ED0u;
    {
        const bool branch_taken_0x293ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x293ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293ED0u;
        // 0x293ed4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ed0) {
            ctx->pc = 0x293F20u;
            goto label_293f20;
        }
    }
    ctx->pc = 0x293ED8u;
    // 0x293ed8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x293ED8u;
    {
        const bool branch_taken_0x293ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293ED8u;
        // 0x293edc: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ed8) {
            ctx->pc = 0x293F18u;
            goto label_293f18;
        }
    }
    ctx->pc = 0x293EE0u;
    // 0x293ee0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x293ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x293ee4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x293ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x293ee8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x293ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x293eec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293ef0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293ef4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x293ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x293ef8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293efc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x293efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x293f00: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293f04: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x293f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x293f08: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293f0c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293f10: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293f14: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x293f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_293f18:
    // 0x293f18: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x293F18u;
    {
        const bool branch_taken_0x293f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F18u;
        // 0x293f1c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f18) {
            ctx->pc = 0x293F80u;
            goto label_293f80;
        }
    }
    ctx->pc = 0x293F20u;
label_293f20:
    // 0x293f20: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x293F20u;
    {
        const bool branch_taken_0x293f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F20u;
        // 0x293f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f20) {
            ctx->pc = 0x293F7Cu;
            goto label_293f7c;
        }
    }
    ctx->pc = 0x293F28u;
    // 0x293f28: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x293f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x293f2c: 0x0  nop
    ctx->pc = 0x293f2cu;
    // NOP
label_293f30:
    // 0x293f30: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x293F30u;
    {
        const bool branch_taken_0x293f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F30u;
        // 0x293f34: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f30) {
            ctx->pc = 0x293F70u;
            goto label_293f70;
        }
    }
    ctx->pc = 0x293F38u;
    // 0x293f38: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x293f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x293f3c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x293f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x293f40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x293f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x293f44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x293f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x293f48: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x293f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293f4c: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x293f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x293f50: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x293f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293f54: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x293f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x293f58: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x293f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293f5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x293f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x293f60: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x293f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293f64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293f68: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x293f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293f6c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x293f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_293f70:
    // 0x293f70: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293f74: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x293F74u;
    {
        const bool branch_taken_0x293f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F74u;
        // 0x293f78: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f74) {
            ctx->pc = 0x293F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293f30;
        }
    }
    ctx->pc = 0x293F7Cu;
label_293f7c:
    // 0x293f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x293f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_293f80:
    // 0x293f80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x293f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293f84: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x293f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293f88: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x293F88u;
    {
        const bool branch_taken_0x293f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x293F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F88u;
        // 0x293f8c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f88) {
            ctx->pc = 0x293FB0u;
            goto label_293fb0;
        }
    }
    ctx->pc = 0x293F90u;
    // 0x293f90: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x293f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x293f94: 0x0  nop
    ctx->pc = 0x293f94u;
    // NOP
label_293f98:
    // 0x293f98: 0x0  nop
    ctx->pc = 0x293f98u;
    // NOP
    // 0x293f9c: 0x0  nop
    ctx->pc = 0x293f9cu;
    // NOP
    // 0x293fa0: 0x0  nop
    ctx->pc = 0x293fa0u;
    // NOP
    // 0x293fa4: 0x0  nop
    ctx->pc = 0x293fa4u;
    // NOP
    // 0x293fa8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x293FA8u;
    {
        const bool branch_taken_0x293fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x293FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FA8u;
        // 0x293fac: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293fa8) {
            ctx->pc = 0x293F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293f98;
        }
    }
    ctx->pc = 0x293FB0u;
label_293fb0:
    // 0x293fb0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x293FB0u;
    {
        const bool branch_taken_0x293fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FB0u;
        // 0x293fb4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293fb0) {
            ctx->pc = 0x293FC4u;
            goto label_293fc4;
        }
    }
    ctx->pc = 0x293FB8u;
    // 0x293fb8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x293FB8u;
    SET_GPR_U32(ctx, 31, 0x293FC0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x293FB8u, 0x293FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FC0u;
label_293fc0:
    // 0x293fc0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x293fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_293fc4:
    // 0x293fc4: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x293fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x293fc8: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x293fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x293fcc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x293fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x293fd0: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x293fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x293fd4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x293fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_293fd8:
    // 0x293fd8: 0xc0a9ec2  jal         func_2A7B08
    ctx->pc = 0x293FD8u;
    SET_GPR_U32(ctx, 31, 0x293FE0u);
    ctx->pc = 0x293FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FD8u;
    // 0x293fdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B08u, 0x293FD8u, 0x293FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FE0u;
label_293fe0:
    // 0x293fe0: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x293FE0u;
    {
        const bool branch_taken_0x293fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FE0u;
        // 0x293fe4: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293fe0) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x293FE8u;
label_293fe8:
    // 0x293fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293fec: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x293FECu;
    SET_GPR_U32(ctx, 31, 0x293FF4u);
    ctx->pc = 0x293FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FECu;
    // 0x293ff0: 0x24a5b808  addiu       $a1, $a1, -0x47F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x293FECu, 0x293FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FF4u;
label_293ff4:
    // 0x293ff4: 0x144000c1  bnez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x293FF4u;
    {
        const bool branch_taken_0x293ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FF4u;
        // 0x293ff8: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ff4) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x293FFCu;
    // 0x293ffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x294000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294004: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x294004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x294008: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x294008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x29400c: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x29400cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x294010: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x294010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x294014: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x294014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x294018: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x294018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x29401c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x29401cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x294020: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x294020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x294024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294028: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x294028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x29402c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29402cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294030: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x294030u;
    SET_GPR_U32(ctx, 31, 0x294038u);
    ctx->pc = 0x294034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294030u;
    // 0x294034: 0x8e642bc8  lw          $a0, 0x2BC8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x294030u, 0x294038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294038u;
label_294038:
    // 0x294038: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x294038u;
    SET_GPR_U32(ctx, 31, 0x294040u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x294038u, 0x294040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294040u;
label_294040:
    // 0x294040: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x294040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x294044: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x294044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x294048: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x294048u;
    SET_GPR_U32(ctx, 31, 0x294050u);
    ctx->pc = 0x29404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294048u;
    // 0x29404c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x294048u, 0x294050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294050u;
label_294050:
    // 0x294050: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x294050u;
    SET_GPR_U32(ctx, 31, 0x294058u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x294050u, 0x294058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294058u;
label_294058:
    // 0x294058: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x294058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x29405c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x29405cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x294060: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x294060u;
    SET_GPR_U32(ctx, 31, 0x294068u);
    ctx->pc = 0x294064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294060u;
    // 0x294064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x294060u, 0x294068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294068u;
label_294068:
    // 0x294068: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x294068u;
    SET_GPR_U32(ctx, 31, 0x294070u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x294068u, 0x294070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294070u;
label_294070:
    // 0x294070: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x294070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x294074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x294074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294078: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x294078u;
    SET_GPR_U32(ctx, 31, 0x294080u);
    ctx->pc = 0x29407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294078u;
    // 0x29407c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x294078u, 0x294080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294080u;
label_294080:
    // 0x294080: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x294080u;
    SET_GPR_U32(ctx, 31, 0x294088u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x294080u, 0x294088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294088u;
label_294088:
    // 0x294088: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x294088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
    // 0x29408c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294090: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x294090u;
    SET_GPR_U32(ctx, 31, 0x294098u);
    ctx->pc = 0x294094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294090u;
    // 0x294094: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x294090u, 0x294098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294098u;
label_294098:
    // 0x294098: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x294098u;
    SET_GPR_U32(ctx, 31, 0x2940A0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x294098u, 0x2940A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940A0u;
label_2940a0:
    // 0x2940a0: 0x8ee4a8ac  lw          $a0, -0x5754($s7)
    ctx->pc = 0x2940a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944940)));
    // 0x2940a4: 0xc0aadbc  jal         func_2AB6F0
    ctx->pc = 0x2940A4u;
    SET_GPR_U32(ctx, 31, 0x2940ACu);
    ctx->pc = 0x2940A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2940A4u;
    // 0x2940a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6F0u, 0x2940A4u, 0x2940ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940ACu;
label_2940ac:
    // 0x2940ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2940acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2940b0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2940b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2940b4: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2940b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2940b8: 0x26910008  addiu       $s1, $s4, 0x8
    ctx->pc = 0x2940b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2940bc: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x2940bcu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2940c0: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2940c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2940c4: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2940c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2940c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2940c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2940cc: 0x50e20015  beql        $a3, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2940CCu;
    {
        const bool branch_taken_0x2940cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2940cc) {
            ctx->pc = 0x2940D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2940CCu;
            // 0x2940d0: 0xafb20080  sw          $s2, 0x80($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294124u;
            goto label_294124;
        }
    }
    ctx->pc = 0x2940D4u;
    // 0x2940d4: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2940D4u;
    {
        const bool branch_taken_0x2940d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2940D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940D4u;
        // 0x2940d8: 0x24e20008  addiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940d4) {
            ctx->pc = 0x294114u;
            goto label_294114;
        }
    }
    ctx->pc = 0x2940DCu;
    // 0x2940dc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2940dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2940e0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2940e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2940e4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2940e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2940e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2940e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2940ec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2940ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2940f0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2940f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2940f4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2940f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2940f8: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2940f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2940fc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2940fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294100: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x294100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x294104: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x294104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294108: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x294108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x29410c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x29410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294110: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x294110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_294114:
    // 0x294114: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x294114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x294118: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x294118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x29411c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x29411Cu;
    {
        const bool branch_taken_0x29411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29411Cu;
        // 0x294120: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29411c) {
            ctx->pc = 0x2942F0u;
            goto label_2942f0;
        }
    }
    ctx->pc = 0x294124u;
label_294124:
    // 0x294124: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x294124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x294128: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x294128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x29412c: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x29412cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x294130: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x294130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x294134: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x294134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x294138: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x294138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29413c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29413cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294140: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x294140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x294144: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x294144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x294148: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x294148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x29414c: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x29414cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x294150: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x294150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x294154: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x294154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294158: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x294158u;
    {
        const bool branch_taken_0x294158 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294158u;
        // 0x29415c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294158) {
            ctx->pc = 0x294174u;
            goto label_294174;
        }
    }
    ctx->pc = 0x294160u;
    // 0x294160: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x294160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x294164: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x294164u;
    SET_GPR_U32(ctx, 31, 0x29416Cu);
    ctx->pc = 0x294168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294164u;
    // 0x294168: 0x2a42018  mult        $a0, $s5, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x294164u, 0x29416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29416Cu;
label_29416c:
    // 0x29416c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29416Cu;
    {
        const bool branch_taken_0x29416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29416Cu;
        // 0x294170: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29416c) {
            ctx->pc = 0x29417Cu;
            goto label_29417c;
        }
    }
    ctx->pc = 0x294174u;
label_294174:
    // 0x294174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x294174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29417c:
    // 0x29417c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x294180: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x294180u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294184: 0x10720016  beq         $v1, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x294184u;
    {
        const bool branch_taken_0x294184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x294188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294184u;
        // 0x294188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294184) {
            ctx->pc = 0x2941E0u;
            goto label_2941e0;
        }
    }
    ctx->pc = 0x29418Cu;
    // 0x29418c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x29418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_294190:
    // 0x294190: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x294190u;
    {
        const bool branch_taken_0x294190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294190) {
            ctx->pc = 0x294194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294190u;
            // 0x294194: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2941D4u;
            goto label_2941d4;
        }
    }
    ctx->pc = 0x294198u;
    // 0x294198: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x294198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x29419c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x29419cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x2941a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2941a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2941a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2941a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2941a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2941a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2941ac: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x2941acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2941b0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2941b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2941b4: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x2941b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2941b8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2941b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2941bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2941bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2941c0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2941c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2941c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2941c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2941c8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2941c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2941cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2941ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2941d0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x2941d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_2941d4:
    // 0x2941d4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2941d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2941d8: 0x1472ffed  bne         $v1, $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2941D8u;
    {
        const bool branch_taken_0x2941d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2941DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941D8u;
        // 0x2941dc: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941d8) {
            ctx->pc = 0x294190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294190;
        }
    }
    ctx->pc = 0x2941E0u;
label_2941e0:
    // 0x2941e0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2941e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2941e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2941e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2941e8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2941E8u;
    {
        const bool branch_taken_0x2941e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2941ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941E8u;
        // 0x2941ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941e8) {
            ctx->pc = 0x294238u;
            goto label_294238;
        }
    }
    ctx->pc = 0x2941F0u;
    // 0x2941f0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2941F0u;
    {
        const bool branch_taken_0x2941f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2941F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941F0u;
        // 0x2941f4: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941f0) {
            ctx->pc = 0x294230u;
            goto label_294230;
        }
    }
    ctx->pc = 0x2941F8u;
    // 0x2941f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2941f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2941fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2941fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x294200: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x294200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x294204: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x294204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x294208: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x294208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29420c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x29420cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x294210: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x294210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294214: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x294214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x294218: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x294218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29421c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x29421cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x294220: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x294220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294224: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x294224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x294228: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x294228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29422c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x29422cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_294230:
    // 0x294230: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x294230u;
    {
        const bool branch_taken_0x294230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294230u;
        // 0x294234: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294230) {
            ctx->pc = 0x294298u;
            goto label_294298;
        }
    }
    ctx->pc = 0x294238u;
label_294238:
    // 0x294238: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x294238u;
    {
        const bool branch_taken_0x294238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294238u;
        // 0x29423c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294238) {
            ctx->pc = 0x294294u;
            goto label_294294;
        }
    }
    ctx->pc = 0x294240u;
    // 0x294240: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x294240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x294244: 0x0  nop
    ctx->pc = 0x294244u;
    // NOP
label_294248:
    // 0x294248: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x294248u;
    {
        const bool branch_taken_0x294248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294248u;
        // 0x29424c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294248) {
            ctx->pc = 0x294288u;
            goto label_294288;
        }
    }
    ctx->pc = 0x294250u;
    // 0x294250: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x294250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x294254: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x294254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x294258: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x294258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29425c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29425cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x294260: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x294260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294264: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x294264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x294268: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x294268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29426c: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x29426cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x294270: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x294270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294274: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x294278: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x294278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29427c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29427cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x294280: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x294280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294284: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x294284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_294288:
    // 0x294288: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x294288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x29428c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x29428Cu;
    {
        const bool branch_taken_0x29428c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29428Cu;
        // 0x294290: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29428c) {
            ctx->pc = 0x294248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294248;
        }
    }
    ctx->pc = 0x294294u;
label_294294:
    // 0x294294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294298:
    // 0x294298: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x294298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29429c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x29429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2942a0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2942A0u;
    {
        const bool branch_taken_0x2942a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2942A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942A0u;
        // 0x2942a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942a0) {
            ctx->pc = 0x2942C8u;
            goto label_2942c8;
        }
    }
    ctx->pc = 0x2942A8u;
    // 0x2942a8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2942a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2942ac: 0x0  nop
    ctx->pc = 0x2942acu;
    // NOP
label_2942b0:
    // 0x2942b0: 0x0  nop
    ctx->pc = 0x2942b0u;
    // NOP
    // 0x2942b4: 0x0  nop
    ctx->pc = 0x2942b4u;
    // NOP
    // 0x2942b8: 0x0  nop
    ctx->pc = 0x2942b8u;
    // NOP
    // 0x2942bc: 0x0  nop
    ctx->pc = 0x2942bcu;
    // NOP
    // 0x2942c0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2942C0u;
    {
        const bool branch_taken_0x2942c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2942C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942C0u;
        // 0x2942c4: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942c0) {
            ctx->pc = 0x2942B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2942b0;
        }
    }
    ctx->pc = 0x2942C8u;
label_2942c8:
    // 0x2942c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2942C8u;
    {
        const bool branch_taken_0x2942c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2942CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942C8u;
        // 0x2942cc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942c8) {
            ctx->pc = 0x2942DCu;
            goto label_2942dc;
        }
    }
    ctx->pc = 0x2942D0u;
    // 0x2942d0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2942D0u;
    SET_GPR_U32(ctx, 31, 0x2942D8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2942D0u, 0x2942D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942D8u;
label_2942d8:
    // 0x2942d8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2942d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2942dc:
    // 0x2942dc: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x2942dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x2942e0: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x2942e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2942e4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2942e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2942e8: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x2942e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2942ec: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2942ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2942f0:
    // 0x2942f0: 0xc0a9ec2  jal         func_2A7B08
    ctx->pc = 0x2942F0u;
    SET_GPR_U32(ctx, 31, 0x2942F8u);
    ctx->pc = 0x2942F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2942F0u;
    // 0x2942f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B08u, 0x2942F0u, 0x2942F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942F8u;
label_2942f8:
    // 0x2942f8: 0x8e642bc8  lw          $a0, 0x2BC8($s3)
    ctx->pc = 0x2942f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11208)));
label_2942fc:
    // 0x2942fc: 0x27d1c230  addiu       $s1, $fp, -0x3DD0
    ctx->pc = 0x2942fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951472));
    // 0x294300: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x294300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x294304: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x294304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294308: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x294308u;
    SET_GPR_U32(ctx, 31, 0x294310u);
    ctx->pc = 0x29430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294308u;
    // 0x29430c: 0x2445b4d0  addiu       $a1, $v0, -0x4B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x294308u, 0x294310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294310u;
label_294310:
    // 0x294310: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x294310u;
    SET_GPR_U32(ctx, 31, 0x294318u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x294310u, 0x294318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294318u;
label_294318:
    // 0x294318: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x294318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x29431c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294320: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x294320u;
    SET_GPR_U32(ctx, 31, 0x294328u);
    ctx->pc = 0x294324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294320u;
    // 0x294324: 0x2465b4d8  addiu       $a1, $v1, -0x4B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x294320u, 0x294328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294328u;
}
