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

// Function: sub_001B3A30
// Address: 0x1b3a30 - 0x1b3f50
void sub_001B3A30_0x1b3a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3A30_0x1b3a30");
#endif

    switch (ctx->pc) {
        case 0x1b3a68u: goto label_1b3a68;
        case 0x1b3a70u: goto label_1b3a70;
        case 0x1b3a80u: goto label_1b3a80;
        case 0x1b3a94u: goto label_1b3a94;
        case 0x1b3aa4u: goto label_1b3aa4;
        case 0x1b3ab0u: goto label_1b3ab0;
        case 0x1b3b20u: goto label_1b3b20;
        case 0x1b3d80u: goto label_1b3d80;
        case 0x1b3e54u: goto label_1b3e54;
        case 0x1b3efcu: goto label_1b3efc;
        case 0x1b3f10u: goto label_1b3f10;
        case 0x1b3f18u: goto label_1b3f18;
        default: break;
    }

    ctx->pc = 0x1b3a30u;

    // 0x1b3a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b3a34: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b3a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b3a38: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1b3a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1b3a3c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b3a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b3a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a44: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x1b3a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1b3a48: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b3a4c: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x1b3a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1b3a50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3a54: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1b3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1b3a58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1b3a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3a5c: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1b3a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3a60: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B3A60u;
    SET_GPR_U32(ctx, 31, 0x1B3A68u);
    ctx->pc = 0x1B3A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A60u;
    // 0x1b3a64: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B3A60u, 0x1B3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A68u;
label_1b3a68:
    // 0x1b3a68: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x1B3A68u;
    SET_GPR_U32(ctx, 31, 0x1B3A70u);
    ctx->pc = 0x1B3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A68u;
    // 0x1b3a6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x1B3A68u, 0x1B3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A70u;
label_1b3a70:
    // 0x1b3a70: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x1B3A70u;
    {
        const bool branch_taken_0x1b3a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a70) {
            ctx->pc = 0x1B3A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3A70u;
            // 0x1b3a74: 0x8e260084  lw          $a2, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3BE0u;
            goto label_1b3be0;
        }
    }
    ctx->pc = 0x1B3A78u;
    // 0x1b3a78: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B3A78u;
    SET_GPR_U32(ctx, 31, 0x1B3A80u);
    ctx->pc = 0x1B3A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A78u;
    // 0x1b3a7c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B3A78u, 0x1B3A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A80u;
label_1b3a80:
    // 0x1b3a80: 0x8c50029c  lw          $s0, 0x29C($v0)
    ctx->pc = 0x1b3a80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x1b3a84: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3A84u;
    {
        const bool branch_taken_0x1b3a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a84) {
            ctx->pc = 0x1B3A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3A84u;
            // 0x1b3a88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3AA8u;
            goto label_1b3aa8;
        }
    }
    ctx->pc = 0x1B3A8Cu;
    // 0x1b3a8c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1B3A8Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A94u);
    ctx->pc = 0x1B3A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A8Cu;
    // 0x1b3a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1B3A8Cu, 0x1B3A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A94u;
label_1b3a94:
    // 0x1b3a94: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3A94u;
    {
        const bool branch_taken_0x1b3a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a94) {
            ctx->pc = 0x1B3A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3A94u;
            // 0x1b3a98: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3AA8u;
            goto label_1b3aa8;
        }
    }
    ctx->pc = 0x1B3A9Cu;
    // 0x1b3a9c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1B3A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B3AA4u);
    ctx->pc = 0x1B3AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A9Cu;
    // 0x1b3aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1B3A9Cu, 0x1B3AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AA4u;
label_1b3aa4:
    // 0x1b3aa4: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x1b3aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1b3aa8:
    // 0x1b3aa8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B3AA8u;
    SET_GPR_U32(ctx, 31, 0x1B3AB0u);
    ctx->pc = 0x1B3AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AA8u;
    // 0x1b3aac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B3AA8u, 0x1B3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AB0u;
