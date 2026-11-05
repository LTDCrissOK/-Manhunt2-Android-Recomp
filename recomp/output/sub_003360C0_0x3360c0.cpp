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

// Function: sub_003360C0
// Address: 0x3360c0 - 0x336230
void sub_003360C0_0x3360c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003360C0_0x3360c0");
#endif

    switch (ctx->pc) {
        case 0x3360c0u: goto label_3360c0;
        case 0x3360c4u: goto label_3360c4;
        case 0x3360c8u: goto label_3360c8;
        case 0x3360ccu: goto label_3360cc;
        case 0x3360d0u: goto label_3360d0;
        case 0x3360d4u: goto label_3360d4;
        case 0x3360d8u: goto label_3360d8;
        case 0x3360dcu: goto label_3360dc;
        case 0x3360e0u: goto label_3360e0;
        case 0x3360e4u: goto label_3360e4;
        case 0x3360e8u: goto label_3360e8;
        case 0x3360ecu: goto label_3360ec;
        case 0x3360f0u: goto label_3360f0;
        case 0x3360f4u: goto label_3360f4;
        case 0x3360f8u: goto label_3360f8;
        case 0x3360fcu: goto label_3360fc;
        case 0x336100u: goto label_336100;
        case 0x336104u: goto label_336104;
        case 0x336108u: goto label_336108;
        case 0x33610cu: goto label_33610c;
        case 0x336110u: goto label_336110;
        case 0x336114u: goto label_336114;
        case 0x336118u: goto label_336118;
        case 0x33611cu: goto label_33611c;
        case 0x336120u: goto label_336120;
        case 0x336124u: goto label_336124;
        case 0x336128u: goto label_336128;
        case 0x33612cu: goto label_33612c;
        case 0x336130u: goto label_336130;
        case 0x336134u: goto label_336134;
        case 0x336138u: goto label_336138;
        case 0x33613cu: goto label_33613c;
        case 0x336140u: goto label_336140;
        case 0x336144u: goto label_336144;
        case 0x336148u: goto label_336148;
        case 0x33614cu: goto label_33614c;
        case 0x336150u: goto label_336150;
        case 0x336154u: goto label_336154;
        case 0x336158u: goto label_336158;
        case 0x33615cu: goto label_33615c;
        case 0x336160u: goto label_336160;
        case 0x336164u: goto label_336164;
        case 0x336168u: goto label_336168;
        case 0x33616cu: goto label_33616c;
        case 0x336170u: goto label_336170;
        case 0x336174u: goto label_336174;
        case 0x336178u: goto label_336178;
        case 0x33617cu: goto label_33617c;
        case 0x336180u: goto label_336180;
        case 0x336184u: goto label_336184;
        case 0x336188u: goto label_336188;
        case 0x33618cu: goto label_33618c;
        case 0x336190u: goto label_336190;
        case 0x336194u: goto label_336194;
        case 0x336198u: goto label_336198;
        case 0x33619cu: goto label_33619c;
        case 0x3361a0u: goto label_3361a0;
        case 0x3361a4u: goto label_3361a4;
        case 0x3361a8u: goto label_3361a8;
        case 0x3361acu: goto label_3361ac;
        case 0x3361b0u: goto label_3361b0;
        case 0x3361b4u: goto label_3361b4;
        case 0x3361b8u: goto label_3361b8;
        case 0x3361bcu: goto label_3361bc;
        case 0x3361c0u: goto label_3361c0;
        case 0x3361c4u: goto label_3361c4;
        case 0x3361c8u: goto label_3361c8;
        case 0x3361ccu: goto label_3361cc;
        case 0x3361d0u: goto label_3361d0;
        case 0x3361d4u: goto label_3361d4;
        case 0x3361d8u: goto label_3361d8;
        case 0x3361dcu: goto label_3361dc;
        case 0x3361e0u: goto label_3361e0;
        case 0x3361e4u: goto label_3361e4;
        case 0x3361e8u: goto label_3361e8;
        case 0x3361ecu: goto label_3361ec;
        case 0x3361f0u: goto label_3361f0;
        case 0x3361f4u: goto label_3361f4;
        case 0x3361f8u: goto label_3361f8;
        case 0x3361fcu: goto label_3361fc;
        case 0x336200u: goto label_336200;
        case 0x336204u: goto label_336204;
        case 0x336208u: goto label_336208;
        case 0x33620cu: goto label_33620c;
        case 0x336210u: goto label_336210;
        case 0x336214u: goto label_336214;
        case 0x336218u: goto label_336218;
        case 0x33621cu: goto label_33621c;
        case 0x336220u: goto label_336220;
        case 0x336224u: goto label_336224;
        case 0x336228u: goto label_336228;
        case 0x33622cu: goto label_33622c;
        default: break;
    }

    ctx->pc = 0x3360c0u;

