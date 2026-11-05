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

// Function: sub_0018CBE0
// Address: 0x18cbe0 - 0x18cf10
void sub_0018CBE0_0x18cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CBE0_0x18cbe0");
#endif

    switch (ctx->pc) {
        case 0x18cbf8u: goto label_18cbf8;
        case 0x18cc10u: goto label_18cc10;
        case 0x18cc1cu: goto label_18cc1c;
        case 0x18cc24u: goto label_18cc24;
        case 0x18cc9cu: goto label_18cc9c;
        case 0x18cca4u: goto label_18cca4;
        case 0x18ccccu: goto label_18cccc;
        case 0x18cd00u: goto label_18cd00;
        case 0x18cd10u: goto label_18cd10;
        case 0x18cd1cu: goto label_18cd1c;
        case 0x18cd2cu: goto label_18cd2c;
        case 0x18cd44u: goto label_18cd44;
        case 0x18cd84u: goto label_18cd84;
        case 0x18cd9cu: goto label_18cd9c;
        case 0x18cda8u: goto label_18cda8;
        case 0x18cdb8u: goto label_18cdb8;
        case 0x18cdd0u: goto label_18cdd0;
        case 0x18cddcu: goto label_18cddc;
        case 0x18cde4u: goto label_18cde4;
        case 0x18cdf4u: goto label_18cdf4;
        case 0x18ce64u: goto label_18ce64;
        case 0x18ceb8u: goto label_18ceb8;
        case 0x18ced0u: goto label_18ced0;
        case 0x18cee0u: goto label_18cee0;
        case 0x18cee8u: goto label_18cee8;
        default: break;
    }

    ctx->pc = 0x18cbe0u;

    // 0x18cbe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18cbe4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x18cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x18cbe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18cbe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x18cbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x18cbf0: 0xc061a2e  jal         func_1868B8
    ctx->pc = 0x18CBF0u;
    SET_GPR_U32(ctx, 31, 0x18CBF8u);
    ctx->pc = 0x18CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBF0u;
    // 0x18cbf4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18CBF0u, 0x18CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBF8u;
label_18cbf8:
    // 0x18cbf8: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18cbfc: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18cc00: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CC00u;
    {
        const bool branch_taken_0x18cc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x18cc00) {
            ctx->pc = 0x18CC1Cu;
            goto label_18cc1c;
        }
    }
    ctx->pc = 0x18CC08u;
    // 0x18cc08: 0xc061a2a  jal         func_1868A8
    ctx->pc = 0x18CC08u;
    SET_GPR_U32(ctx, 31, 0x18CC10u);
    ctx->pc = 0x18CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC08u;
    // 0x18cc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18CC08u, 0x18CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC10u;
label_18cc10:
    // 0x18cc10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18cc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc14: 0xc071056  jal         func_1C4158
    ctx->pc = 0x18CC14u;
    SET_GPR_U32(ctx, 31, 0x18CC1Cu);
    ctx->pc = 0x18CC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC14u;
    // 0x18cc18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4158u, 0x18CC14u, 0x18CC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC1Cu;
label_18cc1c:
    // 0x18cc1c: 0xc061a2a  jal         func_1868A8
    ctx->pc = 0x18CC1Cu;
    SET_GPR_U32(ctx, 31, 0x18CC24u);
    ctx->pc = 0x18CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC1Cu;
    // 0x18cc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18CC1Cu, 0x18CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC24u;
label_18cc24:
    // 0x18cc24: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x18cc28: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18cc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x18cc2c: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x18CC2Cu;
    {
        const bool branch_taken_0x18cc2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cc2c) {
            ctx->pc = 0x18CC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CC2Cu;
            // 0x18cc30: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CCB8u;
            goto label_18ccb8;
        }
    }
    ctx->pc = 0x18CC34u;
    // 0x18cc34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18cc38: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x18cc3c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CC3Cu;
    {
        const bool branch_taken_0x18cc3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC3Cu;
        // 0x18cc40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc3c) {
            ctx->pc = 0x18CC58u;
            goto label_18cc58;
        }
    }
    ctx->pc = 0x18CC44u;
    // 0x18cc44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18cc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18cc48: 0x0  nop
    ctx->pc = 0x18cc48u;
    // NOP
    // 0x18cc4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18cc4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18cc50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18CC50u;
    {
        const bool branch_taken_0x18cc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc50) {
            ctx->pc = 0x18CC70u;
            goto label_18cc70;
        }
    }
    ctx->pc = 0x18CC58u;
