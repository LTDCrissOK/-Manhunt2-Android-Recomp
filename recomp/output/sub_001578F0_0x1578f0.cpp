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

// Function: sub_001578F0
// Address: 0x1578f0 - 0x157950
void sub_001578F0_0x1578f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001578F0_0x1578f0");
#endif

    switch (ctx->pc) {
        case 0x157904u: goto label_157904;
        case 0x157918u: goto label_157918;
        case 0x157938u: goto label_157938;
        default: break;
    }

    ctx->pc = 0x1578f0u;

    // 0x1578f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1578f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1578f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1578f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1578f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1578f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1578fc: 0xc04ef70  jal         func_13BDC0
    ctx->pc = 0x1578FCu;
    SET_GPR_U32(ctx, 31, 0x157904u);
    ctx->pc = 0x157900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578FCu;
    // 0x157900: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BDC0u, 0x1578FCu, 0x157904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157904u;
label_157904:
    // 0x157904: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x157904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x157908: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x157908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x15790c: 0x24630c18  addiu       $v1, $v1, 0xC18
    ctx->pc = 0x15790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3096));
    // 0x157910: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x157910u;
    SET_GPR_U32(ctx, 31, 0x157918u);
    ctx->pc = 0x157914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157910u;
    // 0x157914: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x157910u, 0x157918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157918u;
label_157918:
    // 0x157918: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x157918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x15791c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157920: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x157920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x157924: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x157924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x157928: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x157928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x15792c: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x15792cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x157930: 0xc05602c  jal         func_1580B0
    ctx->pc = 0x157930u;
    SET_GPR_U32(ctx, 31, 0x157938u);
    ctx->pc = 0x157934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157930u;
    // 0x157934: 0xae000210  sw          $zero, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1580B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1580B0u, 0x157930u, 0x157938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157938u;
label_157938:
    // 0x157938: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x157938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15793c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15793cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157944: 0x3e00008  jr          $ra
    ctx->pc = 0x157944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157944u;
        // 0x157948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15794Cu;
    // 0x15794c: 0x0  nop
    ctx->pc = 0x15794cu;
    // NOP
    ctx->pc = 0x157950u;
}