label_3360c0:
    // 0x3360c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3360c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3360c4:
    // 0x3360c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3360c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3360c8:
    // 0x3360c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3360c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3360cc:
    // 0x3360cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3360ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3360d0:
    // 0x3360d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3360d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3360d4:
    // 0x3360d4: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x3360d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_3360d8:
    // 0x3360d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3360d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3360dc:
    // 0x3360dc: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x3360dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_3360e0:
    // 0x3360e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3360e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3360e4:
    // 0x3360e4: 0x24846e80  addiu       $a0, $a0, 0x6E80
    ctx->pc = 0x3360e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28288));
label_3360e8:
    // 0x3360e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3360e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_3360ec:
    // 0x3360ec: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x3360ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
label_3360f0:
    // 0x3360f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3360f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_3360f4:
    // 0x3360f4: 0xc0b2af0  jal         func_2CABC0
label_3360f8:
    if (ctx->pc == 0x3360F8u) {
        ctx->pc = 0x3360F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360F4u;
        // 0x3360f8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3360FCu;
        goto label_3360fc;
    }
    ctx->pc = 0x3360F4u;
    SET_GPR_U32(ctx, 31, 0x3360FCu);
    ctx->pc = 0x3360F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3360F4u;
    // 0x3360f8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3360F4u, 0x3360FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3360FCu;
label_3360fc:
    // 0x3360fc: 0xc0cd4b8  jal         func_3352E0
label_336100:
    if (ctx->pc == 0x336100u) {
        ctx->pc = 0x336100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360FCu;
        // 0x336100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336104u;
        goto label_336104;
    }
    ctx->pc = 0x3360FCu;
    SET_GPR_U32(ctx, 31, 0x336104u);
    ctx->pc = 0x336100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3360FCu;
    // 0x336100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3352E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3352E0u, 0x3360FCu, 0x336104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336104u;
label_336104:
    // 0x336104: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x336104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336108:
    // 0x336108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x336108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33610c:
    // 0x33610c: 0xc0cd530  jal         func_3354C0
label_336110:
    if (ctx->pc == 0x336110u) {
        ctx->pc = 0x336110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33610Cu;
        // 0x336110: 0xae422c7c  sw          $v0, 0x2C7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336114u;
        goto label_336114;
    }
    ctx->pc = 0x33610Cu;
    SET_GPR_U32(ctx, 31, 0x336114u);
    ctx->pc = 0x336110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33610Cu;
    // 0x336110: 0xae422c7c  sw          $v0, 0x2C7C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 11388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354C0u, 0x33610Cu, 0x336114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336114u;
label_336114:
    // 0x336114: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x336114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336118:
    // 0x336118: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_33611c:
    if (ctx->pc == 0x33611Cu) {
        ctx->pc = 0x33611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336118u;
        // 0x33611c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336120u;
        goto label_336120;
    }
    ctx->pc = 0x336118u;
    {
        const bool branch_taken_0x336118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336118u;
        // 0x33611c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336118) {
            ctx->pc = 0x3361ECu;
            goto label_3361ec;
        }
    }
    ctx->pc = 0x336120u;
label_336120:
    // 0x336120: 0xc0cdaa6  jal         func_336A98
label_336124:
    if (ctx->pc == 0x336124u) {
        ctx->pc = 0x336124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336120u;
        // 0x336124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336128u;
        goto label_336128;
    }
    ctx->pc = 0x336120u;
    SET_GPR_U32(ctx, 31, 0x336128u);
    ctx->pc = 0x336124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336120u;
    // 0x336124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A98u, 0x336120u, 0x336128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336128u;
label_336128:
    // 0x336128: 0x8e422c7c  lw          $v0, 0x2C7C($s2)
    ctx->pc = 0x336128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_33612c:
    // 0x33612c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x33612cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_336130:
    // 0x336130: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_336134:
    if (ctx->pc == 0x336134u) {
        ctx->pc = 0x336134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336130u;
        // 0x336134: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336138u;
        goto label_336138;
    }
    ctx->pc = 0x336130u;
    {
        const bool branch_taken_0x336130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336130u;
        // 0x336134: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336130) {
            ctx->pc = 0x336188u;
            goto label_336188;
        }
    }
    ctx->pc = 0x336138u;
label_336138:
    // 0x336138: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x336138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_33613c:
    // 0x33613c: 0xae020498  sw          $v0, 0x498($s0)
    ctx->pc = 0x33613cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
label_336140:
    // 0x336140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336144:
    // 0x336144: 0xc0cdd6e  jal         func_3375B8
