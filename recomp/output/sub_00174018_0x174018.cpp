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

// Function: sub_00174018
// Address: 0x174018 - 0x174068
void sub_00174018_0x174018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174018_0x174018");
#endif

    switch (ctx->pc) {
        case 0x174048u: goto label_174048;
        case 0x174058u: goto label_174058;
        default: break;
    }

    ctx->pc = 0x174018u;

    // 0x174018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17401c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17401cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174028: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x174028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x17402c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17402Cu;
    {
        const bool branch_taken_0x17402c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17402Cu;
        // 0x174030: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17402c) {
            ctx->pc = 0x174050u;
            goto label_174050;
        }
    }
    ctx->pc = 0x174034u;
    // 0x174034: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x174034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x174038: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174038u;
    {
        const bool branch_taken_0x174038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174038) {
            ctx->pc = 0x174050u;
            goto label_174050;
        }
    }
    ctx->pc = 0x174040u;
    // 0x174040: 0xc04efe6  jal         func_13BF98
    ctx->pc = 0x174040u;
    SET_GPR_U32(ctx, 31, 0x174048u);
    ctx->pc = 0x13BF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF98u, 0x174040u, 0x174048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174048u;
label_174048:
    // 0x174048: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x174048u;
    {
        const bool branch_taken_0x174048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174048) {
            ctx->pc = 0x17404Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174048u;
            // 0x17404c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17405Cu;
            goto label_17405c;
        }
    }
    ctx->pc = 0x174050u;
label_174050:
    // 0x174050: 0xc04f810  jal         func_13E040
    ctx->pc = 0x174050u;
    SET_GPR_U32(ctx, 31, 0x174058u);
    ctx->pc = 0x174054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174050u;
    // 0x174054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E040u, 0x174050u, 0x174058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174058u;
label_174058:
    // 0x174058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17405c:
    // 0x17405c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17405cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174060: 0x3e00008  jr          $ra
    ctx->pc = 0x174060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174060u;
        // 0x174064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174068u;
}