label_18cc58:
    // 0x18cc58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18cc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18cc5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18cc60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18cc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18cc64: 0x0  nop
    ctx->pc = 0x18cc64u;
    // NOP
    // 0x18cc68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18cc68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18cc6c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18cc6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18cc70:
    // 0x18cc70: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18cc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18cc74: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18cc74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18cc78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cc7c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x18cc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cc80: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18cc80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18cc84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18cc84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cc88: 0x0  nop
    ctx->pc = 0x18cc88u;
    // NOP
    // 0x18cc8c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x18CC8Cu;
    {
        const bool branch_taken_0x18cc8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cc8c) {
            ctx->pc = 0x18CC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CC8Cu;
            // 0x18cc90: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CCB8u;
            goto label_18ccb8;
        }
    }
    ctx->pc = 0x18CC94u;
    // 0x18cc94: 0xc063298  jal         func_18CA60
    ctx->pc = 0x18CC94u;
    SET_GPR_U32(ctx, 31, 0x18CC9Cu);
    ctx->pc = 0x18CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC94u;
    // 0x18cc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA60u, 0x18CC94u, 0x18CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC9Cu;
label_18cc9c:
    // 0x18cc9c: 0xc061a16  jal         func_186858
    ctx->pc = 0x18CC9Cu;
    SET_GPR_U32(ctx, 31, 0x18CCA4u);
    ctx->pc = 0x18CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC9Cu;
    // 0x18cca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18CC9Cu, 0x18CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCA4u;
label_18cca4:
    // 0x18cca4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18cca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18cca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ccac: 0x0  nop
    ctx->pc = 0x18ccacu;
    // NOP
    // 0x18ccb0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18ccb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x18ccb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ccb8:
    // 0x18ccb8: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x18ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x18ccbc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18CCBCu;
    {
        const bool branch_taken_0x18ccbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ccbc) {
            ctx->pc = 0x18CCF8u;
            goto label_18ccf8;
        }
    }
    ctx->pc = 0x18CCC4u;
    // 0x18ccc4: 0xc061a16  jal         func_186858
    ctx->pc = 0x18CCC4u;
    SET_GPR_U32(ctx, 31, 0x18CCCCu);
    ctx->pc = 0x18CCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCC4u;
    // 0x18ccc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18CCC4u, 0x18CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCCCu;
label_18cccc:
    // 0x18cccc: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x18ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ccd0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x18ccd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x18ccd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ccd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ccd8: 0x0  nop
    ctx->pc = 0x18ccd8u;
    // NOP
    // 0x18ccdc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18ccdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cce0: 0x0  nop
    ctx->pc = 0x18cce0u;
    // NOP
    // 0x18cce4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18CCE4u;
    {
        const bool branch_taken_0x18cce4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCE4u;
        // 0x18cce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cce4) {
            ctx->pc = 0x18CCF0u;
            goto label_18ccf0;
        }
    }
    ctx->pc = 0x18CCECu;
    // 0x18ccec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ccecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ccf0:
    // 0x18ccf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CCF0u;
    {
        const bool branch_taken_0x18ccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ccf0) {
            ctx->pc = 0x18CD08u;
            goto label_18cd08;
        }
    }
    ctx->pc = 0x18CCF8u;
label_18ccf8:
    // 0x18ccf8: 0xc0633c4  jal         func_18CF10
    ctx->pc = 0x18CCF8u;
    SET_GPR_U32(ctx, 31, 0x18CD00u);
    ctx->pc = 0x18CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCF8u;
    // 0x18ccfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF10u, 0x18CCF8u, 0x18CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD00u;
label_18cd00:
    // 0x18cd00: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x18CD00u;
    {
        const bool branch_taken_0x18cd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD00u;
        // 0x18cd04: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd00) {
            ctx->pc = 0x18CEFCu;
            goto label_18cefc;
        }
    }
    ctx->pc = 0x18CD08u;
