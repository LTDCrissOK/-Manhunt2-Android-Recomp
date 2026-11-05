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

// Function: sub_0017E780
// Address: 0x17e780 - 0x17e7e0
void sub_0017E780_0x17e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E780_0x17e780");
#endif

    switch (ctx->pc) {
        case 0x17e7b0u: goto label_17e7b0;
        case 0x17e7bcu: goto label_17e7bc;
        case 0x17e7ccu: goto label_17e7cc;
        default: break;
    }

    ctx->pc = 0x17e780u;

    // 0x17e780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e784: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e788: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17e78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e790: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17e794: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x17E794u;
    {
        const bool branch_taken_0x17e794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e794) {
            ctx->pc = 0x17E798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E794u;
            // 0x17e798: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E7D0u;
            goto label_17e7d0;
        }
    }
    ctx->pc = 0x17E79Cu;
    // 0x17e79c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x17e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x17e7a0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x17E7A0u;
    {
        const bool branch_taken_0x17e7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e7a0) {
            ctx->pc = 0x17E7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E7A0u;
            // 0x17e7a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E7D0u;
            goto label_17e7d0;
        }
    }
    ctx->pc = 0x17E7A8u;
    // 0x17e7a8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17E7A8u;
    SET_GPR_U32(ctx, 31, 0x17E7B0u);
    ctx->pc = 0x17E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E7A8u;
    // 0x17e7ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17E7A8u, 0x17E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7B0u;
label_17e7b0:
    // 0x17e7b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7b4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17E7B4u;
    SET_GPR_U32(ctx, 31, 0x17E7BCu);
    ctx->pc = 0x17E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E7B4u;
    // 0x17e7b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17E7B4u, 0x17E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7BCu;
label_17e7bc:
    // 0x17e7bc: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x17e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x17e7c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7c4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17E7C4u;
    SET_GPR_U32(ctx, 31, 0x17E7CCu);
    ctx->pc = 0x17E7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E7C4u;
    // 0x17e7c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17E7C4u, 0x17E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7CCu;
label_17e7cc:
    // 0x17e7cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17e7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17e7d0:
    // 0x17e7d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17e7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17E7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7D4u;
        // 0x17e7d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E7DCu;
    // 0x17e7dc: 0x0  nop
    ctx->pc = 0x17e7dcu;
    // NOP
    ctx->pc = 0x17e7e0u;
}
