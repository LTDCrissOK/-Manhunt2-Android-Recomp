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

// Function: sub_00318280
// Address: 0x318280 - 0x3182b0
void sub_00318280_0x318280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318280_0x318280");
#endif

    switch (ctx->pc) {
        case 0x31829cu: goto label_31829c;
        default: break;
    }

    ctx->pc = 0x318280u;

    // 0x318280: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x318280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x318284: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x318284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x318288: 0x8c44bd3c  lw          $a0, -0x42C4($v0)
    ctx->pc = 0x318288u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD3Cu));
    // 0x31828c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31828Cu;
    {
        const bool branch_taken_0x31828c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x318290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31828Cu;
        // 0x318290: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31828c) {
            ctx->pc = 0x31829Cu;
            goto label_31829c;
        }
    }
    ctx->pc = 0x318294u;
    // 0x318294: 0xc0c8918  jal         func_322460
    ctx->pc = 0x318294u;
    SET_GPR_U32(ctx, 31, 0x31829Cu);
    ctx->pc = 0x318298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318294u;
    // 0x318298: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322460u, 0x318294u, 0x31829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31829Cu;
label_31829c:
    // 0x31829c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31829cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3182a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3182A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3182A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182A0u;
        // 0x3182a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3182A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3182A8u;
    // 0x3182a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3182a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3182ac: 0x0  nop
    ctx->pc = 0x3182acu;
    // NOP
    ctx->pc = 0x3182b0u;
}
