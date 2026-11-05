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

// Function: sub_00112DB0
// Address: 0x112db0 - 0x112df8
void sub_00112DB0_0x112db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112DB0_0x112db0");
#endif

    switch (ctx->pc) {
        case 0x112dc8u: goto label_112dc8;
        case 0x112dd4u: goto label_112dd4;
        case 0x112de4u: goto label_112de4;
        default: break;
    }

    ctx->pc = 0x112db0u;

    // 0x112db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112db4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x112db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x112db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x112dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x112dc0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x112DC0u;
    SET_GPR_U32(ctx, 31, 0x112DC8u);
    ctx->pc = 0x112DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DC0u;
    // 0x112dc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x112DC0u, 0x112DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DC8u;
label_112dc8:
    // 0x112dc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x112dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dcc: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x112DCCu;
    SET_GPR_U32(ctx, 31, 0x112DD4u);
    ctx->pc = 0x112DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DCCu;
    // 0x112dd0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x112DCCu, 0x112DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DD4u;
label_112dd4:
    // 0x112dd4: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x112dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x112dd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x112dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ddc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x112DDCu;
    SET_GPR_U32(ctx, 31, 0x112DE4u);
    ctx->pc = 0x112DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DDCu;
    // 0x112de0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x112DDCu, 0x112DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DE4u;
label_112de4:
    // 0x112de4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x112de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112de8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x112de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x112dec: 0x3e00008  jr          $ra
    ctx->pc = 0x112DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DECu;
        // 0x112df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112DF4u;
    // 0x112df4: 0x0  nop
    ctx->pc = 0x112df4u;
    // NOP
    ctx->pc = 0x112df8u;
}
