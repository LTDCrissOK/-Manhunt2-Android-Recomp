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

// Function: sub_003AAAB0
// Address: 0x3aaab0 - 0x3aab00
void sub_003AAAB0_0x3aaab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAAB0_0x3aaab0");
#endif

    ctx->pc = 0x3aaab0u;

    // 0x3aaab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aaab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aaab4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3aaab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3aaab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aaab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aaabc: 0x2463d970  addiu       $v1, $v1, -0x2690
    ctx->pc = 0x3aaabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957424));
    // 0x3aaac0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3aaac0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D970u));
    // 0x3aaac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3aaac8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AAAC8u;
    {
        const bool branch_taken_0x3aaac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAC8u;
        // 0x3aaacc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaac8) {
            ctx->pc = 0x3AAAF0u;
            goto label_3aaaf0;
        }
    }
    ctx->pc = 0x3AAAD0u;
    // 0x3aaad0: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3aaad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3aaad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aaad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aaad8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aaad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaadc: 0x2484d978  addiu       $a0, $a0, -0x2688
    ctx->pc = 0x3aaadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957432));
    // 0x3aaae0: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x3aaae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3aaae4: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3AAAE4u;
    ctx->pc = 0x3AAAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAAE4u;
    // 0x3aaae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAAECu;
    // 0x3aaaec: 0x0  nop
    ctx->pc = 0x3aaaecu;
    // NOP
label_3aaaf0:
    // 0x3aaaf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aaaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aaaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AAAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAF4u;
        // 0x3aaaf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AAAFCu;
    // 0x3aaafc: 0x0  nop
    ctx->pc = 0x3aaafcu;
    // NOP
    ctx->pc = 0x3aab00u;
}
