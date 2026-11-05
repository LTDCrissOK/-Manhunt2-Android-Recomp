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

// Function: sub_002FE4E8
// Address: 0x2fe4e8 - 0x2feac8
void sub_002FE4E8_0x2fe4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE4E8_0x2fe4e8");
#endif

    switch (ctx->pc) {
        case 0x2fe53cu: goto label_2fe53c;
        case 0x2fe548u: goto label_2fe548;
        case 0x2fe558u: goto label_2fe558;
        case 0x2fe588u: goto label_2fe588;
        case 0x2fe594u: goto label_2fe594;
        case 0x2fe5a4u: goto label_2fe5a4;
        case 0x2fe624u: goto label_2fe624;
        case 0x2fe630u: goto label_2fe630;
        case 0x2fe750u: goto label_2fe750;
        case 0x2fe91cu: goto label_2fe91c;
        case 0x2fe924u: goto label_2fe924;
        case 0x2fe9bcu: goto label_2fe9bc;
        case 0x2fe9dcu: goto label_2fe9dc;
        case 0x2fea00u: goto label_2fea00;
        case 0x2fea5cu: goto label_2fea5c;
        default: break;
    }

    ctx->pc = 0x2fe4e8u;

    // 0x2fe4e8: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2fe4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x2fe4ec: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x2fe4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
    // 0x2fe4f0: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x2fe4f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2fe4f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fe4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe4f8: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x2fe4f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x2fe4fc: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2fe4fcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2fe500: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x2fe500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2fe504: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2fe504u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2fe508: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x2fe508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x2fe50c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2fe50cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2fe510: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x2fe510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
    // 0x2fe514: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2fe514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2fe518: 0xffb301b8  sd          $s3, 0x1B8($sp)
    ctx->pc = 0x2fe518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 19));
    // 0x2fe51c: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x2fe51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x2fe520: 0xffb501c8  sd          $s5, 0x1C8($sp)
    ctx->pc = 0x2fe520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 21));
    // 0x2fe524: 0xffb601d0  sd          $s6, 0x1D0($sp)
    ctx->pc = 0x2fe524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 22));
    // 0x2fe528: 0xffb701d8  sd          $s7, 0x1D8($sp)
    ctx->pc = 0x2fe528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 23));
    // 0x2fe52c: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x2fe52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x2fe530: 0xffbf01e8  sd          $ra, 0x1E8($sp)
    ctx->pc = 0x2fe530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 31));
    // 0x2fe534: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2FE534u;
    SET_GPR_U32(ctx, 31, 0x2FE53Cu);
    ctx->pc = 0x2FE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE534u;
    // 0x2fe538: 0xafa60184  sw          $a2, 0x184($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2FE534u, 0x2FE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE53Cu;
label_2fe53c:
    // 0x2fe53c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fe53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe540: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2FE540u;
    SET_GPR_U32(ctx, 31, 0x2FE548u);
    ctx->pc = 0x2FE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE540u;
    // 0x2fe544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2FE540u, 0x2FE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE548u;
label_2fe548:
    // 0x2fe548: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE548u;
    {
        const bool branch_taken_0x2fe548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe548) {
            ctx->pc = 0x2FE54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE548u;
            // 0x2fe54c: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE55Cu;
            goto label_2fe55c;
        }
    }
    ctx->pc = 0x2FE550u;
    // 0x2fe550: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2FE550u;
    SET_GPR_U32(ctx, 31, 0x2FE558u);
    ctx->pc = 0x2FE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE550u;
    // 0x2fe554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2FE550u, 0x2FE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE558u;
label_2fe558:
    // 0x2fe558: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x2fe558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fe55c:
    // 0x2fe55c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2fe55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2fe560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe564: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2fe564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2fe568: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2fe568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fe56c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2fe56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe570: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fe570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fe574: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2fe574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe578: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2fe578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fe57c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2fe57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe580: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2FE580u;
    SET_GPR_U32(ctx, 31, 0x2FE588u);
    ctx->pc = 0x2FE584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE580u;
    // 0x2fe584: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2FE580u, 0x2FE588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE588u;
