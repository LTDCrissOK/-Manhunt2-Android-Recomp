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

// Function: sub_002D60C0
// Address: 0x2d60c0 - 0x2d6190
void sub_002D60C0_0x2d60c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D60C0_0x2d60c0");
#endif

    switch (ctx->pc) {
        case 0x2d6108u: goto label_2d6108;
        case 0x2d6148u: goto label_2d6148;
        default: break;
    }

    ctx->pc = 0x2d60c0u;

    // 0x2d60c0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2d60c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60c4: 0x240601c4  addiu       $a2, $zero, 0x1C4
    ctx->pc = 0x2d60c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d60c8: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x2d60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2d60cc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d60ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d60d0: 0x8d040028  lw          $a0, 0x28($t0)
    ctx->pc = 0x2d60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x2d60d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d60d8: 0x8d05002c  lw          $a1, 0x2C($t0)
    ctx->pc = 0x2d60d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x2d60dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d60e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d60e4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2d60e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d60e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d60ec: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2d60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d60f0: 0x14670002  bne         $v1, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D60F0u;
    {
        const bool branch_taken_0x2d60f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60F0u;
        // 0x2d60f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60f0) {
            ctx->pc = 0x2D60FCu;
            goto label_2d60fc;
        }
    }
    ctx->pc = 0x2D60F8u;
    // 0x2d60f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d60fc:
    // 0x2d60fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d60fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d6100: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6100u;
    {
        const bool branch_taken_0x2d6100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6100) {
            ctx->pc = 0x2D6104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6100u;
            // 0x2d6104: 0x8d030024  lw          $v1, 0x24($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6110u;
            goto label_2d6110;
        }
    }
    ctx->pc = 0x2D6108u;
label_2d6108:
    // 0x2d6108: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6108u;
        // 0x2d610c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6110u;
label_2d6110:
    // 0x2d6110: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x2d6110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d6114: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x2d6114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2d6118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d611c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2d611cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d6120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d6120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6124: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2d6124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d6128: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D6128u;
    {
        const bool branch_taken_0x2d6128 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6128u;
        // 0x2d612c: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6128) {
            ctx->pc = 0x2D6188u;
            goto label_2d6188;
        }
    }
    ctx->pc = 0x2D6130u;
    // 0x2d6130: 0x8d0a002c  lw          $t2, 0x2C($t0)
    ctx->pc = 0x2d6130u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x2d6134: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2d6134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6138: 0x8d040028  lw          $a0, 0x28($t0)
    ctx->pc = 0x2d6138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x2d613c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d613cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6140: 0x240901c4  addiu       $t1, $zero, 0x1C4
    ctx->pc = 0x2d6140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d6144: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2d6144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6148:
    // 0x2d6148: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d6148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d614c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d614cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6150: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d6150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d6154: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d6154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6158: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x2d6158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d615c: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x2d615cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2d6160: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d6160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d6164: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D6164u;
    {
        const bool branch_taken_0x2d6164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2D6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6164u;
        // 0x2d6168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6164) {
            ctx->pc = 0x2D6170u;
            goto label_2d6170;
        }
    }
    ctx->pc = 0x2D616Cu;
    // 0x2d616c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6170:
    // 0x2d6170: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d6170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d6174: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2D6174u;
    {
        const bool branch_taken_0x2d6174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6174u;
        // 0x2d6178: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6174) {
            ctx->pc = 0x2D6108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6108;
        }
    }
    ctx->pc = 0x2D617Cu;
    // 0x2d617c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2d617cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d6180: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D6180u;
    {
        const bool branch_taken_0x2d6180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6180u;
        // 0x2d6184: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6180) {
            ctx->pc = 0x2D6148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6148;
        }
    }
    ctx->pc = 0x2D6188u;
label_2d6188:
    // 0x2d6188: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6188u;
        // 0x2d618c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6190u;
}
