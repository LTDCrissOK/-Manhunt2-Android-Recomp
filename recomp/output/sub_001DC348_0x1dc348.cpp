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

// Function: sub_001DC348
// Address: 0x1dc348 - 0x1dc800
void sub_001DC348_0x1dc348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC348_0x1dc348");
#endif

    switch (ctx->pc) {
        case 0x1dc3b4u: goto label_1dc3b4;
        case 0x1dc3c8u: goto label_1dc3c8;
        case 0x1dc6a4u: goto label_1dc6a4;
        case 0x1dc6ccu: goto label_1dc6cc;
        case 0x1dc6d8u: goto label_1dc6d8;
        case 0x1dc754u: goto label_1dc754;
        default: break;
    }

    ctx->pc = 0x1dc348u;

    // 0x1dc348: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1dc348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1dc34c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x1dc34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x1dc350: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x1dc350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x1dc354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc358: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1dc358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1dc35c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dc35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc360: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1dc360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1dc364: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1dc364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1dc368: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x1dc368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x1dc36c: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x1dc36cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dc370: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x1dc370u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1dc374: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x1dc374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x1dc378: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x1dc378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x1dc37c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1dc37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1dc380: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1dc380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1dc384: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1dc384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc388: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1dc388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc38c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1dc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dc390: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1dc390u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1dc394: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1dc394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dc398: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1dc398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc39c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1dc39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dc3a0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1dc3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc3a4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1dc3a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1dc3a8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1dc3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc3ac: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x1DC3ACu;
    SET_GPR_U32(ctx, 31, 0x1DC3B4u);
    ctx->pc = 0x1DC3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3ACu;
    // 0x1dc3b0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x1DC3ACu, 0x1DC3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3B4u;
label_1dc3b4:
    // 0x1dc3b4: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1dc3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc3b8: 0xc6140008  lwc1        $f20, 0x8($s0)
    ctx->pc = 0x1dc3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dc3bc: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1dc3bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1dc3c0: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x1DC3C0u;
    SET_GPR_U32(ctx, 31, 0x1DC3C8u);
    ctx->pc = 0x1DC3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3C0u;
    // 0x1dc3c4: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x1DC3C0u, 0x1DC3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3C8u;
