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

// Function: sub_00174CC0
// Address: 0x174cc0 - 0x174d08
void sub_00174CC0_0x174cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174CC0_0x174cc0");
#endif

    switch (ctx->pc) {
        case 0x174cd8u: goto label_174cd8;
        case 0x174ce4u: goto label_174ce4;
        case 0x174cf4u: goto label_174cf4;
        default: break;
    }

    ctx->pc = 0x174cc0u;

    // 0x174cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174cc4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174cc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ccc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174cd0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x174CD0u;
    SET_GPR_U32(ctx, 31, 0x174CD8u);
    ctx->pc = 0x174CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CD0u;
    // 0x174cd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x174CD0u, 0x174CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CD8u;
label_174cd8:
    // 0x174cd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cdc: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x174CDCu;
    SET_GPR_U32(ctx, 31, 0x174CE4u);
    ctx->pc = 0x174CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CDCu;
    // 0x174ce0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x174CDCu, 0x174CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CE4u;
label_174ce4:
    // 0x174ce4: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x174ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x174ce8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cec: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174CECu;
    SET_GPR_U32(ctx, 31, 0x174CF4u);
    ctx->pc = 0x174CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CECu;
    // 0x174cf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174CECu, 0x174CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CF4u;
label_174cf4:
    // 0x174cf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174cf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x174CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CFCu;
        // 0x174d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174D04u;
    // 0x174d04: 0x0  nop
    ctx->pc = 0x174d04u;
    // NOP
    ctx->pc = 0x174d08u;
}