label_18cd08:
    // 0x18cd08: 0xc061a1e  jal         func_186878
    ctx->pc = 0x18CD08u;
    SET_GPR_U32(ctx, 31, 0x18CD10u);
    ctx->pc = 0x18CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD08u;
    // 0x18cd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18CD08u, 0x18CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD10u;
label_18cd10:
    // 0x18cd10: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x18cd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18cd14: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x18CD14u;
    SET_GPR_U32(ctx, 31, 0x18CD1Cu);
    ctx->pc = 0x18CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD14u;
    // 0x18cd18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x18CD14u, 0x18CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD1Cu;
label_18cd1c:
    // 0x18cd1c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x18cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18cd20: 0x8c820fe8  lw          $v0, 0xFE8($a0)
    ctx->pc = 0x18cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x18cd24: 0xc095306  jal         func_254C18
    ctx->pc = 0x18CD24u;
    SET_GPR_U32(ctx, 31, 0x18CD2Cu);
    ctx->pc = 0x18CD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD24u;
    // 0x18cd28: 0xc4540290  lwc1        $f20, 0x290($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18CD24u, 0x18CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD2Cu;
label_18cd2c:
    // 0x18cd2c: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x18cd30: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x18cd30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18cd34: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CD34u;
    {
        const bool branch_taken_0x18cd34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cd34) {
            ctx->pc = 0x18CD5Cu;
            goto label_18cd5c;
        }
    }
    ctx->pc = 0x18CD3Cu;
    // 0x18cd3c: 0xc061a2a  jal         func_1868A8
    ctx->pc = 0x18CD3Cu;
    SET_GPR_U32(ctx, 31, 0x18CD44u);
    ctx->pc = 0x18CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD3Cu;
    // 0x18cd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18CD3Cu, 0x18CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD44u;
label_18cd44:
    // 0x18cd44: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x18cd48: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18cd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x18cd4c: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x18CD4Cu;
    {
        const bool branch_taken_0x18cd4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd4c) {
            ctx->pc = 0x18CEC8u;
            goto label_18cec8;
        }
    }
    ctx->pc = 0x18CD54u;
    // 0x18cd54: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x18CD54u;
    {
        const bool branch_taken_0x18cd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd54) {
            ctx->pc = 0x18CED8u;
            goto label_18ced8;
        }
    }
    ctx->pc = 0x18CD5Cu;
label_18cd5c:
    // 0x18cd5c: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x18cd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x18cd60: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18cd60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18cd64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cd64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cd68: 0x0  nop
    ctx->pc = 0x18cd68u;
    // NOP
    // 0x18cd6c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18cd6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cd70: 0x0  nop
    ctx->pc = 0x18cd70u;
    // NOP
    // 0x18cd74: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x18CD74u;
    {
        const bool branch_taken_0x18cd74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cd74) {
            ctx->pc = 0x18CDECu;
            goto label_18cdec;
        }
    }
    ctx->pc = 0x18CD7Cu;
    // 0x18cd7c: 0xc061a2a  jal         func_1868A8
    ctx->pc = 0x18CD7Cu;
    SET_GPR_U32(ctx, 31, 0x18CD84u);
    ctx->pc = 0x18CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD7Cu;
    // 0x18cd80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18CD7Cu, 0x18CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD84u;
label_18cd84:
    // 0x18cd84: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x18cd88: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18cd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x18cd8c: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x18CD8Cu;
    {
        const bool branch_taken_0x18cd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cd8c) {
            ctx->pc = 0x18CED8u;
            goto label_18ced8;
        }
    }
    ctx->pc = 0x18CD94u;
    // 0x18cd94: 0xc061a12  jal         func_186848
    ctx->pc = 0x18CD94u;
    SET_GPR_U32(ctx, 31, 0x18CD9Cu);
    ctx->pc = 0x18CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD94u;
    // 0x18cd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18CD94u, 0x18CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD9Cu;
