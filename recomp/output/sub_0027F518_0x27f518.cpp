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

// Function: sub_0027F518
// Address: 0x27f518 - 0x27f6b0
void sub_0027F518_0x27f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F518_0x27f518");
#endif

    switch (ctx->pc) {
        case 0x27f558u: goto label_27f558;
        case 0x27f568u: goto label_27f568;
        default: break;
    }

    ctx->pc = 0x27f518u;

    // 0x27f518: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27f518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27f51c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x27f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x27f520: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x27f520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x27f524: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27f524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f528: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x27f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x27f52c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27f52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f530: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x27f530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x27f534: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x27f534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f538: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x27f538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27f53c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x27f53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f540: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x27f540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x27f544: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27f544u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27f548: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x27f548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x27f54c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x27f54cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27f550: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x27F550u;
    SET_GPR_U32(ctx, 31, 0x27F558u);
    ctx->pc = 0x27F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F550u;
    // 0x27f554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x27F550u, 0x27F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F558u;
label_27f558:
    // 0x27f558: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F558u;
    {
        const bool branch_taken_0x27f558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f558) {
            ctx->pc = 0x27F55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F558u;
            // 0x27f55c: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F56Cu;
            goto label_27f56c;
        }
    }
    ctx->pc = 0x27F560u;
    // 0x27f560: 0xc0c4900  jal         func_312400
    ctx->pc = 0x27F560u;
    SET_GPR_U32(ctx, 31, 0x27F568u);
    ctx->pc = 0x27F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F560u;
    // 0x27f564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x27F560u, 0x27F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F568u;
label_27f568:
    // 0x27f568: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x27f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f56c:
    // 0x27f56c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x27f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x27f570: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x27f570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27f574: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f578: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x27f578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27f57c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x27f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f580: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x27f580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27f584: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f588: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x27f588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x27f58c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x27f58cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f590: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x27f590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f594: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x27f594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27f598: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x27f598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27f59c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x27f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x27f5a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x27f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f5a4: 0x8c82bd48  lw          $v0, -0x42B8($a0)
    ctx->pc = 0x27f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x27f5a8: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x27f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x27f5ac: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x27f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f5b0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x27f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x27f5b4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27f5b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27f5b8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x27f5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f5bc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x27f5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27f5c0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x27f5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f5c4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x27f5c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27f5c8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x27f5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f5cc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x27f5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x27f5d0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x27f5d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f5d4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x27f5d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27f5d8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x27f5d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x27f5dc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x27f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27f5e0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x27f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f5e4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f5e8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x27f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f5ec: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x27f5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f5f0: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x27f5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27f5f4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x27f5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27f5f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27f5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27f5fc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x27f5fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27f600: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x27f600u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27f604: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f608: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x27f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27f60c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x27f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27f610: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x27f610u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x27f614: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x27f614u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x27f618: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x27f618u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x27f61c: 0x46010044  c1          0x10044
    ctx->pc = 0x27f61cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x27f620: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x27f620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x27f624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27f624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f628: 0x0  nop
    ctx->pc = 0x27f628u;
    // NOP
    // 0x27f62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f630: 0x0  nop
    ctx->pc = 0x27f630u;
    // NOP
    // 0x27f634: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x27F634u;
    {
        const bool branch_taken_0x27f634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F634u;
        // 0x27f638: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f634) {
            ctx->pc = 0x27F68Cu;
            goto label_27f68c;
        }
    }
    ctx->pc = 0x27F63Cu;
    // 0x27f63c: 0x8cc3a35c  lw          $v1, -0x5CA4($a2)
    ctx->pc = 0x27f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943580)));
    // 0x27f640: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x27f640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x27f644: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27F644u;
    {
        const bool branch_taken_0x27f644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F644u;
        // 0x27f648: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f644) {
            ctx->pc = 0x27F68Cu;
            goto label_27f68c;
        }
    }
    ctx->pc = 0x27F64Cu;
    // 0x27f64c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x27f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x27f650: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x27f650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27f654: 0x24a5f6e0  addiu       $a1, $a1, -0x920
    ctx->pc = 0x27f654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964960));
    // 0x27f658: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27f658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27f65c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x27f65cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f660: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x27f660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27f664: 0x8cc2a35c  lw          $v0, -0x5CA4($a2)
    ctx->pc = 0x27f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943580)));
    // 0x27f668: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x27f668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27f66c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f670: 0xacc2a35c  sw          $v0, -0x5CA4($a2)
    ctx->pc = 0x27f670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943580), GPR_U32(ctx, 2));
    // 0x27f674: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x27f674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27f678: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x27f678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x27f67c: 0xe4940010  swc1        $f20, 0x10($a0)
    ctx->pc = 0x27f67cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x27f680: 0xac920014  sw          $s2, 0x14($a0)
    ctx->pc = 0x27f680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 18));
    // 0x27f684: 0xac930018  sw          $s3, 0x18($a0)
    ctx->pc = 0x27f684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 19));
    // 0x27f688: 0xac94001c  sw          $s4, 0x1C($a0)
    ctx->pc = 0x27f688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 20));
label_27f68c:
    // 0x27f68c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x27f68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f690: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x27f690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27f694: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x27f694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f698: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x27f698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27f69c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x27f69cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f6a0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x27f6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x27f6a4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x27f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27F6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6A8u;
        // 0x27f6ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F6B0u;
}
