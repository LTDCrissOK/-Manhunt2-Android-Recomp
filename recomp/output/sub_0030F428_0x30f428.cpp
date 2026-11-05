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

// Function: sub_0030F428
// Address: 0x30f428 - 0x30f6c0
void sub_0030F428_0x30f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F428_0x30f428");
#endif

    switch (ctx->pc) {
        case 0x30f460u: goto label_30f460;
        case 0x30f470u: goto label_30f470;
        case 0x30f580u: goto label_30f580;
        case 0x30f5f4u: goto label_30f5f4;
        case 0x30f640u: goto label_30f640;
        case 0x30f68cu: goto label_30f68c;
        default: break;
    }

    ctx->pc = 0x30f428u;

    // 0x30f428: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x30f428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x30f42c: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x30f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x30f430: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x30f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x30f434: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30f434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f438: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x30f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x30f43c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x30f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x30f440: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x30f440u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x30f444: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x30f444u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x30f448: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x30f448u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x30f44c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x30f44cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x30f450: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x30f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x30f454: 0x8e720100  lw          $s2, 0x100($s3)
    ctx->pc = 0x30f454u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x30f458: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x30F458u;
    SET_GPR_U32(ctx, 31, 0x30F460u);
    ctx->pc = 0x30F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F458u;
    // 0x30f45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x30F458u, 0x30F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F460u;
label_30f460:
    // 0x30f460: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F460u;
    {
        const bool branch_taken_0x30f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f460) {
            ctx->pc = 0x30F464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F460u;
            // 0x30f464: 0xc6400080  lwc1        $f0, 0x80($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F474u;
            goto label_30f474;
        }
    }
    ctx->pc = 0x30F468u;
    // 0x30f468: 0xc0c4900  jal         func_312400
    ctx->pc = 0x30F468u;
    SET_GPR_U32(ctx, 31, 0x30F470u);
    ctx->pc = 0x30F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F468u;
    // 0x30f46c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x30F468u, 0x30F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F470u;
label_30f470:
    // 0x30f470: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x30f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f474:
    // 0x30f474: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x30f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x30f478: 0x26430090  addiu       $v1, $s2, 0x90
    ctx->pc = 0x30f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x30f47c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30f480: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30f480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30f484: 0x264600a0  addiu       $a2, $s2, 0xA0
    ctx->pc = 0x30f484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x30f488: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30f488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30f48c: 0x264700b0  addiu       $a3, $s2, 0xB0
    ctx->pc = 0x30f48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x30f490: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x30f490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f494: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x30f494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30f498: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x30f498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30f49c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30f49cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30f4a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30f4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30f4a8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x30f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f4ac: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x30f4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30f4b0: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x30f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4b4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30f4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30f4b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30f4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f4bc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x30f4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x30f4c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x30f4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4c4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x30f4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x30f4c8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x30f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f4cc: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x30f4ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x30f4d0: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x30f4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x30f4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30f4d8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x30f4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f4dc: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x30f4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x30f4e0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x30f4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4e4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x30f4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30f4e8: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x30f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f4ec: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x30f4ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x30f4f0: 0xc64000b0  lwc1        $f0, 0xB0($s2)
    ctx->pc = 0x30f4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f4f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x30f4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30f4f8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x30f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f4fc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x30f4fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x30f500: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x30f500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f504: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x30f504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x30f508: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x30f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f50c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x30f50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x30f510: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x30f510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f514: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x30f514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f518: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x30f518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f51c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30f51cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30f520: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30f520u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30f524: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30f524u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30f528: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x30f528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30f52c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x30f52cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x30f530: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x30f530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30f534: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x30f534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x30f538: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x30f538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f53c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x30f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f540: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x30f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f544: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x30f544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f548: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x30f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f54c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30f54cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30f550: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30f550u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30f554: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x30f554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x30f558: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30f558u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30f55c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x30f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30f560: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x30f560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30f564: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x30f564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x30f568: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x30f568u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f56c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30f56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f570: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30f570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f574: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30f574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f578: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x30F578u;
    SET_GPR_U32(ctx, 31, 0x30F580u);
    ctx->pc = 0x30F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F578u;
    // 0x30f57c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x30F578u, 0x30F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F580u;
