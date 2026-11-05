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

// Function: sub_0036FC30
// Address: 0x36fc30 - 0x36fc88
void sub_0036FC30_0x36fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FC30_0x36fc30");
#endif

    switch (ctx->pc) {
        case 0x36fc44u: goto label_36fc44;
        default: break;
    }

    ctx->pc = 0x36fc30u;

    // 0x36fc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fc34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36fc3c: 0xc0dbe8c  jal         func_36FA30
    ctx->pc = 0x36FC3Cu;
    SET_GPR_U32(ctx, 31, 0x36FC44u);
    ctx->pc = 0x36FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC3Cu;
    // 0x36fc40: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA30u, 0x36FC3Cu, 0x36FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC44u;
label_36fc44:
    // 0x36fc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36fc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x36FC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC48u;
        // 0x36fc4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FC50u;
    // 0x36fc50: 0x24e20000  addiu       $v0, $a3, 0x0
    ctx->pc = 0x36fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x36fc54: 0x0  nop
    ctx->pc = 0x36fc54u;
    // NOP
    // 0x36fc58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36fc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36fc5c: 0x0  nop
    ctx->pc = 0x36fc5cu;
    // NOP
    // 0x36fc60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36fc64: 0x0  nop
    ctx->pc = 0x36fc64u;
    // NOP
    // 0x36fc68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36fc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36fc6c: 0x0  nop
    ctx->pc = 0x36fc6cu;
    // NOP
    // 0x36fc70: 0x27bd0220  addiu       $sp, $sp, 0x220
    ctx->pc = 0x36fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x36fc74: 0x0  nop
    ctx->pc = 0x36fc74u;
    // NOP
    // 0x36fc78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36fc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36fc7c: 0x0  nop
    ctx->pc = 0x36fc7cu;
    // NOP
    // 0x36fc80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36fc84: 0x0  nop
    ctx->pc = 0x36fc84u;
    // NOP
    ctx->pc = 0x36fc88u;
}