label_336148:
    if (ctx->pc == 0x336148u) {
        ctx->pc = 0x336148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336144u;
        // 0x336148: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33614Cu;
        goto label_33614c;
    }
    ctx->pc = 0x336144u;
    SET_GPR_U32(ctx, 31, 0x33614Cu);
    ctx->pc = 0x336148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336144u;
    // 0x336148: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3375B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3375B8u, 0x336144u, 0x33614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33614Cu;
label_33614c:
    // 0x33614c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_336150:
    if (ctx->pc == 0x336150u) {
        ctx->pc = 0x336150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33614Cu;
        // 0x336150: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336154u;
        goto label_336154;
    }
    ctx->pc = 0x33614Cu;
    {
        const bool branch_taken_0x33614c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x336150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33614Cu;
        // 0x336150: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33614c) {
            ctx->pc = 0x336160u;
            goto label_336160;
        }
    }
    ctx->pc = 0x336154u;
label_336154:
    // 0x336154: 0xc0cda86  jal         func_336A18
label_336158:
    if (ctx->pc == 0x336158u) {
        ctx->pc = 0x33615Cu;
        goto label_33615c;
    }
    ctx->pc = 0x336154u;
    SET_GPR_U32(ctx, 31, 0x33615Cu);
    ctx->pc = 0x336A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A18u, 0x336154u, 0x33615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33615Cu;
label_33615c:
    // 0x33615c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x33615cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_336160:
    // 0x336160: 0xc0fba90  jal         func_3EEA40
label_336164:
    if (ctx->pc == 0x336164u) {
        ctx->pc = 0x336164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336160u;
        // 0x336164: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336168u;
        goto label_336168;
    }
    ctx->pc = 0x336160u;
    SET_GPR_U32(ctx, 31, 0x336168u);
    ctx->pc = 0x336164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336160u;
    // 0x336164: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEA40u, 0x336160u, 0x336168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336168u;
label_336168:
    // 0x336168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33616c:
    // 0x33616c: 0xc0cdb7a  jal         func_336DE8
label_336170:
    if (ctx->pc == 0x336170u) {
        ctx->pc = 0x336170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33616Cu;
        // 0x336170: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336174u;
        goto label_336174;
    }
    ctx->pc = 0x33616Cu;
    SET_GPR_U32(ctx, 31, 0x336174u);
    ctx->pc = 0x336170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33616Cu;
    // 0x336170: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DE8u, 0x33616Cu, 0x336174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336174u;
label_336174:
    // 0x336174: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x336174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_336178:
    // 0x336178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33617c:
    // 0x33617c: 0xac432c84  sw          $v1, 0x2C84($v0)
    ctx->pc = 0x33617cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11396), GPR_U32(ctx, 3));
label_336180:
    // 0x336180: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x336180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_336184:
    // 0x336184: 0x94910000  lhu         $s1, 0x0($a0)
    ctx->pc = 0x336184u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_336188:
    // 0x336188: 0x8e822c7c  lw          $v0, 0x2C7C($s4)
    ctx->pc = 0x336188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_33618c:
    // 0x33618c: 0x8c500150  lw          $s0, 0x150($v0)
    ctx->pc = 0x33618cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_336190:
    // 0x336190: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_336194:
    if (ctx->pc == 0x336194u) {
        ctx->pc = 0x336194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336190u;
        // 0x336194: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336198u;
        goto label_336198;
    }
    ctx->pc = 0x336190u;
    {
        const bool branch_taken_0x336190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336190u;
        // 0x336194: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336190) {
            ctx->pc = 0x336208u;
            goto label_336208;
        }
    }
    ctx->pc = 0x336198u;
label_336198:
    // 0x336198: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x336198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_33619c:
    // 0x33619c: 0xae020498  sw          $v0, 0x498($s0)
    ctx->pc = 0x33619cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
label_3361a0:
    // 0x3361a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3361a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3361a4:
    // 0x3361a4: 0xc0cdd6e  jal         func_3375B8
label_3361a8:
    if (ctx->pc == 0x3361A8u) {
        ctx->pc = 0x3361A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361A4u;
        // 0x3361a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3361ACu;
        goto label_3361ac;
    }
    ctx->pc = 0x3361A4u;
    SET_GPR_U32(ctx, 31, 0x3361ACu);
    ctx->pc = 0x3361A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3361A4u;
    // 0x3361a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3375B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3375B8u, 0x3361A4u, 0x3361ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3361ACu;
