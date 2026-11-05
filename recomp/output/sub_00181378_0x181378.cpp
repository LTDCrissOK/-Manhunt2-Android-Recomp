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

// Function: sub_00181378
// Address: 0x181378 - 0x1816d8
void sub_00181378_0x181378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181378_0x181378");
#endif

    switch (ctx->pc) {
        case 0x18141cu: goto label_18141c;
        case 0x181450u: goto label_181450;
        case 0x18147cu: goto label_18147c;
        case 0x1814a8u: goto label_1814a8;
        case 0x1814ccu: goto label_1814cc;
        case 0x1814f8u: goto label_1814f8;
        case 0x18151cu: goto label_18151c;
        case 0x181540u: goto label_181540;
        case 0x181564u: goto label_181564;
        case 0x181588u: goto label_181588;
        case 0x1815acu: goto label_1815ac;
        case 0x1815d0u: goto label_1815d0;
        case 0x1815f4u: goto label_1815f4;
        case 0x181610u: goto label_181610;
        case 0x181640u: goto label_181640;
        case 0x181658u: goto label_181658;
        case 0x181698u: goto label_181698;
        default: break;
    }

    ctx->pc = 0x181378u;

    // 0x181378: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18137c: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x18137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x181380: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x181380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x181384: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x181384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x181388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x181388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18138c: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x18138cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x181390: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x181390u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x181394: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x181394u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x181398: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x181398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x18139c: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x18139cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1813a0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1813a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1813a4: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1813a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1813a8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1813a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1813ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1813acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813b0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1813b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1813b4: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x1813b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x1813b8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1813b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1813bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1813bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1813c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1813c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1813c4: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1813c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1813c8: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x1813c8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1813cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1813ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813d0: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x1813d0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1813d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1813d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1813d8: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x1813d8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1813dc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1813dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1813e0: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x1813e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1813e4: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1813e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1813e8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1813e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1813ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1813ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1813f0: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1813f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1813f4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1813f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1813f8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1813f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1813fc: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x1813fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x181400: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x181400u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x181404: 0xe47d0128  swc1        $f29, 0x128($v1)
    ctx->pc = 0x181404u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x181408: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x181408u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18140c: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x18140cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x181410: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x181410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x181414: 0xc060498  jal         func_181260
    ctx->pc = 0x181414u;
    SET_GPR_U32(ctx, 31, 0x18141Cu);
    ctx->pc = 0x181418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181414u;
    // 0x181418: 0xe45c012c  swc1        $f28, 0x12C($v0) (Delay Slot)
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x181414u, 0x18141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18141Cu;
label_18141c:
    // 0x18141c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x18141cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x181420: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x181420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x181424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181428: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x181428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18142c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x18142cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x181430: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181430u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x181434: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x181434u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x181438: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181438u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18143c: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x18143cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x181440: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181440u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181444: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181444u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181448: 0xc060450  jal         func_181140
    ctx->pc = 0x181448u;
    SET_GPR_U32(ctx, 31, 0x181450u);
    ctx->pc = 0x18144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181448u;
    // 0x18144c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181448u, 0x181450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181450u;
label_181450:
    // 0x181450: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x181450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x181454: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x181454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x181458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18145c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18145cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x181460: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x181460u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x181464: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x181464u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x181468: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181468u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18146c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18146cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181470: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181470u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181474: 0xc060450  jal         func_181140
    ctx->pc = 0x181474u;
    SET_GPR_U32(ctx, 31, 0x18147Cu);
    ctx->pc = 0x181478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181474u;
    // 0x181478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181474u, 0x18147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18147Cu;
label_18147c:
    // 0x18147c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x18147cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x181480: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x181480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x181484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181488: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181488u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x18148c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x18148cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x181490: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x181490u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x181494: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181494u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181498: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181498u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18149c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18149cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1814a0: 0xc060450  jal         func_181140
    ctx->pc = 0x1814A0u;
    SET_GPR_U32(ctx, 31, 0x1814A8u);
    ctx->pc = 0x1814A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814A0u;
    // 0x1814a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1814A0u, 0x1814A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814A8u;
label_1814a8:
    // 0x1814a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1814a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814ac: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x1814acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x1814b0: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x1814b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x1814b4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1814b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1814b8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1814b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1814bc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1814bcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1814c0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1814c0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1814c4: 0xc060450  jal         func_181140
    ctx->pc = 0x1814C4u;
    SET_GPR_U32(ctx, 31, 0x1814CCu);
    ctx->pc = 0x1814C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814C4u;
    // 0x1814c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1814C4u, 0x1814CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814CCu;
label_1814cc:
    // 0x1814cc: 0x3c0142be  lui         $at, 0x42BE
    ctx->pc = 0x1814ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17086 << 16));
    // 0x1814d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1814d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1814d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1814d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814d8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1814d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1814dc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1814dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1814e0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1814e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1814e4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1814e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1814e8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1814e8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1814ec: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1814ecu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1814f0: 0xc060450  jal         func_181140
    ctx->pc = 0x1814F0u;
    SET_GPR_U32(ctx, 31, 0x1814F8u);
    ctx->pc = 0x1814F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814F0u;
    // 0x1814f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1814F0u, 0x1814F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814F8u;
label_1814f8:
    // 0x1814f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1814f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814fc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1814fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x181500: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x181500u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x181504: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181504u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181508: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181508u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18150c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18150cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181510: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181510u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181514: 0xc060450  jal         func_181140
    ctx->pc = 0x181514u;
    SET_GPR_U32(ctx, 31, 0x18151Cu);
    ctx->pc = 0x181518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181514u;
    // 0x181518: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181514u, 0x18151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18151Cu;