label_1b3ab0:
    // 0x1b3ab0: 0xc62100bc  lwc1        $f1, 0xBC($s1)
    ctx->pc = 0x1b3ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3ab4: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1b3ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1b3ab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3abc: 0x0  nop
    ctx->pc = 0x1b3abcu;
    // NOP
    // 0x1b3ac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3ac4: 0x0  nop
    ctx->pc = 0x1b3ac4u;
    // NOP
    // 0x1b3ac8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3AC8u;
    {
        const bool branch_taken_0x1b3ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3ac8) {
            ctx->pc = 0x1B3ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3AC8u;
            // 0x1b3acc: 0xc6020000  lwc1        $f2, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3AE0u;
            goto label_1b3ae0;
        }
    }
    ctx->pc = 0x1B3AD0u;
    // 0x1b3ad0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1b3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1b3ad4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B3AD4u;
    {
        const bool branch_taken_0x1b3ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ad4) {
            ctx->pc = 0x1B3B18u;
            goto label_1b3b18;
        }
    }
    ctx->pc = 0x1B3ADCu;
    // 0x1b3adc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1b3adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b3ae0:
    // 0x1b3ae0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1b3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3ae4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b3ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3ae8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b3ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3aec: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1b3aecu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1b3af0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b3af0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b3af4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1b3af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1b3af8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3af8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1b3afc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1b3afcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b3b00: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b3b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b3b04: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b3b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b3b08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b3b08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3b0c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b3b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3b10: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1B3B10u;
    {
        const bool branch_taken_0x1b3b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B10u;
        // 0x1b3b14: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b10) {
            ctx->pc = 0x1B3B9Cu;
            goto label_1b3b9c;
        }
    }
    ctx->pc = 0x1B3B18u;
label_1b3b18:
    // 0x1b3b18: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B3B18u;
    SET_GPR_U32(ctx, 31, 0x1B3B20u);
    ctx->pc = 0x1B3B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3B18u;
    // 0x1b3b1c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B3B18u, 0x1B3B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B20u;
label_1b3b20:
    // 0x1b3b20: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x1b3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x1b3b24: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1b3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3b28: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1b3b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3b2c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1b3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1b3b30: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b3b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b3b34: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1b3b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3b38: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b3b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b3b3c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b3b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3b40: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b3b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b3b44: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b3b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3b48: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1b3b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b3b4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b3b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3b50: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b3b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3b54: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b3b54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3b58: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b3b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b3b5c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b3b5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b3b60: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b3b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b3b64: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b3b64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b3b68: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b3b68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b3b6c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b3b6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b3b70: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b3b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3b74: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1b3b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3b78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b3b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b7c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1b3b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3b80: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1b3b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3b84: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1b3b84u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1b3b88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b3b88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b3b8c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3b8cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1b3b90: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b3b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3b94: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b3b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b3b98: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b3b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b3b9c:
    // 0x1b3b9c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1b3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1b3ba0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b3ba0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3ba4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1b3ba4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ba8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b3ba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b3bac: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1b3bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3bb0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1b3bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3bb4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1b3bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3bb8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1b3bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3bbc: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x1b3bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3bc0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b3bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b3bc4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1b3bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b3bc8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1b3bc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b3bcc: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1b3bccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b3bd0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1b3bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3bd4: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1b3bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3bd8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1B3BD8u;
    {
        const bool branch_taken_0x1b3bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BD8u;
        // 0x1b3bdc: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bd8) {
            ctx->pc = 0x1B3DE4u;
            goto label_1b3de4;
        }
    }
    ctx->pc = 0x1B3BE0u;
