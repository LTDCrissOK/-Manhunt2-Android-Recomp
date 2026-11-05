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

// Function: sub_001D19B8
// Address: 0x1d19b8 - 0x1d1d28
void sub_001D19B8_0x1d19b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D19B8_0x1d19b8");
#endif

    switch (ctx->pc) {
        case 0x1d1a28u: goto label_1d1a28;
        case 0x1d1a40u: goto label_1d1a40;
        case 0x1d1ae4u: goto label_1d1ae4;
        case 0x1d1b98u: goto label_1d1b98;
        case 0x1d1bd8u: goto label_1d1bd8;
        case 0x1d1c40u: goto label_1d1c40;
        case 0x1d1c78u: goto label_1d1c78;
        case 0x1d1c90u: goto label_1d1c90;
        case 0x1d1ca8u: goto label_1d1ca8;
        case 0x1d1cd0u: goto label_1d1cd0;
        case 0x1d1ce0u: goto label_1d1ce0;
        default: break;
    }

    ctx->pc = 0x1d19b8u;

    // 0x1d19b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d19b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d19bc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1d19bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1d19c0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1d19c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1d19c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d19c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1d19c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1d19cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d19ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19d0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1d19d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1d19d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d19d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19d8: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1d19d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1d19dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d19dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19e0: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1d19e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1d19e4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1d19e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19e8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1d19e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1d19ec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1d19ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19f0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1d19f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d19f4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1d19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1d19f8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1d19f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1d19fc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1d19fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1d1a00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1d1a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1d1a04: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1d1a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d1a08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d1a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d1a0c: 0x120000b7  beqz        $s0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1D1A0Cu;
    {
        const bool branch_taken_0x1d1a0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A0Cu;
        // 0x1d1a10: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a0c) {
            ctx->pc = 0x1D1CECu;
            goto label_1d1cec;
        }
    }
    ctx->pc = 0x1D1A14u;
    // 0x1d1a14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d1a18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d1a18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a1c: 0x57980b  movn        $s3, $v0, $s7
    ctx->pc = 0x1d1a1cu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x1d1a20: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1d1a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a24: 0x0  nop
    ctx->pc = 0x1d1a24u;
    // NOP
label_1d1a28:
    // 0x1d1a28: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1d1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1d1a2c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d1a2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d1a30: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d1a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d1a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a38: 0xc073f80  jal         func_1CFE00
    ctx->pc = 0x1D1A38u;
    SET_GPR_U32(ctx, 31, 0x1D1A40u);
    ctx->pc = 0x1D1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A38u;
    // 0x1d1a3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFE00u, 0x1D1A38u, 0x1D1A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A40u;
