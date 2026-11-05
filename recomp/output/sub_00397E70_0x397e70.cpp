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

// Function: sub_00397E70
// Address: 0x397e70 - 0x397eb8
void sub_00397E70_0x397e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397E70_0x397e70");
#endif

    ctx->pc = 0x397e70u;

    // 0x397e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397e74: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x397e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x397e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397e7c: 0x24429208  addiu       $v0, $v0, -0x6DF8
    ctx->pc = 0x397e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939144));
    // 0x397e80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x397e80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x409208u));
    // 0x397e84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x397e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x397e88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x397e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x409208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409208u, _value); } while (0);
    // 0x397e8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x397e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x409208u));
    // 0x397e90: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x397E90u;
    {
        const bool branch_taken_0x397e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x397E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E90u;
        // 0x397e94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397e90) {
            ctx->pc = 0x397EB0u;
            goto label_397eb0;
        }
    }
    ctx->pc = 0x397E98u;
    // 0x397e98: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x397e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x397e9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ea0: 0x24849220  addiu       $a0, $a0, -0x6DE0
    ctx->pc = 0x397ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939168));
    // 0x397ea4: 0x24060ac0  addiu       $a2, $zero, 0xAC0
    ctx->pc = 0x397ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
    // 0x397ea8: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x397EA8u;
    ctx->pc = 0x397EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397EA8u;
    // 0x397eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x397EB0u;
label_397eb0:
    // 0x397eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x397EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397EB0u;
        // 0x397eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397EB8u;
}
