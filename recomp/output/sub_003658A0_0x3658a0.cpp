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

// Function: sub_003658A0
// Address: 0x3658a0 - 0x3659c8
void sub_003658A0_0x3658a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003658A0_0x3658a0");
#endif

    switch (ctx->pc) {
        case 0x3658a0u: goto label_3658a0;
        case 0x3658a4u: goto label_3658a4;
        case 0x3658a8u: goto label_3658a8;
        case 0x3658acu: goto label_3658ac;
        case 0x3658b0u: goto label_3658b0;
        case 0x3658b4u: goto label_3658b4;
        case 0x3658b8u: goto label_3658b8;
        case 0x3658bcu: goto label_3658bc;
        case 0x3658c0u: goto label_3658c0;
        case 0x3658c4u: goto label_3658c4;
        case 0x3658c8u: goto label_3658c8;
        case 0x3658ccu: goto label_3658cc;
        case 0x3658d0u: goto label_3658d0;
        case 0x3658d4u: goto label_3658d4;
        case 0x3658d8u: goto label_3658d8;
        case 0x3658dcu: goto label_3658dc;
        case 0x3658e0u: goto label_3658e0;
        case 0x3658e4u: goto label_3658e4;
        case 0x3658e8u: goto label_3658e8;
        case 0x3658ecu: goto label_3658ec;
        case 0x3658f0u: goto label_3658f0;
        case 0x3658f4u: goto label_3658f4;
        case 0x3658f8u: goto label_3658f8;
        case 0x3658fcu: goto label_3658fc;
        case 0x365900u: goto label_365900;
        case 0x365904u: goto label_365904;
        case 0x365908u: goto label_365908;
        case 0x36590cu: goto label_36590c;
        case 0x365910u: goto label_365910;
        case 0x365914u: goto label_365914;
        case 0x365918u: goto label_365918;
        case 0x36591cu: goto label_36591c;
        case 0x365920u: goto label_365920;
        case 0x365924u: goto label_365924;
        case 0x365928u: goto label_365928;
        case 0x36592cu: goto label_36592c;
        case 0x365930u: goto label_365930;
        case 0x365934u: goto label_365934;
        case 0x365938u: goto label_365938;
        case 0x36593cu: goto label_36593c;
        case 0x365940u: goto label_365940;
        case 0x365944u: goto label_365944;
        case 0x365948u: goto label_365948;
        case 0x36594cu: goto label_36594c;
        case 0x365950u: goto label_365950;
        case 0x365954u: goto label_365954;
        case 0x365958u: goto label_365958;
        case 0x36595cu: goto label_36595c;
        case 0x365960u: goto label_365960;
        case 0x365964u: goto label_365964;
        case 0x365968u: goto label_365968;
        case 0x36596cu: goto label_36596c;
        case 0x365970u: goto label_365970;
        case 0x365974u: goto label_365974;
        case 0x365978u: goto label_365978;
        case 0x36597cu: goto label_36597c;
        case 0x365980u: goto label_365980;
        case 0x365984u: goto label_365984;
        case 0x365988u: goto label_365988;
        case 0x36598cu: goto label_36598c;
        case 0x365990u: goto label_365990;
        case 0x365994u: goto label_365994;
        case 0x365998u: goto label_365998;
        case 0x36599cu: goto label_36599c;
        case 0x3659a0u: goto label_3659a0;
        case 0x3659a4u: goto label_3659a4;
        case 0x3659a8u: goto label_3659a8;
        case 0x3659acu: goto label_3659ac;
        case 0x3659b0u: goto label_3659b0;
        case 0x3659b4u: goto label_3659b4;
        case 0x3659b8u: goto label_3659b8;
        case 0x3659bcu: goto label_3659bc;
        case 0x3659c0u: goto label_3659c0;
        case 0x3659c4u: goto label_3659c4;
        default: break;
    }

    ctx->pc = 0x3658a0u;

