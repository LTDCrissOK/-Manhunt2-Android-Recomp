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

// Function: sub_00124638
// Address: 0x124638 - 0x124688
void sub_00124638_0x124638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124638_0x124638");
#endif

    switch (ctx->pc) {
        case 0x124658u: goto label_124658;
        case 0x12466cu: goto label_12466c;
        default: break;
    }

    ctx->pc = 0x124638u;

    // 0x124638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12463c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124644: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12464c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124650: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124650u;
    SET_GPR_U32(ctx, 31, 0x124658u);
    ctx->pc = 0x124654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124650u;
    // 0x124654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124650u, 0x124658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124658u;
label_124658:
    // 0x124658: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124658u;
    {
        const bool branch_taken_0x124658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124658u;
        // 0x12465c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124658) {
            ctx->pc = 0x124674u;
            goto label_124674;
        }
    }
    ctx->pc = 0x124660u;
    // 0x124660: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x124660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x124664: 0xc042cac  jal         func_10B2B0
    ctx->pc = 0x124664u;
    SET_GPR_U32(ctx, 31, 0x12466Cu);
    ctx->pc = 0x124668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124664u;
    // 0x124668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2B0u, 0x124664u, 0x12466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12466Cu;
label_12466c:
    // 0x12466c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12466Cu;
    {
        const bool branch_taken_0x12466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12466Cu;
        // 0x124670: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12466c) {
            ctx->pc = 0x124678u;
            goto label_124678;
        }
    }
    ctx->pc = 0x124674u;
label_124674:
    // 0x124674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124678:
    // 0x124678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12467c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12467cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124680: 0x3e00008  jr          $ra
    ctx->pc = 0x124680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124680u;
        // 0x124684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124688u;
}
