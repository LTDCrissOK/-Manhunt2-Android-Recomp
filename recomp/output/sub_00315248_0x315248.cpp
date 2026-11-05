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

// Function: sub_00315248
// Address: 0x315248 - 0x315270
void sub_00315248_0x315248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315248_0x315248");
#endif

    ctx->pc = 0x315248u;

    // 0x315248: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x315248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31524c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x31524cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x315250: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x315250u;
    {
        const bool branch_taken_0x315250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315250u;
        // 0x315254: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315250) {
            ctx->pc = 0x315260u;
            goto label_315260;
        }
    }
    ctx->pc = 0x315258u;
    // 0x315258: 0x3e00008  jr          $ra
    ctx->pc = 0x315258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315258u;
        // 0x31525c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315260u;
label_315260:
    // 0x315260: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x315260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x315264: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x315264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x315268: 0x3e00008  jr          $ra
    ctx->pc = 0x315268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315268u;
        // 0x31526c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315270u;
}
