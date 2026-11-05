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

// Function: sub_00212300
// Address: 0x212300 - 0x212320
void sub_00212300_0x212300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212300_0x212300");
#endif

    ctx->pc = 0x212300u;

    // 0x212300: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x212300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x212304: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x212304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x212308: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212308u;
    {
        const bool branch_taken_0x212308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212308u;
        // 0x21230c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212308) {
            ctx->pc = 0x212318u;
            goto label_212318;
        }
    }
    ctx->pc = 0x212310u;
    // 0x212310: 0x3e00008  jr          $ra
    ctx->pc = 0x212310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212310u;
        // 0x212314: 0xac85013c  sw          $a1, 0x13C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212318u;
label_212318:
    // 0x212318: 0x3e00008  jr          $ra
    ctx->pc = 0x212318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212318u;
        // 0x21231c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212320u;
}
