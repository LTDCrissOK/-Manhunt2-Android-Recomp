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

// Function: sub_001C7B78
// Address: 0x1c7b78 - 0x1c7ed8
void sub_001C7B78_0x1c7b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7B78_0x1c7b78");
#endif

    switch (ctx->pc) {
        case 0x1c7c70u: goto label_1c7c70;
        case 0x1c7c98u: goto label_1c7c98;
        case 0x1c7ca0u: goto label_1c7ca0;
        default: break;
    }

    ctx->pc = 0x1c7b78u;

    // 0x1c7b78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c7b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c7b7c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c7b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1c7b80: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1c7b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1c7b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c7b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b8c: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x1c7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1c7b90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c7b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c7b94: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c7b94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c7b98: 0x7e000090  sq          $zero, 0x90($s0)
    ctx->pc = 0x1c7b98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 0));
    // 0x1c7b9c: 0x7e0000a0  sq          $zero, 0xA0($s0)
    ctx->pc = 0x1c7b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 0));
    // 0x1c7ba0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1c7ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1c7ba4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1c7ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1c7ba8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1c7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1c7bac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c7bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7bb0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1c7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1c7bb4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1c7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1c7bb8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1c7bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1c7bbc: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1c7bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1c7bc0: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1c7bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1c7bc4: 0xc4b4c754  lwc1        $f20, -0x38AC($a1)
    ctx->pc = 0x1c7bc4u;
    { uint32_t bits = FAST_READ32(0x45C754u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7bc8: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1c7bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x1c7bcc: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x1c7bccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1c7bd0: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1c7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1c7bd4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1c7bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1c7bd8: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x1c7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
    // 0x1c7bdc: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1c7bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1c7be0: 0x7e000150  sq          $zero, 0x150($s0)
    ctx->pc = 0x1c7be0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 336), GPR_VEC(ctx, 0));
    // 0x1c7be4: 0x7e000160  sq          $zero, 0x160($s0)
    ctx->pc = 0x1c7be4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 352), GPR_VEC(ctx, 0));
    // 0x1c7be8: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x1c7be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1c7bec: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x1c7becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x1c7bf0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1c7bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1c7bf4: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1c7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1c7bf8: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1c7bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1c7bfc: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1c7bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1c7c00: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1c7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1c7c04: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1c7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1c7c08: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x1c7c08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1c7c0c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1c7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1c7c10: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1c7c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1c7c14: 0xac640044  sw          $a0, 0x44($v1)
    ctx->pc = 0x1c7c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
    // 0x1c7c18: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x1c7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x1c7c1c: 0x7e000210  sq          $zero, 0x210($s0)
    ctx->pc = 0x1c7c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 528), GPR_VEC(ctx, 0));
    // 0x1c7c20: 0x7e000220  sq          $zero, 0x220($s0)
    ctx->pc = 0x1c7c20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), GPR_VEC(ctx, 0));
    // 0x1c7c24: 0xace40044  sw          $a0, 0x44($a3)
    ctx->pc = 0x1c7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 4));
    // 0x1c7c28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c2c: 0xace00048  sw          $zero, 0x48($a3)
    ctx->pc = 0x1c7c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    // 0x1c7c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c34: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x1c7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x1c7c38: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x1c7c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x1c7c3c: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x1c7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x1c7c40: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x1c7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x1c7c44: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x1c7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x1c7c48: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x1c7c48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x1c7c4c: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x1c7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x1c7c50: 0xe4f40020  swc1        $f20, 0x20($a3)
    ctx->pc = 0x1c7c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x1c7c54: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x1c7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x1c7c58: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x1c7c58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x1c7c5c: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x1c7c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
    // 0x1c7c60: 0x8e020318  lw          $v0, 0x318($s0)
    ctx->pc = 0x1c7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
    // 0x1c7c64: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x1c7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x1c7c68: 0xc0721ba  jal         func_1C86E8
    ctx->pc = 0x1C7C68u;
    SET_GPR_U32(ctx, 31, 0x1C7C70u);
    ctx->pc = 0x1C7C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C68u;
    // 0x1c7c6c: 0xc46c0240  lwc1        $f12, 0x240($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C86E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C86E8u, 0x1C7C68u, 0x1C7C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C70u;
label_1c7c70:
    // 0x1c7c70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7C70u;
    {
        const bool branch_taken_0x1c7c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C70u;
        // 0x1c7c74: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c70) {
            ctx->pc = 0x1C7C80u;
            goto label_1c7c80;
        }
    }
    ctx->pc = 0x1C7C78u;
    // 0x1c7c78: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1C7C78u;
    {
        const bool branch_taken_0x1c7c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C78u;
        // 0x1c7c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c78) {
            ctx->pc = 0x1C7EC0u;
            goto label_1c7ec0;
        }
    }
    ctx->pc = 0x1C7C80u;
