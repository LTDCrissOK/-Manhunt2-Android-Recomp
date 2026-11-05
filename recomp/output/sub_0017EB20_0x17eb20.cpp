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

// Function: sub_0017EB20
// Address: 0x17eb20 - 0x17eb68
void sub_0017EB20_0x17eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EB20_0x17eb20");
#endif

    switch (ctx->pc) {
        case 0x17eb38u: goto label_17eb38;
        case 0x17eb44u: goto label_17eb44;
        case 0x17eb54u: goto label_17eb54;
        default: break;
    }

    ctx->pc = 0x17eb20u;

    // 0x17eb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17eb24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17eb28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17eb28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17eb30: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17EB30u;
    SET_GPR_U32(ctx, 31, 0x17EB38u);
    ctx->pc = 0x17EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB30u;
    // 0x17eb34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17EB30u, 0x17EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB38u;
label_17eb38:
    // 0x17eb38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb3c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17EB3Cu;
    SET_GPR_U32(ctx, 31, 0x17EB44u);
    ctx->pc = 0x17EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB3Cu;
    // 0x17eb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17EB3Cu, 0x17EB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB44u;
label_17eb44:
    // 0x17eb44: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x17eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x17eb48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17eb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb4c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17EB4Cu;
    SET_GPR_U32(ctx, 31, 0x17EB54u);
    ctx->pc = 0x17EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB4Cu;
    // 0x17eb50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17EB4Cu, 0x17EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB54u;
label_17eb54:
    // 0x17eb54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17eb54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17eb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17eb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB5Cu;
        // 0x17eb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EB64u;
    // 0x17eb64: 0x0  nop
    ctx->pc = 0x17eb64u;
    // NOP
    ctx->pc = 0x17eb68u;
}
