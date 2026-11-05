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

// Function: sub_003A34F8
// Address: 0x3a34f8 - 0x3a3530
void sub_003A34F8_0x3a34f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A34F8_0x3a34f8");
#endif

    ctx->pc = 0x3a34f8u;

    // 0x3a34f8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a34fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a34fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a3500: 0x8c431e3c  lw          $v1, 0x1E3C($v0)
    ctx->pc = 0x3a3500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411E3Cu));
    // 0x3a3504: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a3504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3508: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3508u;
    {
        const bool branch_taken_0x3a3508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3508u;
        // 0x3a350c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3508) {
            ctx->pc = 0x3A3520u;
            goto label_3a3520;
        }
    }
    ctx->pc = 0x3A3510u;
    // 0x3a3510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3514: 0x80eb280  j           func_3ACA00
    ctx->pc = 0x3A3514u;
    ctx->pc = 0x3A3518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3514u;
    // 0x3a3518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA00u;
    sub_003ACA00_0x3aca00(rdram, ctx, runtime); return;
    ctx->pc = 0x3A351Cu;
    // 0x3a351c: 0x0  nop
    ctx->pc = 0x3a351cu;
    // NOP
label_3a3520:
    // 0x3a3520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3524: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3524u;
        // 0x3a3528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A352Cu;
    // 0x3a352c: 0x0  nop
    ctx->pc = 0x3a352cu;
    // NOP
    ctx->pc = 0x3a3530u;
}
