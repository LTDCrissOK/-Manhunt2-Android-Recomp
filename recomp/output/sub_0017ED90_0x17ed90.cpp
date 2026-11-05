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

// Function: sub_0017ED90
// Address: 0x17ed90 - 0x17ee90
void sub_0017ED90_0x17ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ED90_0x17ed90");
#endif

    switch (ctx->pc) {
        case 0x17edf8u: goto label_17edf8;
        case 0x17ee40u: goto label_17ee40;
        default: break;
    }

    ctx->pc = 0x17ed90u;

    // 0x17ed90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ed94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ed98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17ed9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ed9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eda0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17eda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17eda4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17eda8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x17eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x17edac: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x17EDACu;
    {
        const bool branch_taken_0x17edac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDACu;
        // 0x17edb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edac) {
            ctx->pc = 0x17EE78u;
            goto label_17ee78;
        }
    }
    ctx->pc = 0x17EDB4u;
    // 0x17edb4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x17edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x17edb8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x17EDB8u;
    {
        const bool branch_taken_0x17edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDB8u;
        // 0x17edbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edb8) {
            ctx->pc = 0x17EE78u;
            goto label_17ee78;
        }
    }
    ctx->pc = 0x17EDC0u;
    // 0x17edc0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x17edc4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x17EDC4u;
    {
        const bool branch_taken_0x17edc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDC4u;
        // 0x17edc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edc4) {
            ctx->pc = 0x17EE78u;
            goto label_17ee78;
        }
    }
    ctx->pc = 0x17EDCCu;
    // 0x17edcc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x17edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17edd0: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x17EDD0u;
    {
        const bool branch_taken_0x17edd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDD0u;
        // 0x17edd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edd0) {
            ctx->pc = 0x17EE78u;
            goto label_17ee78;
        }
    }
    ctx->pc = 0x17EDD8u;
    // 0x17edd8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17eddc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x17eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x17ede0: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x17ede0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x17ede4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ede8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17edec: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x17edecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x17edf0: 0xc04394a  jal         func_10E528
    ctx->pc = 0x17EDF0u;
    SET_GPR_U32(ctx, 31, 0x17EDF8u);
    ctx->pc = 0x17EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDF0u;
    // 0x17edf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E528u, 0x17EDF0u, 0x17EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDF8u;
label_17edf8:
    // 0x17edf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EDF8u;
    {
        const bool branch_taken_0x17edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDF8u;
        // 0x17edfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edf8) {
            ctx->pc = 0x17EE08u;
            goto label_17ee08;
        }
    }
    ctx->pc = 0x17EE00u;
    // 0x17ee00: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17EE00u;
    {
        const bool branch_taken_0x17ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE00u;
        // 0x17ee04: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee00) {
            ctx->pc = 0x17EE74u;
            goto label_17ee74;
        }
    }
    ctx->pc = 0x17EE08u;
label_17ee08:
    // 0x17ee08: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x17ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x17ee0c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17ee10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ee14: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17ee18: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x17ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x17ee1c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EE1Cu;
    {
        const bool branch_taken_0x17ee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ee1c) {
            ctx->pc = 0x17EE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EE1Cu;
            // 0x17ee20: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EE2Cu;
            goto label_17ee2c;
        }
    }
    ctx->pc = 0x17EE24u;
    // 0x17ee24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17EE24u;
    {
        const bool branch_taken_0x17ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE24u;
        // 0x17ee28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee24) {
            ctx->pc = 0x17EE34u;
            goto label_17ee34;
        }
    }
    ctx->pc = 0x17EE2Cu;
label_17ee2c:
    // 0x17ee2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ee30: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x17ee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17ee34:
    // 0x17ee34: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x17ee34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17ee38: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17EE38u;
    SET_GPR_U32(ctx, 31, 0x17EE40u);
    ctx->pc = 0x17EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE38u;
    // 0x17ee3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17EE38u, 0x17EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE40u;
label_17ee40:
    // 0x17ee40: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ee44: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17ee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ee48: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17ee4c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17ee4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17ee50: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17ee50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17ee54: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x17ee54u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17ee58: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x17ee58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x17ee5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17ee5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ee60: 0x0  nop
    ctx->pc = 0x17ee60u;
    // NOP
    // 0x17ee64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ee64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ee68: 0x0  nop
    ctx->pc = 0x17ee68u;
    // NOP
    // 0x17ee6c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17EE6Cu;
    {
        const bool branch_taken_0x17ee6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE6Cu;
        // 0x17ee70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee6c) {
            ctx->pc = 0x17EE78u;
            goto label_17ee78;
        }
    }
    ctx->pc = 0x17EE74u;
label_17ee74:
    // 0x17ee74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ee74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ee78:
    // 0x17ee78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17ee78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ee7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17ee7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ee80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17ee80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ee84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17ee84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ee88: 0x3e00008  jr          $ra
    ctx->pc = 0x17EE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE88u;
        // 0x17ee8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EE90u;
}
