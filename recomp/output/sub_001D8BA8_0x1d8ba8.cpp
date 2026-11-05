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

// Function: sub_001D8BA8
// Address: 0x1d8ba8 - 0x1d8cf8
void sub_001D8BA8_0x1d8ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8BA8_0x1d8ba8");
#endif

    switch (ctx->pc) {
        case 0x1d8bc8u: goto label_1d8bc8;
        case 0x1d8bd0u: goto label_1d8bd0;
        case 0x1d8be8u: goto label_1d8be8;
        case 0x1d8c58u: goto label_1d8c58;
        case 0x1d8c64u: goto label_1d8c64;
        case 0x1d8ca0u: goto label_1d8ca0;
        case 0x1d8cb8u: goto label_1d8cb8;
        case 0x1d8cd0u: goto label_1d8cd0;
        default: break;
    }

    ctx->pc = 0x1d8ba8u;

    // 0x1d8ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8bac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d8bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d8bb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d8bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8bbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d8bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d8bc0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1D8BC0u;
    SET_GPR_U32(ctx, 31, 0x1D8BC8u);
    ctx->pc = 0x1D8BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BC0u;
    // 0x1d8bc4: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1D8BC0u, 0x1D8BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BC8u;
label_1d8bc8:
    // 0x1d8bc8: 0xc076238  jal         func_1D88E0
    ctx->pc = 0x1D8BC8u;
    SET_GPR_U32(ctx, 31, 0x1D8BD0u);
    ctx->pc = 0x1D8BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BC8u;
    // 0x1d8bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E0u, 0x1D8BC8u, 0x1D8BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BD0u;
label_1d8bd0:
    // 0x1d8bd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d8bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bd4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d8bd8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D8BD8u;
    {
        const bool branch_taken_0x1d8bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bd8) {
            ctx->pc = 0x1D8BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BD8u;
            // 0x1d8bdc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8C48u;
            goto label_1d8c48;
        }
    }
    ctx->pc = 0x1D8BE0u;
    // 0x1d8be0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1D8BE0u;
    SET_GPR_U32(ctx, 31, 0x1D8BE8u);
    ctx->pc = 0x1D8BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BE0u;
    // 0x1d8be4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1D8BE0u, 0x1D8BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BE8u;
label_1d8be8:
    // 0x1d8be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d8be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8bf0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1d8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d8bf4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d8bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d8bf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8bfc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1d8bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d8c00: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1d8c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1d8c04: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d8c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d8c08: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d8c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d8c0c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d8c10: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x1d8c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1d8c14: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1d8c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d8c18: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1d8c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1d8c1c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1d8c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d8c20: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1d8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1d8c24: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d8c28: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x1d8c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d8c2c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d8c2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8c30: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1d8c30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8c34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d8c38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d8c3c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d8c3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8c40: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1d8c40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8c44: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d8c48:
    // 0x1d8c48: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8C48u;
    {
        const bool branch_taken_0x1d8c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c48) {
            ctx->pc = 0x1D8C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8C48u;
            // 0x1d8c4c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8C90u;
            goto label_1d8c90;
        }
    }
    ctx->pc = 0x1D8C50u;
    // 0x1d8c50: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1D8C50u;
    SET_GPR_U32(ctx, 31, 0x1D8C58u);
    ctx->pc = 0x1D8C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C50u;
    // 0x1d8c54: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1D8C50u, 0x1D8C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C58u;
label_1d8c58:
    // 0x1d8c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d8c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c5c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D8C5Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C64u);
    ctx->pc = 0x1D8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C5Cu;
    // 0x1d8c60: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D8C5Cu, 0x1D8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C64u;
label_1d8c64:
    // 0x1d8c64: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1d8c68: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d8c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1d8c6c: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1d8c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1d8c70: 0x7e000040  sq          $zero, 0x40($s0)
    ctx->pc = 0x1d8c70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 0));
    // 0x1d8c74: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1d8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1d8c78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d8c7c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1d8c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8c80: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1d8c80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1d8c84: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d8c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d8c88: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1d8c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d8c8c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1d8c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d8c90:
    // 0x1d8c90: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8C90u;
    {
        const bool branch_taken_0x1d8c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c90) {
            ctx->pc = 0x1D8C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8C90u;
            // 0x1d8c94: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8CA8u;
            goto label_1d8ca8;
        }
    }
    ctx->pc = 0x1D8C98u;
    // 0x1d8c98: 0xc0797a2  jal         func_1E5E88
    ctx->pc = 0x1D8C98u;
    SET_GPR_U32(ctx, 31, 0x1D8CA0u);
    ctx->pc = 0x1E5E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5E88u, 0x1D8C98u, 0x1D8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CA0u;
label_1d8ca0:
    // 0x1d8ca0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1d8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1d8ca4: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1d8ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1d8ca8:
    // 0x1d8ca8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8CA8u;
    {
        const bool branch_taken_0x1d8ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ca8) {
            ctx->pc = 0x1D8CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8CA8u;
            // 0x1d8cac: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8CC0u;
            goto label_1d8cc0;
        }
    }
    ctx->pc = 0x1D8CB0u;
    // 0x1d8cb0: 0xc07946e  jal         func_1E51B8
    ctx->pc = 0x1D8CB0u;
    SET_GPR_U32(ctx, 31, 0x1D8CB8u);
    ctx->pc = 0x1E51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E51B8u, 0x1D8CB0u, 0x1D8CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CB8u;
label_1d8cb8:
    // 0x1d8cb8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1d8cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1d8cbc: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1d8cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1d8cc0:
    // 0x1d8cc0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8CC0u;
    {
        const bool branch_taken_0x1d8cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cc0) {
            ctx->pc = 0x1D8CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8CC0u;
            // 0x1d8cc4: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8CD8u;
            goto label_1d8cd8;
        }
    }
    ctx->pc = 0x1D8CC8u;
    // 0x1d8cc8: 0xc07ab22  jal         func_1EAC88
    ctx->pc = 0x1D8CC8u;
    SET_GPR_U32(ctx, 31, 0x1D8CD0u);
    ctx->pc = 0x1EAC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC88u, 0x1D8CC8u, 0x1D8CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CD0u;
label_1d8cd0:
    // 0x1d8cd0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1d8cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1d8cd4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1d8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1d8cd8:
    // 0x1d8cd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d8cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ce0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1d8ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1d8ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ce8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d8ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8cec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d8cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CF0u;
        // 0x1d8cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8CF8u;
}