label_2fe588:
    // 0x2fe588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fe588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe58c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2FE58Cu;
    SET_GPR_U32(ctx, 31, 0x2FE594u);
    ctx->pc = 0x2FE590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE58Cu;
    // 0x2fe590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2FE58Cu, 0x2FE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE594u;
label_2fe594:
    // 0x2fe594: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE594u;
    {
        const bool branch_taken_0x2fe594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe594) {
            ctx->pc = 0x2FE598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE594u;
            // 0x2fe598: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE5A8u;
            goto label_2fe5a8;
        }
    }
    ctx->pc = 0x2FE59Cu;
    // 0x2fe59c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2FE59Cu;
    SET_GPR_U32(ctx, 31, 0x2FE5A4u);
    ctx->pc = 0x2FE5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE59Cu;
    // 0x2fe5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2FE59Cu, 0x2FE5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE5A4u;
label_2fe5a4:
    // 0x2fe5a4: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x2fe5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fe5a8:
    // 0x2fe5a8: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2fe5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2fe5ac: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2fe5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fe5b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2fe5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fe5b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2fe5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe5b8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2fe5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2fe5bc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2fe5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe5c0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2fe5c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fe5c4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2fe5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe5c8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2fe5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2fe5cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fe5ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe5d0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2fe5d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe5d4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe5d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe5d8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fe5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fe5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe5e0: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2fe5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe5e4: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x2fe5e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe5e8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2fe5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe5ec: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2fe5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe5f0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2fe5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe5f4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2fe5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fe5f8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2fe5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fe5fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2fe5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2fe600: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2FE600u;
    {
        const bool branch_taken_0x2fe600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE600u;
        // 0x2fe604: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe600) {
            ctx->pc = 0x2FE640u;
            goto label_2fe640;
        }
    }
    ctx->pc = 0x2FE608u;
    // 0x2fe608: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x2fe608u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x2fe60c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2fe60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe610: 0x0  nop
    ctx->pc = 0x2fe610u;
    // NOP
    // 0x2fe614: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2FE614u;
    {
        const bool branch_taken_0x2fe614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE614u;
        // 0x2fe618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe614) {
            ctx->pc = 0x2FE640u;
            goto label_2fe640;
        }
    }
    ctx->pc = 0x2FE61Cu;
    // 0x2fe61c: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x2FE61Cu;
    {
        const bool branch_taken_0x2fe61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE61Cu;
        // 0x2fe620: 0xdfb001a0  ld          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe61c) {
            ctx->pc = 0x2FEA8Cu;
            goto label_2fea8c;
        }
    }
    ctx->pc = 0x2FE624u;
label_2fe624:
    // 0x2fe624: 0xac4091bc  sw          $zero, -0x6E44($v0)
    ctx->pc = 0x2fe624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939068), GPR_U32(ctx, 0));
    // 0x2fe628: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x2FE628u;
    {
        const bool branch_taken_0x2fe628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE628u;
        // 0x2fe62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe628) {
            ctx->pc = 0x2FEA88u;
            goto label_2fea88;
        }
    }
    ctx->pc = 0x2FE630u;
label_2fe630:
    // 0x2fe630: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fe630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2fe634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe638: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x2FE638u;
    {
        const bool branch_taken_0x2fe638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE638u;
        // 0x2fe63c: 0xac6091bc  sw          $zero, -0x6E44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294939068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe638) {
            ctx->pc = 0x2FEA88u;
            goto label_2fea88;
        }
    }
    ctx->pc = 0x2FE640u;
