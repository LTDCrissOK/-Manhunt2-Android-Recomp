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

// Function: sub_0022ED48
// Address: 0x22ed48 - 0x22eeb8
void sub_0022ED48_0x22ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ED48_0x22ed48");
#endif

    switch (ctx->pc) {
        case 0x22eddcu: goto label_22eddc;
        case 0x22ee68u: goto label_22ee68;
        case 0x22eea4u: goto label_22eea4;
        default: break;
    }

    ctx->pc = 0x22ed48u;

    // 0x22ed48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ed48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ed4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ed50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22ed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22ed54: 0x10c00053  beqz        $a2, . + 4 + (0x53 << 2)
    ctx->pc = 0x22ED54u;
    {
        const bool branch_taken_0x22ed54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED54u;
        // 0x22ed58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed54) {
            ctx->pc = 0x22EEA4u;
            goto label_22eea4;
        }
    }
    ctx->pc = 0x22ED5Cu;
    // 0x22ed5c: 0x8cc2010c  lw          $v0, 0x10C($a2)
    ctx->pc = 0x22ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
    // 0x22ed60: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x22ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x22ed64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ed6c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x22ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22ed70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22ed70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22ed74: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22ED74u;
    {
        const bool branch_taken_0x22ed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED74u;
        // 0x22ed78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed74) {
            ctx->pc = 0x22ED94u;
            goto label_22ed94;
        }
    }
    ctx->pc = 0x22ED7Cu;
    // 0x22ed7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ed80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ED80u;
    {
        const bool branch_taken_0x22ed80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED80u;
        // 0x22ed84: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed80) {
            ctx->pc = 0x22ED90u;
            goto label_22ed90;
        }
    }
    ctx->pc = 0x22ED88u;
    // 0x22ed88: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22ED88u;
    {
        const bool branch_taken_0x22ed88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED88u;
        // 0x22ed8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed88) {
            ctx->pc = 0x22ED94u;
            goto label_22ed94;
        }
    }
    ctx->pc = 0x22ED90u;
label_22ed90:
    // 0x22ed90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ed94:
    // 0x22ed94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22ed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22ed98: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x22ED98u;
    {
        const bool branch_taken_0x22ed98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed98) {
            ctx->pc = 0x22ED9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ED98u;
            // 0x22ed9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EEA8u;
            goto label_22eea8;
        }
    }
    ctx->pc = 0x22EDA0u;
    // 0x22eda0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x22eda4: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x22eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x22eda8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22edac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EDACu;
    {
        const bool branch_taken_0x22edac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDACu;
        // 0x22edb0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edac) {
            ctx->pc = 0x22EDC4u;
            goto label_22edc4;
        }
    }
    ctx->pc = 0x22EDB4u;
    // 0x22edb4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x22edb8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22edb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22edbc: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x22EDBCu;
    {
        const bool branch_taken_0x22edbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDBCu;
        // 0x22edc0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edbc) {
            ctx->pc = 0x22EEA4u;
            goto label_22eea4;
        }
    }
    ctx->pc = 0x22EDC4u;
label_22edc4:
    // 0x22edc4: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x22edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x22edc8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22edc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x22edcc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22EDCCu;
    {
        const bool branch_taken_0x22edcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDCCu;
        // 0x22edd0: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edcc) {
            ctx->pc = 0x22EDF4u;
            goto label_22edf4;
        }
    }
    ctx->pc = 0x22EDD4u;
    // 0x22edd4: 0xc0b87e8  jal         func_2E1FA0
    ctx->pc = 0x22EDD4u;
    SET_GPR_U32(ctx, 31, 0x22EDDCu);
    ctx->pc = 0x2E1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1FA0u, 0x22EDD4u, 0x22EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDDCu;
label_22eddc:
    // 0x22eddc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x22EDDCu;
    {
        const bool branch_taken_0x22eddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDDCu;
        // 0x22ede0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eddc) {
            ctx->pc = 0x22EEA4u;
            goto label_22eea4;
        }
    }
    ctx->pc = 0x22EDE4u;
    // 0x22ede4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ede4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ede8: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x22ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x22edec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x22EDECu;
    {
        const bool branch_taken_0x22edec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDECu;
        // 0x22edf0: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edec) {
            ctx->pc = 0x22EE5Cu;
            goto label_22ee5c;
        }
    }
    ctx->pc = 0x22EDF4u;