label_18151c:
    // 0x18151c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181520: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x181520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x181524: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x181524u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x181528: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181528u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18152c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18152cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181530: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181530u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181534: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181534u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181538: 0xc060450  jal         func_181140
    ctx->pc = 0x181538u;
    SET_GPR_U32(ctx, 31, 0x181540u);
    ctx->pc = 0x18153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181538u;
    // 0x18153c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181538u, 0x181540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181540u;
label_181540:
    // 0x181540: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x181540u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x181544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181548: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181548u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18154c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18154cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181550: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181550u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181554: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x181554u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x181558: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181558u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18155c: 0xc060450  jal         func_181140
    ctx->pc = 0x18155Cu;
    SET_GPR_U32(ctx, 31, 0x181564u);
    ctx->pc = 0x181560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18155Cu;
    // 0x181560: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18155Cu, 0x181564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181564u;
label_181564:
    // 0x181564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181568: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x18156c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x18156cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x181570: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x181570u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x181574: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181574u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181578: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181578u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18157c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18157cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181580: 0xc060450  jal         func_181140
    ctx->pc = 0x181580u;
    SET_GPR_U32(ctx, 31, 0x181588u);
    ctx->pc = 0x181584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181580u;
    // 0x181584: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181580u, 0x181588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181588u;
label_181588:
    // 0x181588: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x18158c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18158cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181590: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x181590u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x181594: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181594u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181598: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181598u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18159c: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x18159cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x1815a0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1815a0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1815a4: 0xc060450  jal         func_181140
    ctx->pc = 0x1815A4u;
    SET_GPR_U32(ctx, 31, 0x1815ACu);
    ctx->pc = 0x1815A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1815A4u;
    // 0x1815a8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1815A4u, 0x1815ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1815ACu;
label_1815ac:
    // 0x1815ac: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x1815acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    // 0x1815b0: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x1815b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x1815b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1815b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815b8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1815b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1815bc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1815bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1815c0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1815c0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1815c4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1815c4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1815c8: 0xc060450  jal         func_181140
    ctx->pc = 0x1815C8u;
    SET_GPR_U32(ctx, 31, 0x1815D0u);
    ctx->pc = 0x1815CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1815C8u;
    // 0x1815cc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1815C8u, 0x1815D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1815D0u;
label_1815d0:
    // 0x1815d0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1815d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1815d4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1815d4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1815d8: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x1815d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x1815dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1815dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815e0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1815e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1815e4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1815e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1815e8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1815e8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1815ec: 0xc060450  jal         func_181140
    ctx->pc = 0x1815ECu;
    SET_GPR_U32(ctx, 31, 0x1815F4u);
    ctx->pc = 0x1815F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1815ECu;
    // 0x1815f0: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1815ECu, 0x1815F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1815F4u;
label_1815f4:
    // 0x1815f4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1815f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1815f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1815f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815fc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1815fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x181600: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181600u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181604: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181604u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181608: 0xc06049e  jal         func_181278
    ctx->pc = 0x181608u;
    SET_GPR_U32(ctx, 31, 0x181610u);
    ctx->pc = 0x18160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181608u;
    // 0x18160c: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x181608u, 0x181610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181610u;
label_181610:
    // 0x181610: 0x3c01442f  lui         $at, 0x442F
    ctx->pc = 0x181610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17455 << 16));
    // 0x181614: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x181614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x181618: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x181618u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x18161c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x18161cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x181620: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x181620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x181624: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x181624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x181628: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x181628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x18162c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x18162cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x181630: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x181630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x181634: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x181634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x181638: 0xc0604a6  jal         func_181298
    ctx->pc = 0x181638u;
    SET_GPR_U32(ctx, 31, 0x181640u);
    ctx->pc = 0x18163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181638u;
    // 0x18163c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x181638u, 0x181640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181640u;
label_181640:
    // 0x181640: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x181640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x181644: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x181644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x181648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18164c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18164cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181650: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x181650u;
    SET_GPR_U32(ctx, 31, 0x181658u);
    ctx->pc = 0x181654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181650u;
    // 0x181654: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x181650u, 0x181658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181658u;
label_181658:
    // 0x181658: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x181658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x18165c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x18165cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x181660: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x181660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x181664: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181668: 0xe47b0104  swc1        $f27, 0x104($v1)
    ctx->pc = 0x181668u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x18166c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18166cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181670: 0xe49b0108  swc1        $f27, 0x108($a0)
    ctx->pc = 0x181670u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x181674: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x181674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x181678: 0x26310174  addiu       $s1, $s1, 0x174
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x18167c: 0xa202013b  sb          $v0, 0x13B($s0)
    ctx->pc = 0x18167cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 2));
    // 0x181680: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x181680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x181684: 0x24a5f7e0  addiu       $a1, $a1, -0x820
    ctx->pc = 0x181684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965216));
    // 0x181688: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x181688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x18168c: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x18168cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x181690: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x181690u;
    SET_GPR_U32(ctx, 31, 0x181698u);
    ctx->pc = 0x181694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181690u;
    // 0x181694: 0xa202013a  sb          $v0, 0x13A($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x181690u, 0x181698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181698u;
label_181698:
    // 0x181698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18169c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18169cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1816a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1816a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1816a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1816a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1816a8: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x1816a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1816ac: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x1816acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1816b0: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x1816b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1816b4: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x1816b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1816b8: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x1816b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1816bc: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x1816bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1816c0: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x1816c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1816c4: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1816c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1816c8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1816c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1816cc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1816ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1816d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1816D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1816D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816D0u;
        // 0x1816d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1816D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1816D8u;
}
