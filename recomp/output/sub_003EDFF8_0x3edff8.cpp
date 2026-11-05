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

// Function: sub_003EDFF8
// Address: 0x3edff8 - 0x3ee020
void sub_003EDFF8_0x3edff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDFF8_0x3edff8");
#endif

    ctx->pc = 0x3edff8u;

    // 0x3edff8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x3edff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x3edffc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDFFCu;
    {
        const bool branch_taken_0x3edffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDFFCu;
        // 0x3ee000: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edffc) {
            ctx->pc = 0x3EE00Cu;
            goto label_3ee00c;
        }
    }
    ctx->pc = 0x3EE004u;
    // 0x3ee004: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE004u;
        // 0x3ee008: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE00Cu;
label_3ee00c:
    // 0x3ee00c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3ee00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x3ee010: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ee010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3ee014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ee014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee018: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE020u;
}
