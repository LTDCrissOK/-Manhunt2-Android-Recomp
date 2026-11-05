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

// Function: sub_003CFD18
// Address: 0x3cfd18 - 0x3cfd60
void sub_003CFD18_0x3cfd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CFD18_0x3cfd18");
#endif

    switch (ctx->pc) {
        case 0x3cfd2cu: goto label_3cfd2c;
        default: break;
    }

    ctx->pc = 0x3cfd18u;

    // 0x3cfd18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cfd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3cfd1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cfd1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfd20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cfd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cfd24: 0xc0f3ebc  jal         func_3CFAF0
    ctx->pc = 0x3CFD24u;
    SET_GPR_U32(ctx, 31, 0x3CFD2Cu);
    ctx->pc = 0x3CFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFD24u;
    // 0x3cfd28: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CFAF0u, 0x3CFD24u, 0x3CFD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFD2Cu;
label_3cfd2c:
    // 0x3cfd2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cfd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cfd30: 0x3e00008  jr          $ra
    ctx->pc = 0x3CFD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFD30u;
        // 0x3cfd34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CFD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CFD38u;
    // 0x3cfd38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3cfd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cfd3c: 0x0  nop
    ctx->pc = 0x3cfd3cu;
    // NOP
    // 0x3cfd40: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3cfd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3cfd44: 0x0  nop
    ctx->pc = 0x3cfd44u;
    // NOP
    // 0x3cfd48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3cfd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cfd4c: 0x0  nop
    ctx->pc = 0x3cfd4cu;
    // NOP
    // 0x3cfd50: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3cfd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3cfd54: 0x0  nop
    ctx->pc = 0x3cfd54u;
    // NOP
    // 0x3cfd58: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3cfd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3cfd5c: 0x0  nop
    ctx->pc = 0x3cfd5cu;
    // NOP
    ctx->pc = 0x3cfd60u;
}