label_3658a0:
    // 0x3658a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3658a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3658a4:
    // 0x3658a4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3658a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3658a8:
    // 0x3658a8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3658a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_3658ac:
    // 0x3658ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3658acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3658b0:
    // 0x3658b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3658b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_3658b4:
    // 0x3658b4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3658b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_3658b8:
    // 0x3658b8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3658b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_3658bc:
    // 0x3658bc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3658bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_3658c0:
    // 0x3658c0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3658c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_3658c4:
    // 0x3658c4: 0xc0d7384  jal         func_35CE10
label_3658c8:
    if (ctx->pc == 0x3658C8u) {
        ctx->pc = 0x3658C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658C4u;
        // 0x3658c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3658CCu;
        goto label_3658cc;
    }
    ctx->pc = 0x3658C4u;
    SET_GPR_U32(ctx, 31, 0x3658CCu);
    ctx->pc = 0x3658C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3658C4u;
    // 0x3658c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x3658C4u, 0x3658CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3658CCu;
label_3658cc:
    // 0x3658cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3658ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3658d0:
    // 0x3658d0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3658d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3658d4:
    // 0x3658d4: 0xc0d7384  jal         func_35CE10
label_3658d8:
    if (ctx->pc == 0x3658D8u) {
        ctx->pc = 0x3658D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658D4u;
        // 0x3658d8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3658DCu;
        goto label_3658dc;
    }
    ctx->pc = 0x3658D4u;
    SET_GPR_U32(ctx, 31, 0x3658DCu);
    ctx->pc = 0x3658D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3658D4u;
    // 0x3658d8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x3658D4u, 0x3658DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3658DCu;
label_3658dc:
    // 0x3658dc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x3658dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_3658e0:
    // 0x3658e0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x3658e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_3658e4:
    // 0x3658e4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3658e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3658e8:
    // 0x3658e8: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x3658e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
label_3658ec:
    // 0x3658ec: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x3658ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
label_3658f0:
    // 0x3658f0: 0xc09eb20  jal         func_27AC80
label_3658f4:
    if (ctx->pc == 0x3658F4u) {
        ctx->pc = 0x3658F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658F0u;
        // 0x3658f4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3658F8u;
        goto label_3658f8;
    }
    ctx->pc = 0x3658F0u;
    SET_GPR_U32(ctx, 31, 0x3658F8u);
    ctx->pc = 0x3658F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3658F0u;
    // 0x3658f4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x3658F0u, 0x3658F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3658F8u;
label_3658f8:
    // 0x3658f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3658f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3658fc:
    // 0x3658fc: 0xc0d7394  jal         func_35CE50
label_365900:
    if (ctx->pc == 0x365900u) {
        ctx->pc = 0x365900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3658FCu;
        // 0x365900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365904u;
        goto label_365904;
    }
    ctx->pc = 0x3658FCu;
    SET_GPR_U32(ctx, 31, 0x365904u);
    ctx->pc = 0x365900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3658FCu;
    // 0x365900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x3658FCu, 0x365904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365904u;
label_365904:
    // 0x365904: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x365904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_365908:
    // 0x365908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36590c:
    // 0x36590c: 0xc0d756c  jal         func_35D5B0
label_365910:
    if (ctx->pc == 0x365910u) {
        ctx->pc = 0x365910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36590Cu;
        // 0x365910: 0x24a5eeb8  addiu       $a1, $a1, -0x1148 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365914u;
        goto label_365914;
    }
    ctx->pc = 0x36590Cu;
    SET_GPR_U32(ctx, 31, 0x365914u);
    ctx->pc = 0x365910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36590Cu;
    // 0x365910: 0x24a5eeb8  addiu       $a1, $a1, -0x1148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x36590Cu, 0x365914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365914u;
label_365914:
    // 0x365914: 0x16200014  bnez        $s1, . + 4 + (0x14 << 2)
