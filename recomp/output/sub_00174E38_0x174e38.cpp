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

// Function: sub_00174E38
// Address: 0x174e38 - 0x174e80
void sub_00174E38_0x174e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174E38_0x174e38");
#endif

    switch (ctx->pc) {
        case 0x174e50u: goto label_174e50;
        case 0x174e5cu: goto label_174e5c;
        case 0x174e6cu: goto label_174e6c;
        default: break;
    }

    ctx->pc = 0x174e38u;

    // 0x174e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174e3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174e48: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x174E48u;
    SET_GPR_U32(ctx, 31, 0x174E50u);
    ctx->pc = 0x174E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E48u;
    // 0x174e4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x174E48u, 0x174E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E50u;
label_174e50:
    // 0x174e50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e54: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x174E54u;
    SET_GPR_U32(ctx, 31, 0x174E5Cu);
    ctx->pc = 0x174E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E54u;
    // 0x174e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x174E54u, 0x174E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E5Cu;
label_174e5c:
    // 0x174e5c: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x174e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
    // 0x174e60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e64: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174E64u;
    SET_GPR_U32(ctx, 31, 0x174E6Cu);
    ctx->pc = 0x174E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E64u;
    // 0x174e68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174E64u, 0x174E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E6Cu;
label_174e6c:
    // 0x174e6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174e70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174e74: 0x3e00008  jr          $ra
    ctx->pc = 0x174E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E74u;
        // 0x174e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174E7Cu;
    // 0x174e7c: 0x0  nop
    ctx->pc = 0x174e7cu;
    // NOP
    ctx->pc = 0x174e80u;
}