label_22edf4:
    // 0x22edf4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22edf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x22edf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22edf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22edfc: 0x5062002a  beql        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22EDFCu;
    {
        const bool branch_taken_0x22edfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22edfc) {
            ctx->pc = 0x22EE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EDFCu;
            // 0x22ee00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EEA8u;
            goto label_22eea8;
        }
    }
    ctx->pc = 0x22EE04u;
    // 0x22ee04: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x22ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x22ee08: 0x3c014205  lui         $at, 0x4205
    ctx->pc = 0x22ee08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16901 << 16));
    // 0x22ee0c: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x22ee0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
    // 0x22ee10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ee10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ee14: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x22ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ee18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ee18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ee1c: 0x0  nop
    ctx->pc = 0x22ee1cu;
    // NOP
    // 0x22ee20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22EE20u;
    {
        const bool branch_taken_0x22ee20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE20u;
        // 0x22ee24: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee20) {
            ctx->pc = 0x22EE38u;
            goto label_22ee38;
        }
    }
    ctx->pc = 0x22EE28u;
    // 0x22ee28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ee28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee2c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x22ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x22ee30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22EE30u;
    {
        const bool branch_taken_0x22ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE30u;
        // 0x22ee34: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee30) {
            ctx->pc = 0x22EE5Cu;
            goto label_22ee5c;
        }
    }
    ctx->pc = 0x22EE38u;
label_22ee38:
    // 0x22ee38: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x22ee38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x22ee3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ee3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ee40: 0x0  nop
    ctx->pc = 0x22ee40u;
    // NOP
    // 0x22ee44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ee44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ee48: 0x0  nop
    ctx->pc = 0x22ee48u;
    // NOP
    // 0x22ee4c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22EE4Cu;
    {
        const bool branch_taken_0x22ee4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE4Cu;
        // 0x22ee50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee4c) {
            ctx->pc = 0x22EE70u;
            goto label_22ee70;
        }
    }
    ctx->pc = 0x22EE54u;
    // 0x22ee54: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x22ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x22ee58: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x22ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_22ee5c:
    // 0x22ee5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ee5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ee60: 0xc046642  jal         func_119908
    ctx->pc = 0x22EE60u;
    SET_GPR_U32(ctx, 31, 0x22EE68u);
    ctx->pc = 0x22EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE60u;
    // 0x22ee64: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x22EE60u, 0x22EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE68u;
label_22ee68:
    // 0x22ee68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22EE68u;
    {
        const bool branch_taken_0x22ee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE68u;
        // 0x22ee6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee68) {
            ctx->pc = 0x22EEA8u;
            goto label_22eea8;
        }
    }
    ctx->pc = 0x22EE70u;
label_22ee70:
    // 0x22ee70: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x22ee70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x22ee74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ee74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ee78: 0x0  nop
    ctx->pc = 0x22ee78u;
    // NOP
    // 0x22ee7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22ee7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ee80: 0x0  nop
    ctx->pc = 0x22ee80u;
    // NOP
    // 0x22ee84: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x22EE84u;
    {
        const bool branch_taken_0x22ee84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE84u;
        // 0x22ee88: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee84) {
            ctx->pc = 0x22EEA4u;
            goto label_22eea4;
        }
    }
    ctx->pc = 0x22EE8Cu;
    // 0x22ee8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ee8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee90: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x22ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x22ee94: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x22ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x22ee98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ee98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ee9c: 0xc046642  jal         func_119908
    ctx->pc = 0x22EE9Cu;
    SET_GPR_U32(ctx, 31, 0x22EEA4u);
    ctx->pc = 0x22EEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE9Cu;
    // 0x22eea0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x22EE9Cu, 0x22EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EEA4u;
label_22eea4:
    // 0x22eea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22eea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22eea8:
    // 0x22eea8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22eeac: 0x3e00008  jr          $ra
    ctx->pc = 0x22EEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEACu;
        // 0x22eeb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EEB4u;
    // 0x22eeb4: 0x0  nop
    ctx->pc = 0x22eeb4u;
    // NOP
    ctx->pc = 0x22eeb8u;
}
