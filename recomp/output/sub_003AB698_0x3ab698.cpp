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

// Function: sub_003AB698
// Address: 0x3ab698 - 0x3ab6e8
void sub_003AB698_0x3ab698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB698_0x3ab698");
#endif

    ctx->pc = 0x3ab698u;

    // 0x3ab698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab69c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3ab69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3ab6a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ab6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ab6a4: 0x246319a8  addiu       $v1, $v1, 0x19A8
    ctx->pc = 0x3ab6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6568));
    // 0x3ab6a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ab6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4219A8u));
    // 0x3ab6ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ab6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ab6b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AB6B0u;
    {
        const bool branch_taken_0x3ab6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6B0u;
        // 0x3ab6b4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6b0) {
            ctx->pc = 0x3AB6D8u;
            goto label_3ab6d8;
        }
    }
    ctx->pc = 0x3AB6B8u;
    // 0x3ab6b8: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3ab6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3ab6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ab6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab6c4: 0x248419b0  addiu       $a0, $a0, 0x19B0
    ctx->pc = 0x3ab6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6576));
    // 0x3ab6c8: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x3ab6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x3ab6cc: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3AB6CCu;
    ctx->pc = 0x3AB6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB6CCu;
    // 0x3ab6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB6D4u;
    // 0x3ab6d4: 0x0  nop
    ctx->pc = 0x3ab6d4u;
    // NOP
label_3ab6d8:
    // 0x3ab6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6DCu;
        // 0x3ab6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB6E4u;
    // 0x3ab6e4: 0x0  nop
    ctx->pc = 0x3ab6e4u;
    // NOP
    ctx->pc = 0x3ab6e8u;
}
