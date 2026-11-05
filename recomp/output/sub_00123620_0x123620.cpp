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

// Function: sub_00123620
// Address: 0x123620 - 0x123690
void sub_00123620_0x123620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123620_0x123620");
#endif

    switch (ctx->pc) {
        case 0x123648u: goto label_123648;
        case 0x123658u: goto label_123658;
        case 0x12366cu: goto label_12366c;
        default: break;
    }

    ctx->pc = 0x123620u;

    // 0x123620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123628: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12362c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12362cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x123634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123638: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12363c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12363cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123640: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123640u;
    SET_GPR_U32(ctx, 31, 0x123648u);
    ctx->pc = 0x123644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123640u;
    // 0x123644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123640u, 0x123648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123648u;
label_123648:
    // 0x123648: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123648u;
    {
        const bool branch_taken_0x123648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123648u;
        // 0x12364c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123648) {
            ctx->pc = 0x123678u;
            goto label_123678;
        }
    }
    ctx->pc = 0x123650u;
    // 0x123650: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123650u;
    SET_GPR_U32(ctx, 31, 0x123658u);
    ctx->pc = 0x123654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123650u;
    // 0x123654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123650u, 0x123658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123658u;
label_123658:
    // 0x123658: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123658u;
    {
        const bool branch_taken_0x123658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123658u;
        // 0x12365c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123658) {
            ctx->pc = 0x123674u;
            goto label_123674;
        }
    }
    ctx->pc = 0x123660u;
    // 0x123660: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x123660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x123664: 0xc042aa8  jal         func_10AAA0
    ctx->pc = 0x123664u;
    SET_GPR_U32(ctx, 31, 0x12366Cu);
    ctx->pc = 0x123668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123664u;
    // 0x123668: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AAA0u, 0x123664u, 0x12366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12366Cu;
label_12366c:
    // 0x12366c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12366Cu;
    {
        const bool branch_taken_0x12366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12366Cu;
        // 0x123670: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12366c) {
            ctx->pc = 0x12367Cu;
            goto label_12367c;
        }
    }
    ctx->pc = 0x123674u;
label_123674:
    // 0x123674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123678:
    // 0x123678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12367c:
    // 0x12367c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12367cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123680: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123684: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123688: 0x3e00008  jr          $ra
    ctx->pc = 0x123688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123688u;
        // 0x12368c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123690u;
}
