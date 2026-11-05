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

// Function: sub_001CF9D8
// Address: 0x1cf9d8 - 0x1cfa18
void sub_001CF9D8_0x1cf9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF9D8_0x1cf9d8");
#endif

    ctx->pc = 0x1cf9d8u;

    // 0x1cf9d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1cf9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cf9dc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF9DCu;
    {
        const bool branch_taken_0x1cf9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf9dc) {
            ctx->pc = 0x1CF9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF9DCu;
            // 0x1cf9e0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF9F0u;
            goto label_1cf9f0;
        }
    }
    ctx->pc = 0x1CF9E4u;
    // 0x1cf9e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cf9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cf9e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cf9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1cf9ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cf9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf9f0:
    // 0x1cf9f0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF9F0u;
    {
        const bool branch_taken_0x1cf9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf9f0) {
            ctx->pc = 0x1CF9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF9F0u;
            // 0x1cf9f4: 0x9482002a  lhu         $v0, 0x2A($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFA04u;
            goto label_1cfa04;
        }
    }
    ctx->pc = 0x1CF9F8u;
    // 0x1cf9f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cf9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cf9fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1cf9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1cfa00: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1cfa00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_1cfa04:
    // 0x1cfa04: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1cfa04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1cfa08: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x1cfa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x1cfa0c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cfa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1cfa10: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA10u;
        // 0x1cfa14: 0xa482002a  sh          $v0, 0x2A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFA18u;
}
