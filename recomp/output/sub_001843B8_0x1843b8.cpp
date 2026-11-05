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

// Function: sub_001843B8
// Address: 0x1843b8 - 0x184758
void sub_001843B8_0x1843b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001843B8_0x1843b8");
#endif

    switch (ctx->pc) {
        case 0x184464u: goto label_184464;
        case 0x184488u: goto label_184488;
        case 0x1844b4u: goto label_1844b4;
        case 0x1844e0u: goto label_1844e0;
        case 0x18450cu: goto label_18450c;
        case 0x184538u: goto label_184538;
        case 0x18455cu: goto label_18455c;
        case 0x184580u: goto label_184580;
        case 0x1845a4u: goto label_1845a4;
        case 0x1845c8u: goto label_1845c8;
        case 0x1845ecu: goto label_1845ec;
        case 0x184614u: goto label_184614;
        case 0x18463cu: goto label_18463c;
        case 0x18465cu: goto label_18465c;
        case 0x18468cu: goto label_18468c;
        case 0x1846a0u: goto label_1846a0;
        case 0x184714u: goto label_184714;
        default: break;
    }

    ctx->pc = 0x1843b8u;

    // 0x1843b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1843b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1843bc: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1843bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1843c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1843c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1843c4: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x1843c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1843c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1843c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1843cc: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x1843ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x1843d0: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x1843d0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1843d4: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x1843d4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1843d8: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x1843d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x1843dc: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x1843dcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1843e0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1843e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1843e4: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1843e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1843e8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1843e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1843ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1843ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1843f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1843f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1843f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1843f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1843f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1843fc: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1843fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x184400: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x184400u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x184404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184408: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x184408u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18440c: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x18440cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x184410: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x184410u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x184414: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x184414u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x184418: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x184418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18441c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x18441cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x184420: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x184420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x184424: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x184424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x184428: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x184428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x18442c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x18442cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x184430: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x184430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x184434: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184434u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184438: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x184438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x18443c: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x18443cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x184440: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x184440u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x184444: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x184444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x184448: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x184448u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x18444c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x18444cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x184450: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x184450u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x184454: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x184454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x184458: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x184458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x18445c: 0xc060498  jal         func_181260
    ctx->pc = 0x18445Cu;
    SET_GPR_U32(ctx, 31, 0x184464u);
    ctx->pc = 0x184460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18445Cu;
    // 0x184460: 0xe45b012c  swc1        $f27, 0x12C($v0) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x18445Cu, 0x184464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184464u;
label_184464:
    // 0x184464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184468: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x184468u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x18446c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18446cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184470: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x184470u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x184474: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184474u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184478: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184478u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18447c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18447cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184480: 0xc060450  jal         func_181140
    ctx->pc = 0x184480u;
    SET_GPR_U32(ctx, 31, 0x184488u);
    ctx->pc = 0x184484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184480u;
    // 0x184484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184480u, 0x184488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184488u;
label_184488:
    // 0x184488: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x184488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x18448c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x18448cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x184490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184494: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x184494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184498: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x184498u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x18449c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18449cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1844a0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1844a0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1844a4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1844a4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1844a8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1844a8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1844ac: 0xc060450  jal         func_181140
    ctx->pc = 0x1844ACu;
    SET_GPR_U32(ctx, 31, 0x1844B4u);
    ctx->pc = 0x1844B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1844ACu;
    // 0x1844b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1844ACu, 0x1844B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844B4u;
label_1844b4:
    // 0x1844b4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1844b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1844b8: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1844b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1844bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1844bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1844c0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1844c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1844c4: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x1844c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x1844c8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1844c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1844cc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1844ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1844d0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1844d0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1844d4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1844d4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1844d8: 0xc060450  jal         func_181140
    ctx->pc = 0x1844D8u;
    SET_GPR_U32(ctx, 31, 0x1844E0u);
    ctx->pc = 0x1844DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1844D8u;
    // 0x1844dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1844D8u, 0x1844E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844E0u;
