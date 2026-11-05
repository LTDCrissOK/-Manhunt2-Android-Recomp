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

// Function: sub_0016F6B8
// Address: 0x16f6b8 - 0x16f700
void sub_0016F6B8_0x16f6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F6B8_0x16f6b8");
#endif

    switch (ctx->pc) {
        case 0x16f6d0u: goto label_16f6d0;
        case 0x16f6dcu: goto label_16f6dc;
        case 0x16f6ecu: goto label_16f6ec;
        default: break;
    }

    ctx->pc = 0x16f6b8u;

    // 0x16f6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f6bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16f6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16f6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16f6c8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16F6C8u;
    SET_GPR_U32(ctx, 31, 0x16F6D0u);
    ctx->pc = 0x16F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6C8u;
    // 0x16f6cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16F6C8u, 0x16F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6D0u;
label_16f6d0:
    // 0x16f6d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6d4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x16F6D4u;
    SET_GPR_U32(ctx, 31, 0x16F6DCu);
    ctx->pc = 0x16F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6D4u;
    // 0x16f6d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x16F6D4u, 0x16F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6DCu;
label_16f6dc:
    // 0x16f6dc: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x16f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x16f6e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6e4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16F6E4u;
    SET_GPR_U32(ctx, 31, 0x16F6ECu);
    ctx->pc = 0x16F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6E4u;
    // 0x16f6e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16F6E4u, 0x16F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6ECu;
label_16f6ec:
    // 0x16f6ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16f6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f6f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16f6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16F6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6F4u;
        // 0x16f6f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F6FCu;
    // 0x16f6fc: 0x0  nop
    ctx->pc = 0x16f6fcu;
    // NOP
    ctx->pc = 0x16f700u;
}