label_3361ac:
    // 0x3361ac: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_3361b0:
    if (ctx->pc == 0x3361B0u) {
        ctx->pc = 0x3361B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361ACu;
        // 0x3361b0: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3361B4u;
        goto label_3361b4;
    }
    ctx->pc = 0x3361ACu;
    {
        const bool branch_taken_0x3361ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3361B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361ACu;
        // 0x3361b0: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3361ac) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x3361B4u;
label_3361b4:
    // 0x3361b4: 0xc0cda86  jal         func_336A18
label_3361b8:
    if (ctx->pc == 0x3361B8u) {
        ctx->pc = 0x3361BCu;
        goto label_3361bc;
    }
    ctx->pc = 0x3361B4u;
    SET_GPR_U32(ctx, 31, 0x3361BCu);
    ctx->pc = 0x336A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A18u, 0x3361B4u, 0x3361BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3361BCu;
label_3361bc:
    // 0x3361bc: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x3361bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_3361c0:
    // 0x3361c0: 0xc0fba90  jal         func_3EEA40
label_3361c4:
    if (ctx->pc == 0x3361C4u) {
        ctx->pc = 0x3361C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361C0u;
        // 0x3361c4: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3361C8u;
        goto label_3361c8;
    }
    ctx->pc = 0x3361C0u;
    SET_GPR_U32(ctx, 31, 0x3361C8u);
    ctx->pc = 0x3361C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3361C0u;
    // 0x3361c4: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEA40u, 0x3361C0u, 0x3361C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3361C8u;
label_3361c8:
    // 0x3361c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3361c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3361cc:
    // 0x3361cc: 0xc0cdb7a  jal         func_336DE8
label_3361d0:
    if (ctx->pc == 0x3361D0u) {
        ctx->pc = 0x3361D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361CCu;
        // 0x3361d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3361D4u;
        goto label_3361d4;
    }
    ctx->pc = 0x3361CCu;
    SET_GPR_U32(ctx, 31, 0x3361D4u);
    ctx->pc = 0x3361D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3361CCu;
    // 0x3361d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DE8u, 0x3361CCu, 0x3361D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3361D4u;
label_3361d4:
    // 0x3361d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3361d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3361d8:
    // 0x3361d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3361d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3361dc:
    // 0x3361dc: 0xac432c84  sw          $v1, 0x2C84($v0)
    ctx->pc = 0x3361dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11396), GPR_U32(ctx, 3));
label_3361e0:
    // 0x3361e0: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x3361e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_3361e4:
    // 0x3361e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3361e8:
    if (ctx->pc == 0x3361E8u) {
        ctx->pc = 0x3361E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361E4u;
        // 0x3361e8: 0x94910000  lhu         $s1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3361ECu;
        goto label_3361ec;
    }
    ctx->pc = 0x3361E4u;
    {
        const bool branch_taken_0x3361e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3361E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361E4u;
        // 0x3361e8: 0x94910000  lhu         $s1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3361e4) {
            ctx->pc = 0x336208u;
            goto label_336208;
        }
    }
    ctx->pc = 0x3361ECu;
label_3361ec:
    // 0x3361ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3361f0:
    if (ctx->pc == 0x3361F0u) {
        ctx->pc = 0x3361F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361ECu;
        // 0x3361f0: 0xae402c7c  sw          $zero, 0x2C7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3361F4u;
        goto label_3361f4;
    }
    ctx->pc = 0x3361ECu;
    {
        const bool branch_taken_0x3361ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3361ec) {
            ctx->pc = 0x3361F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3361ECu;
            // 0x3361f0: 0xae402c7c  sw          $zero, 0x2C7C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 11388), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336208u;
            goto label_336208;
        }
    }
    ctx->pc = 0x3361F4u;
label_3361f4:
    // 0x3361f4: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x3361f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_3361f8:
    // 0x3361f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3361f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3361fc:
    // 0x3361fc: 0x40f809  jalr        $v0
label_336200:
    if (ctx->pc == 0x336200u) {
        ctx->pc = 0x336200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361FCu;
        // 0x336200: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336204u;
        goto label_336204;
    }
    ctx->pc = 0x3361FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x336204u);
        ctx->pc = 0x336200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361FCu;
        // 0x336200: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3361FCu, 0x336204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336204u;
label_336204:
    // 0x336204: 0xae402c7c  sw          $zero, 0x2C7C($s2)
    ctx->pc = 0x336204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11388), GPR_U32(ctx, 0));
label_336208:
    // 0x336208: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x336208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33620c:
    // 0x33620c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33620cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336210:
    // 0x336210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_336214:
    // 0x336214: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_336218:
    // 0x336218: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x336218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33621c:
    // 0x33621c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33621cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_336220:
    // 0x336220: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x336220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_336224:
    // 0x336224: 0x3e00008  jr          $ra
label_336228:
    if (ctx->pc == 0x336228u) {
        ctx->pc = 0x336228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336224u;
        // 0x336228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33622Cu;
        goto label_33622c;
    }
    ctx->pc = 0x336224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336224u;
        // 0x336228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33622Cu;
label_33622c:
    // 0x33622c: 0x0  nop
    ctx->pc = 0x33622cu;
    // NOP
    ctx->pc = 0x336230u;
}