label_1c7c80:
    // 0x1c7c80: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1c7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1c7c84: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1c7c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1c7c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c8c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c7c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c7c90: 0xc071fb6  jal         func_1C7ED8
    ctx->pc = 0x1C7C90u;
    SET_GPR_U32(ctx, 31, 0x1C7C98u);
    ctx->pc = 0x1C7C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C90u;
    // 0x1c7c94: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7ED8u, 0x1C7C90u, 0x1C7C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C98u;
label_1c7c98:
    // 0x1c7c98: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C7C98u;
    SET_GPR_U32(ctx, 31, 0x1C7CA0u);
    ctx->pc = 0x1C7C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C98u;
    // 0x1c7c9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C7C98u, 0x1C7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CA0u;
label_1c7ca0:
    // 0x1c7ca0: 0x4600a146  mov.s       $f5, $f20
    ctx->pc = 0x1c7ca0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[20]);
    // 0x1c7ca4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c7ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7ca8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C7CA8u;
    {
        const bool branch_taken_0x1c7ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CA8u;
        // 0x1c7cac: 0x46002986  mov.s       $f6, $f5 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ca8) {
            ctx->pc = 0x1C7D0Cu;
            goto label_1c7d0c;
        }
    }
    ctx->pc = 0x1C7CB0u;
    // 0x1c7cb0: 0x26020330  addiu       $v0, $s0, 0x330
    ctx->pc = 0x1c7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x1c7cb4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c7cb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7cb8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c7cb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7cbc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c7cbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7cc0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c7cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7cc4: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1c7cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7cc8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7ccc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1c7cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7cd0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1c7cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7cd4: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1c7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7cd8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c7cd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c7cdc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c7cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c7ce0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c7ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c7ce4: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c7ce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c7ce8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c7ce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7cec: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c7cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7cf0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7cf4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c7cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7cf8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c7cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c7cfc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c7cfcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c7d00: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c7d00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c7d04: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1c7d04u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c7d08: 0x46050144  c1          0x50144
    ctx->pc = 0x1c7d08u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
label_1c7d0c:
    // 0x1c7d0c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1c7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1c7d10: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7D10u;
    {
        const bool branch_taken_0x1c7d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D10u;
        // 0x1c7d14: 0x26020330  addiu       $v0, $s0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d10) {
            ctx->pc = 0x1C7D70u;
            goto label_1c7d70;
        }
    }
    ctx->pc = 0x1C7D18u;
    // 0x1c7d18: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c7d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7d1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c7d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7d20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c7d20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7d24: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c7d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7d28: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1c7d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7d2c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7d30: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1c7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7d34: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1c7d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7d38: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1c7d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7d3c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c7d3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c7d40: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c7d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c7d44: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c7d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c7d48: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c7d48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c7d4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c7d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7d50: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c7d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7d54: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c7d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7d58: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c7d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7d5c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c7d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c7d60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c7d60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c7d64: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c7d64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c7d68: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x1c7d68u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c7d6c: 0x46060184  c1          0x60184
    ctx->pc = 0x1c7d6cu;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
