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

// Function: sub_0019ECD0
// Address: 0x19ecd0 - 0x19ede0
void sub_0019ECD0_0x19ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ECD0_0x19ecd0");
#endif

    switch (ctx->pc) {
        case 0x19ecd0u: goto label_19ecd0;
        case 0x19ecd4u: goto label_19ecd4;
        case 0x19ecd8u: goto label_19ecd8;
        case 0x19ecdcu: goto label_19ecdc;
        case 0x19ece0u: goto label_19ece0;
        case 0x19ece4u: goto label_19ece4;
        case 0x19ece8u: goto label_19ece8;
        case 0x19ececu: goto label_19ecec;
        case 0x19ecf0u: goto label_19ecf0;
        case 0x19ecf4u: goto label_19ecf4;
        case 0x19ecf8u: goto label_19ecf8;
        case 0x19ecfcu: goto label_19ecfc;
        case 0x19ed00u: goto label_19ed00;
        case 0x19ed04u: goto label_19ed04;
        case 0x19ed08u: goto label_19ed08;
        case 0x19ed0cu: goto label_19ed0c;
        case 0x19ed10u: goto label_19ed10;
        case 0x19ed14u: goto label_19ed14;
        case 0x19ed18u: goto label_19ed18;
        case 0x19ed1cu: goto label_19ed1c;
        case 0x19ed20u: goto label_19ed20;
        case 0x19ed24u: goto label_19ed24;
        case 0x19ed28u: goto label_19ed28;
        case 0x19ed2cu: goto label_19ed2c;
        case 0x19ed30u: goto label_19ed30;
        case 0x19ed34u: goto label_19ed34;
        case 0x19ed38u: goto label_19ed38;
        case 0x19ed3cu: goto label_19ed3c;
        case 0x19ed40u: goto label_19ed40;
        case 0x19ed44u: goto label_19ed44;
        case 0x19ed48u: goto label_19ed48;
        case 0x19ed4cu: goto label_19ed4c;
        case 0x19ed50u: goto label_19ed50;
        case 0x19ed54u: goto label_19ed54;
        case 0x19ed58u: goto label_19ed58;
        case 0x19ed5cu: goto label_19ed5c;
        case 0x19ed60u: goto label_19ed60;
        case 0x19ed64u: goto label_19ed64;
        case 0x19ed68u: goto label_19ed68;
        case 0x19ed6cu: goto label_19ed6c;
        case 0x19ed70u: goto label_19ed70;
        case 0x19ed74u: goto label_19ed74;
        case 0x19ed78u: goto label_19ed78;
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19ed80u: goto label_19ed80;
        case 0x19ed84u: goto label_19ed84;
        case 0x19ed88u: goto label_19ed88;
        case 0x19ed8cu: goto label_19ed8c;
        case 0x19ed90u: goto label_19ed90;
        case 0x19ed94u: goto label_19ed94;
        case 0x19ed98u: goto label_19ed98;
        case 0x19ed9cu: goto label_19ed9c;
        case 0x19eda0u: goto label_19eda0;
        case 0x19eda4u: goto label_19eda4;
        case 0x19eda8u: goto label_19eda8;
        case 0x19edacu: goto label_19edac;
        case 0x19edb0u: goto label_19edb0;
        case 0x19edb4u: goto label_19edb4;
        case 0x19edb8u: goto label_19edb8;
        case 0x19edbcu: goto label_19edbc;
        case 0x19edc0u: goto label_19edc0;
        case 0x19edc4u: goto label_19edc4;
        case 0x19edc8u: goto label_19edc8;
        case 0x19edccu: goto label_19edcc;
        case 0x19edd0u: goto label_19edd0;
        case 0x19edd4u: goto label_19edd4;
        case 0x19edd8u: goto label_19edd8;
        case 0x19eddcu: goto label_19eddc;
        default: break;
    }

    ctx->pc = 0x19ecd0u;

label_19ecd0:
    // 0x19ecd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19ecd4:
    // 0x19ecd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ecd8:
    // 0x19ecd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19ecdc:
    // 0x19ecdc: 0xc061a12  jal         func_186848
