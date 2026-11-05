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

// Function: sub_002D6480
// Address: 0x2d6480 - 0x2d64d0
void sub_002D6480_0x2d6480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6480_0x2d6480");
#endif

    switch (ctx->pc) {
        case 0x2d6488u: goto label_2d6488;
        case 0x2d64b0u: goto label_2d64b0;
        default: break;
    }

    ctx->pc = 0x2d6480u;

    // 0x2d6480: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6480u;
    {
        const bool branch_taken_0x2d6480 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6480u;
        // 0x2d6484: 0x24020118  addiu       $v0, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6480) {
            ctx->pc = 0x2D6490u;
            goto label_2d6490;
        }
    }
    ctx->pc = 0x2D6488u;
label_2d6488:
    // 0x2d6488: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6488u;
        // 0x2d648c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6490u;
label_2d6490:
    // 0x2d6490: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x2d6490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d6494: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2d6494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d6498: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2d6498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d649c: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2d649cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d64a0: 0x18e00009  blez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D64A0u;
    {
        const bool branch_taken_0x2d64a0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2D64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64A0u;
        // 0x2d64a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d64a0) {
            ctx->pc = 0x2D64C8u;
            goto label_2d64c8;
        }
    }
    ctx->pc = 0x2D64A8u;
    // 0x2d64a8: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x2d64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2d64ac: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2d64acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2d64b0:
    // 0x2d64b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d64b4: 0x1046fff4  beq         $v0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D64B4u;
    {
        const bool branch_taken_0x2d64b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2D64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64B4u;
        // 0x2d64b8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d64b4) {
            ctx->pc = 0x2D6488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6488;
        }
    }
    ctx->pc = 0x2D64BCu;
    // 0x2d64bc: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x2d64bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d64c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D64C0u;
    {
        const bool branch_taken_0x2d64c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64C0u;
        // 0x2d64c4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d64c0) {
            ctx->pc = 0x2D64B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d64b0;
        }
    }
    ctx->pc = 0x2D64C8u;
label_2d64c8:
    // 0x2d64c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D64C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64C8u;
        // 0x2d64cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D64C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D64D0u;
}
