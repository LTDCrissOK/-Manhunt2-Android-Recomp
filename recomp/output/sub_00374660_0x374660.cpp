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

// Function: sub_00374660
// Address: 0x374660 - 0x374688
void sub_00374660_0x374660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374660_0x374660");
#endif

    ctx->pc = 0x374660u;

    // 0x374660: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x374660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x374664: 0x8ca2cd0c  lw          $v0, -0x32F4($a1)
    ctx->pc = 0x374664u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD0Cu));
    // 0x374668: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x374668u;
    {
        const bool branch_taken_0x374668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374668u;
        // 0x37466c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374668) {
            ctx->pc = 0x374680u;
            goto label_374680;
        }
    }
    ctx->pc = 0x374670u;
    // 0x374670: 0xaca4cd0c  sw          $a0, -0x32F4($a1)
    ctx->pc = 0x374670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954252), GPR_U32(ctx, 4));
    // 0x374674: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x374674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954240)));
    // 0x374678: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x374678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x37467c: 0xac62cd00  sw          $v0, -0x3300($v1)
    ctx->pc = 0x37467cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954240), GPR_U32(ctx, 2));
label_374680:
    // 0x374680: 0x3e00008  jr          $ra
    ctx->pc = 0x374680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374688u;
}