label_19ece0:
    if (ctx->pc == 0x19ECE0u) {
        ctx->pc = 0x19ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECDCu;
        // 0x19ece0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ECE4u;
        goto label_19ece4;
    }
    ctx->pc = 0x19ECDCu;
    SET_GPR_U32(ctx, 31, 0x19ECE4u);
    ctx->pc = 0x19ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECDCu;
    // 0x19ece0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19ECDCu, 0x19ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECE4u;
label_19ece4:
    // 0x19ece4: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19ece8:
    // 0x19ece8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ecec:
    // 0x19ecec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19ecf0:
    // 0x19ecf0: 0x40f809  jalr        $v0
label_19ecf4:
    if (ctx->pc == 0x19ECF4u) {
        ctx->pc = 0x19ECF8u;
        goto label_19ecf8;
    }
    ctx->pc = 0x19ECF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19ECF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ECF0u, 0x19ECF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19ECF8u;
label_19ecf8:
    // 0x19ecf8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_19ecfc:
    if (ctx->pc == 0x19ECFCu) {
        ctx->pc = 0x19ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECF8u;
        // 0x19ecfc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED00u;
        goto label_19ed00;
    }
    ctx->pc = 0x19ECF8u;
    {
        const bool branch_taken_0x19ecf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECF8u;
        // 0x19ecfc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecf8) {
            ctx->pc = 0x19EDD0u;
            goto label_19edd0;
        }
    }
    ctx->pc = 0x19ED00u;
label_19ed00:
    // 0x19ed00: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19ed04:
    // 0x19ed04: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19ed08:
    if (ctx->pc == 0x19ED08u) {
        ctx->pc = 0x19ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED04u;
        // 0x19ed08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED0Cu;
        goto label_19ed0c;
    }
    ctx->pc = 0x19ED04u;
    {
        const bool branch_taken_0x19ed04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED04u;
        // 0x19ed08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed04) {
            ctx->pc = 0x19ED20u;
            goto label_19ed20;
        }
    }
    ctx->pc = 0x19ED0Cu;
label_19ed0c:
    // 0x19ed0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ed0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ed10:
    // 0x19ed10: 0x0  nop
    ctx->pc = 0x19ed10u;
    // NOP
label_19ed14:
    // 0x19ed14: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ed14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19ed18:
    // 0x19ed18: 0x10000007  b           . + 4 + (0x7 << 2)
label_19ed1c:
    if (ctx->pc == 0x19ED1Cu) {
        ctx->pc = 0x19ED20u;
        goto label_19ed20;
    }
    ctx->pc = 0x19ED18u;
    {
        const bool branch_taken_0x19ed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed18) {
            ctx->pc = 0x19ED38u;
            goto label_19ed38;
        }
    }
    ctx->pc = 0x19ED20u;
label_19ed20:
    // 0x19ed20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ed24:
    // 0x19ed24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19ed24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19ed28:
    // 0x19ed28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ed28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ed2c:
    // 0x19ed2c: 0x0  nop
    ctx->pc = 0x19ed2cu;
    // NOP
label_19ed30:
    // 0x19ed30: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ed30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19ed34:
    // 0x19ed34: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19ed34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19ed38:
    // 0x19ed38: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19ed38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19ed3c:
    // 0x19ed3c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19ed3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19ed40:
    // 0x19ed40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ed40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ed44:
    // 0x19ed44: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x19ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ed48:
    // 0x19ed48: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19ed48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19ed4c:
    // 0x19ed4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ed4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19ed50:
    // 0x19ed50: 0x0  nop
    ctx->pc = 0x19ed50u;
    // NOP
label_19ed54:
    // 0x19ed54: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
label_19ed58:
    if (ctx->pc == 0x19ED58u) {
        ctx->pc = 0x19ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED54u;
        // 0x19ed58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED5Cu;
        goto label_19ed5c;
    }
    ctx->pc = 0x19ED54u;
    {
        const bool branch_taken_0x19ed54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ed54) {
            ctx->pc = 0x19ED58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19ED54u;
            // 0x19ed58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EDD4u;
            goto label_19edd4;
        }
    }
    ctx->pc = 0x19ED5Cu;
