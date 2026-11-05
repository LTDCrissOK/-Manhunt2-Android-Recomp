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

// Function: sub_003A9848
// Address: 0x3a9848 - 0x3a98e0
void sub_003A9848_0x3a9848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9848_0x3a9848");
#endif

    switch (ctx->pc) {
        case 0x3a98a8u: goto label_3a98a8;
        case 0x3a98b8u: goto label_3a98b8;
        default: break;
    }

    ctx->pc = 0x3a9848u;

    // 0x3a9848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a9848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a984c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a9850: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a9850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a9854: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a9854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9858: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a9858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a985c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9860: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a9860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a9864: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a9864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a9868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a9868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a986c: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a986cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0D0u));
    // 0x3a9870: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9870u;
    {
        const bool branch_taken_0x3a9870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3A9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9870u;
        // 0x3a9874: 0x82440052  lb          $a0, 0x52($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9870) {
            ctx->pc = 0x3A9888u;
            goto label_3a9888;
        }
    }
    ctx->pc = 0x3A9878u;
    // 0x3a9878: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a987c: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a987cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0C8u));
    // 0x3a9880: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A9880u;
    {
        const bool branch_taken_0x3a9880 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9880u;
        // 0x3a9884: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9880) {
            ctx->pc = 0x3A98C8u;
            goto label_3a98c8;
        }
    }
    ctx->pc = 0x3A9888u;
label_3a9888:
    // 0x3a9888: 0x10a6000e  beq         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3A9888u;
    {
        const bool branch_taken_0x3a9888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3A988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9888u;
        // 0x3a988c: 0xa2450058  sb          $a1, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9888) {
            ctx->pc = 0x3A98C4u;
            goto label_3a98c4;
        }
    }
    ctx->pc = 0x3A9890u;
    // 0x3a9890: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A9890u;
    {
        const bool branch_taken_0x3a9890 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3A9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9890u;
        // 0x3a9894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9890) {
            ctx->pc = 0x3A98C8u;
            goto label_3a98c8;
        }
    }
    ctx->pc = 0x3A9898u;
    // 0x3a9898: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a9898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a989c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3a989cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a98a0: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x3a98a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3a98a4: 0x0  nop
    ctx->pc = 0x3a98a4u;
    // NOP
label_3a98a8:
    // 0x3a98a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a98a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a98ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3a98acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3a98b0: 0xc0ecd8e  jal         func_3B3638
    ctx->pc = 0x3A98B0u;
    SET_GPR_U32(ctx, 31, 0x3A98B8u);
    ctx->pc = 0x3A98B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A98B0u;
    // 0x3a98b4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3638u, 0x3A98B0u, 0x3A98B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A98B8u;
label_3a98b8:
    // 0x3a98b8: 0xa2530059  sb          $s3, 0x59($s2)
    ctx->pc = 0x3a98b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 19));
    // 0x3a98bc: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A98BCu;
    {
        const bool branch_taken_0x3a98bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98BCu;
        // 0x3a98c0: 0xa2400058  sb          $zero, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a98bc) {
            ctx->pc = 0x3A98A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a98a8;
        }
    }
    ctx->pc = 0x3A98C4u;
label_3a98c4:
    // 0x3a98c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a98c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a98c8:
    // 0x3a98c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a98c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a98cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a98ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a98d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a98d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a98d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a98d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a98d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A98D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98D8u;
        // 0x3a98dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A98D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A98E0u;
}
