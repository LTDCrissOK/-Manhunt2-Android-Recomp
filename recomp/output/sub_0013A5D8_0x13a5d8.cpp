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

// Function: sub_0013A5D8
// Address: 0x13a5d8 - 0x13a680
void sub_0013A5D8_0x13a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A5D8_0x13a5d8");
#endif

    switch (ctx->pc) {
        case 0x13a5f8u: goto label_13a5f8;
        case 0x13a614u: goto label_13a614;
        case 0x13a624u: goto label_13a624;
        case 0x13a644u: goto label_13a644;
        case 0x13a658u: goto label_13a658;
        case 0x13a668u: goto label_13a668;
        default: break;
    }

    ctx->pc = 0x13a5d8u;

    // 0x13a5d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a5dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13a5e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13a5e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13a5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5e8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x13a5e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a5ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13a5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13a5f0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13A5F0u;
    SET_GPR_U32(ctx, 31, 0x13A5F8u);
    ctx->pc = 0x13A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A5F0u;
    // 0x13a5f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13A5F0u, 0x13A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A5F8u;
label_13a5f8:
    // 0x13a5f8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x13a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a5fc: 0x26310508  addiu       $s1, $s1, 0x508
    ctx->pc = 0x13a5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1288));
    // 0x13a600: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x13a600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x13a604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a608: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x13a60c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x13A60Cu;
    SET_GPR_U32(ctx, 31, 0x13A614u);
    ctx->pc = 0x13A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A60Cu;
    // 0x13a610: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x13A60Cu, 0x13A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A614u;
label_13a614:
    // 0x13a614: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13A614u;
    {
        const bool branch_taken_0x13a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A614u;
        // 0x13a618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a614) {
            ctx->pc = 0x13A660u;
            goto label_13a660;
        }
    }
    ctx->pc = 0x13A61Cu;
    // 0x13a61c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13A61Cu;
    SET_GPR_U32(ctx, 31, 0x13A624u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13A61Cu, 0x13A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A624u;
label_13a624:
    // 0x13a624: 0x240307d1  addiu       $v1, $zero, 0x7D1
    ctx->pc = 0x13a624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2001));
    // 0x13a628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a62c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x13a62cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13a630: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13A630u;
    {
        const bool branch_taken_0x13a630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a630) {
            ctx->pc = 0x13A634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A630u;
            // 0x13a634: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A638u;
            goto label_13a638;
        }
    }
    ctx->pc = 0x13A638u;
label_13a638:
    // 0x13a638: 0x8010  mfhi        $s0
    ctx->pc = 0x13a638u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x13a63c: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13A63Cu;
    SET_GPR_U32(ctx, 31, 0x13A644u);
    ctx->pc = 0x13A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A63Cu;
    // 0x13a640: 0x261003e8  addiu       $s0, $s0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13A63Cu, 0x13A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A644u;
label_13a644:
    // 0x13a644: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13a648: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a64c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13a650: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A650u;
    SET_GPR_U32(ctx, 31, 0x13A658u);
    ctx->pc = 0x13A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A650u;
    // 0x13a654: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A650u, 0x13A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A658u;
label_13a658:
    // 0x13a658: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13A658u;
    {
        const bool branch_taken_0x13a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A658u;
        // 0x13a65c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a658) {
            ctx->pc = 0x13A66Cu;
            goto label_13a66c;
        }
    }
    ctx->pc = 0x13A660u;
label_13a660:
    // 0x13a660: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A660u;
    SET_GPR_U32(ctx, 31, 0x13A668u);
    ctx->pc = 0x13A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A660u;
    // 0x13a664: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A660u, 0x13A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A668u;
label_13a668:
    // 0x13a668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a66c:
    // 0x13a66c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13a66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a670: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13a670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13a674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a678: 0x3e00008  jr          $ra
    ctx->pc = 0x13A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A678u;
        // 0x13a67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A680u;
}
