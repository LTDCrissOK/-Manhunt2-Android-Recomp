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

// Function: sub_001216C8
// Address: 0x1216c8 - 0x121738
void sub_001216C8_0x1216c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001216C8_0x1216c8");
#endif

    switch (ctx->pc) {
        case 0x1216f0u: goto label_1216f0;
        case 0x121700u: goto label_121700;
        case 0x121714u: goto label_121714;
        default: break;
    }

    ctx->pc = 0x1216c8u;

    // 0x1216c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1216c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1216cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1216ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1216d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1216d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1216d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1216d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1216d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1216dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1216dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1216e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1216e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1216e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216e8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1216E8u;
    SET_GPR_U32(ctx, 31, 0x1216F0u);
    ctx->pc = 0x1216ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1216E8u;
    // 0x1216ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1216E8u, 0x1216F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1216F0u;
label_1216f0:
    // 0x1216f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1216F0u;
    {
        const bool branch_taken_0x1216f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1216F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216F0u;
        // 0x1216f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216f0) {
            ctx->pc = 0x121720u;
            goto label_121720;
        }
    }
    ctx->pc = 0x1216F8u;
    // 0x1216f8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1216F8u;
    SET_GPR_U32(ctx, 31, 0x121700u);
    ctx->pc = 0x1216FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1216F8u;
    // 0x1216fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1216F8u, 0x121700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121700u;
label_121700:
    // 0x121700: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121700u;
    {
        const bool branch_taken_0x121700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121700u;
        // 0x121704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121700) {
            ctx->pc = 0x12171Cu;
            goto label_12171c;
        }
    }
    ctx->pc = 0x121708u;
    // 0x121708: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12170c: 0xc0426ea  jal         func_109BA8
    ctx->pc = 0x12170Cu;
    SET_GPR_U32(ctx, 31, 0x121714u);
    ctx->pc = 0x121710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12170Cu;
    // 0x121710: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109BA8u, 0x12170Cu, 0x121714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121714u;
label_121714:
    // 0x121714: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121714u;
    {
        const bool branch_taken_0x121714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121714u;
        // 0x121718: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121714) {
            ctx->pc = 0x121724u;
            goto label_121724;
        }
    }
    ctx->pc = 0x12171Cu;
label_12171c:
    // 0x12171c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121720:
    // 0x121720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121724:
    // 0x121724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12172c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12172cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121730: 0x3e00008  jr          $ra
    ctx->pc = 0x121730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121730u;
        // 0x121734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121738u;
}
