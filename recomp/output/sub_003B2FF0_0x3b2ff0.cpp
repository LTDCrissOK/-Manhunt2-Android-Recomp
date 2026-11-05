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

// Function: sub_003B2FF0
// Address: 0x3b2ff0 - 0x3b3090
void sub_003B2FF0_0x3b2ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2FF0_0x3b2ff0");
#endif

    switch (ctx->pc) {
        case 0x3b3020u: goto label_3b3020;
        case 0x3b3040u: goto label_3b3040;
        case 0x3b3050u: goto label_3b3050;
        default: break;
    }

    ctx->pc = 0x3b2ff0u;

    // 0x3b2ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b2ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b2ff4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b2ff8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b2ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3000: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b3000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b3004: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b3004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b3008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b300c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x3b300cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b3010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3010u;
    {
        const bool branch_taken_0x3b3010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3010u;
        // 0x3b3014: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3010) {
            ctx->pc = 0x3B3028u;
            goto label_3b3028;
        }
    }
    ctx->pc = 0x3B3018u;
    // 0x3b3018: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B3018u;
    {
        const bool branch_taken_0x3b3018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3018u;
        // 0x3b301c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3018) {
            ctx->pc = 0x3B306Cu;
            goto label_3b306c;
        }
    }
    ctx->pc = 0x3B3020u;
label_3b3020:
    // 0x3b3020: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3B3020u;
    {
        const bool branch_taken_0x3b3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3020u;
        // 0x3b3024: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3020) {
            ctx->pc = 0x3B306Cu;
            goto label_3b306c;
        }
    }
    ctx->pc = 0x3B3028u;
label_3b3028:
    // 0x3b3028: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b3028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3b302c: 0x8e6393f8  lw          $v1, -0x6C08($s3)
    ctx->pc = 0x3b302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939640)));
    // 0x3b3030: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b3030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3034: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3B3034u;
    {
        const bool branch_taken_0x3b3034 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3034u;
        // 0x3b3038: 0x8c5093f4  lw          $s0, -0x6C0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3034) {
            ctx->pc = 0x3B3068u;
            goto label_3b3068;
        }
    }
    ctx->pc = 0x3B303Cu;
    // 0x3b303c: 0x0  nop
    ctx->pc = 0x3b303cu;
    // NOP
label_3b3040:
    // 0x3b3040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3044: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b3044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3048: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x3B3048u;
    SET_GPR_U32(ctx, 31, 0x3B3050u);
    ctx->pc = 0x3B304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3048u;
    // 0x3b304c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x3B3048u, 0x3B3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3050u;
label_3b3050:
    // 0x3b3050: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3B3050u;
    {
        const bool branch_taken_0x3b3050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3050u;
        // 0x3b3054: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3050) {
            ctx->pc = 0x3B3020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3020;
        }
    }
    ctx->pc = 0x3B3058u;
    // 0x3b3058: 0x8e6293f8  lw          $v0, -0x6C08($s3)
    ctx->pc = 0x3b3058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939640)));
    // 0x3b305c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3b305cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b3060: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B3060u;
    {
        const bool branch_taken_0x3b3060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3060u;
        // 0x3b3064: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3060) {
            ctx->pc = 0x3B3040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3040;
        }
    }
    ctx->pc = 0x3B3068u;
label_3b3068:
    // 0x3b3068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b3068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b306c:
    // 0x3b306c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b306cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b3070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b3074: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b3074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3078: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b3078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b307c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b307cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3080: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3080u;
        // 0x3b3084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3088u;
    // 0x3b3088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b3088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b308c: 0x0  nop
    ctx->pc = 0x3b308cu;
    // NOP
    ctx->pc = 0x3b3090u;
}
