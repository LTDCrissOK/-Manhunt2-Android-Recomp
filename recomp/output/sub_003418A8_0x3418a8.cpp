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

// Function: sub_003418A8
// Address: 0x3418a8 - 0x3418f8
void sub_003418A8_0x3418a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003418A8_0x3418a8");
#endif

    switch (ctx->pc) {
        case 0x3418c0u: goto label_3418c0;
        default: break;
    }

    ctx->pc = 0x3418a8u;

    // 0x3418a8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x3418a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x3418ac: 0x248502b0  addiu       $a1, $a0, 0x2B0
    ctx->pc = 0x3418acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x3418b0: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x3418b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x3418b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3418b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3418b8: 0x24662a00  addiu       $a2, $v1, 0x2A00
    ctx->pc = 0x3418b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x3418bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3418bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B8BF8u));
label_3418c0:
    // 0x3418c0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3418C0u;
    {
        const bool branch_taken_0x3418c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3418c0) {
            ctx->pc = 0x3418C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3418C0u;
            // 0x3418c4: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3418E0u;
            goto label_3418e0;
        }
    }
    ctx->pc = 0x3418C8u;
    // 0x3418c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3418c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3418cc: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3418CCu;
    {
        const bool branch_taken_0x3418cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3418cc) {
            ctx->pc = 0x3418D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3418CCu;
            // 0x3418d0: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3418E0u;
            goto label_3418e0;
        }
    }
    ctx->pc = 0x3418D4u;
    // 0x3418d4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3418d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3418d8: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x3418d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3418dc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x3418dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3418e0:
    // 0x3418e0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x3418e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3418e4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3418E4u;
    {
        const bool branch_taken_0x3418e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3418e4) {
            ctx->pc = 0x3418E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3418E4u;
            // 0x3418e8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3418C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3418c0;
        }
    }
    ctx->pc = 0x3418ECu;
    // 0x3418ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3418ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3418ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3418F4u;
    // 0x3418f4: 0x0  nop
    ctx->pc = 0x3418f4u;
    // NOP
    ctx->pc = 0x3418f8u;
}