label_1d1a40:
    // 0x1d1a40: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1A40u;
    {
        const bool branch_taken_0x1d1a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a40) {
            ctx->pc = 0x1D1A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1A40u;
            // 0x1d1a44: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1AB8u;
            goto label_1d1ab8;
        }
    }
    ctx->pc = 0x1D1A48u;
    // 0x1d1a48: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x1d1a48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1d1a4c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d1a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d1a50: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D1A50u;
    {
        const bool branch_taken_0x1d1a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a50) {
            ctx->pc = 0x1D1A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1A50u;
            // 0x1d1a54: 0x36730010  ori         $s3, $s3, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1AB4u;
            goto label_1d1ab4;
        }
    }
    ctx->pc = 0x1D1A58u;
    // 0x1d1a58: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1d1a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1d1a5c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D1A5Cu;
    {
        const bool branch_taken_0x1d1a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1a5c) {
            ctx->pc = 0x1D1A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1A5Cu;
            // 0x1d1a60: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1AB8u;
            goto label_1d1ab8;
        }
    }
    ctx->pc = 0x1D1A64u;
    // 0x1d1a64: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1d1a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d1a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1a6c: 0x0  nop
    ctx->pc = 0x1d1a6cu;
    // NOP
    // 0x1d1a70: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1d1a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1a74: 0x0  nop
    ctx->pc = 0x1d1a74u;
    // NOP
    // 0x1d1a78: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1D1A78u;
    {
        const bool branch_taken_0x1d1a78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1a78) {
            ctx->pc = 0x1D1A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1A78u;
            // 0x1d1a7c: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1AB8u;
            goto label_1d1ab8;
        }
    }
    ctx->pc = 0x1D1A80u;
    // 0x1d1a80: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1d1a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1a84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d1a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1a88: 0x0  nop
    ctx->pc = 0x1d1a88u;
    // NOP
    // 0x1d1a8c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1D1A8Cu;
    {
        const bool branch_taken_0x1d1a8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1a8c) {
            ctx->pc = 0x1D1A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1A8Cu;
            // 0x1d1a90: 0x9602002a  lhu         $v0, 0x2A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1AB8u;
            goto label_1d1ab8;
        }
    }
    ctx->pc = 0x1D1A94u;
    // 0x1d1a94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1a98: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d1a98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d1a9c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1d1a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1aa0: 0x0  nop
    ctx->pc = 0x1d1aa0u;
    // NOP
    // 0x1d1aa4: 0x0  nop
    ctx->pc = 0x1d1aa4u;
    // NOP
    // 0x1d1aa8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d1aa8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d1aac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d1aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d1ab0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1d1ab0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1d1ab4:
    // 0x1d1ab4: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1d1ab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_1d1ab8:
    // 0x1d1ab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1abc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1d1abcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1ac0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d1ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d1ac4: 0x1600ffd8  bnez        $s0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1D1AC4u;
    {
        const bool branch_taken_0x1d1ac4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AC4u;
        // 0x1d1ac8: 0x62a00a  movz        $s4, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ac4) {
            ctx->pc = 0x1D1A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1a28;
        }
    }
    ctx->pc = 0x1D1ACCu;
    // 0x1d1acc: 0x12800087  beqz        $s4, . + 4 + (0x87 << 2)
    ctx->pc = 0x1D1ACCu;
    {
        const bool branch_taken_0x1d1acc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ACCu;
        // 0x1d1ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1acc) {
            ctx->pc = 0x1D1CECu;
            goto label_1d1cec;
        }
    }
    ctx->pc = 0x1D1AD4u;
    // 0x1d1ad4: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1AD4u;
    {
        const bool branch_taken_0x1d1ad4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AD4u;
        // 0x1d1ad8: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ad4) {
            ctx->pc = 0x1D1AE0u;
            goto label_1d1ae0;
        }
    }
    ctx->pc = 0x1D1ADCu;
    // 0x1d1adc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d1adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d1ae0:
    // 0x1d1ae0: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x1d1ae0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_1d1ae4:
    // 0x1d1ae4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d1ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d1ae8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1D1AE8u;
    {
        const bool branch_taken_0x1d1ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE8u;
        // 0x1d1aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ae8) {
            ctx->pc = 0x1D1C38u;
            goto label_1d1c38;
        }
    }
    ctx->pc = 0x1D1AF0u;
    // 0x1d1af0: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1d1af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1af4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d1af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1af8: 0x0  nop
    ctx->pc = 0x1d1af8u;
    // NOP
    // 0x1d1afc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d1afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1b00: 0x0  nop
    ctx->pc = 0x1d1b00u;
    // NOP
    // 0x1d1b04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1B04u;
    {
        const bool branch_taken_0x1d1b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B04u;
        // 0x1d1b08: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b04) {
            ctx->pc = 0x1D1B1Cu;
            goto label_1d1b1c;
        }
    }
    ctx->pc = 0x1D1B0Cu;
    // 0x1d1b0c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1d1b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1d1b10: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1d1b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d1b14: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1D1B14u;
    {
        const bool branch_taken_0x1d1b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B14u;
        // 0x1d1b18: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b14) {
            ctx->pc = 0x1D1C38u;
            goto label_1d1c38;
        }
    }
    ctx->pc = 0x1D1B1Cu;