label_1844e0:
    // 0x1844e0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1844e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1844e4: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x1844e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x1844e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1844e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1844ec: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1844ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1844f0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1844f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1844f4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1844f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1844f8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1844f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1844fc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1844fcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184500: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184500u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184504: 0xc060450  jal         func_181140
    ctx->pc = 0x184504u;
    SET_GPR_U32(ctx, 31, 0x18450Cu);
    ctx->pc = 0x184508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184504u;
    // 0x184508: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184504u, 0x18450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18450Cu;
label_18450c:
    // 0x18450c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x18450cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x184510: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x184510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x184514: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x184514u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x184518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18451c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18451cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x184520: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184520u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184524: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184524u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184528: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184528u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18452c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18452cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184530: 0xc060450  jal         func_181140
    ctx->pc = 0x184530u;
    SET_GPR_U32(ctx, 31, 0x184538u);
    ctx->pc = 0x184534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184530u;
    // 0x184534: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184530u, 0x184538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184538u;
label_184538:
    // 0x184538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18453c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18453cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184540: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x184540u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x184544: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x184544u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x184548: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x184548u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x18454c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18454cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184550: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184550u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184554: 0xc060450  jal         func_181140
    ctx->pc = 0x184554u;
    SET_GPR_U32(ctx, 31, 0x18455Cu);
    ctx->pc = 0x184558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184554u;
    // 0x184558: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184554u, 0x18455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18455Cu;
label_18455c:
    // 0x18455c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18455cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184564: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x184564u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x184568: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x184568u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x18456c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18456cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184570: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184570u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184574: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184574u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184578: 0xc060450  jal         func_181140
    ctx->pc = 0x184578u;
    SET_GPR_U32(ctx, 31, 0x184580u);
    ctx->pc = 0x18457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184578u;
    // 0x18457c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184578u, 0x184580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184580u;
label_184580:
    // 0x184580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184584: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x184584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x184588: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184588u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18458c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18458cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184590: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184590u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184594: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x184594u;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x184598: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184598u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18459c: 0xc060450  jal         func_181140
    ctx->pc = 0x18459Cu;
    SET_GPR_U32(ctx, 31, 0x1845A4u);
    ctx->pc = 0x1845A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18459Cu;
    // 0x1845a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18459Cu, 0x1845A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845A4u;
label_1845a4:
    // 0x1845a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1845a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845a8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1845a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1845ac: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x1845acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x1845b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1845b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1845b4: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1845b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x1845b8: 0x4600ec06  mov.s       $f16, $f29
    ctx->pc = 0x1845b8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[29]);
    // 0x1845bc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1845bcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1845c0: 0xc060450  jal         func_181140
    ctx->pc = 0x1845C0u;
    SET_GPR_U32(ctx, 31, 0x1845C8u);
    ctx->pc = 0x1845C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1845C0u;
    // 0x1845c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1845C0u, 0x1845C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845C8u;
label_1845c8:
    // 0x1845c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1845c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845cc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1845ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1845d0: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x1845d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x1845d4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1845d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1845d8: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1845d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x1845dc: 0x4600ec06  mov.s       $f16, $f29
    ctx->pc = 0x1845dcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[29]);
    // 0x1845e0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1845e0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1845e4: 0xc060450  jal         func_181140
    ctx->pc = 0x1845E4u;
    SET_GPR_U32(ctx, 31, 0x1845ECu);
    ctx->pc = 0x1845E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1845E4u;
    // 0x1845e8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1845E4u, 0x1845ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845ECu;
label_1845ec:
    // 0x1845ec: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x1845ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x1845f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1845f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1845f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1845f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845f8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1845f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1845fc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1845fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184600: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x184600u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x184604: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184604u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184608: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184608u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18460c: 0xc060450  jal         func_181140
    ctx->pc = 0x18460Cu;
    SET_GPR_U32(ctx, 31, 0x184614u);
    ctx->pc = 0x184610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18460Cu;
    // 0x184610: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18460Cu, 0x184614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184614u;
