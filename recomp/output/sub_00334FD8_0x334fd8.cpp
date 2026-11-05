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

// Function: sub_00334FD8
// Address: 0x334fd8 - 0x335108
void sub_00334FD8_0x334fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334FD8_0x334fd8");
#endif

    switch (ctx->pc) {
        case 0x335008u: goto label_335008;
        case 0x33501cu: goto label_33501c;
        case 0x335030u: goto label_335030;
        case 0x335048u: goto label_335048;
        case 0x335054u: goto label_335054;
        case 0x335064u: goto label_335064;
        case 0x33507cu: goto label_33507c;
        case 0x335098u: goto label_335098;
        case 0x3350c0u: goto label_3350c0;
        default: break;
    }

    ctx->pc = 0x334fd8u;

    // 0x334fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x334fdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334fe0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x334fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x334fe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x334fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334fec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x334fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334ff4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x334ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x334ff8: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x334FF8u;
    {
        const bool branch_taken_0x334ff8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x334FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FF8u;
        // 0x334ffc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ff8) {
            ctx->pc = 0x3350E4u;
            goto label_3350e4;
        }
    }
    ctx->pc = 0x335000u;
    // 0x335000: 0xc0cd984  jal         func_336610
    ctx->pc = 0x335000u;
    SET_GPR_U32(ctx, 31, 0x335008u);
    ctx->pc = 0x335004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335000u;
    // 0x335004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x335000u, 0x335008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335008u;
label_335008:
    // 0x335008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x335008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33500c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x33500Cu;
    {
        const bool branch_taken_0x33500c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x335010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33500Cu;
        // 0x335010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33500c) {
            ctx->pc = 0x335074u;
            goto label_335074;
        }
    }
    ctx->pc = 0x335014u;
    // 0x335014: 0xc0cd5bc  jal         func_3356F0
    ctx->pc = 0x335014u;
    SET_GPR_U32(ctx, 31, 0x33501Cu);
    ctx->pc = 0x335018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335014u;
    // 0x335018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3356F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356F0u, 0x335014u, 0x33501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33501Cu;
label_33501c:
    // 0x33501c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33501cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335020: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x335020u;
    {
        const bool branch_taken_0x335020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335020u;
        // 0x335024: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335020) {
            ctx->pc = 0x335084u;
            goto label_335084;
        }
    }
    ctx->pc = 0x335028u;
    // 0x335028: 0xc0cdd5c  jal         func_337570
    ctx->pc = 0x335028u;
    SET_GPR_U32(ctx, 31, 0x335030u);
    ctx->pc = 0x33502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335028u;
    // 0x33502c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337570u, 0x335028u, 0x335030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335030u;
label_335030:
    // 0x335030: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x335030u;
    {
        const bool branch_taken_0x335030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335030u;
        // 0x335034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335030) {
            ctx->pc = 0x3350E8u;
            goto label_3350e8;
        }
    }
    ctx->pc = 0x335038u;
    // 0x335038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33503c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335040: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x335040u;
    {
        const bool branch_taken_0x335040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335040u;
        // 0x335044: 0xae030498  sw          $v1, 0x498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335040) {
            ctx->pc = 0x3350E8u;
            goto label_3350e8;
        }
    }
    ctx->pc = 0x335048u;
label_335048:
    // 0x335048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x335048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33504c: 0xc0c9c78  jal         func_3271E0
    ctx->pc = 0x33504Cu;
    SET_GPR_U32(ctx, 31, 0x335054u);
    ctx->pc = 0x335050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33504Cu;
    // 0x335050: 0x8ca600f8  lw          $a2, 0xF8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3271E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3271E0u, 0x33504Cu, 0x335054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335054u;
label_335054:
    // 0x335054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x335054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x335058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33505c: 0xc0fba6c  jal         func_3EE9B0
    ctx->pc = 0x33505Cu;
    SET_GPR_U32(ctx, 31, 0x335064u);
    ctx->pc = 0x335060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33505Cu;
    // 0x335060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE9B0u, 0x33505Cu, 0x335064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335064u;
label_335064:
    // 0x335064: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x335064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x335068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33506c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33506Cu;
    {
        const bool branch_taken_0x33506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33506Cu;
        // 0x335070: 0xae020498  sw          $v0, 0x498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33506c) {
            ctx->pc = 0x3350E8u;
            goto label_3350e8;
        }
    }
    ctx->pc = 0x335074u;
label_335074:
    // 0x335074: 0xc0cd952  jal         func_336548
    ctx->pc = 0x335074u;
    SET_GPR_U32(ctx, 31, 0x33507Cu);
    ctx->pc = 0x336548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336548u, 0x335074u, 0x33507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33507Cu;
label_33507c:
    // 0x33507c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33507cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335080: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x335080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_335084:
    // 0x335084: 0x24446e70  addiu       $a0, $v0, 0x6E70
    ctx->pc = 0x335084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x335088: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x335088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33508c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x33508cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x335090: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x335090u;
    {
        const bool branch_taken_0x335090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335090u;
        // 0x335094: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335090) {
            ctx->pc = 0x3350C8u;
            goto label_3350c8;
        }
    }
    ctx->pc = 0x335098u;
label_335098:
    // 0x335098: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335098u;
    {
        const bool branch_taken_0x335098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335098u;
        // 0x33509c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335098) {
            ctx->pc = 0x3350A4u;
            goto label_3350a4;
        }
    }
    ctx->pc = 0x3350A0u;
    // 0x3350a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3350a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3350a4:
    // 0x3350a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3350A4u;
    {
        const bool branch_taken_0x3350a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3350a4) {
            ctx->pc = 0x3350A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3350A4u;
            // 0x3350a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3350B8u;
            goto label_3350b8;
        }
    }
    ctx->pc = 0x3350ACu;
    // 0x3350ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3350acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3350b0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3350b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3350b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3350b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3350b8:
    // 0x3350b8: 0xc0c9d3e  jal         func_3274F8
    ctx->pc = 0x3350B8u;
    SET_GPR_U32(ctx, 31, 0x3350C0u);
    ctx->pc = 0x3350BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350B8u;
    // 0x3350bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3274F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3274F8u, 0x3350B8u, 0x3350C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350C0u;
label_3350c0:
    // 0x3350c0: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3350C0u;
    {
        const bool branch_taken_0x3350c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3350c0) {
            ctx->pc = 0x3350C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3350C0u;
            // 0x3350c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335048;
        }
    }
    ctx->pc = 0x3350C8u;
label_3350c8:
    // 0x3350c8: 0x26846e70  addiu       $a0, $s4, 0x6E70
    ctx->pc = 0x3350c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 28272));
    // 0x3350cc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3350ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3350d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3350D0u;
    {
        const bool branch_taken_0x3350d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3350D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350D0u;
        // 0x3350d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3350d0) {
            ctx->pc = 0x3350DCu;
            goto label_3350dc;
        }
    }
    ctx->pc = 0x3350D8u;
    // 0x3350d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3350d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3350dc:
    // 0x3350dc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3350DCu;
    {
        const bool branch_taken_0x3350dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3350dc) {
            ctx->pc = 0x335098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335098;
        }
    }
    ctx->pc = 0x3350E4u;
label_3350e4:
    // 0x3350e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3350e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3350e8:
    // 0x3350e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3350e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3350ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3350ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3350f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3350f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3350f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3350f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3350f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3350f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3350fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3350fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x335100: 0x3e00008  jr          $ra
    ctx->pc = 0x335100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335100u;
        // 0x335104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335108u;
}