label_1c7d70:
    // 0x1c7d70: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x1c7d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7d74: 0x0  nop
    ctx->pc = 0x1c7d74u;
    // NOP
    // 0x1c7d78: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7D78u;
    {
        const bool branch_taken_0x1c7d78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D78u;
        // 0x1c7d7c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d78) {
            ctx->pc = 0x1C7D84u;
            goto label_1c7d84;
        }
    }
    ctx->pc = 0x1C7D80u;
    // 0x1c7d80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c7d84:
    // 0x1c7d84: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c7d84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7d88: 0xfa0102d0  sqc2        $vf1, 0x2D0($s0)
    ctx->pc = 0x1c7d88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7d8c: 0x260302d0  addiu       $v1, $s0, 0x2D0
    ctx->pc = 0x1c7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x1c7d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7d94: 0x7e0002d0  sq          $zero, 0x2D0($s0)
    ctx->pc = 0x1c7d94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 720), GPR_VEC(ctx, 0));
    // 0x1c7d98: 0x260202e0  addiu       $v0, $s0, 0x2E0
    ctx->pc = 0x1c7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x1c7d9c: 0x7e0002e0  sq          $zero, 0x2E0($s0)
    ctx->pc = 0x1c7d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 736), GPR_VEC(ctx, 0));
    // 0x1c7da0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c7da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7da4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7da8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C7DA8u;
    {
        const bool branch_taken_0x1c7da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DA8u;
        // 0x1c7dac: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7da8) {
            ctx->pc = 0x1C7DD8u;
            goto label_1c7dd8;
        }
    }
    ctx->pc = 0x1C7DB0u;
    // 0x1c7db0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c7db0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7db4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c7db4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7db8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c7db8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7dbc: 0xfa0102d0  sqc2        $vf1, 0x2D0($s0)
    ctx->pc = 0x1c7dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7dc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1c7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c7dc4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1c7dc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c7dc8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c7dc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7dcc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c7dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7dd0: 0xfa0102e0  sqc2        $vf1, 0x2E0($s0)
    ctx->pc = 0x1c7dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 736), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7dd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c7dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7dd8:
    // 0x1c7dd8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1c7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1c7ddc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C7DDCu;
    {
        const bool branch_taken_0x1c7ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ddc) {
            ctx->pc = 0x1C7E0Cu;
            goto label_1c7e0c;
        }
    }
    ctx->pc = 0x1C7DE4u;
    // 0x1c7de4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c7de4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7de8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c7de8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7dec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c7decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7df0: 0xfa0102d0  sqc2        $vf1, 0x2D0($s0)
    ctx->pc = 0x1c7df0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7df4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1c7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c7df8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1c7df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c7dfc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c7dfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7e00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c7e00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7e04: 0xfa0102e0  sqc2        $vf1, 0x2E0($s0)
    ctx->pc = 0x1c7e04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 736), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7e08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c7e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c7e0c:
    // 0x1c7e0c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7E0Cu;
    {
        const bool branch_taken_0x1c7e0c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1C7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E0Cu;
        // 0x1c7e10: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e0c) {
            ctx->pc = 0x1C7E28u;
            goto label_1c7e28;
        }
    }
    ctx->pc = 0x1C7E14u;
    // 0x1c7e14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c7e14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7e18: 0x0  nop
    ctx->pc = 0x1c7e18u;
    // NOP
    // 0x1c7e1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7e20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7E20u;
    {
        const bool branch_taken_0x1c7e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e20) {
            ctx->pc = 0x1C7E40u;
            goto label_1c7e40;
        }
    }
    ctx->pc = 0x1C7E28u;
label_1c7e28:
    // 0x1c7e28: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1c7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1c7e2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c7e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c7e30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7e34: 0x0  nop
    ctx->pc = 0x1c7e34u;
    // NOP
    // 0x1c7e38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7e3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c7e3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c7e40:
    // 0x1c7e40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7e48: 0x0  nop
    ctx->pc = 0x1c7e48u;
    // NOP
    // 0x1c7e4c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c7e4cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c7e50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c7e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c7e54: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c7e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7e58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7e5c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c7e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7e60: 0xfa0102d0  sqc2        $vf1, 0x2D0($s0)
    ctx->pc = 0x1c7e60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7e64: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7E64u;
    {
        const bool branch_taken_0x1c7e64 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1C7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E64u;
        // 0x1c7e68: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e64) {
            ctx->pc = 0x1C7E80u;
            goto label_1c7e80;
        }
    }
    ctx->pc = 0x1C7E6Cu;
    // 0x1c7e6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c7e6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7e70: 0x0  nop
    ctx->pc = 0x1c7e70u;
    // NOP
    // 0x1c7e74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7e78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7E78u;
    {
        const bool branch_taken_0x1c7e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e78) {
            ctx->pc = 0x1C7E98u;
            goto label_1c7e98;
        }
    }
    ctx->pc = 0x1C7E80u;
label_1c7e80:
    // 0x1c7e80: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1c7e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1c7e84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c7e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c7e88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7e8c: 0x0  nop
    ctx->pc = 0x1c7e8cu;
    // NOP
    // 0x1c7e90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7e94: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c7e94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c7e98:
    // 0x1c7e98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7e9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7ea0: 0x0  nop
    ctx->pc = 0x1c7ea0u;
    // NOP
    // 0x1c7ea4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c7ea4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c7ea8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c7ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c7eac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1c7eacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c7eb0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c7eb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c7eb4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c7eb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7eb8: 0xfa0102e0  sqc2        $vf1, 0x2E0($s0)
    ctx->pc = 0x1c7eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 736), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7ec0:
    // 0x1c7ec0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c7ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7ec4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1c7ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ec8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c7ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7ecc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7ED0u;
        // 0x1c7ed4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7ED8u;
}