label_1b3be0:
    // 0x1b3be0: 0x8cc30334  lw          $v1, 0x334($a2)
    ctx->pc = 0x1b3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    // 0x1b3be4: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x1b3be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1b3be8: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x1b3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
    // 0x1b3bec: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1b3becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1b3bf0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1B3BF0u;
    {
        const bool branch_taken_0x1b3bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bf0) {
            ctx->pc = 0x1B3D78u;
            goto label_1b3d78;
        }
    }
    ctx->pc = 0x1B3BF8u;
    // 0x1b3bf8: 0x8cc30ff8  lw          $v1, 0xFF8($a2)
    ctx->pc = 0x1b3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4088)));
    // 0x1b3bfc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3c00: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b3c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b3c04: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B3C04u;
    {
        const bool branch_taken_0x1b3c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C04u;
        // 0x1b3c08: 0x28820032  slti        $v0, $a0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c04) {
            ctx->pc = 0x1B3C88u;
            goto label_1b3c88;
        }
    }
    ctx->pc = 0x1B3C0Cu;
    // 0x1b3c0c: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x1b3c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1b3c10: 0x3c01be6b  lui         $at, 0xBE6B
    ctx->pc = 0x1b3c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48747 << 16));
    // 0x1b3c14: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1b3c14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1b3c18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3c1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3c20: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1b3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1b3c24: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x1b3c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3c28: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1b3c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3c2c: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1b3c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b3c30: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1b3c30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b3c34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b3c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c38: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1b3c38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b3c3c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1b3c3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b3c40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b3c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3c44: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b3c44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3c48: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1b3c48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b3c4c: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1b3c4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b3c50: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b3c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b3c54: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1b3c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3c58: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1b3c58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3c5c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b3c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b3c60: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1b3c60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3c64: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x1b3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c6c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1b3c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1b3c70: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b3c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b3c74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3c78: 0x0  nop
    ctx->pc = 0x1b3c78u;
    // NOP
    // 0x1b3c7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b3c7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b3c80: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1B3C80u;
    {
        const bool branch_taken_0x1b3c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C80u;
        // 0x1b3c84: 0xe6200094  swc1        $f0, 0x94($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c80) {
            ctx->pc = 0x1B3DE4u;
            goto label_1b3de4;
        }
    }
    ctx->pc = 0x1B3C88u;
label_1b3c88:
    // 0x1b3c88: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B3C88u;
    {
        const bool branch_taken_0x1b3c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c88) {
            ctx->pc = 0x1B3C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3C88u;
            // 0x1b3c8c: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3D64u;
            goto label_1b3d64;
        }
    }
    ctx->pc = 0x1B3C90u;
    // 0x1b3c90: 0x28820036  slti        $v0, $a0, 0x36
    ctx->pc = 0x1b3c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)54) ? 1 : 0);
    // 0x1b3c94: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B3C94u;
    {
        const bool branch_taken_0x1b3c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C94u;
        // 0x1b3c98: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c94) {
            ctx->pc = 0x1B3D60u;
            goto label_1b3d60;
        }
    }
    ctx->pc = 0x1B3C9Cu;
    // 0x1b3c9c: 0x8cc4036c  lw          $a0, 0x36C($a2)
    ctx->pc = 0x1b3c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 876)));
    // 0x1b3ca0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1b3ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b3ca4: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B3CA4u;
    {
        const bool branch_taken_0x1b3ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CA4u;
        // 0x1b3ca8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ca4) {
            ctx->pc = 0x1B3D0Cu;
            goto label_1b3d0c;
        }
    }
    ctx->pc = 0x1B3CACu;
    // 0x1b3cac: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x1b3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1b3cb0: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x1b3cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
    // 0x1b3cb4: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1b3cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1b3cb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3cbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3cc0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1b3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1b3cc4: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x1b3cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3cc8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1b3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3ccc: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1b3cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b3cd0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1b3cd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b3cd4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b3cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3cd8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1b3cd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b3cdc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1b3cdcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b3ce0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b3ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3ce4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b3ce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3ce8: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1b3ce8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b3cec: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1b3cecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b3cf0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b3cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b3cf4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1b3cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3cf8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1b3cf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3cfc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b3cfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b3d00: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1b3d00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3d04: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1B3D04u;
    {
        const bool branch_taken_0x1b3d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D04u;
        // 0x1b3d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d04) {
            ctx->pc = 0x1B3DE4u;
            goto label_1b3de4;
        }
    }
    ctx->pc = 0x1B3D0Cu;
label_1b3d0c:
    // 0x1b3d0c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1b3d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b3d10: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1B3D10u;
    {
        const bool branch_taken_0x1b3d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D10u;
        // 0x1b3d14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d10) {
            ctx->pc = 0x1B3DE4u;
            goto label_1b3de4;
        }
    }
    ctx->pc = 0x1B3D18u;
    // 0x1b3d18: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x1b3d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1b3d1c: 0x3c01be6b  lui         $at, 0xBE6B
    ctx->pc = 0x1b3d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48747 << 16));
    // 0x1b3d20: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1b3d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1b3d24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3d28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3d2c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1b3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1b3d30: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x1b3d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3d34: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1b3d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3d38: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1b3d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b3d3c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1b3d3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b3d40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3d44: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1b3d44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b3d48: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1b3d48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b3d4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b3d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3d50: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b3d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3d54: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1b3d54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b3d58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1B3D58u;
    {
        const bool branch_taken_0x1b3d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D58u;
        // 0x1b3d5c: 0xe7a40004  swc1        $f4, 0x4($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d58) {
            ctx->pc = 0x1B3DD0u;
            goto label_1b3dd0;
        }
    }
    ctx->pc = 0x1B3D60u;
