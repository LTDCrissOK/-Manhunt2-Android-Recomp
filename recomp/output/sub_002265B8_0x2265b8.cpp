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

// Function: sub_002265B8
// Address: 0x2265b8 - 0x2265f8
void sub_002265B8_0x2265b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002265B8_0x2265b8");
#endif

    ctx->pc = 0x2265b8u;

    // 0x2265b8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2265b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2265bc: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x2265bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x2265c0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2265c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2265c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2265C4u;
    {
        const bool branch_taken_0x2265c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2265C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265C4u;
        // 0x2265c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265c4) {
            ctx->pc = 0x2265F0u;
            goto label_2265f0;
        }
    }
    ctx->pc = 0x2265CCu;
    // 0x2265cc: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x2265ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2265d0: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2265d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2265d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2265D4u;
    {
        const bool branch_taken_0x2265d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2265d4) {
            ctx->pc = 0x2265F0u;
            goto label_2265f0;
        }
    }
    ctx->pc = 0x2265DCu;
    // 0x2265dc: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2265dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2265e0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2265e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2265e4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2265e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2265e8: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x2265e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x2265ec: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2265ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2265f0:
    // 0x2265f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2265F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2265F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265F0u;
        // 0x2265f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2265F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2265F8u;
}
