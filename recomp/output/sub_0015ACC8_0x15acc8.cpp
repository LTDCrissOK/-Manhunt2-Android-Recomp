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

// Function: sub_0015ACC8
// Address: 0x15acc8 - 0x15ad48
void sub_0015ACC8_0x15acc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ACC8_0x15acc8");
#endif

    switch (ctx->pc) {
        case 0x15ace8u: goto label_15ace8;
        case 0x15ad08u: goto label_15ad08;
        case 0x15ad10u: goto label_15ad10;
        case 0x15ad30u: goto label_15ad30;
        default: break;
    }

    ctx->pc = 0x15acc8u;

    // 0x15acc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15acc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15accc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15acccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15acd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15acd4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x15acd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15acd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15acdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15acdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15ace0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x15ACE0u;
    SET_GPR_U32(ctx, 31, 0x15ACE8u);
    ctx->pc = 0x15ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ACE0u;
    // 0x15ace4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x15ACE0u, 0x15ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACE8u;
label_15ace8:
    // 0x15ace8: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x15ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x15acec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15acecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acf0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x15acf0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15acf4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15ACF4u;
    {
        const bool branch_taken_0x15acf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15acf4) {
            ctx->pc = 0x15ACF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15ACF4u;
            // 0x15acf8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15ACFCu;
            goto label_15acfc;
        }
    }
    ctx->pc = 0x15ACFCu;
label_15acfc:
    // 0x15acfc: 0x8010  mfhi        $s0
    ctx->pc = 0x15acfcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x15ad00: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15AD00u;
    SET_GPR_U32(ctx, 31, 0x15AD08u);
    ctx->pc = 0x15AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD00u;
    // 0x15ad04: 0x26102328  addiu       $s0, $s0, 0x2328 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15AD00u, 0x15AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD08u;
label_15ad08:
    // 0x15ad08: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x15AD08u;
    SET_GPR_U32(ctx, 31, 0x15AD10u);
    ctx->pc = 0x15AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD08u;
    // 0x15ad0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x15AD08u, 0x15AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD10u;
label_15ad10:
    // 0x15ad10: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15ad14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15ad18: 0x2238818  mult        $s1, $s1, $v1
    ctx->pc = 0x15ad18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x15ad1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15ad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ad24: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x15ad24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x15ad28: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15AD28u;
    SET_GPR_U32(ctx, 31, 0x15AD30u);
    ctx->pc = 0x15AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD28u;
    // 0x15ad2c: 0xae420a30  sw          $v0, 0xA30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15AD28u, 0x15AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD30u;
label_15ad30:
    // 0x15ad30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15ad30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ad34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15ad34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ad38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15ad38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ad3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15ad3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ad40: 0x3e00008  jr          $ra
    ctx->pc = 0x15AD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD40u;
        // 0x15ad44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AD48u;
}
