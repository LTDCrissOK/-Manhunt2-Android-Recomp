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

// Function: sub_0011FD70
// Address: 0x11fd70 - 0x11fe10
void sub_0011FD70_0x11fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FD70_0x11fd70");
#endif

    switch (ctx->pc) {
        case 0x11fda0u: goto label_11fda0;
        case 0x11fdacu: goto label_11fdac;
        case 0x11fdc8u: goto label_11fdc8;
        default: break;
    }

    ctx->pc = 0x11fd70u;

    // 0x11fd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11fd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11fd74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11fd78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fd7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11fd7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11fd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11fd84: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x11fd84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x11fd88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11fd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11fd8c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x11fd8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11fd90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11fd94: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x11fd94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fd98: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x11fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x11fd9c: 0x0  nop
    ctx->pc = 0x11fd9cu;
    // NOP
label_11fda0:
    // 0x11fda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fda4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x11FDA4u;
    SET_GPR_U32(ctx, 31, 0x11FDACu);
    ctx->pc = 0x11FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FDA4u;
    // 0x11fda8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x11FDA4u, 0x11FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDACu;
label_11fdac:
    // 0x11fdac: 0x0  nop
    ctx->pc = 0x11fdacu;
    // NOP
    // 0x11fdb0: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11FDB0u;
    {
        const bool branch_taken_0x11fdb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x11FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDB0u;
        // 0x11fdb4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdb0) {
            ctx->pc = 0x11FDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fda0;
        }
    }
    ctx->pc = 0x11FDB8u;
    // 0x11fdb8: 0x26420114  addiu       $v0, $s2, 0x114
    ctx->pc = 0x11fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 276));
    // 0x11fdbc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11fdc0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fdc4: 0x0  nop
    ctx->pc = 0x11fdc4u;
    // NOP
label_11fdc8:
    // 0x11fdc8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x11fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x11fdcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11fdd0: 0x0  nop
    ctx->pc = 0x11fdd0u;
    // NOP
    // 0x11fdd4: 0x0  nop
    ctx->pc = 0x11fdd4u;
    // NOP
    // 0x11fdd8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11FDD8u;
    {
        const bool branch_taken_0x11fdd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDD8u;
        // 0x11fddc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdd8) {
            ctx->pc = 0x11FDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fdc8;
        }
    }
    ctx->pc = 0x11FDE0u;
    // 0x11fde0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11fde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fde4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x11fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x11fde8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11fde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fdec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11fdecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11fdf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11fdf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fdf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11fdf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11fdf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11fdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x11FDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDFCu;
        // 0x11fe00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FE04u;
    // 0x11fe04: 0x0  nop
    ctx->pc = 0x11fe04u;
    // NOP
    // 0x11fe08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11fe0c: 0x0  nop
    ctx->pc = 0x11fe0cu;
    // NOP
    ctx->pc = 0x11fe10u;
}