label_365918:
    if (ctx->pc == 0x365918u) {
        ctx->pc = 0x365918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365914u;
        // 0x365918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36591Cu;
        goto label_36591c;
    }
    ctx->pc = 0x365914u;
    {
        const bool branch_taken_0x365914 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x365918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365914u;
        // 0x365918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365914) {
            ctx->pc = 0x365968u;
            goto label_365968;
        }
    }
    ctx->pc = 0x36591Cu;
label_36591c:
    // 0x36591c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36591cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_365920:
    // 0x365920: 0xc09dd98  jal         func_277660
label_365924:
    if (ctx->pc == 0x365924u) {
        ctx->pc = 0x365924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365920u;
        // 0x365924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365928u;
        goto label_365928;
    }
    ctx->pc = 0x365920u;
    SET_GPR_U32(ctx, 31, 0x365928u);
    ctx->pc = 0x365924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365920u;
    // 0x365924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x365920u, 0x365928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365928u;
label_365928:
    // 0x365928: 0x1000000f  b           . + 4 + (0xF << 2)
label_36592c:
    if (ctx->pc == 0x36592Cu) {
        ctx->pc = 0x36592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365928u;
        // 0x36592c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365930u;
        goto label_365930;
    }
    ctx->pc = 0x365928u;
    {
        const bool branch_taken_0x365928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365928u;
        // 0x36592c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365928) {
            ctx->pc = 0x365968u;
            goto label_365968;
        }
    }
    ctx->pc = 0x365930u;
label_365930:
    // 0x365930: 0xc0d95e0  jal         func_365780
label_365934:
    if (ctx->pc == 0x365934u) {
        ctx->pc = 0x365934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365930u;
        // 0x365934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365938u;
        goto label_365938;
    }
    ctx->pc = 0x365930u;
    SET_GPR_U32(ctx, 31, 0x365938u);
    ctx->pc = 0x365934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365930u;
    // 0x365934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365780u, 0x365930u, 0x365938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365938u;
label_365938:
    // 0x365938: 0x10000005  b           . + 4 + (0x5 << 2)
label_36593c:
    if (ctx->pc == 0x36593Cu) {
        ctx->pc = 0x36593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365938u;
        // 0x36593c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365940u;
        goto label_365940;
    }
    ctx->pc = 0x365938u;
    {
        const bool branch_taken_0x365938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365938u;
        // 0x36593c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365938) {
            ctx->pc = 0x365950u;
            goto label_365950;
        }
    }
    ctx->pc = 0x365940u;
label_365940:
    // 0x365940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365944:
    // 0x365944: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x365944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_365948:
    // 0x365948: 0x40f809  jalr        $v0
label_36594c:
    if (ctx->pc == 0x36594Cu) {
        ctx->pc = 0x36594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365948u;
        // 0x36594c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365950u;
        goto label_365950;
    }
    ctx->pc = 0x365948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x365950u);
        ctx->pc = 0x36594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365948u;
        // 0x36594c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365948u, 0x365950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365950u;
label_365950:
    // 0x365950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_365954:
    // 0x365954: 0xc09de68  jal         func_2779A0
label_365958:
    if (ctx->pc == 0x365958u) {
        ctx->pc = 0x365958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365954u;
        // 0x365958: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36595Cu;
        goto label_36595c;
    }
    ctx->pc = 0x365954u;
    SET_GPR_U32(ctx, 31, 0x36595Cu);
    ctx->pc = 0x365958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365954u;
    // 0x365958: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x365954u, 0x36595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36595Cu;
label_36595c:
    // 0x36595c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_365960:
    if (ctx->pc == 0x365960u) {
        ctx->pc = 0x365960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36595Cu;
        // 0x365960: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365964u;
        goto label_365964;
    }
    ctx->pc = 0x36595Cu;
    {
        const bool branch_taken_0x36595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36595c) {
            ctx->pc = 0x365960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36595Cu;
            // 0x365960: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365940;
        }
    }
    ctx->pc = 0x365964u;
