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

// Function: sub_001EA4C8
// Address: 0x1ea4c8 - 0x1ea638
void sub_001EA4C8_0x1ea4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA4C8_0x1ea4c8");
#endif

    switch (ctx->pc) {
        case 0x1ea50cu: goto label_1ea50c;
        case 0x1ea514u: goto label_1ea514;
        case 0x1ea51cu: goto label_1ea51c;
        case 0x1ea524u: goto label_1ea524;
        case 0x1ea590u: goto label_1ea590;
        default: break;
    }

    ctx->pc = 0x1ea4c8u;

    // 0x1ea4c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ea4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ea4cc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1ea4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1ea4d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4d4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1ea4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1ea4d8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1ea4d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ea4dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ea4dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4e0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1ea4e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ea4e4: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1ea4e4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1ea4e8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1ea4e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1ea4ec: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1ea4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1ea4f0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1ea4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1ea4f4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1ea4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ea4f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ea4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ea4fc: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x1ea4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1ea500: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1ea500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ea504: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA504u;
    SET_GPR_U32(ctx, 31, 0x1EA50Cu);
    ctx->pc = 0x1EA508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA504u;
    // 0x1ea508: 0x26120060  addiu       $s2, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA504u, 0x1EA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA50Cu;
label_1ea50c:
    // 0x1ea50c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA50Cu;
    SET_GPR_U32(ctx, 31, 0x1EA514u);
    ctx->pc = 0x1EA510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA50Cu;
    // 0x1ea510: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA50Cu, 0x1EA514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA514u;
label_1ea514:
    // 0x1ea514: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA514u;
    SET_GPR_U32(ctx, 31, 0x1EA51Cu);
    ctx->pc = 0x1EA518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA514u;
    // 0x1ea518: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA514u, 0x1EA51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA51Cu;
label_1ea51c:
    // 0x1ea51c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA51Cu;
    SET_GPR_U32(ctx, 31, 0x1EA524u);
    ctx->pc = 0x1EA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA51Cu;
    // 0x1ea520: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA51Cu, 0x1EA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA524u;
label_1ea524:
    // 0x1ea524: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1ea524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1ea528: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1ea528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1ea52c: 0x7e000060  sq          $zero, 0x60($s0)
    ctx->pc = 0x1ea52cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 0));
    // 0x1ea530: 0x7e000090  sq          $zero, 0x90($s0)
    ctx->pc = 0x1ea530u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 0));
    // 0x1ea534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea538: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea53c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ea53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ea540: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1ea540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ea544: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ea544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ea548: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1ea548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1ea54c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ea54cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea550: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1ea550u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea554: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1ea554u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ea558: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1ea558u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea55c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1ea55cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ea560: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1ea560u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea564: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x1ea564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1ea568: 0xe6150040  swc1        $f21, 0x40($s0)
    ctx->pc = 0x1ea568u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1ea56c: 0x4616b502  mul.s       $f20, $f22, $f22
    ctx->pc = 0x1ea56cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x1ea570: 0xe6160048  swc1        $f22, 0x48($s0)
    ctx->pc = 0x1ea570u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x1ea574: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ea574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ea578: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1ea578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1ea57c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1ea57cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1ea580: 0x0  nop
    ctx->pc = 0x1ea580u;
    // NOP
    // 0x1ea584: 0x46140504  c1          0x140504
    ctx->pc = 0x1ea584u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ea588: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EA588u;
    SET_GPR_U32(ctx, 31, 0x1EA590u);
    ctx->pc = 0x1EA58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA588u;
    // 0x1ea58c: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EA588u, 0x1EA590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA590u;
label_1ea590:
    // 0x1ea590: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x1ea590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ea594: 0x4614a102  mul.s       $f4, $f20, $f20
    ctx->pc = 0x1ea594u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1ea598: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1ea598u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ea59c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1ea59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1ea5a0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1ea5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea5a4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1ea5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea5a8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1ea5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ea5ac: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x1ea5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ea5b0: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x1ea5b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ea5b4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1ea5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ea5b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1ea5b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ea5bc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1ea5bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ea5c0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1ea5c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ea5c4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ea5c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea5c8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1ea5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea5cc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1ea5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea5d0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1ea5d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1ea5d4: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1ea5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1ea5d8: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x1ea5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1ea5dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1ea5dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea5e0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1ea5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1ea5e4: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x1ea5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea5e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1ea5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ea5ec: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1ea5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea5f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1ea5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ea5f4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1ea5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea5f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1ea5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ea5fc: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1ea5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea600: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1ea600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ea604: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ea604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea608: 0xfa010090  sqc2        $vf1, 0x90($s0)
    ctx->pc = 0x1ea608u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea60c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ea60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea610: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1ea610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ea614: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1ea614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea618: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1ea618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea61c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1ea61cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ea620: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ea620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ea624: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x1ea624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ea628: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1ea628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ea62c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1ea62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea630: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA630u;
        // 0x1ea634: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA638u;
}
