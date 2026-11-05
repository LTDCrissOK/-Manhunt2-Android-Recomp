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

// Function: sub_0017C968
// Address: 0x17c968 - 0x17cae0
void sub_0017C968_0x17c968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C968_0x17c968");
#endif

    switch (ctx->pc) {
        case 0x17c9c8u: goto label_17c9c8;
        case 0x17c9d0u: goto label_17c9d0;
        case 0x17ca14u: goto label_17ca14;
        case 0x17ca2cu: goto label_17ca2c;
        case 0x17ca94u: goto label_17ca94;
        default: break;
    }

    ctx->pc = 0x17c968u;

    // 0x17c968: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17c968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17c96c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x17c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c970: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17c970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17c974: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17c978: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17c978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c97c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17c980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c984: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x17c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x17c988: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17c988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c98c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x17c98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17c990: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x17c990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c994: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17c994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17c998: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x17c998u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
    // 0x17c99c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17c99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17c9a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17c9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17c9a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17c9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17c9a8: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x17c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17c9ac: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x17c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c9b0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x17c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c9b4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x17c9b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17c9b8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x17c9b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17c9bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17c9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17c9c0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x17c9c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17c9c4: 0x0  nop
    ctx->pc = 0x17c9c4u;
    // NOP
label_17c9c8:
    // 0x17c9c8: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x17C9C8u;
    SET_GPR_U32(ctx, 31, 0x17C9D0u);
    ctx->pc = 0x17C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9C8u;
    // 0x17c9cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x17C9C8u, 0x17C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9D0u;
label_17c9d0:
    // 0x17c9d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x17c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c9d8: 0xc682c6a4  lwc1        $f2, -0x395C($s4)
    ctx->pc = 0x17c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c9dc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x17c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c9e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17c9e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c9e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17c9e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17c9e8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x17c9e8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x17c9ec: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x17c9ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c9f0: 0x0  nop
    ctx->pc = 0x17c9f0u;
    // NOP
    // 0x17c9f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17C9F4u;
    {
        const bool branch_taken_0x17c9f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9F4u;
        // 0x17c9f8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9f4) {
            ctx->pc = 0x17CA00u;
            goto label_17ca00;
        }
    }
    ctx->pc = 0x17C9FCu;
    // 0x17c9fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ca00:
    // 0x17ca00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CA00u;
    {
        const bool branch_taken_0x17ca00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA00u;
        // 0x17ca04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca00) {
            ctx->pc = 0x17CA1Cu;
            goto label_17ca1c;
        }
    }
    ctx->pc = 0x17CA08u;
    // 0x17ca08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17ca08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca0c: 0xc041032  jal         func_1040C8
    ctx->pc = 0x17CA0Cu;
    SET_GPR_U32(ctx, 31, 0x17CA14u);
    ctx->pc = 0x17CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA0Cu;
    // 0x17ca10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x17CA0Cu, 0x17CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA14u;
label_17ca14:
    // 0x17ca14: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17CA14u;
    {
        const bool branch_taken_0x17ca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ca14) {
            ctx->pc = 0x17CA8Cu;
            goto label_17ca8c;
        }
    }
    ctx->pc = 0x17CA1Cu;
label_17ca1c:
    // 0x17ca1c: 0x16400019  bnez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x17CA1Cu;
    {
        const bool branch_taken_0x17ca1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA1Cu;
        // 0x17ca20: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca1c) {
            ctx->pc = 0x17CA84u;
            goto label_17ca84;
        }
    }
    ctx->pc = 0x17CA24u;
    // 0x17ca24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17CA24u;
    SET_GPR_U32(ctx, 31, 0x17CA2Cu);
    ctx->pc = 0x17CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA24u;
    // 0x17ca28: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17CA24u, 0x17CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA2Cu;
label_17ca2c:
    // 0x17ca2c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x17ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca30: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x17ca30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ca34: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x17ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ca38: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x17ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ca3c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x17ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17ca40: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x17ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x17ca44: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x17ca44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x17ca48: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x17ca48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x17ca4c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x17ca4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x17ca50: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17ca50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17ca54: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x17ca54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x17ca58: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x17ca58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x17ca5c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x17ca5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17ca60: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x17ca60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x17ca64: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x17ca64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x17ca68: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17ca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17ca6c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x17ca6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17ca70: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x17ca70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17ca74: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x17ca74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17ca78: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x17ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17ca7c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x17CA7Cu;
    {
        const bool branch_taken_0x17ca7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ca7c) {
            ctx->pc = 0x17C9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c9c8;
        }
    }
    ctx->pc = 0x17CA84u;
label_17ca84:
    // 0x17ca84: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x17ca84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ca88: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x17ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_17ca8c:
    // 0x17ca8c: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x17CA8Cu;
    SET_GPR_U32(ctx, 31, 0x17CA94u);
    ctx->pc = 0x17CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA8Cu;
    // 0x17ca90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x17CA8Cu, 0x17CA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA94u;
label_17ca94:
    // 0x17ca94: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x17ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca98: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x17ca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ca9c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x17ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17caa0: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x17caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17caa4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x17caa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x17caa8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x17caa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x17caac: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x17caacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x17cab0: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x17cab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x17cab4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17cab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cab8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17cab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cabc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17cabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17cac0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17cac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cac4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x17cac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17cac8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x17cac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cacc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17caccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17cad0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17cad4: 0x3e00008  jr          $ra
    ctx->pc = 0x17CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAD4u;
        // 0x17cad8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CADCu;
    // 0x17cadc: 0x0  nop
    ctx->pc = 0x17cadcu;
    // NOP
    ctx->pc = 0x17cae0u;
}