label_1dc3c8:
    // 0x1dc3c8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1dc3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1dc3cc: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x1dc3ccu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x1dc3d0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1dc3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc3d4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1dc3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dc3d8: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x1dc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1dc3dc: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x1dc3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc3e0: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1dc3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc3e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dc3e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dc3e8: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1dc3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dc3ec: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1dc3ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1dc3f0: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x1dc3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dc3f4: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1dc3f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1dc3f8: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x1dc3f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1dc3fc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1dc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dc400: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1dc400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1dc404: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1dc404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dc408: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1dc408u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1dc40c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dc40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dc410: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1dc410u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1dc414: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1dc414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc418: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1dc418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1dc41c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1dc41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc420: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1dc420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc424: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1dc424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc428: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1dc428u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1dc42c: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x1dc42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dc430: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1dc430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1dc434: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1dc434u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1dc438: 0x4604a502  mul.s       $f20, $f20, $f4
    ctx->pc = 0x1dc438u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x1dc43c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1dc43cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dc440: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1dc440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1dc444: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1dc444u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1dc448: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x1dc448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1dc44c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1dc44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc450: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1dc450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc454: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dc454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc458: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1dc458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dc45c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1dc45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dc460: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1dc460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1dc464: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1dc464u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1dc468: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1dc468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1dc46c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1dc46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1dc470: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x1dc470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dc474: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x1dc474u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1dc478: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1dc478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1dc47c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dc47cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dc480: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dc480u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc484: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dc484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc488: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dc488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc48c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1dc48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc490: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1dc490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dc494: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1dc494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc498: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dc498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dc49c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1dc49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc4a0: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1dc4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc4a4: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1dc4a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1dc4a8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1dc4a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1dc4ac: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1dc4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1dc4b0: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x1dc4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1dc4b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dc4b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc4b8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dc4b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc4bc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dc4bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4c0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dc4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc4c4: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1dc4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc4c8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1dc4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dc4cc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1dc4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc4d0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1dc4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc4d4: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1dc4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc4d8: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1dc4d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dc4dc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1dc4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dc4e0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1dc4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dc4e4: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x1dc4e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1dc4e8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dc4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc4ec: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dc4ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4f0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dc4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc4f4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dc4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc4f8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1dc4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc4fc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1dc4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc500: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1dc500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc504: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1dc504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc508: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x1dc508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dc50c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x1dc50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dc510: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x1dc510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1dc514: 0xc7a7000c  lwc1        $f7, 0xC($sp)
    ctx->pc = 0x1dc514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1dc518: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1dc518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1dc51c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1dc51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1dc520: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1dc520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dc524: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x1dc524u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dc528: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x1dc528u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dc52c: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x1dc52cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1dc530: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x1dc530u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1dc534: 0xe7a7005c  swc1        $f7, 0x5C($sp)
    ctx->pc = 0x1dc534u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1dc538: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dc538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc53c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dc53cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc540: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dc540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc544: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dc544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc548: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1dc548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc54c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dc54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dc550: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1dc550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc554: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1dc554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dc558: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1dc558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc55c: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1dc55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc560: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1dc560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1dc564: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1dc564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1dc568: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1dc568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1dc56c: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x1dc56cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1dc570: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dc570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc574: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1dc574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc578: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dc578u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc57c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1dc57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc580: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1dc580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc584: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1dc584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc588: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1dc588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc58c: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x1dc58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc590: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x1dc590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dc594: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x1dc594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dc598: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x1dc598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1dc59c: 0xc7a7001c  lwc1        $f7, 0x1C($sp)
    ctx->pc = 0x1dc59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1dc5a0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1dc5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1dc5a4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1dc5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1dc5a8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1dc5a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1dc5ac: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x1dc5acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1dc5b0: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x1dc5b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1dc5b4: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x1dc5b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1dc5b8: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x1dc5b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1dc5bc: 0xe7a7008c  swc1        $f7, 0x8C($sp)
    ctx->pc = 0x1dc5bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1dc5c0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1dc5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc5c4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1dc5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc5c8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1dc5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dc5cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1dc5ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1dc5d0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1dc5d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1dc5d4: 0x460425dc  madd.s      $f23, $f4, $f4
    ctx->pc = 0x1dc5d4u;
    ctx->f[23] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1dc5d8: 0x461705c4  c1          0x1705C4
    ctx->pc = 0x1dc5d8u;
    ctx->f[23] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dc5dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dc5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc5e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dc5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc5e4: 0x0  nop
    ctx->pc = 0x1dc5e4u;
    // NOP
    // 0x1dc5e8: 0x46170803  div.s       $f0, $f1, $f23
    ctx->pc = 0x1dc5e8u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[23]); }
    // 0x1dc5ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1dc5ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1dc5f0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1dc5f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dc5f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1dc5f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dc5f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1dc5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc5fc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dc5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc600: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1dc600u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc604: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1dc604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc608: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1dc608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc60c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1dc60cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dc610: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1dc610u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1dc614: 0x4a0003bf  vwaitq
    ctx->pc = 0x1dc614u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1dc618: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1dc618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc61c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1dc61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc620: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1dc620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc624: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1dc624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc628: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dc628u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc62c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1dc62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc630: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1dc630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc634: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dc634u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dc638: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x1dc638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc63c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1dc63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc640: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1dc640u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dc644: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1dc644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1dc648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dc648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc64c: 0x0  nop
    ctx->pc = 0x1dc64cu;
    // NOP
    // 0x1dc650: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1dc650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc654: 0x0  nop
    ctx->pc = 0x1dc654u;
    // NOP
    // 0x1dc658: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC658u;
    {
        const bool branch_taken_0x1dc658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC658u;
        // 0x1dc65c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc658) {
            ctx->pc = 0x1DC668u;
            goto label_1dc668;
        }
    }
    ctx->pc = 0x1DC660u;
    // 0x1dc660: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC660u;
    {
        const bool branch_taken_0x1dc660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC660u;
        // 0x1dc664: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc660) {
            ctx->pc = 0x1DC678u;
            goto label_1dc678;
        }
    }
    ctx->pc = 0x1DC668u;
label_1dc668:
    // 0x1dc668: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1dc668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc66c: 0x0  nop
    ctx->pc = 0x1dc66cu;
    // NOP
    // 0x1dc670: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DC670u;
    {
        const bool branch_taken_0x1dc670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc670) {
            ctx->pc = 0x1DC674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC670u;
            // 0x1dc674: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC678u;
            goto label_1dc678;
        }
    }
    ctx->pc = 0x1DC678u;
