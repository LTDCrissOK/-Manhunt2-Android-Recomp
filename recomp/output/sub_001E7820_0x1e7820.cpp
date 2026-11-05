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

// Function: sub_001E7820
// Address: 0x1e7820 - 0x1e78b8
void sub_001E7820_0x1e7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7820_0x1e7820");
#endif

    switch (ctx->pc) {
        case 0x1e7840u: goto label_1e7840;
        case 0x1e7858u: goto label_1e7858;
        default: break;
    }

    ctx->pc = 0x1e7820u;

    // 0x1e7820: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e7820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e7824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7828: 0x8c6291f0  lw          $v0, -0x6E10($v1)
    ctx->pc = 0x1e7828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91F0u));
    // 0x1e782c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e782cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7830: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E7830u;
    {
        const bool branch_taken_0x1e7830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7830u;
        // 0x1e7834: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7830) {
            ctx->pc = 0x1E78B0u;
            goto label_1e78b0;
        }
    }
    ctx->pc = 0x1E7838u;
    // 0x1e7838: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1e7838u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1e783c: 0x8d0391ec  lw          $v1, -0x6E14($t0)
    ctx->pc = 0x1e783cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ECu));
label_1e7840:
    // 0x1e7840: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e7840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e7844: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e7844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e784c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e784cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7850u;
    {
        const bool branch_taken_0x1e7850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7850u;
        // 0x1e7854: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7850) {
            ctx->pc = 0x1E785Cu;
            goto label_1e785c;
        }
    }
    ctx->pc = 0x1E7858u;
label_1e7858:
    // 0x1e7858: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1e7858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1e785c:
    // 0x1e785c: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E785Cu;
    {
        const bool branch_taken_0x1e785c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1E7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E785Cu;
        // 0x1e7860: 0x8d2291f0  lw          $v0, -0x6E10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e785c) {
            ctx->pc = 0x1E78A0u;
            goto label_1e78a0;
        }
    }
    ctx->pc = 0x1E7864u;
    // 0x1e7864: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E7864u;
    {
        const bool branch_taken_0x1e7864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7864u;
        // 0x1e7868: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7864) {
            ctx->pc = 0x1E7890u;
            goto label_1e7890;
        }
    }
    ctx->pc = 0x1E786Cu;
    // 0x1e786c: 0x8d0291ec  lw          $v0, -0x6E14($t0)
    ctx->pc = 0x1e786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939116)));
    // 0x1e7870: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x1e7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7874: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1e7874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e7878: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x1e7878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1e787c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7880: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e7880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7884: 0x0  nop
    ctx->pc = 0x1e7884u;
    // NOP
    // 0x1e7888: 0x4502fff3  bc1fl       . + 4 + (-0xD << 2)
    ctx->pc = 0x1E7888u;
    {
        const bool branch_taken_0x1e7888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7888) {
            ctx->pc = 0x1E788Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7888u;
            // 0x1e788c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7858;
        }
    }
    ctx->pc = 0x1E7890u;
label_1e7890:
    // 0x1e7890: 0x8d0291ec  lw          $v0, -0x6E14($t0)
    ctx->pc = 0x1e7890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939116)));
    // 0x1e7894: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e7894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e7898: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1e7898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1e789c: 0x8d2291f0  lw          $v0, -0x6E10($t1)
    ctx->pc = 0x1e789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939120)));
label_1e78a0:
    // 0x1e78a0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1e78a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78a4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e78a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e78a8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1E78A8u;
    {
        const bool branch_taken_0x1e78a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78A8u;
        // 0x1e78ac: 0x8d0391ec  lw          $v1, -0x6E14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78a8) {
            ctx->pc = 0x1E7840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7840;
        }
    }
    ctx->pc = 0x1E78B0u;
label_1e78b0:
    // 0x1e78b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E78B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E78B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E78B8u;
}
