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

// Function: sub_00374688
// Address: 0x374688 - 0x3746b0
void sub_00374688_0x374688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374688_0x374688");
#endif

    ctx->pc = 0x374688u;

    // 0x374688: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x374688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x37468c: 0x8ca22d54  lw          $v0, 0x2D54($a1)
    ctx->pc = 0x37468cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482D54u));
    // 0x374690: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x374690u;
    {
        const bool branch_taken_0x374690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x374694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374690u;
        // 0x374694: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374690) {
            ctx->pc = 0x3746A8u;
            goto label_3746a8;
        }
    }
    ctx->pc = 0x374698u;
    // 0x374698: 0xaca42d54  sw          $a0, 0x2D54($a1)
    ctx->pc = 0x374698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11604), GPR_U32(ctx, 4));
    // 0x37469c: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x37469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954240)));
    // 0x3746a0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3746a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3746a4: 0xac62cd00  sw          $v0, -0x3300($v1)
    ctx->pc = 0x3746a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954240), GPR_U32(ctx, 2));
label_3746a8:
    // 0x3746a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3746A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3746A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3746B0u;
}