label_2fe640:
    // 0x2fe640: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2fe640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fe644: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fe644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe648: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2fe648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fe64c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fe64cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fe650: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fe650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fe654: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fe654u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2fe658: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fe658u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fe65c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2fe65cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe660: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fe660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe664: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2fe664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2fe668: 0x24535b40  addiu       $s3, $v0, 0x5B40
    ctx->pc = 0x2fe668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x2fe66c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fe66cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe670: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2fe670u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x2fe674: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2fe674u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fe678: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2fe678u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe67c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fe67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe680: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2fe680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe684: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2fe684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fe688: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2fe688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe68c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2fe68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fe690: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2fe690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe694: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2fe694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2fe698: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2fe698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe69c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2fe69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fe6a0: 0xafa50190  sw          $a1, 0x190($sp)
    ctx->pc = 0x2fe6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
    // 0x2fe6a4: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x2fe6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2fe6a8: 0xafa60194  sw          $a2, 0x194($sp)
    ctx->pc = 0x2fe6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 6));
    // 0x2fe6ac: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x2fe6acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2fe6b0: 0xafa7018c  sw          $a3, 0x18C($sp)
    ctx->pc = 0x2fe6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 7));
    // 0x2fe6b4: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2fe6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2fe6b8: 0xafa8019c  sw          $t0, 0x19C($sp)
    ctx->pc = 0x2fe6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 8));
    // 0x2fe6bc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fe6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2fe6c0: 0xafa90198  sw          $t1, 0x198($sp)
    ctx->pc = 0x2fe6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 9));
    // 0x2fe6c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fe6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fe6c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2fe6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2fe6cc: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x2fe6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x2fe6d0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2fe6d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2fe6d4: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x2fe6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fe6d8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2fe6d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2fe6dc: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x2fe6dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2fe6e0: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x2fe6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x2fe6e4: 0x27b40180  addiu       $s4, $sp, 0x180
    ctx->pc = 0x2fe6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2fe6e8: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x2fe6e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2fe6ec: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x2fe6ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fe6f0: 0xc4561c60  lwc1        $f22, 0x1C60($v0)
    ctx->pc = 0x2fe6f0u;
    { uint32_t bits = FAST_READ32(0x471C60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fe6f4: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x2fe6f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2fe6f8: 0x24c91c40  addiu       $t1, $a2, 0x1C40
    ctx->pc = 0x2fe6f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 7232));
    // 0x2fe6fc: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x2fe6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2fe700: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x2fe700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2fe704: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x2fe704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2fe708: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x2fe708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2fe70c: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x2fe70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fe710: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x2fe710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fe714: 0xb3a7004f  sdl         $a3, 0x4F($sp)
    ctx->pc = 0x2fe714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fe718: 0xb7a70048  sdr         $a3, 0x48($sp)
    ctx->pc = 0x2fe718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fe71c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2fe71cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe720: 0xac6591bc  sw          $a1, -0x6E44($v1)
    ctx->pc = 0x2fe720u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3F91BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91BCu, _value); } while (0);
    // 0x2fe724: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2fe724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fe728: 0x24861c50  addiu       $a2, $a0, 0x1C50
    ctx->pc = 0x2fe728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 7248));
    // 0x2fe72c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2fe72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2fe730: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2fe730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2fe734: 0x68c3000f  ldl         $v1, 0xF($a2)
    ctx->pc = 0x2fe734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2fe738: 0x6cc30008  ldr         $v1, 0x8($a2)
    ctx->pc = 0x2fe738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2fe73c: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2fe73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fe740: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2fe740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fe744: 0xb3a3005f  sdl         $v1, 0x5F($sp)
    ctx->pc = 0x2fe744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fe748: 0xb7a30058  sdr         $v1, 0x58($sp)
    ctx->pc = 0x2fe748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fe74c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2fe74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fe750:
    // 0x2fe750: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2fe750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe754: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2fe754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe758: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2fe758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe75c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2fe75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe760: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2fe760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fe764: 0xc7a4003c  lwc1        $f4, 0x3C($sp)
    ctx->pc = 0x2fe764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fe768: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2fe768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fe76c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2fe76cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2fe770: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x2fe770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fe774: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2fe774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2fe778: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2fe778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fe77c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2fe77cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fe780: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x2fe780u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fe784: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2fe784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2fe788: 0x8fa70190  lw          $a3, 0x190($sp)
    ctx->pc = 0x2fe788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2fe78c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2fe78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe790: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2fe790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe794: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2fe794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe798: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x2fe798u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2fe79c: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x2fe79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe7a0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2fe7a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fe7a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2fe7a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fe7a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2fe7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2fe7ac: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x2fe7acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2fe7b0: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2fe7b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2fe7b4: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x2fe7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2fe7b8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2fe7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2fe7bc: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2fe7bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fe7c0: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x2fe7c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2fe7c4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe7c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe7c8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2fe7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe7cc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2fe7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe7d0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2fe7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe7d4: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2fe7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe7d8: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x2fe7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe7dc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fe7e0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fe7e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fe7e4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2fe7e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fe7e8: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x2fe7e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fe7ec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fe7ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe7f0: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2fe7f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fe7f4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe7f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe7f8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2fe7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe7fc: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2fe7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fe800: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x2fe800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fe804: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x2fe804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2fe808: 0x4605a942  mul.s       $f5, $f21, $f5
    ctx->pc = 0x2fe808u;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[5]);
    // 0x2fe80c: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2fe80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe810: 0x4606a982  mul.s       $f6, $f21, $f6
    ctx->pc = 0x2fe810u;
    ctx->f[6] = FPU_MUL_S(ctx->f[21], ctx->f[6]);
    // 0x2fe814: 0x4607a9c2  mul.s       $f7, $f21, $f7
    ctx->pc = 0x2fe814u;
    ctx->f[7] = FPU_MUL_S(ctx->f[21], ctx->f[7]);
    // 0x2fe818: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x2fe818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fe81c: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x2fe81cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x2fe820: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2fe820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe824: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2fe824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe828: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x2fe828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe82c: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x2fe82cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2fe830: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2fe830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2fe834: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2fe834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2fe838: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x2fe838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2fe83c: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x2fe83cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2fe840: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x2fe840u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2fe844: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x2fe844u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2fe848: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x2fe848u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2fe84c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2fe84cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2fe850: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x2fe850u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fe854: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe858: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2fe858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe85c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2fe85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe860: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x2fe860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fe864: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2fe864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe868: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2fe868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe86c: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x2fe86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe870: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fe870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fe874: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2fe874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fe878: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2fe878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fe87c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2fe87cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2fe880: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x2fe880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fe884: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2fe884u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fe888: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe88c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2fe88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe890: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2fe890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fe894: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x2fe894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fe898: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x2fe898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2fe89c: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x2fe89cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x2fe8a0: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2fe8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe8a4: 0x4606a182  mul.s       $f6, $f20, $f6
    ctx->pc = 0x2fe8a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
    // 0x2fe8a8: 0x4607a1c2  mul.s       $f7, $f20, $f7
    ctx->pc = 0x2fe8a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x2fe8ac: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x2fe8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fe8b0: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2fe8b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2fe8b4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2fe8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe8b8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2fe8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe8bc: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x2fe8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe8c0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x2fe8c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2fe8c4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2fe8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2fe8c8: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2fe8c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2fe8cc: 0xe7a2009c  swc1        $f2, 0x9C($sp)
    ctx->pc = 0x2fe8ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2fe8d0: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x2fe8d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2fe8d4: 0xe7a600a4  swc1        $f6, 0xA4($sp)
    ctx->pc = 0x2fe8d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2fe8d8: 0xe7a700a8  swc1        $f7, 0xA8($sp)
    ctx->pc = 0x2fe8d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2fe8dc: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x2fe8dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fe8e0: 0x8fa90194  lw          $t1, 0x194($sp)
    ctx->pc = 0x2fe8e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2fe8e4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2fe8e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fe8e8: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x2fe8e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2fe8ec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe8ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe8f0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2fe8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe8f4: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x2fe8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe8f8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fe8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fe8fc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2fe8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe900: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2fe900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe904: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x2fe904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe908: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x2fe908u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2fe90c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2fe90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2fe910: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2fe910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2fe914: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FE914u;
    SET_GPR_U32(ctx, 31, 0x2FE91Cu);
    ctx->pc = 0x2FE918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE914u;
    // 0x2fe918: 0xe7a2008c  swc1        $f2, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FE914u, 0x2FE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE91Cu;