label_1b3d60:
    // 0x1b3d60: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1b3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1b3d64:
    // 0x1b3d64: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x1b3d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x1b3d68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b3d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b3d6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b3d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b3d70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3D70u;
    {
        const bool branch_taken_0x1b3d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D70u;
        // 0x1b3d74: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d70) {
            ctx->pc = 0x1B3D98u;
            goto label_1b3d98;
        }
    }
    ctx->pc = 0x1B3D78u;
label_1b3d78:
    // 0x1b3d78: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x1B3D78u;
    SET_GPR_U32(ctx, 31, 0x1B3D80u);
    ctx->pc = 0x1B3D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3D78u;
    // 0x1b3d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x1B3D78u, 0x1B3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D80u;
label_1b3d80:
    // 0x1b3d80: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B3D80u;
    {
        const bool branch_taken_0x1b3d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D80u;
        // 0x1b3d84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d80) {
            ctx->pc = 0x1B3DE4u;
            goto label_1b3de4;
        }
    }
    ctx->pc = 0x1B3D88u;
    // 0x1b3d88: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1b3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b3d8c: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x1b3d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x1b3d90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b3d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b3d94: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b3d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b3d98:
    // 0x1b3d98: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1b3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1b3d9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b3d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3da0: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x1b3da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1b3da4: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x1b3da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3da8: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x1b3da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3dac: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1b3dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3db0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b3db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b3db4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b3db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3db8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1b3db8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1b3dbc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1b3dbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1b3dc0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b3dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b3dc4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b3dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3dc8: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1b3dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b3dcc: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1b3dccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b3dd0:
    // 0x1b3dd0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b3dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b3dd4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1b3dd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b3dd8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1b3dd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ddc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b3ddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b3de0: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1b3de0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b3de4:
    // 0x1b3de4: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1b3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b3de8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b3de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b3dec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b3decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b3df0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b3df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b3df4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1b3df8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b3df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3dfc: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x1b3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1b3e00: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x1b3e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3e04: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x1b3e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3e08: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1b3e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3e0c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b3e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b3e10: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b3e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3e14: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1b3e14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1b3e18: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1b3e18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1b3e1c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b3e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b3e20: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b3e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3e24: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1b3e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b3e28: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1b3e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b3e2c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b3e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b3e30: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1b3e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b3e34: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1b3e34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3e38: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b3e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b3e3c: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1b3e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3e40: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1b3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1b3e44: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B3E44u;
    {
        const bool branch_taken_0x1b3e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e44) {
            ctx->pc = 0x1B3F08u;
            goto label_1b3f08;
        }
    }
    ctx->pc = 0x1B3E4Cu;
    // 0x1b3e4c: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x1B3E4Cu;
    SET_GPR_U32(ctx, 31, 0x1B3E54u);
    ctx->pc = 0x1B3E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E4Cu;
    // 0x1b3e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1B3E4Cu, 0x1B3E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E54u;
label_1b3e54:
    // 0x1b3e54: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B3E54u;
    {
        const bool branch_taken_0x1b3e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e54) {
            ctx->pc = 0x1B3F08u;
            goto label_1b3f08;
        }
    }
    ctx->pc = 0x1B3E5Cu;
    // 0x1b3e5c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b3e60: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B3E60u;
    {
        const bool branch_taken_0x1b3e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E60u;
        // 0x1b3e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e60) {
            ctx->pc = 0x1B3F08u;
            goto label_1b3f08;
        }
    }
    ctx->pc = 0x1B3E68u;
    // 0x1b3e68: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b3e6c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1b3e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b3e70: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x1b3e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b3e74: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x1b3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1b3e78: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3E78u;
    {
        const bool branch_taken_0x1b3e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B3E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E78u;
        // 0x1b3e7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e78) {
            ctx->pc = 0x1B3E94u;
            goto label_1b3e94;
        }
    }
    ctx->pc = 0x1B3E80u;
    // 0x1b3e80: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1b3e84: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3E84u;
    {
        const bool branch_taken_0x1b3e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E84u;
        // 0x1b3e88: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e84) {
            ctx->pc = 0x1B3E94u;
            goto label_1b3e94;
        }
    }
    ctx->pc = 0x1B3E8Cu;
    // 0x1b3e8c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3E8Cu;
    {
        const bool branch_taken_0x1b3e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b3e8c) {
            ctx->pc = 0x1B3E98u;
            goto label_1b3e98;
        }
    }
    ctx->pc = 0x1B3E94u;
