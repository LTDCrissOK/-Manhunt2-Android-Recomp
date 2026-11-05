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

// Function: sub_0014ED10
// Address: 0x14ed10 - 0x14ed90
void sub_0014ED10_0x14ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ED10_0x14ed10");
#endif

    switch (ctx->pc) {
        case 0x14ed30u: goto label_14ed30;
        case 0x14ed50u: goto label_14ed50;
        case 0x14ed5cu: goto label_14ed5c;
        case 0x14ed78u: goto label_14ed78;
        default: break;
    }

    ctx->pc = 0x14ed10u;

    // 0x14ed10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ed14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14ed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14ed18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14ed18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14ed1c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14ed1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14ed20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14ed20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14ed24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14ed28: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x14ED28u;
    SET_GPR_U32(ctx, 31, 0x14ED30u);
    ctx->pc = 0x14ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED28u;
    // 0x14ed2c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x14ED28u, 0x14ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED30u;
label_14ed30:
    // 0x14ed30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14ed34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ed34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed38: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14ed38u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14ed3c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14ED3Cu;
    {
        const bool branch_taken_0x14ed3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed3c) {
            ctx->pc = 0x14ED40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ED3Cu;
            // 0x14ed40: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ED44u;
            goto label_14ed44;
        }
    }
    ctx->pc = 0x14ED44u;
label_14ed44:
    // 0x14ed44: 0x8010  mfhi        $s0
    ctx->pc = 0x14ed44u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x14ed48: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14ED48u;
    SET_GPR_U32(ctx, 31, 0x14ED50u);
    ctx->pc = 0x14ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED48u;
    // 0x14ed4c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14ED48u, 0x14ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED50u;
label_14ed50:
    // 0x14ed50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ed50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed54: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14ED54u;
    SET_GPR_U32(ctx, 31, 0x14ED5Cu);
    ctx->pc = 0x14ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED54u;
    // 0x14ed58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14ED54u, 0x14ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED5Cu;
label_14ed5c:
    // 0x14ed5c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14ed60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ed60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed64: 0x2238818  mult        $s1, $s1, $v1
    ctx->pc = 0x14ed64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x14ed68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ed6c: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x14ed6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x14ed70: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14ED70u;
    SET_GPR_U32(ctx, 31, 0x14ED78u);
    ctx->pc = 0x14ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED70u;
    // 0x14ed74: 0xae4204e8  sw          $v0, 0x4E8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14ED70u, 0x14ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED78u;
label_14ed78:
    // 0x14ed78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14ed78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ed7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14ed7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ed80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14ed80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ed84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14ed84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ed88: 0x3e00008  jr          $ra
    ctx->pc = 0x14ED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED88u;
        // 0x14ed8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ED90u;
}