label_2fe91c:
    // 0x2fe91c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FE91Cu;
    SET_GPR_U32(ctx, 31, 0x2FE924u);
    ctx->pc = 0x2FE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE91Cu;
    // 0x2fe920: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FE91Cu, 0x2FE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE924u;
label_2fe924:
    // 0x2fe924: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x2fe924u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fe928: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x2fe928u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fe92c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2fe92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2fe930: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x2fe930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x2fe934: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x2fe934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2fe938: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x2fe938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2fe93c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fe93cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe940: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2fe940u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe944: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe948: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2fe948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe94c: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x2fe94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2fe950: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2fe950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe954: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2fe954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe958: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2fe958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fe95c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fe95cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fe960: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fe960u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fe964: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2fe964u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fe968: 0x0  nop
    ctx->pc = 0x2fe968u;
    // NOP
    // 0x2fe96c: 0x0  nop
    ctx->pc = 0x2fe96cu;
    // NOP
    // 0x2fe970: 0x46010084  c1          0x10084
    ctx->pc = 0x2fe970u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fe974: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x2fe974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2fe978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fe978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe97c: 0x0  nop
    ctx->pc = 0x2fe97cu;
    // NOP
    // 0x2fe980: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fe980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe984: 0x0  nop
    ctx->pc = 0x2fe984u;
    // NOP
    // 0x2fe988: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2FE988u;
    {
        const bool branch_taken_0x2fe988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE988u;
        // 0x2fe98c: 0xe7a20110  swc1        $f2, 0x110($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe988) {
            ctx->pc = 0x2FE9B4u;
            goto label_2fe9b4;
        }
    }
    ctx->pc = 0x2FE990u;
    // 0x2fe990: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fe990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fe994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe998: 0x0  nop
    ctx->pc = 0x2fe998u;
    // NOP
    // 0x2fe99c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2fe99cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2fe9a0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2fe9a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2fe9a4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2fe9a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fe9a8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2fe9a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2fe9ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2fe9acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe9b0: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x2fe9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fe9b4:
    // 0x2fe9b4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x2FE9B4u;
    SET_GPR_U32(ctx, 31, 0x2FE9BCu);
    ctx->pc = 0x2FE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE9B4u;
    // 0x2fe9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2FE9B4u, 0x2FE9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE9BCu;
