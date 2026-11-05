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

// Function: sub_002B50A0
// Address: 0x2b50a0 - 0x2b5110
void sub_002B50A0_0x2b50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B50A0_0x2b50a0");
#endif

    switch (ctx->pc) {
        case 0x2b50c8u: goto label_2b50c8;
        case 0x2b50e0u: goto label_2b50e0;
        default: break;
    }

    ctx->pc = 0x2b50a0u;

    // 0x2b50a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b50a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b50a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b50a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b50a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b50ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b50acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b50b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b50b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b50b4: 0x2650001c  addiu       $s0, $s2, 0x1C
    ctx->pc = 0x2b50b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2b50b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b50b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b50bc: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x2b50bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b50c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b50c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b50c4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2b50c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b50c8:
    // 0x2b50c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b50cc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B50CCu;
    {
        const bool branch_taken_0x2b50cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b50cc) {
            ctx->pc = 0x2B50D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B50CCu;
            // 0x2b50d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B50ECu;
            goto label_2b50ec;
        }
    }
    ctx->pc = 0x2B50D4u;
    // 0x2b50d4: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2b50d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2b50d8: 0xc0ad444  jal         func_2B5110
    ctx->pc = 0x2B50D8u;
    SET_GPR_U32(ctx, 31, 0x2B50E0u);
    ctx->pc = 0x2B50DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B50D8u;
    // 0x2b50dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5110u, 0x2B50D8u, 0x2B50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B50E0u;
label_2b50e0:
    // 0x2b50e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B50E0u;
    {
        const bool branch_taken_0x2b50e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b50e0) {
            ctx->pc = 0x2B50E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B50E0u;
            // 0x2b50e4: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B50E8u;
            goto label_2b50e8;
        }
    }
    ctx->pc = 0x2B50E8u;
label_2b50e8:
    // 0x2b50e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2b50e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2b50ec:
    // 0x2b50ec: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B50ECu;
    {
        const bool branch_taken_0x2b50ec = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2B50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50ECu;
        // 0x2b50f0: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b50ec) {
            ctx->pc = 0x2B50C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b50c8;
        }
    }
    ctx->pc = 0x2B50F4u;
    // 0x2b50f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b50f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b50f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b50f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b50fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b50fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5100: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b5100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5108: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5108u;
        // 0x2b510c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5110u;
}
