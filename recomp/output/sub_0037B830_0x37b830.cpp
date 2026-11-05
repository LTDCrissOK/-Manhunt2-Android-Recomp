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

// Function: sub_0037B830
// Address: 0x37b830 - 0x37b868
void sub_0037B830_0x37b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B830_0x37b830");
#endif

    switch (ctx->pc) {
        case 0x37b858u: goto label_37b858;
        default: break;
    }

    ctx->pc = 0x37b830u;

    // 0x37b830: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x37b830u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37b834: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37b834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37b838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b83c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x37b83cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x37b840: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x37b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x37b844: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x37b844u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37b848: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x37b848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x37b84c: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x37b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x37b850: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x37B850u;
    SET_GPR_U32(ctx, 31, 0x37B858u);
    ctx->pc = 0x37B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B850u;
    // 0x37b854: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x37B850u, 0x37B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B858u;
label_37b858:
    // 0x37b858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b85c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B85Cu;
        // 0x37b860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B864u;
    // 0x37b864: 0x0  nop
    ctx->pc = 0x37b864u;
    // NOP
    ctx->pc = 0x37b868u;
}