label_19ed5c:
    // 0x19ed5c: 0xc064aac  jal         func_192AB0
label_19ed60:
    if (ctx->pc == 0x19ED60u) {
        ctx->pc = 0x19ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED5Cu;
        // 0x19ed60: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED64u;
        goto label_19ed64;
    }
    ctx->pc = 0x19ED5Cu;
    SET_GPR_U32(ctx, 31, 0x19ED64u);
    ctx->pc = 0x19ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED5Cu;
    // 0x19ed60: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192AB0u, 0x19ED5Cu, 0x19ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED64u;
label_19ed64:
    // 0x19ed64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19ed68:
    if (ctx->pc == 0x19ED68u) {
        ctx->pc = 0x19ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED64u;
        // 0x19ed68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED6Cu;
        goto label_19ed6c;
    }
    ctx->pc = 0x19ED64u;
    {
        const bool branch_taken_0x19ed64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED64u;
        // 0x19ed68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed64) {
            ctx->pc = 0x19ED7Cu;
            goto label_19ed7c;
        }
    }
    ctx->pc = 0x19ED6Cu;
label_19ed6c:
    // 0x19ed6c: 0xc067bc2  jal         func_19EF08
label_19ed70:
    if (ctx->pc == 0x19ED70u) {
        ctx->pc = 0x19ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED6Cu;
        // 0x19ed70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED74u;
        goto label_19ed74;
    }
    ctx->pc = 0x19ED6Cu;
    SET_GPR_U32(ctx, 31, 0x19ED74u);
    ctx->pc = 0x19ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED6Cu;
    // 0x19ed70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF08u, 0x19ED6Cu, 0x19ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED74u;
label_19ed74:
    // 0x19ed74: 0x10000017  b           . + 4 + (0x17 << 2)
label_19ed78:
    if (ctx->pc == 0x19ED78u) {
        ctx->pc = 0x19ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED74u;
        // 0x19ed78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED7Cu;
        goto label_19ed7c;
    }
    ctx->pc = 0x19ED74u;
    {
        const bool branch_taken_0x19ed74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED74u;
        // 0x19ed78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed74) {
            ctx->pc = 0x19EDD4u;
            goto label_19edd4;
        }
    }
    ctx->pc = 0x19ED7Cu;
label_19ed7c:
    // 0x19ed7c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x19ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19ed80:
    // 0x19ed80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_19ed84:
    if (ctx->pc == 0x19ED84u) {
        ctx->pc = 0x19ED88u;
        goto label_19ed88;
    }
    ctx->pc = 0x19ED80u;
    {
        const bool branch_taken_0x19ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed80) {
            ctx->pc = 0x19EDA8u;
            goto label_19eda8;
        }
    }
    ctx->pc = 0x19ED88u;
label_19ed88:
    // 0x19ed88: 0xc064a9c  jal         func_192A70
label_19ed8c:
    if (ctx->pc == 0x19ED8Cu) {
        ctx->pc = 0x19ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED88u;
        // 0x19ed8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED90u;
        goto label_19ed90;
    }
    ctx->pc = 0x19ED88u;
    SET_GPR_U32(ctx, 31, 0x19ED90u);
    ctx->pc = 0x19ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED88u;
    // 0x19ed8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A70u, 0x19ED88u, 0x19ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED90u;
label_19ed90:
    // 0x19ed90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19ed94:
    if (ctx->pc == 0x19ED94u) {
        ctx->pc = 0x19ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED90u;
        // 0x19ed94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED98u;
        goto label_19ed98;
    }
    ctx->pc = 0x19ED90u;
    {
        const bool branch_taken_0x19ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED90u;
        // 0x19ed94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed90) {
            ctx->pc = 0x19EDA8u;
            goto label_19eda8;
        }
    }
    ctx->pc = 0x19ED98u;
label_19ed98:
    // 0x19ed98: 0xc067bc2  jal         func_19EF08