label_1d1b1c:
    // 0x1d1b1c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D1B1Cu;
    {
        const bool branch_taken_0x1d1b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b1c) {
            ctx->pc = 0x1D1B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1B1Cu;
            // 0x1d1b20: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D1B24u;
    // 0x1d1b24: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1d1b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1b28: 0x0  nop
    ctx->pc = 0x1d1b28u;
    // NOP
    // 0x1d1b2c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1B2Cu;
    {
        const bool branch_taken_0x1d1b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1b2c) {
            ctx->pc = 0x1D1B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1B2Cu;
            // 0x1d1b30: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B50u;
            goto label_1d1b50;
        }
    }
    ctx->pc = 0x1D1B34u;
    // 0x1d1b34: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1b38: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1d1b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1b3c: 0x0  nop
    ctx->pc = 0x1d1b3cu;
    // NOP
    // 0x1d1b40: 0x0  nop
    ctx->pc = 0x1d1b40u;
    // NOP
    // 0x1d1b44: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1d1b44u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1d1b48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1B48u;
    {
        const bool branch_taken_0x1d1b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B48u;
        // 0x1d1b4c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b48) {
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D1B50u;
label_1d1b50:
    // 0x1d1b50: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d1b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1d1b54:
    // 0x1d1b54: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d1b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1b58: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x1d1b58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1d1b5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d1b5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d1b60: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d1b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d1b64: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1d1b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d1b68: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D1B68u;
    {
        const bool branch_taken_0x1d1b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B68u;
        // 0x1d1b6c: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b68) {
            ctx->pc = 0x1D1C00u;
            goto label_1d1c00;
        }
    }
    ctx->pc = 0x1D1B70u;
    // 0x1d1b70: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1d1b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1d1b74: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1B74u;
    {
        const bool branch_taken_0x1d1b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b74) {
            ctx->pc = 0x1D1B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1B74u;
            // 0x1d1b78: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1BBCu;
            goto label_1d1bbc;
        }
    }
    ctx->pc = 0x1D1B7Cu;
    // 0x1d1b7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d1b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d1b80: 0x0  nop
    ctx->pc = 0x1d1b80u;
    // NOP
    // 0x1d1b84: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1d1b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1b88: 0x0  nop
    ctx->pc = 0x1d1b88u;
    // NOP
    // 0x1d1b8c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x1D1B8Cu;
    {
        const bool branch_taken_0x1d1b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B8Cu;
        // 0x1d1b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b8c) {
            ctx->pc = 0x1D1C38u;
            goto label_1d1c38;
        }
    }
    ctx->pc = 0x1D1B94u;
    // 0x1d1b94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d1b98:
    // 0x1d1b98: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1d1b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1b9c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d1b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1ba0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d1ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d1ba4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1d1ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1ba8: 0x0  nop
    ctx->pc = 0x1d1ba8u;
    // NOP
    // 0x1d1bac: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D1BACu;
    {
        const bool branch_taken_0x1d1bac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BACu;
        // 0x1d1bb0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bac) {
            ctx->pc = 0x1D1B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b98;
        }
    }
    ctx->pc = 0x1D1BB4u;
    // 0x1d1bb4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D1BB4u;
    {
        const bool branch_taken_0x1d1bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB4u;
        // 0x1d1bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bb4) {
            ctx->pc = 0x1D1C38u;
            goto label_1d1c38;
        }
    }
    ctx->pc = 0x1D1BBCu;
