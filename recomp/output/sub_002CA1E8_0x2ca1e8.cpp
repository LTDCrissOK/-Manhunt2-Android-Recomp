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

// Function: sub_002CA1E8
// Address: 0x2ca1e8 - 0x2ca230
void sub_002CA1E8_0x2ca1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA1E8_0x2ca1e8");
#endif

    switch (ctx->pc) {
        case 0x2ca210u: goto label_2ca210;
        default: break;
    }

    ctx->pc = 0x2ca1e8u;

    // 0x2ca1e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2ca1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ca1ec: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x2ca1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x2ca1f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ca1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ca1f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ca1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ca1f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ca1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ca1fc: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2ca1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ca200: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA200u;
    {
        const bool branch_taken_0x2ca200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA200u;
        // 0x2ca204: 0x3c033fff  lui         $v1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca200) {
            ctx->pc = 0x2CA228u;
            goto label_2ca228;
        }
    }
    ctx->pc = 0x2CA208u;
    // 0x2ca208: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ca208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ca20c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2ca20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ca210:
    // 0x2ca210: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ca210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ca214: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ca214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ca218: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2ca218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ca21c: 0x0  nop
    ctx->pc = 0x2ca21cu;
    // NOP
    // 0x2ca220: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CA220u;
    {
        const bool branch_taken_0x2ca220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca220) {
            ctx->pc = 0x2CA224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA220u;
            // 0x2ca224: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca210;
        }
    }
    ctx->pc = 0x2CA228u;
label_2ca228:
    // 0x2ca228: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA228u;
        // 0x2ca22c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA230u;
}
