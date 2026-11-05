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

// Function: sub_001E5FF8
// Address: 0x1e5ff8 - 0x1e6030
void sub_001E5FF8_0x1e5ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5FF8_0x1e5ff8");
#endif

    ctx->pc = 0x1e5ff8u;

    // 0x1e5ff8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e5ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6000: 0x8c4291e0  lw          $v0, -0x6E20($v0)
    ctx->pc = 0x1e6000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91E0u));
    // 0x1e6004: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6004u;
    {
        const bool branch_taken_0x1e6004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6004) {
            ctx->pc = 0x1E6008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6004u;
            // 0x1e6008: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6014u;
            goto label_1e6014;
        }
    }
    ctx->pc = 0x1E600Cu;
    // 0x1e600c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E600Cu;
        // 0x1e6010: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E600Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6014u;
label_1e6014:
    // 0x1e6014: 0x8c4391dc  lw          $v1, -0x6E24($v0)
    ctx->pc = 0x1e6014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939100)));
    // 0x1e6018: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e6018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e601c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1e601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e6020: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x1e6020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x1e6024: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6024u;
        // 0x1e6028: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E602Cu;
    // 0x1e602c: 0x0  nop
    ctx->pc = 0x1e602cu;
    // NOP
    ctx->pc = 0x1e6030u;
}
