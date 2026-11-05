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

// Function: sub_0014DA60
// Address: 0x14da60 - 0x14dae0
void sub_0014DA60_0x14da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DA60_0x14da60");
#endif

    switch (ctx->pc) {
        case 0x14da84u: goto label_14da84;
        case 0x14da8cu: goto label_14da8c;
        case 0x14da94u: goto label_14da94;
        case 0x14dac8u: goto label_14dac8;
        default: break;
    }

    ctx->pc = 0x14da60u;

    // 0x14da60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14da64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14da68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14da68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14da6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14da6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da70: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14da70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14da74: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x14da74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14da78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14da78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14da7c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14DA7Cu;
    SET_GPR_U32(ctx, 31, 0x14DA84u);
    ctx->pc = 0x14DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA7Cu;
    // 0x14da80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14DA7Cu, 0x14DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA84u;
label_14da84:
    // 0x14da84: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x14DA84u;
    SET_GPR_U32(ctx, 31, 0x14DA8Cu);
    ctx->pc = 0x14DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA84u;
    // 0x14da88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x14DA84u, 0x14DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA8Cu;
label_14da8c:
    // 0x14da8c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x14DA8Cu;
    SET_GPR_U32(ctx, 31, 0x14DA94u);
    ctx->pc = 0x14DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA8Cu;
    // 0x14da90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x14DA8Cu, 0x14DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA94u;
label_14da94:
    // 0x14da94: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x14da94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x14da98: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x14da98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14da9c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14da9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14daa0: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x14daa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x14daa4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14DAA4u;
    {
        const bool branch_taken_0x14daa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14daa4) {
            ctx->pc = 0x14DAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DAA4u;
            // 0x14daa8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DAACu;
            goto label_14daac;
        }
    }
    ctx->pc = 0x14DAACu;
label_14daac:
    // 0x14daac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14daacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dab0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dab4: 0x3010  mfhi        $a2
    ctx->pc = 0x14dab4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x14dab8: 0x24c60fa0  addiu       $a2, $a2, 0xFA0
    ctx->pc = 0x14dab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4000));
    // 0x14dabc: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x14dabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x14dac0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14DAC0u;
    SET_GPR_U32(ctx, 31, 0x14DAC8u);
    ctx->pc = 0x14DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAC0u;
    // 0x14dac4: 0xae5104e4  sw          $s1, 0x4E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1252), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14DAC0u, 0x14DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DAC8u;
label_14dac8:
    // 0x14dac8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14dac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dacc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14daccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14dad0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14dad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dad4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14dad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14dad8: 0x3e00008  jr          $ra
    ctx->pc = 0x14DAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAD8u;
        // 0x14dadc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DAE0u;
}