label_365964:
    // 0x365964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_365968:
    // 0x365968: 0xc09de3a  jal         func_2778E8
label_36596c:
    if (ctx->pc == 0x36596Cu) {
        ctx->pc = 0x36596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365968u;
        // 0x36596c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365970u;
        goto label_365970;
    }
    ctx->pc = 0x365968u;
    SET_GPR_U32(ctx, 31, 0x365970u);
    ctx->pc = 0x36596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365968u;
    // 0x36596c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x365968u, 0x365970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365970u;
label_365970:
    // 0x365970: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_365974:
    if (ctx->pc == 0x365974u) {
        ctx->pc = 0x365978u;
        goto label_365978;
    }
    ctx->pc = 0x365970u;
    {
        const bool branch_taken_0x365970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365970) {
            ctx->pc = 0x365930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365930;
        }
    }
    ctx->pc = 0x365978u;
label_365978:
    // 0x365978: 0xc09ddec  jal         func_2777B0
label_36597c:
    if (ctx->pc == 0x36597Cu) {
        ctx->pc = 0x36597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365978u;
        // 0x36597c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365980u;
        goto label_365980;
    }
    ctx->pc = 0x365978u;
    SET_GPR_U32(ctx, 31, 0x365980u);
    ctx->pc = 0x36597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365978u;
    // 0x36597c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x365978u, 0x365980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365980u;
label_365980:
    // 0x365980: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x365980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_365984:
    // 0x365984: 0xc0d7412  jal         func_35D048
label_365988:
    if (ctx->pc == 0x365988u) {
        ctx->pc = 0x365988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365984u;
        // 0x365988: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36598Cu;
        goto label_36598c;
    }
    ctx->pc = 0x365984u;
    SET_GPR_U32(ctx, 31, 0x36598Cu);
    ctx->pc = 0x365988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365984u;
    // 0x365988: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x365984u, 0x36598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36598Cu;
label_36598c:
    // 0x36598c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_365990:
    // 0x365990: 0xc0d7412  jal         func_35D048
label_365994:
    if (ctx->pc == 0x365994u) {
        ctx->pc = 0x365994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365990u;
        // 0x365994: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365998u;
        goto label_365998;
    }
    ctx->pc = 0x365990u;
    SET_GPR_U32(ctx, 31, 0x365998u);
    ctx->pc = 0x365994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365990u;
    // 0x365994: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x365990u, 0x365998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365998u;
label_365998:
    // 0x365998: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x365998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36599c:
    // 0x36599c: 0xc0d7412  jal         func_35D048
label_3659a0:
    if (ctx->pc == 0x3659A0u) {
        ctx->pc = 0x3659A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36599Cu;
        // 0x3659a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3659A4u;
        goto label_3659a4;
    }
    ctx->pc = 0x36599Cu;
    SET_GPR_U32(ctx, 31, 0x3659A4u);
    ctx->pc = 0x3659A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36599Cu;
    // 0x3659a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x36599Cu, 0x3659A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659A4u;
label_3659a4:
    // 0x3659a4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3659a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3659a8:
    // 0x3659a8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3659a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3659ac:
    // 0x3659ac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3659acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3659b0:
    // 0x3659b0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3659b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3659b4:
    // 0x3659b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3659b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3659b8:
    // 0x3659b8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3659b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3659bc:
    // 0x3659bc: 0x3e00008  jr          $ra
label_3659c0:
    if (ctx->pc == 0x3659C0u) {
        ctx->pc = 0x3659C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659BCu;
        // 0x3659c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3659C4u;
        goto label_3659c4;
    }
    ctx->pc = 0x3659BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3659C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3659BCu;
        // 0x3659c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3659BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3659C4u;
label_3659c4:
    // 0x3659c4: 0x0  nop
    ctx->pc = 0x3659c4u;
    // NOP
    ctx->pc = 0x3659c8u;
}
