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

// Function: sub_002D63B8
// Address: 0x2d63b8 - 0x2d6418
void sub_002D63B8_0x2d63b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D63B8_0x2d63b8");
#endif

    ctx->pc = 0x2d63b8u;

    // 0x2d63b8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2d63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2d63bc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d63bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d63c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d63c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d63c4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d63c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d63c8: 0x4c00010  bltz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D63C8u;
    {
        const bool branch_taken_0x2d63c8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2D63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63C8u;
        // 0x2d63cc: 0x240201c4  addiu       $v0, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63c8) {
            ctx->pc = 0x2D640Cu;
            goto label_2d640c;
        }
    }
    ctx->pc = 0x2D63D0u;
    // 0x2d63d0: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x2d63d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2d63d4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x2d63d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d63d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d63d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d63dc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2d63dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d63e4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2d63e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d63e8: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D63E8u;
    {
        const bool branch_taken_0x2d63e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63E8u;
        // 0x2d63ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63e8) {
            ctx->pc = 0x2D63F4u;
            goto label_2d63f4;
        }
    }
    ctx->pc = 0x2D63F0u;
    // 0x2d63f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d63f4:
    // 0x2d63f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d63f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d63f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D63F8u;
    {
        const bool branch_taken_0x2d63f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63F8u;
        // 0x2d63fc: 0x240201c4  addiu       $v0, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63f8) {
            ctx->pc = 0x2D640Cu;
            goto label_2d640c;
        }
    }
    ctx->pc = 0x2D6400u;
    // 0x2d6400: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2d6400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d6404: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6404u;
        // 0x2d6408: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D640Cu;
label_2d640c:
    // 0x2d640c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D640Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D640Cu;
        // 0x2d6410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D640Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6414u;
    // 0x2d6414: 0x0  nop
    ctx->pc = 0x2d6414u;
    // NOP
    ctx->pc = 0x2d6418u;
}
