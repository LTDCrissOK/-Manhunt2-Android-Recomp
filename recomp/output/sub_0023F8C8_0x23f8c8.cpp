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

// Function: sub_0023F8C8
// Address: 0x23f8c8 - 0x23f908
void sub_0023F8C8_0x23f8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F8C8_0x23f8c8");
#endif

    ctx->pc = 0x23f8c8u;

    // 0x23f8c8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x23f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x23f8cc: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x23f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x23f8d0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x23f8d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F8D4u;
    {
        const bool branch_taken_0x23f8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8D4u;
        // 0x23f8d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8d4) {
            ctx->pc = 0x23F8F4u;
            goto label_23f8f4;
        }
    }
    ctx->pc = 0x23F8DCu;
    // 0x23f8dc: 0x8c8211e8  lw          $v0, 0x11E8($a0)
    ctx->pc = 0x23f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4584)));
    // 0x23f8e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F8E0u;
    {
        const bool branch_taken_0x23f8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f8e0) {
            ctx->pc = 0x23F8F4u;
            goto label_23f8f4;
        }
    }
    ctx->pc = 0x23F8E8u;
    // 0x23f8e8: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x23f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x23f8ec: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x23f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x23f8f0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x23f8f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23f8f4:
    // 0x23f8f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F8F4u;
    {
        const bool branch_taken_0x23f8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8F4u;
        // 0x23f8f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8f4) {
            ctx->pc = 0x23F900u;
            goto label_23f900;
        }
    }
    ctx->pc = 0x23F8FCu;
    // 0x23f8fc: 0xac8204f4  sw          $v0, 0x4F4($a0)
    ctx->pc = 0x23f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1268), GPR_U32(ctx, 2));
label_23f900:
    // 0x23f900: 0x3e00008  jr          $ra
    ctx->pc = 0x23F900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F908u;
}