label_1d1bbc:
    // 0x1d1bbc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1d1bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1bc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d1bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1bc4: 0x0  nop
    ctx->pc = 0x1d1bc4u;
    // NOP
    // 0x1d1bc8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1D1BC8u;
    {
        const bool branch_taken_0x1d1bc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC8u;
        // 0x1d1bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc8) {
            ctx->pc = 0x1D1C38u;
            goto label_1d1c38;
        }
    }
    ctx->pc = 0x1D1BD0u;
    // 0x1d1bd0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1d1bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1bd4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d1bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1bd8:
    // 0x1d1bd8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1d1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1d1bdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d1bdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d1be0: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d1be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d1be4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1d1be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1be8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d1be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1bec: 0x0  nop
    ctx->pc = 0x1d1becu;
    // NOP
    // 0x1d1bf0: 0x4503fff9  bc1tl       . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D1BF0u;
    {
        const bool branch_taken_0x1d1bf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1bf0) {
            ctx->pc = 0x1D1BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1BF0u;
            // 0x1d1bf4: 0xc601001c  lwc1        $f1, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bd8;
        }
    }
    ctx->pc = 0x1D1BF8u;
    // 0x1d1bf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D1BF8u;
    {
        const bool branch_taken_0x1d1bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF8u;
        // 0x1d1bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bf8) {
            ctx->pc = 0x1D1C38u;
            goto label_1d1c38;
        }
    }
    ctx->pc = 0x1D1C00u;
label_1d1c00:
    // 0x1d1c00: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1c04: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1d1c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1c08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d1c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1c0c: 0x0  nop
    ctx->pc = 0x1d1c0cu;
    // NOP
    // 0x1d1c10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1C10u;
    {
        const bool branch_taken_0x1d1c10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1c10) {
            ctx->pc = 0x1D1C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1C10u;
            // 0x1d1c14: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1C18u;
            goto label_1d1c18;
        }
    }
    ctx->pc = 0x1D1C18u;
label_1d1c18:
    // 0x1d1c18: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d1c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1c1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d1c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1c20: 0x0  nop
    ctx->pc = 0x1d1c20u;
    // NOP
    // 0x1d1c24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d1c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1c28: 0x0  nop
    ctx->pc = 0x1d1c28u;
    // NOP
    // 0x1d1c2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1C2Cu;
    {
        const bool branch_taken_0x1d1c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1c2c) {
            ctx->pc = 0x1D1C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1C2Cu;
            // 0x1d1c30: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1C34u;
            goto label_1d1c34;
        }
    }
    ctx->pc = 0x1D1C34u;
label_1d1c34:
    // 0x1d1c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c38:
    // 0x1d1c38: 0xc073fe4  jal         func_1CFF90
    ctx->pc = 0x1D1C38u;
    SET_GPR_U32(ctx, 31, 0x1D1C40u);
    ctx->pc = 0x1D1C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C38u;
    // 0x1d1c3c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF90u, 0x1D1C38u, 0x1D1C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C40u;
label_1d1c40:
    // 0x1d1c40: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1d1c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1c44: 0x5600ffa7  bnel        $s0, $zero, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1D1C44u;
    {
        const bool branch_taken_0x1d1c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c44) {
            ctx->pc = 0x1D1C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1C44u;
            // 0x1d1c48: 0x9603002a  lhu         $v1, 0x2A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1AE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ae4;
        }
    }
    ctx->pc = 0x1D1C4Cu;
    // 0x1d1c4c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1d1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d1c50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1C50u;
    {
        const bool branch_taken_0x1d1c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C50u;
        // 0x1d1c54: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c50) {
            ctx->pc = 0x1D1C78u;
            goto label_1d1c78;
        }
    }
    ctx->pc = 0x1D1C58u;
    // 0x1d1c58: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x1d1c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1d1c5c: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1C5Cu;
    {
        const bool branch_taken_0x1d1c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C5Cu;
        // 0x1d1c60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c5c) {
            ctx->pc = 0x1D1C78u;
            goto label_1d1c78;
        }
    }
    ctx->pc = 0x1D1C64u;
    // 0x1d1c64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d1c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c6c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1d1c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c70: 0xc074398  jal         func_1D0E60
    ctx->pc = 0x1D1C70u;
    SET_GPR_U32(ctx, 31, 0x1D1C78u);
    ctx->pc = 0x1D1C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C70u;
    // 0x1d1c74: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0E60u, 0x1D1C70u, 0x1D1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C78u;
