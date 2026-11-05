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

// Function: sub_0020E4E0
// Address: 0x20e4e0 - 0x20e508
void sub_0020E4E0_0x20e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E4E0_0x20e4e0");
#endif

    ctx->pc = 0x20e4e0u;

    // 0x20e4e0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E4E0u;
    {
        const bool branch_taken_0x20e4e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4E0u;
        // 0x20e4e4: 0x90820116  lbu         $v0, 0x116($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4e0) {
            ctx->pc = 0x20E4F8u;
            goto label_20e4f8;
        }
    }
    ctx->pc = 0x20E4E8u;
    // 0x20e4e8: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x20e4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x20e4ec: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x20e4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x20e4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4F0u;
        // 0x20e4f4: 0xa0820116  sb          $v0, 0x116($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 278), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E4F8u;
label_20e4f8:
    // 0x20e4f8: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x20e4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x20e4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x20E4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4FCu;
        // 0x20e500: 0xa0820116  sb          $v0, 0x116($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 278), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E504u;
    // 0x20e504: 0x0  nop
    ctx->pc = 0x20e504u;
    // NOP
    ctx->pc = 0x20e508u;
}
