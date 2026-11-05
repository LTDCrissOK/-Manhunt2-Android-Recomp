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

// Function: sub_00364380
// Address: 0x364380 - 0x3643c8
void sub_00364380_0x364380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364380_0x364380");
#endif

    ctx->pc = 0x364380u;

    // 0x364380: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x364380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364384: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x364384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x364388: 0x8ce60068  lw          $a2, 0x68($a3)
    ctx->pc = 0x364388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x36438c: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x36438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x364390: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x364390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x364394: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x364394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x364398: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x364398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x36439c: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x36439cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3643a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3643A0u;
    {
        const bool branch_taken_0x3643a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3643A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3643A0u;
        // 0x3643a4: 0xc53021  addu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3643a0) {
            ctx->pc = 0x3643B0u;
            goto label_3643b0;
        }
    }
    ctx->pc = 0x3643A8u;
    // 0x3643a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3643A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3643ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3643A8u;
        // 0x3643ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3643A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3643B0u;
label_3643b0:
    // 0x3643b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3643b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3643b4: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x3643b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3643b8: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x3643b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x3643bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3643BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3643C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3643BCu;
        // 0x3643c0: 0xace60068  sw          $a2, 0x68($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3643BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3643C4u;
    // 0x3643c4: 0x0  nop
    ctx->pc = 0x3643c4u;
    // NOP
    ctx->pc = 0x3643c8u;
}