label_1dc678:
    // 0x1dc678: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1dc678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1dc67c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dc67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc680: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc684: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1dc684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1dc688: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x1dc688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x1dc68c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1dc68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1dc690: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1dc690u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1dc694: 0x0  nop
    ctx->pc = 0x1dc694u;
    // NOP
    // 0x1dc698: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1dc698u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dc69c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1DC69Cu;
    SET_GPR_U32(ctx, 31, 0x1DC6A4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1DC69Cu, 0x1DC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6A4u;
label_1dc6a4:
    // 0x1dc6a4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1dc6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1dc6a8: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1dc6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1dc6ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dc6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc6b0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1dc6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1dc6b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dc6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc6b8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1dc6b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dc6bc: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x1dc6bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x1dc6c0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1dc6c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1dc6c4: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x1DC6C4u;
    SET_GPR_U32(ctx, 31, 0x1DC6CCu);
    ctx->pc = 0x1DC6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6C4u;
    // 0x1dc6c8: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x1DC6C4u, 0x1DC6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6CCu;
label_1dc6cc:
    // 0x1dc6cc: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x1dc6ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1dc6d0: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x1DC6D0u;
    SET_GPR_U32(ctx, 31, 0x1DC6D8u);
    ctx->pc = 0x1DC6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6D0u;
    // 0x1dc6d4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x1DC6D0u, 0x1DC6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6D8u;
label_1dc6d8:
    // 0x1dc6d8: 0x0  nop
    ctx->pc = 0x1dc6d8u;
    // NOP
    // 0x1dc6dc: 0x0  nop
    ctx->pc = 0x1dc6dcu;
    // NOP
    // 0x1dc6e0: 0x4615bd43  div.s       $f21, $f23, $f21
    ctx->pc = 0x1dc6e0u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[23], ctx->f[21]); }
    // 0x1dc6e4: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x1dc6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc6e8: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x1dc6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dc6ec: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x1dc6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dc6f0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1dc6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc6f4: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x1dc6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc6f8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1dc6f8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1dc6fc: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x1dc6fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1dc700: 0x4604a902  mul.s       $f4, $f21, $f4
    ctx->pc = 0x1dc700u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x1dc704: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1dc704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1dc708: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1dc708u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1dc70c: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1dc70cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1dc710: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x1dc710u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1dc714: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1dc714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1dc718: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x1dc718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1dc71c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1dc71cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dc720: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1dc720u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc724: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dc724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dc728: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1dc728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc72c: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x1dc72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc730: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1dc730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dc734: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1dc734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc738: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1dc738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc73c: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x1dc73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc740: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x1dc740u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1dc744: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1dc744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1dc748: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x1dc748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1dc74c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DC74Cu;
    SET_GPR_U32(ctx, 31, 0x1DC754u);
    ctx->pc = 0x1DC750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC74Cu;
    // 0x1dc750: 0xe7a2009c  swc1        $f2, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DC74Cu, 0x1DC754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC754u;
label_1dc754:
    // 0x1dc754: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x1dc754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1dc758: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x1dc758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dc75c: 0xe7b500e0  swc1        $f21, 0xE0($sp)
    ctx->pc = 0x1dc75cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1dc760: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1dc760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1dc764: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1dc764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1dc768: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1dc768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc76c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dc76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc770: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1dc770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc774: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x1dc774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dc778: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x1dc778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1dc77c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1dc77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1dc780: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x1dc780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1dc784: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x1dc784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1dc788: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1dc788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc78c: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1dc78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc790: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dc790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc794: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1dc794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1dc798: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1dc798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dc79c: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1dc79cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1dc7a0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1dc7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1dc7a4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1dc7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1dc7a8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1dc7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc7ac: 0xe6220030  swc1        $f2, 0x30($s1)
    ctx->pc = 0x1dc7acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1dc7b0: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x1dc7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1dc7b4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1dc7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7b8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1dc7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1dc7bc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1dc7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc7c0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1dc7c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1dc7c4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1dc7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7c8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dc7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1dc7cc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1dc7ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc7d0: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x1dc7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dc7d4: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x1dc7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1dc7d8: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x1dc7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1dc7dc: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1dc7dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1dc7e0: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x1dc7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1dc7e4: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x1dc7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1dc7e8: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x1dc7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1dc7ec: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1dc7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1dc7f0: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1dc7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dc7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7F4u;
        // 0x1dc7f8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC7FCu;
    // 0x1dc7fc: 0x0  nop
    ctx->pc = 0x1dc7fcu;
    // NOP
    ctx->pc = 0x1dc800u;
}
