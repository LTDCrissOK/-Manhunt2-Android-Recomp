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

// Function: sub_001E5120
// Address: 0x1e5120 - 0x1e51b8
void sub_001E5120_0x1e5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5120_0x1e5120");
#endif

    switch (ctx->pc) {
        case 0x1e5140u: goto label_1e5140;
        case 0x1e5158u: goto label_1e5158;
        default: break;
    }

    ctx->pc = 0x1e5120u;

    // 0x1e5120: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e5120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e5124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5128: 0x8c6291d8  lw          $v0, -0x6E28($v1)
    ctx->pc = 0x1e5128u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91D8u));
    // 0x1e512c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e512cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5130: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E5130u;
    {
        const bool branch_taken_0x1e5130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5130u;
        // 0x1e5134: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5130) {
            ctx->pc = 0x1E51A8u;
            goto label_1e51a8;
        }
    }
    ctx->pc = 0x1E5138u;
    // 0x1e5138: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1e5138u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1e513c: 0x8d0391d4  lw          $v1, -0x6E2C($t0)
    ctx->pc = 0x1e513cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91D4u));
label_1e5140:
    // 0x1e5140: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e5140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e5144: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e5144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e514c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e514cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5150u;
    {
        const bool branch_taken_0x1e5150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5150u;
        // 0x1e5154: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5150) {
            ctx->pc = 0x1E515Cu;
            goto label_1e515c;
        }
    }
    ctx->pc = 0x1E5158u;
label_1e5158:
    // 0x1e5158: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1e5158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1e515c:
    // 0x1e515c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E515Cu;
    {
        const bool branch_taken_0x1e515c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E515Cu;
        // 0x1e5160: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e515c) {
            ctx->pc = 0x1E5188u;
            goto label_1e5188;
        }
    }
    ctx->pc = 0x1E5164u;
    // 0x1e5164: 0x8d0291d4  lw          $v0, -0x6E2C($t0)
    ctx->pc = 0x1e5164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939092)));
    // 0x1e5168: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x1e5168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e516c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1e516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e5170: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x1e5170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1e5174: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e5174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5178: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e5178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e517c: 0x0  nop
    ctx->pc = 0x1e517cu;
    // NOP
    // 0x1e5180: 0x4502fff5  bc1fl       . + 4 + (-0xB << 2)
    ctx->pc = 0x1E5180u;
    {
        const bool branch_taken_0x1e5180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5180) {
            ctx->pc = 0x1E5184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5180u;
            // 0x1e5184: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5158;
        }
    }
    ctx->pc = 0x1E5188u;
label_1e5188:
    // 0x1e5188: 0x8d0291d4  lw          $v0, -0x6E2C($t0)
    ctx->pc = 0x1e5188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939092)));
    // 0x1e518c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e5190: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1e5190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1e5194: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1e5194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5198: 0x8d2291d8  lw          $v0, -0x6E28($t1)
    ctx->pc = 0x1e5198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939096)));
    // 0x1e519c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e519cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e51a0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1E51A0u;
    {
        const bool branch_taken_0x1e51a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51A0u;
        // 0x1e51a4: 0x8d0391d4  lw          $v1, -0x6E2C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51a0) {
            ctx->pc = 0x1E5140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5140;
        }
    }
    ctx->pc = 0x1E51A8u;
label_1e51a8:
    // 0x1e51a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E51A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E51A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E51B0u;
    // 0x1e51b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e51b4: 0x0  nop
    ctx->pc = 0x1e51b4u;
    // NOP
    ctx->pc = 0x1e51b8u;
}