label_19ed9c:
    if (ctx->pc == 0x19ED9Cu) {
        ctx->pc = 0x19ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED98u;
        // 0x19ed9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDA0u;
        goto label_19eda0;
    }
    ctx->pc = 0x19ED98u;
    SET_GPR_U32(ctx, 31, 0x19EDA0u);
    ctx->pc = 0x19ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED98u;
    // 0x19ed9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF08u, 0x19ED98u, 0x19EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDA0u;
label_19eda0:
    // 0x19eda0: 0x1000000c  b           . + 4 + (0xC << 2)
label_19eda4:
    if (ctx->pc == 0x19EDA4u) {
        ctx->pc = 0x19EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDA0u;
        // 0x19eda4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDA8u;
        goto label_19eda8;
    }
    ctx->pc = 0x19EDA0u;
    {
        const bool branch_taken_0x19eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDA0u;
        // 0x19eda4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eda0) {
            ctx->pc = 0x19EDD4u;
            goto label_19edd4;
        }
    }
    ctx->pc = 0x19EDA8u;
label_19eda8:
    // 0x19eda8: 0xc064adc  jal         func_192B70
label_19edac:
    if (ctx->pc == 0x19EDACu) {
        ctx->pc = 0x19EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDA8u;
        // 0x19edac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDB0u;
        goto label_19edb0;
    }
    ctx->pc = 0x19EDA8u;
    SET_GPR_U32(ctx, 31, 0x19EDB0u);
    ctx->pc = 0x19EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDA8u;
    // 0x19edac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x19EDA8u, 0x19EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDB0u;
label_19edb0:
    // 0x19edb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19edb4:
    if (ctx->pc == 0x19EDB4u) {
        ctx->pc = 0x19EDB8u;
        goto label_19edb8;
    }
    ctx->pc = 0x19EDB0u;
    {
        const bool branch_taken_0x19edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19edb0) {
            ctx->pc = 0x19EDC8u;
            goto label_19edc8;
        }
    }
    ctx->pc = 0x19EDB8u;
label_19edb8:
    // 0x19edb8: 0xc067be2  jal         func_19EF88
label_19edbc:
    if (ctx->pc == 0x19EDBCu) {
        ctx->pc = 0x19EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDB8u;
        // 0x19edbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDC0u;
        goto label_19edc0;
    }
    ctx->pc = 0x19EDB8u;
    SET_GPR_U32(ctx, 31, 0x19EDC0u);
    ctx->pc = 0x19EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDB8u;
    // 0x19edbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF88u, 0x19EDB8u, 0x19EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDC0u;
label_19edc0:
    // 0x19edc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_19edc4:
    if (ctx->pc == 0x19EDC4u) {
        ctx->pc = 0x19EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDC0u;
        // 0x19edc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDC8u;
        goto label_19edc8;
    }
    ctx->pc = 0x19EDC0u;
    {
        const bool branch_taken_0x19edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDC0u;
        // 0x19edc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19edc0) {
            ctx->pc = 0x19EDD4u;
            goto label_19edd4;
        }
    }
    ctx->pc = 0x19EDC8u;
label_19edc8:
    // 0x19edc8: 0xc067b98  jal         func_19EE60
label_19edcc:
    if (ctx->pc == 0x19EDCCu) {
        ctx->pc = 0x19EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDC8u;
        // 0x19edcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDD0u;
        goto label_19edd0;
    }
    ctx->pc = 0x19EDC8u;
    SET_GPR_U32(ctx, 31, 0x19EDD0u);
    ctx->pc = 0x19EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDC8u;
    // 0x19edcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE60u, 0x19EDC8u, 0x19EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDD0u;
label_19edd0:
    // 0x19edd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19edd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19edd4:
    // 0x19edd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19edd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19edd8:
    // 0x19edd8: 0x3e00008  jr          $ra
label_19eddc:
    if (ctx->pc == 0x19EDDCu) {
        ctx->pc = 0x19EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDD8u;
        // 0x19eddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDE0u;
        goto label_fallthrough_0x19edd8;
    }
    ctx->pc = 0x19EDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDD8u;
        // 0x19eddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19edd8:
    ctx->pc = 0x19EDE0u;
}
