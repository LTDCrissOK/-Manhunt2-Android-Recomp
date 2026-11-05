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

// Function: sub_003AA028
// Address: 0x3aa028 - 0x3aa078
void sub_003AA028_0x3aa028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA028_0x3aa028");
#endif

    switch (ctx->pc) {
        case 0x3aa058u: goto label_3aa058;
        default: break;
    }

    ctx->pc = 0x3aa028u;

    // 0x3aa028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa02c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3aa02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3aa030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa034: 0x2450d488  addiu       $s0, $v0, -0x2B78
    ctx->pc = 0x3aa034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956168));
    // 0x3aa038: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3aa038u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D488u));
    // 0x3aa03c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AA03Cu;
    {
        const bool branch_taken_0x3aa03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA03Cu;
        // 0x3aa040: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa03c) {
            ctx->pc = 0x3AA05Cu;
            goto label_3aa05c;
        }
    }
    ctx->pc = 0x3AA044u;
    // 0x3aa044: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3aa044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3aa048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aa048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa04c: 0x2484d490  addiu       $a0, $a0, -0x2B70
    ctx->pc = 0x3aa04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956176));
    // 0x3aa050: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AA050u;
    SET_GPR_U32(ctx, 31, 0x3AA058u);
    ctx->pc = 0x3AA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA050u;
    // 0x3aa054: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AA050u, 0x3AA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA058u;
label_3aa058:
    // 0x3aa058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3aa058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aa05c:
    // 0x3aa05c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aa05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aa060: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aa060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa064: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3aa064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3aa068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa06c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA06Cu;
        // 0x3aa070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA074u;
    // 0x3aa074: 0x0  nop
    ctx->pc = 0x3aa074u;
    // NOP
    ctx->pc = 0x3aa078u;
}
