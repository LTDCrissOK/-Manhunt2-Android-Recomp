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

// Function: sub_00144E40
// Address: 0x144e40 - 0x144e78
void sub_00144E40_0x144e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144E40_0x144e40");
#endif

    switch (ctx->pc) {
        case 0x144e5cu: goto label_144e5c;
        case 0x144e64u: goto label_144e64;
        default: break;
    }

    ctx->pc = 0x144e40u;

    // 0x144e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144e44: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x144e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x144e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144e4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x144e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x144e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e54: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x144E54u;
    SET_GPR_U32(ctx, 31, 0x144E5Cu);
    ctx->pc = 0x144E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E54u;
    // 0x144e58: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x144E54u, 0x144E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E5Cu;
label_144e5c:
    // 0x144e5c: 0xc04ecde  jal         func_13B378
    ctx->pc = 0x144E5Cu;
    SET_GPR_U32(ctx, 31, 0x144E64u);
    ctx->pc = 0x144E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E5Cu;
    // 0x144e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B378u, 0x144E5Cu, 0x144E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E64u;
label_144e64:
    // 0x144e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144e68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x144e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x144E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E6Cu;
        // 0x144e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144E74u;
    // 0x144e74: 0x0  nop
    ctx->pc = 0x144e74u;
    // NOP
    ctx->pc = 0x144e78u;
}