label_18cd9c:
    // 0x18cd9c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x18cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18cda0: 0xc070d6e  jal         func_1C35B8
    ctx->pc = 0x18CDA0u;
    SET_GPR_U32(ctx, 31, 0x18CDA8u);
    ctx->pc = 0x18CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDA0u;
    // 0x18cda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C35B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C35B8u, 0x18CDA0u, 0x18CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CDA8u;
label_18cda8:
    // 0x18cda8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x18CDA8u;
    {
        const bool branch_taken_0x18cda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cda8) {
            ctx->pc = 0x18CEC8u;
            goto label_18cec8;
        }
    }
    ctx->pc = 0x18CDB0u;
    // 0x18cdb0: 0xc095306  jal         func_254C18
    ctx->pc = 0x18CDB0u;
    SET_GPR_U32(ctx, 31, 0x18CDB8u);
    ctx->pc = 0x18CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDB0u;
    // 0x18cdb4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18CDB0u, 0x18CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CDB8u;
label_18cdb8:
    // 0x18cdb8: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x18cdbc: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x18cdbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18cdc0: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x18CDC0u;
    {
        const bool branch_taken_0x18cdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cdc0) {
            ctx->pc = 0x18CEC8u;
            goto label_18cec8;
        }
    }
    ctx->pc = 0x18CDC8u;
    // 0x18cdc8: 0xc095306  jal         func_254C18
    ctx->pc = 0x18CDC8u;
    SET_GPR_U32(ctx, 31, 0x18CDD0u);
    ctx->pc = 0x18CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDC8u;
    // 0x18cdcc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18CDC8u, 0x18CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CDD0u;
label_18cdd0:
    // 0x18cdd0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18cdd4: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x18CDD4u;
    SET_GPR_U32(ctx, 31, 0x18CDDCu);
    ctx->pc = 0x18CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDD4u;
    // 0x18cdd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x18CDD4u, 0x18CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CDDCu;
label_18cddc:
    // 0x18cddc: 0xc0633c4  jal         func_18CF10
    ctx->pc = 0x18CDDCu;
    SET_GPR_U32(ctx, 31, 0x18CDE4u);
    ctx->pc = 0x18CDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDDCu;
    // 0x18cde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF10u, 0x18CDDCu, 0x18CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CDE4u;
label_18cde4:
    // 0x18cde4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18CDE4u;
    {
        const bool branch_taken_0x18cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cde4) {
            ctx->pc = 0x18CEE0u;
            goto label_18cee0;
        }
    }
    ctx->pc = 0x18CDECu;
label_18cdec:
    // 0x18cdec: 0xc061a12  jal         func_186848
    ctx->pc = 0x18CDECu;
    SET_GPR_U32(ctx, 31, 0x18CDF4u);
    ctx->pc = 0x18CDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDECu;
    // 0x18cdf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18CDECu, 0x18CDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CDF4u;
label_18cdf4:
    // 0x18cdf4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18cdf8: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x18cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x18cdfc: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x18cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x18ce00: 0x246301e0  addiu       $v1, $v1, 0x1E0
    ctx->pc = 0x18ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x18ce04: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18ce04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ce08: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18ce08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ce0c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18ce0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ce10: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x18ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18ce14: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x18ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ce18: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ce1c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x18ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ce20: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x18ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ce24: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18ce24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18ce28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18ce28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18ce2c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x18ce2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18ce30: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x18ce30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18ce34: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x18ce34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18ce38: 0x8c820fec  lw          $v0, 0xFEC($a0)
    ctx->pc = 0x18ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4076)));
    // 0x18ce3c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x18ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ce40: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18ce40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ce44: 0x0  nop
    ctx->pc = 0x18ce44u;
    // NOP
    // 0x18ce48: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18CE48u;
    {
        const bool branch_taken_0x18ce48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE48u;
        // 0x18ce4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce48) {
            ctx->pc = 0x18CE54u;
            goto label_18ce54;
        }
    }
    ctx->pc = 0x18CE50u;
    // 0x18ce50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18ce50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ce54:
    // 0x18ce54: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18CE54u;
    {
        const bool branch_taken_0x18ce54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ce54) {
            ctx->pc = 0x18CEB0u;
            goto label_18ceb0;
        }
    }
    ctx->pc = 0x18CE5Cu;
    // 0x18ce5c: 0xc061a12  jal         func_186848
    ctx->pc = 0x18CE5Cu;
    SET_GPR_U32(ctx, 31, 0x18CE64u);
    ctx->pc = 0x18CE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE5Cu;
    // 0x18ce60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18CE5Cu, 0x18CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE64u;