label_30f580:
    // 0x30f580: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x30f580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x30f584: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x30f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x30f588: 0x24827d90  addiu       $v0, $a0, 0x7D90
    ctx->pc = 0x30f588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32144));
    // 0x30f58c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30f58cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5A7D90u));
    // 0x30f590: 0xf8612150  sqc2        $vf1, 0x2150($v1)
    ctx->pc = 0x30f590u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B2150u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B2150u, _value); } while (0);
    // 0x30f594: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x30f594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f598: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f59c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x30f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f5a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30f5a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30f5a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30f5a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30f5a8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x30f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x30f5ac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30f5acu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30f5b0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x30f5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x30f5b4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x30f5b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30f5b8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x30f5b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30f5bc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x30f5bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f5c0: 0xf8817d90  sqc2        $vf1, 0x7D90($a0)
    ctx->pc = 0x30f5c0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5A7D90u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5A7D90u, _value); } while (0);
    // 0x30f5c4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x30f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x30f5c8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x30f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x30f5cc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x30f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x30f5d0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x30f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x30f5d4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x30f5d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f5d8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x30f5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f5dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30f5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f5e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30f5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f5e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30f5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30f5e8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x30f5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x30f5ec: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x30F5ECu;
    SET_GPR_U32(ctx, 31, 0x30F5F4u);
    ctx->pc = 0x30F5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F5ECu;
    // 0x30f5f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x30F5ECu, 0x30F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F5F4u;
label_30f5f4:
    // 0x30f5f4: 0xc66000f0  lwc1        $f0, 0xF0($s3)
    ctx->pc = 0x30f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f5f8: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x30f5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30f5fc: 0xc67400f4  lwc1        $f20, 0xF4($s3)
    ctx->pc = 0x30f5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f604: 0xc67600e0  lwc1        $f22, 0xE0($s3)
    ctx->pc = 0x30f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30f608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f60c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x30f60cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x30f610: 0xc67500e4  lwc1        $f21, 0xE4($s3)
    ctx->pc = 0x30f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30f614: 0x0  nop
    ctx->pc = 0x30f614u;
    // NOP
    // 0x30f618: 0x0  nop
    ctx->pc = 0x30f618u;
    // NOP
    // 0x30f61c: 0x4616bd83  div.s       $f22, $f23, $f22
    ctx->pc = 0x30f61cu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[23], ctx->f[22]); }
    // 0x30f620: 0x0  nop
    ctx->pc = 0x30f620u;
    // NOP
    // 0x30f624: 0x0  nop
    ctx->pc = 0x30f624u;
    // NOP
    // 0x30f628: 0x4615bd43  div.s       $f21, $f23, $f21
    ctx->pc = 0x30f628u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[23], ctx->f[21]); }
    // 0x30f62c: 0x0  nop
    ctx->pc = 0x30f62cu;
    // NOP
    // 0x30f630: 0x0  nop
    ctx->pc = 0x30f630u;
    // NOP
    // 0x30f634: 0x4614bd03  div.s       $f20, $f23, $f20
    ctx->pc = 0x30f634u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[23], ctx->f[20]); }
    // 0x30f638: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x30F638u;
    SET_GPR_U32(ctx, 31, 0x30F640u);
    ctx->pc = 0x30F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F638u;
    // 0x30f63c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x30F638u, 0x30F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F640u;
label_30f640:
    // 0x30f640: 0xe7b7008c  swc1        $f23, 0x8C($sp)
    ctx->pc = 0x30f640u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x30f644: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x30f644u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x30f648: 0xe7b50064  swc1        $f21, 0x64($sp)
    ctx->pc = 0x30f648u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30f64c: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x30f64cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x30f650: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x30f650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x30f654: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30f654u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30f658: 0xfa610040  sqc2        $vf1, 0x40($s3)
    ctx->pc = 0x30f658u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f65c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x30f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30f660: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30f660u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f664: 0xfa610050  sqc2        $vf1, 0x50($s3)
    ctx->pc = 0x30f664u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f668: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x30f668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30f66c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30f66cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f670: 0xfa610060  sqc2        $vf1, 0x60($s3)
    ctx->pc = 0x30f670u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f674: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x30f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30f678: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30f678u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f67c: 0xfa610070  sqc2        $vf1, 0x70($s3)
    ctx->pc = 0x30f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f680: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30f680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f684: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x30F684u;
    SET_GPR_U32(ctx, 31, 0x30F68Cu);
    ctx->pc = 0x30F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F684u;
    // 0x30f688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x30F684u, 0x30F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F68Cu;
label_30f68c:
    // 0x30f68c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x30f68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f690: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x30f690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30f694: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x30f694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30f698: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x30f698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30f69c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x30f69cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x30f6a0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x30f6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30f6a4: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x30f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x30f6a8: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x30f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30f6ac: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x30f6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30f6b0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x30f6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x30F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6B4u;
        // 0x30f6b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F6BCu;
    // 0x30f6bc: 0x0  nop
    ctx->pc = 0x30f6bcu;
    // NOP
    ctx->pc = 0x30f6c0u;
}