label_1d1c78:
    // 0x1d1c78: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1C78u;
    {
        const bool branch_taken_0x1d1c78 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c78) {
            ctx->pc = 0x1D1CBCu;
            goto label_1d1cbc;
        }
    }
    ctx->pc = 0x1D1C80u;
    // 0x1d1c80: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x1d1c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d1c84: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1C84u;
    {
        const bool branch_taken_0x1d1c84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C84u;
        // 0x1d1c88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c84) {
            ctx->pc = 0x1D1CBCu;
            goto label_1d1cbc;
        }
    }
    ctx->pc = 0x1D1C8Cu;
    // 0x1d1c8c: 0x0  nop
    ctx->pc = 0x1d1c8cu;
    // NOP
label_1d1c90:
    // 0x1d1c90: 0x12110005  beq         $s0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1C90u;
    {
        const bool branch_taken_0x1d1c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C90u;
        // 0x1d1c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c90) {
            ctx->pc = 0x1D1CA8u;
            goto label_1d1ca8;
        }
    }
    ctx->pc = 0x1D1C98u;
    // 0x1d1c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c9c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1d1c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ca0: 0xc07454e  jal         func_1D1538
    ctx->pc = 0x1D1CA0u;
    SET_GPR_U32(ctx, 31, 0x1D1CA8u);
    ctx->pc = 0x1D1CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CA0u;
    // 0x1d1ca4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1538u, 0x1D1CA0u, 0x1D1CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CA8u;
label_1d1ca8:
    // 0x1d1ca8: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d1cac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1cb0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d1cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d1cb4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D1CB4u;
    {
        const bool branch_taken_0x1d1cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1cb4) {
            ctx->pc = 0x1D1C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1c90;
        }
    }
    ctx->pc = 0x1D1CBCu;
label_1d1cbc:
    // 0x1d1cbc: 0x1ac0000b  blez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1CBCu;
    {
        const bool branch_taken_0x1d1cbc = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1D1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CBCu;
        // 0x1d1cc0: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cbc) {
            ctx->pc = 0x1D1CECu;
            goto label_1d1cec;
        }
    }
    ctx->pc = 0x1D1CC4u;
    // 0x1d1cc4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1d1cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1cc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1ccc: 0x0  nop
    ctx->pc = 0x1d1cccu;
    // NOP
label_1d1cd0:
    // 0x1d1cd0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d1cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1cd4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d1cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1cd8: 0xc073f46  jal         func_1CFD18
    ctx->pc = 0x1D1CD8u;
    SET_GPR_U32(ctx, 31, 0x1D1CE0u);
    ctx->pc = 0x1D1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CD8u;
    // 0x1d1cdc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD18u, 0x1D1CD8u, 0x1D1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CE0u;
label_1d1ce0:
    // 0x1d1ce0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d1ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d1ce4: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D1CE4u;
    {
        const bool branch_taken_0x1d1ce4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ce4) {
            ctx->pc = 0x1D1CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1CE4u;
            // 0x1d1ce8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1cd0;
        }
    }
    ctx->pc = 0x1D1CECu;
label_1d1cec:
    // 0x1d1cec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1d1cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1cf0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1d1cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d1cf4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1d1cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d1cf8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1d1cf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d1cfc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1d1cfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d1d00: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1d1d00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1d04: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1d1d04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1d08: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1d1d08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d1d0c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1d1d0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d1d10: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1d1d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d1d14: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1d1d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d1d18: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1d1d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d1d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D1Cu;
        // 0x1d1d20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1D24u;
    // 0x1d1d24: 0x0  nop
    ctx->pc = 0x1d1d24u;
    // NOP
    ctx->pc = 0x1d1d28u;
}