label_1b3e94:
    // 0x1b3e94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b3e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3e98:
    // 0x1b3e98: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B3E98u;
    {
        const bool branch_taken_0x1b3e98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e98) {
            ctx->pc = 0x1B3F08u;
            goto label_1b3f08;
        }
    }
    ctx->pc = 0x1B3EA0u;
    // 0x1b3ea0: 0xc62100bc  lwc1        $f1, 0xBC($s1)
    ctx->pc = 0x1b3ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3ea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3ea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3eac: 0x0  nop
    ctx->pc = 0x1b3eacu;
    // NOP
    // 0x1b3eb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b3eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3eb4: 0x0  nop
    ctx->pc = 0x1b3eb4u;
    // NOP
    // 0x1b3eb8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1B3EB8u;
    {
        const bool branch_taken_0x1b3eb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EB8u;
        // 0x1b3ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3eb8) {
            ctx->pc = 0x1B3F04u;
            goto label_1b3f04;
        }
    }
    ctx->pc = 0x1B3EC0u;
    // 0x1b3ec0: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1b3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1b3ec4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b3ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ec8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1b3ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3ecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3ed0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1b3ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ed4: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1b3ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3ed8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1b3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1b3edc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b3edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3ee0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b3ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3ee4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b3ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b3ee8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1b3ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3eec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b3eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b3ef0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1b3ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3ef4: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x1B3EF4u;
    SET_GPR_U32(ctx, 31, 0x1B3EFCu);
    ctx->pc = 0x1B3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EF4u;
    // 0x1b3ef8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1B3EF4u, 0x1B3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EFCu;
label_1b3efc:
    // 0x1b3efc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3EFCu;
    {
        const bool branch_taken_0x1b3efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3efc) {
            ctx->pc = 0x1B3F08u;
            goto label_1b3f08;
        }
    }
    ctx->pc = 0x1B3F04u;
label_1b3f04:
    // 0x1b3f04: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x1b3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_1b3f08:
    // 0x1b3f08: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B3F08u;
    SET_GPR_U32(ctx, 31, 0x1B3F10u);
    ctx->pc = 0x1B3F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F08u;
    // 0x1b3f0c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B3F08u, 0x1B3F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F10u;
label_1b3f10:
    // 0x1b3f10: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x1B3F10u;
    SET_GPR_U32(ctx, 31, 0x1B3F18u);
    ctx->pc = 0x1B3F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3F10u;
    // 0x1b3f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x1B3F10u, 0x1B3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F18u;
label_1b3f18:
    // 0x1b3f18: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3F18u;
    {
        const bool branch_taken_0x1b3f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F18u;
        // 0x1b3f1c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f18) {
            ctx->pc = 0x1B3F3Cu;
            goto label_1b3f3c;
        }
    }
    ctx->pc = 0x1B3F20u;
    // 0x1b3f20: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x1b3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3f24: 0x3c013fea  lui         $at, 0x3FEA
    ctx->pc = 0x1b3f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16362 << 16));
    // 0x1b3f28: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1b3f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1b3f2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f30: 0x0  nop
    ctx->pc = 0x1b3f30u;
    // NOP
    // 0x1b3f34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f38: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x1b3f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_1b3f3c:
    // 0x1b3f3c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1b3f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3f40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b3f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3f44: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F44u;
        // 0x1b3f48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3F4Cu;
    // 0x1b3f4c: 0x0  nop
    ctx->pc = 0x1b3f4cu;
    // NOP
    ctx->pc = 0x1b3f50u;
}