label_2fe9bc:
    // 0x2fe9bc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2fe9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe9c0: 0x8fa70184  lw          $a3, 0x184($sp)
    ctx->pc = 0x2fe9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2fe9c4: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2FE9C4u;
    {
        const bool branch_taken_0x2fe9c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE9C4u;
        // 0x2fe9c8: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe9c4) {
            ctx->pc = 0x2FE9F0u;
            goto label_2fe9f0;
        }
    }
    ctx->pc = 0x2FE9CCu;
    // 0x2fe9cc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2fe9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9d4: 0xc0779da  jal         func_1DE768
    ctx->pc = 0x2FE9D4u;
    SET_GPR_U32(ctx, 31, 0x2FE9DCu);
    ctx->pc = 0x2FE9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE9D4u;
    // 0x2fe9d8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE768u, 0x2FE9D4u, 0x2FE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE9DCu;
label_2fe9dc:
    // 0x2fe9dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FE9DCu;
    {
        const bool branch_taken_0x2fe9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE9DCu;
        // 0x2fe9e0: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe9dc) {
            ctx->pc = 0x2FEA08u;
            goto label_2fea08;
        }
    }
    ctx->pc = 0x2FE9E4u;
    // 0x2fe9e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9e8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2FE9E8u;
    {
        const bool branch_taken_0x2fe9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE9E8u;
        // 0x2fe9ec: 0xad0091bc  sw          $zero, -0x6E44($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294939068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe9e8) {
            ctx->pc = 0x2FEA88u;
            goto label_2fea88;
        }
    }
    ctx->pc = 0x2FE9F0u;
label_2fe9f0:
    // 0x2fe9f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2fe9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9f8: 0xc077824  jal         func_1DE090
    ctx->pc = 0x2FE9F8u;
    SET_GPR_U32(ctx, 31, 0x2FEA00u);
    ctx->pc = 0x2FE9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE9F8u;
    // 0x2fe9fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x2FE9F8u, 0x2FEA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA00u;
