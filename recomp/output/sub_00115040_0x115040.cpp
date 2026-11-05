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

// Function: sub_00115040
// Address: 0x115040 - 0x115088
void sub_00115040_0x115040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115040_0x115040");
#endif

    switch (ctx->pc) {
        case 0x115058u: goto label_115058;
        case 0x115060u: goto label_115060;
        case 0x115074u: goto label_115074;
        default: break;
    }

    ctx->pc = 0x115040u;

    // 0x115040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115044: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x115044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x115048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11504c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x115050: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x115050u;
    SET_GPR_U32(ctx, 31, 0x115058u);
    ctx->pc = 0x115054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115050u;
    // 0x115054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x115050u, 0x115058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115058u;
label_115058:
    // 0x115058: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x115058u;
    SET_GPR_U32(ctx, 31, 0x115060u);
    ctx->pc = 0x11505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115058u;
    // 0x11505c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x115058u, 0x115060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115060u;
label_115060:
    // 0x115060: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x115060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x115064: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x115064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115068: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x115068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x11506c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x11506Cu;
    SET_GPR_U32(ctx, 31, 0x115074u);
    ctx->pc = 0x115070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11506Cu;
    // 0x115070: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x11506Cu, 0x115074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115074u;
label_115074:
    // 0x115074: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x115074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115078: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x115078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11507c: 0x3e00008  jr          $ra
    ctx->pc = 0x11507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11507Cu;
        // 0x115080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115084u;
    // 0x115084: 0x0  nop
    ctx->pc = 0x115084u;
    // NOP
    ctx->pc = 0x115088u;
}
