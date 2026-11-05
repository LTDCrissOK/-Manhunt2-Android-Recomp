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

// Function: sub_00123018
// Address: 0x123018 - 0x123078
void sub_00123018_0x123018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123018_0x123018");
#endif

    switch (ctx->pc) {
        case 0x123038u: goto label_123038;
        case 0x123050u: goto label_123050;
        case 0x123060u: goto label_123060;
        default: break;
    }

    ctx->pc = 0x123018u;

    // 0x123018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12301c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12302c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12302cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123030: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123030u;
    SET_GPR_U32(ctx, 31, 0x123038u);
    ctx->pc = 0x123034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123030u;
    // 0x123034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123030u, 0x123038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123038u;
label_123038:
    // 0x123038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123038u;
    {
        const bool branch_taken_0x123038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123038u;
        // 0x12303c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123038) {
            ctx->pc = 0x123048u;
            goto label_123048;
        }
    }
    ctx->pc = 0x123040u;
    // 0x123040: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x123040u;
    {
        const bool branch_taken_0x123040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123040u;
        // 0x123044: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123040) {
            ctx->pc = 0x123064u;
            goto label_123064;
        }
    }
    ctx->pc = 0x123048u;
label_123048:
    // 0x123048: 0xc049986  jal         func_126618
    ctx->pc = 0x123048u;
    SET_GPR_U32(ctx, 31, 0x123050u);
    ctx->pc = 0x12304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123048u;
    // 0x12304c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x123048u, 0x123050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123050u;
label_123050:
    // 0x123050: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123050u;
    {
        const bool branch_taken_0x123050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123050u;
        // 0x123054: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123050) {
            ctx->pc = 0x123060u;
            goto label_123060;
        }
    }
    ctx->pc = 0x123058u;
    // 0x123058: 0xc04994c  jal         func_126530
    ctx->pc = 0x123058u;
    SET_GPR_U32(ctx, 31, 0x123060u);
    ctx->pc = 0x12305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123058u;
    // 0x12305c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126530u, 0x123058u, 0x123060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123060u;
label_123060:
    // 0x123060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123064:
    // 0x123064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12306c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12306cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123070: 0x3e00008  jr          $ra
    ctx->pc = 0x123070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123070u;
        // 0x123074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123078u;
}