label_2fea00:
    // 0x2fea00: 0x1440ff08  bnez        $v0, . + 4 + (-0xF8 << 2)
    ctx->pc = 0x2FEA00u;
    {
        const bool branch_taken_0x2fea00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA00u;
        // 0x2fea04: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea00) {
            ctx->pc = 0x2FE624u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe624;
        }
    }
    ctx->pc = 0x2FEA08u;
label_2fea08:
    // 0x2fea08: 0x7fa00120  sq          $zero, 0x120($sp)
    ctx->pc = 0x2fea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 0));
    // 0x2fea0c: 0x7fa00130  sq          $zero, 0x130($sp)
    ctx->pc = 0x2fea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 0));
    // 0x2fea10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fea10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fea14: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x2fea14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
    // 0x2fea18: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x2fea18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x2fea1c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2fea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2fea20: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x2fea20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x2fea24: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x2fea24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x2fea28: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x2fea28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x2fea2c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2fea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fea30: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x2fea30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x2fea34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2fea34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea38: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x2fea38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x2fea3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fea3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea40: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x2fea40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x2fea44: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x2fea44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2fea48: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x2fea48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x2fea4c: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x2fea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x2fea50: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x2fea50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x2fea54: 0xc077dac  jal         func_1DF6B0
    ctx->pc = 0x2FEA54u;
    SET_GPR_U32(ctx, 31, 0x2FEA5Cu);
    ctx->pc = 0x2FEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEA54u;
    // 0x2fea58: 0xafa00168  sw          $zero, 0x168($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6B0u, 0x2FEA54u, 0x2FEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA5Cu;
label_2fea5c:
    // 0x2fea5c: 0x1440fef4  bnez        $v0, . + 4 + (-0x10C << 2)
    ctx->pc = 0x2FEA5Cu;
    {
        const bool branch_taken_0x2fea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA5Cu;
        // 0x2fea60: 0x8fa90188  lw          $t1, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea5c) {
            ctx->pc = 0x2FE630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe630;
        }
    }
    ctx->pc = 0x2FEA64u;
    // 0x2fea64: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2fea64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2fea68: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2fea68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2fea6c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2fea6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2fea70: 0x2d220004  sltiu       $v0, $t1, 0x4
    ctx->pc = 0x2fea70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fea74: 0x1440ff36  bnez        $v0, . + 4 + (-0xCA << 2)
    ctx->pc = 0x2FEA74u;
    {
        const bool branch_taken_0x2fea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA74u;
        // 0x2fea78: 0xafa90188  sw          $t1, 0x188($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea74) {
            ctx->pc = 0x2FE750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe750;
        }
    }
    ctx->pc = 0x2FEA7Cu;
    // 0x2fea7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fea80: 0xac4091bc  sw          $zero, -0x6E44($v0)
    ctx->pc = 0x2fea80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F91BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91BCu, _value); } while (0);
    // 0x2fea84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fea88:
    // 0x2fea88: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x2fea88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_2fea8c:
    // 0x2fea8c: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x2fea8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2fea90: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x2fea90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2fea94: 0xdfb301b8  ld          $s3, 0x1B8($sp)
    ctx->pc = 0x2fea94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2fea98: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x2fea98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2fea9c: 0xdfb501c8  ld          $s5, 0x1C8($sp)
    ctx->pc = 0x2fea9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2feaa0: 0xdfb601d0  ld          $s6, 0x1D0($sp)
    ctx->pc = 0x2feaa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2feaa4: 0xdfb701d8  ld          $s7, 0x1D8($sp)
    ctx->pc = 0x2feaa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2feaa8: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x2feaa8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2feaac: 0xdfbf01e8  ld          $ra, 0x1E8($sp)
    ctx->pc = 0x2feaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2feab0: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x2feab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2feab4: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x2feab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2feab8: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x2feab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2feabc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEABCu;
        // 0x2feac0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEAC4u;
    // 0x2feac4: 0x0  nop
    ctx->pc = 0x2feac4u;
    // NOP
    ctx->pc = 0x2feac8u;
}
