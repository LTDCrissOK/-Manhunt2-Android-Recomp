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

// Function: sub_001CFC20
// Address: 0x1cfc20 - 0x1cfd18
void sub_001CFC20_0x1cfc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFC20_0x1cfc20");
#endif

    switch (ctx->pc) {
        case 0x1cfcb0u: goto label_1cfcb0;
        case 0x1cfcccu: goto label_1cfccc;
        default: break;
    }

    ctx->pc = 0x1cfc20u;

    // 0x1cfc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfc24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfc28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfc2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cfc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cfc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cfc34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cfc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cfc38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cfc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cfc3c: 0x14a0002e  bnez        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CFC3Cu;
    {
        const bool branch_taken_0x1cfc3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC3Cu;
        // 0x1cfc40: 0xe62c0024  swc1        $f12, 0x24($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc3c) {
            ctx->pc = 0x1CFCF8u;
            goto label_1cfcf8;
        }
    }
    ctx->pc = 0x1CFC44u;
    // 0x1cfc44: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x1cfc44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x1cfc48: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1cfc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1cfc4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CFC4Cu;
    {
        const bool branch_taken_0x1cfc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc4c) {
            ctx->pc = 0x1CFC74u;
            goto label_1cfc74;
        }
    }
    ctx->pc = 0x1CFC54u;
    // 0x1cfc54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfc54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfc58: 0x0  nop
    ctx->pc = 0x1cfc58u;
    // NOP
    // 0x1cfc5c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1cfc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfc60: 0x0  nop
    ctx->pc = 0x1cfc60u;
    // NOP
    // 0x1cfc64: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1CFC64u;
    {
        const bool branch_taken_0x1cfc64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC64u;
        // 0x1cfc68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc64) {
            ctx->pc = 0x1CFC8Cu;
            goto label_1cfc8c;
        }
    }
    ctx->pc = 0x1CFC6Cu;
    // 0x1cfc6c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CFC6Cu;
    {
        const bool branch_taken_0x1cfc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC6Cu;
        // 0x1cfc70: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc6c) {
            ctx->pc = 0x1CFD00u;
            goto label_1cfd00;
        }
    }
    ctx->pc = 0x1CFC74u;
label_1cfc74:
    // 0x1cfc74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfc74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfc78: 0x0  nop
    ctx->pc = 0x1cfc78u;
    // NOP
    // 0x1cfc7c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1cfc7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfc80: 0x0  nop
    ctx->pc = 0x1cfc80u;
    // NOP
    // 0x1cfc84: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1CFC84u;
    {
        const bool branch_taken_0x1cfc84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC84u;
        // 0x1cfc88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc84) {
            ctx->pc = 0x1CFCFCu;
            goto label_1cfcfc;
        }
    }
    ctx->pc = 0x1CFC8Cu;
label_1cfc8c:
    // 0x1cfc8c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1cfc8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfc90: 0x0  nop
    ctx->pc = 0x1cfc90u;
    // NOP
    // 0x1cfc94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFC94u;
    {
        const bool branch_taken_0x1cfc94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC94u;
        // 0x1cfc98: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc94) {
            ctx->pc = 0x1CFCA0u;
            goto label_1cfca0;
        }
    }
    ctx->pc = 0x1CFC9Cu;
    // 0x1cfc9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cfc9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfca0:
    // 0x1cfca0: 0x86220028  lh          $v0, 0x28($s1)
    ctx->pc = 0x1cfca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1cfca4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CFCA4u;
    {
        const bool branch_taken_0x1cfca4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCA4u;
        // 0x1cfca8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfca4) {
            ctx->pc = 0x1CFCE0u;
            goto label_1cfce0;
        }
    }
    ctx->pc = 0x1CFCACu;
    // 0x1cfcac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cfcacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfcb0:
    // 0x1cfcb0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1cfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cfcb4: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1cfcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cfcb8: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x1cfcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1cfcbc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFCBCu;
    {
        const bool branch_taken_0x1cfcbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfcbc) {
            ctx->pc = 0x1CFCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFCBCu;
            // 0x1cfcc0: 0x86220028  lh          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFCD0u;
            goto label_1cfcd0;
        }
    }
    ctx->pc = 0x1CFCC4u;
    // 0x1cfcc4: 0xc074c66  jal         func_1D3198
    ctx->pc = 0x1CFCC4u;
    SET_GPR_U32(ctx, 31, 0x1CFCCCu);
    ctx->pc = 0x1CFCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCC4u;
    // 0x1cfcc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3198u, 0x1CFCC4u, 0x1CFCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCCCu;
label_1cfccc:
    // 0x1cfccc: 0x86220028  lh          $v0, 0x28($s1)
    ctx->pc = 0x1cfcccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_1cfcd0:
    // 0x1cfcd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cfcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cfcd4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1cfcd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cfcd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CFCD8u;
    {
        const bool branch_taken_0x1cfcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCD8u;
        // 0x1cfcdc: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcd8) {
            ctx->pc = 0x1CFCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfcb0;
        }
    }
    ctx->pc = 0x1CFCE0u;
label_1cfce0:
    // 0x1cfce0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFCE0u;
    {
        const bool branch_taken_0x1cfce0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCE0u;
        // 0x1cfce4: 0x9622002a  lhu         $v0, 0x2A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfce0) {
            ctx->pc = 0x1CFCF0u;
            goto label_1cfcf0;
        }
    }
    ctx->pc = 0x1CFCE8u;
    // 0x1cfce8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFCE8u;
    {
        const bool branch_taken_0x1cfce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCE8u;
        // 0x1cfcec: 0x34420200  ori         $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfce8) {
            ctx->pc = 0x1CFCF4u;
            goto label_1cfcf4;
        }
    }
    ctx->pc = 0x1CFCF0u;
label_1cfcf0:
    // 0x1cfcf0: 0x3042fdff  andi        $v0, $v0, 0xFDFF
    ctx->pc = 0x1cfcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65023);
label_1cfcf4:
    // 0x1cfcf4: 0xa622002a  sh          $v0, 0x2A($s1)
    ctx->pc = 0x1cfcf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
label_1cfcf8:
    // 0x1cfcf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfcf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cfcfc:
    // 0x1cfcfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfcfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cfd00:
    // 0x1cfd00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cfd00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfd04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cfd04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cfd08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cfd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD0Cu;
        // 0x1cfd10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFD14u;
    // 0x1cfd14: 0x0  nop
    ctx->pc = 0x1cfd14u;
    // NOP
    ctx->pc = 0x1cfd18u;
}
