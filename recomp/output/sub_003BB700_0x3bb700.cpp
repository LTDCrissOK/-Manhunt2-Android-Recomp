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

// Function: sub_003BB700
// Address: 0x3bb700 - 0x3bb730
void sub_003BB700_0x3bb700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB700_0x3bb700");
#endif

    ctx->pc = 0x3bb700u;

    // 0x3bb700: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3bb700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3bb704: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3bb704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3bb708: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3bb708u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3bb70c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3bb70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3bb710: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3BB710u;
    {
        const bool branch_taken_0x3bb710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb710) {
            ctx->pc = 0x3BB714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB710u;
            // 0x3bb714: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB718u;
            goto label_3bb718;
        }
    }
    ctx->pc = 0x3BB718u;
label_3bb718:
    // 0x3bb718: 0x1012  mflo        $v0
    ctx->pc = 0x3bb718u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3bb71c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x3bb71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3bb720: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3bb720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bb724: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB724u;
        // 0x3bb728: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB72Cu;
    // 0x3bb72c: 0x0  nop
    ctx->pc = 0x3bb72cu;
    // NOP
    ctx->pc = 0x3bb730u;
}
