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

// Function: sub_00154820
// Address: 0x154820 - 0x1548a8
void sub_00154820_0x154820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154820_0x154820");
#endif

    switch (ctx->pc) {
        case 0x154858u: goto label_154858;
        case 0x154864u: goto label_154864;
        case 0x154878u: goto label_154878;
        case 0x15488cu: goto label_15488c;
        default: break;
    }

    ctx->pc = 0x154820u;

    // 0x154820: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x154820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x154824: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x154824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154828: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x154828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15482c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15482cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154830: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x154830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x154834: 0x248404e4  addiu       $a0, $a0, 0x4E4
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1252));
    // 0x154838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15483c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x154840: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x154840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154844: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x154844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154848: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x154848u;
    {
        const bool branch_taken_0x154848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154848u;
        // 0x15484c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154848) {
            ctx->pc = 0x154890u;
            goto label_154890;
        }
    }
    ctx->pc = 0x154850u;
    // 0x154850: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x154850u;
    SET_GPR_U32(ctx, 31, 0x154858u);
    ctx->pc = 0x154854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154850u;
    // 0x154854: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x154850u, 0x154858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154858u;
label_154858:
    // 0x154858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15485c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15485Cu;
    SET_GPR_U32(ctx, 31, 0x154864u);
    ctx->pc = 0x154860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15485Cu;
    // 0x154860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15485Cu, 0x154864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154864u;
label_154864:
    // 0x154864: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x154864u;
    {
        const bool branch_taken_0x154864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154864) {
            ctx->pc = 0x154868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154864u;
            // 0x154868: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154880u;
            goto label_154880;
        }
    }
    ctx->pc = 0x15486Cu;
    // 0x15486c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154870: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154870u;
    SET_GPR_U32(ctx, 31, 0x154878u);
    ctx->pc = 0x154874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154870u;
    // 0x154874: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154870u, 0x154878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154878u;
label_154878:
    // 0x154878: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154878u;
    {
        const bool branch_taken_0x154878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154878u;
        // 0x15487c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154878) {
            ctx->pc = 0x154890u;
            goto label_154890;
        }
    }
    ctx->pc = 0x154880u;
label_154880:
    // 0x154880: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x154880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154884: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154884u;
    SET_GPR_U32(ctx, 31, 0x15488Cu);
    ctx->pc = 0x154888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154884u;
    // 0x154888: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154884u, 0x15488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15488Cu;
label_15488c:
    // 0x15488c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154890:
    // 0x154890: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x154890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154894: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x154894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15489c: 0x3e00008  jr          $ra
    ctx->pc = 0x15489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1548A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15489Cu;
        // 0x1548a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15489Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1548A4u;
    // 0x1548a4: 0x0  nop
    ctx->pc = 0x1548a4u;
    // NOP
    ctx->pc = 0x1548a8u;
}