label_184614:
    // 0x184614: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x184614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x184618: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x184618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x18461c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x18461cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x184620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184624: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x184624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x184628: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x184628u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x18462c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18462cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184630: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184630u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184634: 0xc060450  jal         func_181140
    ctx->pc = 0x184634u;
    SET_GPR_U32(ctx, 31, 0x18463Cu);
    ctx->pc = 0x184638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184634u;
    // 0x184638: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184634u, 0x18463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18463Cu;
label_18463c:
    // 0x18463c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18463cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x184640: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x184640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x184644: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184648: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x184648u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x18464c: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x18464cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x184650: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x184650u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x184654: 0xc06049e  jal         func_181278
    ctx->pc = 0x184654u;
    SET_GPR_U32(ctx, 31, 0x18465Cu);
    ctx->pc = 0x184658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184654u;
    // 0x184658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x184654u, 0x18465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18465Cu;
label_18465c:
    // 0x18465c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x18465cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x184660: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x184660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x184664: 0x4600e3c6  mov.s       $f15, $f28
    ctx->pc = 0x184664u;
    ctx->f[15] = FPU_MOV_S(ctx->f[28]);
    // 0x184668: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x184668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x18466c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x18466cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x184670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184678: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x184678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18467c: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x18467cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x184680: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x184680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x184684: 0xc0604a6  jal         func_181298
    ctx->pc = 0x184684u;
    SET_GPR_U32(ctx, 31, 0x18468Cu);
    ctx->pc = 0x184688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184684u;
    // 0x184688: 0x4600e386  mov.s       $f14, $f28 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x184684u, 0x18468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18468Cu;
label_18468c:
    // 0x18468c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184690: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184690u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184694: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184694u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184698: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x184698u;
    SET_GPR_U32(ctx, 31, 0x1846A0u);
    ctx->pc = 0x18469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184698u;
    // 0x18469c: 0x4600e386  mov.s       $f14, $f28 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x184698u, 0x1846A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1846A0u;
label_1846a0:
    // 0x1846a0: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1846a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1846a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1846a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1846a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1846a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1846ac: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x1846acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1846b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1846b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846b4: 0xe4780104  swc1        $f24, 0x104($v1)
    ctx->pc = 0x1846b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1846b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1846b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846bc: 0xe4980108  swc1        $f24, 0x108($a0)
    ctx->pc = 0x1846bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x1846c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1846c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1846c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1846c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1846c8: 0xa202013b  sb          $v0, 0x13B($s0)
    ctx->pc = 0x1846c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 2));
    // 0x1846cc: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x1846ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x1846d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1846d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846d4: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x1846d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x1846d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1846d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846dc: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x1846dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x1846e0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1846e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846e4: 0xe4a0013c  swc1        $f0, 0x13C($a1)
    ctx->pc = 0x1846e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 316), bits); }
    // 0x1846e8: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x1846e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x1846ec: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1846ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1846f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1846f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1846f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1846f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846f8: 0xe4dd0140  swc1        $f29, 0x140($a2)
    ctx->pc = 0x1846f8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 320), bits); }
    // 0x1846fc: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1846fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x184700: 0xe4e00144  swc1        $f0, 0x144($a3)
    ctx->pc = 0x184700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 324), bits); }
    // 0x184704: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x184704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x184708: 0xe63c0148  swc1        $f28, 0x148($s1)
    ctx->pc = 0x184708u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x18470c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x18470Cu;
    SET_GPR_U32(ctx, 31, 0x184714u);
    ctx->pc = 0x184710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18470Cu;
    // 0x184710: 0x24a5f890  addiu       $a1, $a1, -0x770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x18470Cu, 0x184714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184714u;
label_184714:
    // 0x184714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x184718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18471c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18471cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184720: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x184720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184724: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x184724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x184728: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x184728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x18472c: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x18472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x184730: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x184730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x184734: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x184734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x184738: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x184738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18473c: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x18473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x184740: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x184740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x184744: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x184744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x184748: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x184748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18474c: 0x3e00008  jr          $ra
    ctx->pc = 0x18474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18474Cu;
        // 0x184750: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184754u;
    // 0x184754: 0x0  nop
    ctx->pc = 0x184754u;
    // NOP
    ctx->pc = 0x184758u;
}
