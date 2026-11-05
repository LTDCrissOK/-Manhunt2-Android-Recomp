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

// Function: sub_001A7FE8
// Address: 0x1a7fe8 - 0x1a8098
void sub_001A7FE8_0x1a7fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7FE8_0x1a7fe8");
#endif

    switch (ctx->pc) {
        case 0x1a8014u: goto label_1a8014;
        case 0x1a8040u: goto label_1a8040;
        case 0x1a8050u: goto label_1a8050;
        case 0x1a806cu: goto label_1a806c;
        default: break;
    }

    ctx->pc = 0x1a7fe8u;

    // 0x1a7fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7fec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a7ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7ff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7ff8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a7ffc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8000: 0x8c840148  lw          $a0, 0x148($a0)
    ctx->pc = 0x1a8000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1a8004: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A8004u;
    {
        const bool branch_taken_0x1a8004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8004u;
        // 0x1a8008: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8004) {
            ctx->pc = 0x1A8074u;
            goto label_1a8074;
        }
    }
    ctx->pc = 0x1A800Cu;
    // 0x1a800c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A800Cu;
    SET_GPR_U32(ctx, 31, 0x1A8014u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A800Cu, 0x1A8014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8014u;
label_1a8014:
    // 0x1a8014: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8018: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A8018u;
    {
        const bool branch_taken_0x1a8018 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8018u;
        // 0x1a801c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8018) {
            ctx->pc = 0x1A8078u;
            goto label_1a8078;
        }
    }
    ctx->pc = 0x1A8020u;
    // 0x1a8020: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1a8020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1a8024: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1a8024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1a8028: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A8028u;
    {
        const bool branch_taken_0x1a8028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8028u;
        // 0x1a802c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8028) {
            ctx->pc = 0x1A8078u;
            goto label_1a8078;
        }
    }
    ctx->pc = 0x1A8030u;
    // 0x1a8030: 0x8e110274  lw          $s1, 0x274($s0)
    ctx->pc = 0x1a8030u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x1a8034: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a8034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8038: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1A8038u;
    SET_GPR_U32(ctx, 31, 0x1A8040u);
    ctx->pc = 0x1A803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8038u;
    // 0x1a803c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1A8038u, 0x1A8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8040u;
label_1a8040:
    // 0x1a8040: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A8040u;
    {
        const bool branch_taken_0x1a8040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8040) {
            ctx->pc = 0x1A8044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8040u;
            // 0x1a8044: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A805Cu;
            goto label_1a805c;
        }
    }
    ctx->pc = 0x1A8048u;
    // 0x1a8048: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1A8048u;
    SET_GPR_U32(ctx, 31, 0x1A8050u);
    ctx->pc = 0x1A804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8048u;
    // 0x1a804c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1A8048u, 0x1A8050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8050u;
label_1a8050:
    // 0x1a8050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8054: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A8054u;
    {
        const bool branch_taken_0x1a8054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8054) {
            ctx->pc = 0x1A8058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8054u;
            // 0x1a8058: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A805Cu;
            goto label_1a805c;
        }
    }
    ctx->pc = 0x1A805Cu;
label_1a805c:
    // 0x1a805c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A805Cu;
    {
        const bool branch_taken_0x1a805c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A805Cu;
        // 0x1a8060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a805c) {
            ctx->pc = 0x1A8074u;
            goto label_1a8074;
        }
    }
    ctx->pc = 0x1A8064u;
    // 0x1a8064: 0xc098750  jal         func_261D40
    ctx->pc = 0x1A8064u;
    SET_GPR_U32(ctx, 31, 0x1A806Cu);
    ctx->pc = 0x1A8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8064u;
    // 0x1a8068: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261D40u, 0x1A8064u, 0x1A806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A806Cu;
label_1a806c:
    // 0x1a806c: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x1a806cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1a8070: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x1a8070u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_1a8074:
    // 0x1a8074: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1a8074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8078:
    // 0x1a8078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a807c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a807cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8080: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8084: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a808c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A808Cu;
        // 0x1a8090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8094u;
    // 0x1a8094: 0x0  nop
    ctx->pc = 0x1a8094u;
    // NOP
    ctx->pc = 0x1a8098u;
}
