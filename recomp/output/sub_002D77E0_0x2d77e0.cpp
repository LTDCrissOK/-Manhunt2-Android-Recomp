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

// Function: sub_002D77E0
// Address: 0x2d77e0 - 0x2d78b0
void sub_002D77E0_0x2d77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D77E0_0x2d77e0");
#endif

    switch (ctx->pc) {
        case 0x2d7800u: goto label_2d7800;
        case 0x2d7820u: goto label_2d7820;
        default: break;
    }

    ctx->pc = 0x2d77e0u;

    // 0x2d77e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d77e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d77e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d77e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d77e8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d77e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d77ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d77ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d77f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d77f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d77f8: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2D77F8u;
    SET_GPR_U32(ctx, 31, 0x2D7800u);
    ctx->pc = 0x2D77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D77F8u;
    // 0x2d77fc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2D77F8u, 0x2D7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7800u;
label_2d7800:
    // 0x2d7800: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d7800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d7804: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2d7804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d7808: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2d7808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d780c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2d780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d7810: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D7810u;
    {
        const bool branch_taken_0x2d7810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7810u;
        // 0x2d7814: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7810) {
            ctx->pc = 0x2D783Cu;
            goto label_2d783c;
        }
    }
    ctx->pc = 0x2D7818u;
    // 0x2d7818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d781c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2d7820:
    // 0x2d7820: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2d7820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d7824: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7824u;
    {
        const bool branch_taken_0x2d7824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7824) {
            ctx->pc = 0x2D7828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7824u;
            // 0x2d7828: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7834u;
            goto label_2d7834;
        }
    }
    ctx->pc = 0x2D782Cu;
    // 0x2d782c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d782cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7830: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d7830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d7834:
    // 0x2d7834: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D7834u;
    {
        const bool branch_taken_0x2d7834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7834) {
            ctx->pc = 0x2D7838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7834u;
            // 0x2d7838: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7820;
        }
    }
    ctx->pc = 0x2D783Cu;
label_2d783c:
    // 0x2d783c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2d783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d7840: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7840u;
    {
        const bool branch_taken_0x2d7840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7840u;
        // 0x2d7844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7840) {
            ctx->pc = 0x2D785Cu;
            goto label_2d785c;
        }
    }
    ctx->pc = 0x2D7848u;
    // 0x2d7848: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2d7848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d784c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2d784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d7850: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d7850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d7854: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7854u;
    {
        const bool branch_taken_0x2d7854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7854) {
            ctx->pc = 0x2D7858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7854u;
            // 0x2d7858: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7864u;
            goto label_2d7864;
        }
    }
    ctx->pc = 0x2D785Cu;
label_2d785c:
    // 0x2d785c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d785cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7860: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d7860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d7864:
    // 0x2d7864: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d7864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d7868: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7868u;
    {
        const bool branch_taken_0x2d7868 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7868u;
        // 0x2d786c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7868) {
            ctx->pc = 0x2D7878u;
            goto label_2d7878;
        }
    }
    ctx->pc = 0x2D7870u;
    // 0x2d7870: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D7870u;
    {
        const bool branch_taken_0x2d7870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7870u;
        // 0x2d7874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7870) {
            ctx->pc = 0x2D789Cu;
            goto label_2d789c;
        }
    }
    ctx->pc = 0x2D7878u;
label_2d7878:
    // 0x2d7878: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2d7878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2d787c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7880: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d7880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d7884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7888: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D7888u;
    {
        const bool branch_taken_0x2d7888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7888u;
        // 0x2d788c: 0x24a40014  addiu       $a0, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7888) {
            ctx->pc = 0x2D7894u;
            goto label_2d7894;
        }
    }
    ctx->pc = 0x2D7890u;
    // 0x2d7890: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2d7890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d7894:
    // 0x2d7894: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d7894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d7898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d789c:
    // 0x2d789c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d789cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d78a0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d78a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d78a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d78a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d78a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D78A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78A8u;
        // 0x2d78ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D78A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D78B0u;
}