label_18ce64:
    // 0x18ce64: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x18ce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ce68: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ce68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ce6c: 0x0  nop
    ctx->pc = 0x18ce6cu;
    // NOP
    // 0x18ce70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18CE70u;
    {
        const bool branch_taken_0x18ce70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE70u;
        // 0x18ce74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce70) {
            ctx->pc = 0x18CE7Cu;
            goto label_18ce7c;
        }
    }
    ctx->pc = 0x18CE78u;
    // 0x18ce78: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x18ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_18ce7c:
    // 0x18ce7c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ce80: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x18ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ce84: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x18ce84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x18ce88: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x18ce88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ce8c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x18ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ce90: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x18ce90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x18ce94: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x18ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ce98: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x18ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ce9c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x18ce9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x18cea0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18cea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cea4: 0x0  nop
    ctx->pc = 0x18cea4u;
    // NOP
    // 0x18cea8: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x18CEA8u;
    {
        const bool branch_taken_0x18cea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cea8) {
            ctx->pc = 0x18CEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CEA8u;
            // 0x18ceac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CEFCu;
            goto label_18cefc;
        }
    }
    ctx->pc = 0x18CEB0u;
label_18ceb0:
    // 0x18ceb0: 0xc061a2a  jal         func_1868A8
    ctx->pc = 0x18CEB0u;
    SET_GPR_U32(ctx, 31, 0x18CEB8u);
    ctx->pc = 0x18CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEB0u;
    // 0x18ceb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18CEB0u, 0x18CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEB8u;
label_18ceb8:
    // 0x18ceb8: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x18cebc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18cebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x18cec0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CEC0u;
    {
        const bool branch_taken_0x18cec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cec0) {
            ctx->pc = 0x18CED8u;
            goto label_18ced8;
        }
    }
    ctx->pc = 0x18CEC8u;
label_18cec8:
    // 0x18cec8: 0xc063298  jal         func_18CA60
    ctx->pc = 0x18CEC8u;
    SET_GPR_U32(ctx, 31, 0x18CED0u);
    ctx->pc = 0x18CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEC8u;
    // 0x18cecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA60u, 0x18CEC8u, 0x18CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CED0u;
label_18ced0:
    // 0x18ced0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18CED0u;
    {
        const bool branch_taken_0x18ced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ced0) {
            ctx->pc = 0x18CEE0u;
            goto label_18cee0;
        }
    }
    ctx->pc = 0x18CED8u;
label_18ced8:
    // 0x18ced8: 0xc0633c4  jal         func_18CF10
    ctx->pc = 0x18CED8u;
    SET_GPR_U32(ctx, 31, 0x18CEE0u);
    ctx->pc = 0x18CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CED8u;
    // 0x18cedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF10u, 0x18CED8u, 0x18CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEE0u;
label_18cee0:
    // 0x18cee0: 0xc061a16  jal         func_186858
    ctx->pc = 0x18CEE0u;
    SET_GPR_U32(ctx, 31, 0x18CEE8u);
    ctx->pc = 0x18CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEE0u;
    // 0x18cee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18CEE0u, 0x18CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEE8u;
label_18cee8:
    // 0x18cee8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18cee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18ceec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ceecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cef0: 0x0  nop
    ctx->pc = 0x18cef0u;
    // NOP
    // 0x18cef4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18cef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x18cef8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x18cef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18cefc:
    // 0x18cefc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x18cefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18cf00: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x18cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18cf04: 0x3e00008  jr          $ra
    ctx->pc = 0x18CF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF04u;
        // 0x18cf08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CF0Cu;
    // 0x18cf0c: 0x0  nop
    ctx->pc = 0x18cf0cu;
    // NOP
    ctx->pc = 0x18cf10u;
}
