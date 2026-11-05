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

// Function: sub_00280E50
// Address: 0x280e50 - 0x280e98
void sub_00280E50_0x280e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280E50_0x280e50");
#endif

    switch (ctx->pc) {
        case 0x280e78u: goto label_280e78;
        case 0x280e84u: goto label_280e84;
        default: break;
    }

    ctx->pc = 0x280e50u;

    // 0x280e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x280e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x280e54: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x280e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x280e58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x280e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280e5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x280e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x280e60: 0x2450f250  addiu       $s0, $v0, -0xDB0
    ctx->pc = 0x280e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x280e64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x280e64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF254u));
    // 0x280e68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280E68u;
    {
        const bool branch_taken_0x280e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280e68) {
            ctx->pc = 0x280E7Cu;
            goto label_280e7c;
        }
    }
    ctx->pc = 0x280E70u;
    // 0x280e70: 0xc0c7a32  jal         func_31E8C8
    ctx->pc = 0x280E70u;
    SET_GPR_U32(ctx, 31, 0x280E78u);
    ctx->pc = 0x280E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280E70u;
    // 0x280e74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C8u, 0x280E70u, 0x280E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E78u;
label_280e78:
    // 0x280e78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x280e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_280e7c:
    // 0x280e7c: 0xc0a035a  jal         func_280D68
    ctx->pc = 0x280E7Cu;
    SET_GPR_U32(ctx, 31, 0x280E84u);
    ctx->pc = 0x280D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D68u, 0x280E7Cu, 0x280E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E84u;
label_280e84:
    // 0x280e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x280e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280e88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x280e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x280E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E8Cu;
        // 0x280e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280E94u;
    // 0x280e94: 0x0  nop
    ctx->pc = 0x280e94u;
    // NOP
    ctx->pc = 0x280e98u;
}
