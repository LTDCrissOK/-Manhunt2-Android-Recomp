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

// Function: sub_002EDD00
// Address: 0x2edd00 - 0x2eddd8
void sub_002EDD00_0x2edd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDD00_0x2edd00");
#endif

    switch (ctx->pc) {
        case 0x2edd64u: goto label_2edd64;
        case 0x2edd74u: goto label_2edd74;
        case 0x2edd84u: goto label_2edd84;
        default: break;
    }

    ctx->pc = 0x2edd00u;

    // 0x2edd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2edd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2edd08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2edd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2edd0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2edd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd10: 0x8e0311f0  lw          $v1, 0x11F0($s0)
    ctx->pc = 0x2edd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4592)));
    // 0x2edd14: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDD14u;
    {
        const bool branch_taken_0x2edd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD14u;
        // 0x2edd18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd14) {
            ctx->pc = 0x2EDD2Cu;
            goto label_2edd2c;
        }
    }
    ctx->pc = 0x2EDD1Cu;
    // 0x2edd1c: 0x8e0204f4  lw          $v0, 0x4F4($s0)
    ctx->pc = 0x2edd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
    // 0x2edd20: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2edd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2edd24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EDD24u;
    {
        const bool branch_taken_0x2edd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD24u;
        // 0x2edd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd24) {
            ctx->pc = 0x2EDD5Cu;
            goto label_2edd5c;
        }
    }
    ctx->pc = 0x2EDD2Cu;
label_2edd2c:
    // 0x2edd2c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDD2Cu;
    {
        const bool branch_taken_0x2edd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD2Cu;
        // 0x2edd30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd2c) {
            ctx->pc = 0x2EDD44u;
            goto label_2edd44;
        }
    }
    ctx->pc = 0x2EDD34u;
    // 0x2edd34: 0x8e0204f4  lw          $v0, 0x4F4($s0)
    ctx->pc = 0x2edd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
    // 0x2edd38: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2edd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x2edd3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDD3Cu;
    {
        const bool branch_taken_0x2edd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD3Cu;
        // 0x2edd40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd3c) {
            ctx->pc = 0x2EDD5Cu;
            goto label_2edd5c;
        }
    }
    ctx->pc = 0x2EDD44u;
label_2edd44:
    // 0x2edd44: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EDD44u;
    {
        const bool branch_taken_0x2edd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2edd44) {
            ctx->pc = 0x2EDD6Cu;
            goto label_2edd6c;
        }
    }
    ctx->pc = 0x2EDD4Cu;
    // 0x2edd4c: 0x8e0204f4  lw          $v0, 0x4F4($s0)
    ctx->pc = 0x2edd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
    // 0x2edd50: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2edd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x2edd54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDD54u;
    {
        const bool branch_taken_0x2edd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edd54) {
            ctx->pc = 0x2EDD6Cu;
            goto label_2edd6c;
        }
    }
    ctx->pc = 0x2EDD5Cu;
label_2edd5c:
    // 0x2edd5c: 0xc0bb736  jal         func_2EDCD8
    ctx->pc = 0x2EDD5Cu;
    SET_GPR_U32(ctx, 31, 0x2EDD64u);
    ctx->pc = 0x2EDD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD5Cu;
    // 0x2edd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDCD8u, 0x2EDD5Cu, 0x2EDD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD64u;
label_2edd64:
    // 0x2edd64: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EDD64u;
    {
        const bool branch_taken_0x2edd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD64u;
        // 0x2edd68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd64) {
            ctx->pc = 0x2EDDC8u;
            goto label_2eddc8;
        }
    }
    ctx->pc = 0x2EDD6Cu;
label_2edd6c:
    // 0x2edd6c: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x2EDD6Cu;
    SET_GPR_U32(ctx, 31, 0x2EDD74u);
    ctx->pc = 0x2EDD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD6Cu;
    // 0x2edd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2EDD6Cu, 0x2EDD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD74u;
label_2edd74:
    // 0x2edd74: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EDD74u;
    {
        const bool branch_taken_0x2edd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edd74) {
            ctx->pc = 0x2EDD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDD74u;
            // 0x2edd78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDC8u;
            goto label_2eddc8;
        }
    }
    ctx->pc = 0x2EDD7Cu;
    // 0x2edd7c: 0xc0b93fe  jal         func_2E4FF8
    ctx->pc = 0x2EDD7Cu;
    SET_GPR_U32(ctx, 31, 0x2EDD84u);
    ctx->pc = 0x2EDD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDD7Cu;
    // 0x2edd80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF8u, 0x2EDD7Cu, 0x2EDD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDD84u;
label_2edd84:
    // 0x2edd84: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EDD84u;
    {
        const bool branch_taken_0x2edd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edd84) {
            ctx->pc = 0x2EDD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDD84u;
            // 0x2edd88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDC8u;
            goto label_2eddc8;
        }
    }
    ctx->pc = 0x2EDD8Cu;
    // 0x2edd8c: 0xc60012b8  lwc1        $f0, 0x12B8($s0)
    ctx->pc = 0x2edd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2edd90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2edd90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2edd94: 0x0  nop
    ctx->pc = 0x2edd94u;
    // NOP
    // 0x2edd98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2edd98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2edd9c: 0x0  nop
    ctx->pc = 0x2edd9cu;
    // NOP
    // 0x2edda0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDDA0u;
    {
        const bool branch_taken_0x2edda0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2edda0) {
            ctx->pc = 0x2EDDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDDA0u;
            // 0x2edda4: 0xe60112b8  swc1        $f1, 0x12B8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4792), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDC4u;
            goto label_2eddc4;
        }
    }
    ctx->pc = 0x2EDDA8u;
    // 0x2edda8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2edda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eddac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2eddacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2eddb0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x2eddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x2eddb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eddb8: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x2eddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x2eddbc: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2eddc0: 0xe60112b8  swc1        $f1, 0x12B8($s0)
    ctx->pc = 0x2eddc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4792), bits); }
label_2eddc4:
    // 0x2eddc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eddc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eddc8:
    // 0x2eddc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eddc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eddcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDCCu;
        // 0x2eddd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDDD4u;
    // 0x2eddd4: 0x0  nop
    ctx->pc = 0x2eddd4u;
    // NOP
    ctx->pc = 0x2eddd8u;
}
