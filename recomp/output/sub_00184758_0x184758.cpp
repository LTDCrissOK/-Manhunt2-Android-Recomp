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

// Function: sub_00184758
// Address: 0x184758 - 0x184b08
void sub_00184758_0x184758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184758_0x184758");
#endif

    switch (ctx->pc) {
        case 0x184810u: goto label_184810;
        case 0x184834u: goto label_184834;
        case 0x184860u: goto label_184860;
        case 0x18488cu: goto label_18488c;
        case 0x1848bcu: goto label_1848bc;
        case 0x1848e8u: goto label_1848e8;
        case 0x18490cu: goto label_18490c;
        case 0x184930u: goto label_184930;
        case 0x184954u: goto label_184954;
        case 0x184978u: goto label_184978;
        case 0x18499cu: goto label_18499c;
        case 0x1849c0u: goto label_1849c0;
        case 0x1849e4u: goto label_1849e4;
        case 0x184a00u: goto label_184a00;
        case 0x184a2cu: goto label_184a2c;
        case 0x184a44u: goto label_184a44;
        case 0x184ac4u: goto label_184ac4;
        default: break;
    }

    ctx->pc = 0x184758u;

    // 0x184758: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x184758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18475c: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x18475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x184760: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x184760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x184764: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x184764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x184768: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x184768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18476c: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x18476cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x184770: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x184770u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x184774: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x184774u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x184778: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x184778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x18477c: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x18477cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x184780: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x184780u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x184784: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x184784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x184788: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x184788u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18478c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18478cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184790: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x184790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x184794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18479c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1847a0: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1847a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1847a4: 0xe7be0070  swc1        $f30, 0x70($sp)
    ctx->pc = 0x1847a4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1847a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1847a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1847ac: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x1847acu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1847b0: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x1847b0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1847b4: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x1847b4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1847b8: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x1847b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1847bc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1847bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1847c0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1847c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1847c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1847c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1847c8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1847c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1847cc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1847ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1847d0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1847d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1847d4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1847d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1847d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1847d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1847dc: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1847dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1847e0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1847e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1847e4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1847e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1847e8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1847e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1847ec: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1847ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1847f0: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x1847f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x1847f4: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1847f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1847f8: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x1847f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x1847fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1847fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x184800: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x184800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x184804: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x184804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x184808: 0xc060498  jal         func_181260
    ctx->pc = 0x184808u;
    SET_GPR_U32(ctx, 31, 0x184810u);
    ctx->pc = 0x18480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184808u;
    // 0x18480c: 0xe45b012c  swc1        $f27, 0x12C($v0) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x184808u, 0x184810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184810u;
label_184810:
    // 0x184810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184814: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x184814u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x184818: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x184818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18481c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x18481cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x184820: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184820u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184824: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184824u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184828: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184828u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18482c: 0xc060450  jal         func_181140
    ctx->pc = 0x18482Cu;
    SET_GPR_U32(ctx, 31, 0x184834u);
    ctx->pc = 0x184830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18482Cu;
    // 0x184830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18482Cu, 0x184834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184834u;
label_184834:
    // 0x184834: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x184834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x184838: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x184838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x18483c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18483cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184840: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x184840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184844: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x184844u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x184848: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184848u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18484c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18484cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184850: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184850u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184854: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184854u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184858: 0xc060450  jal         func_181140
    ctx->pc = 0x184858u;
    SET_GPR_U32(ctx, 31, 0x184860u);
    ctx->pc = 0x18485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184858u;
    // 0x18485c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184858u, 0x184860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184860u;
label_184860:
    // 0x184860: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x184860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x184864: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x184864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x184868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18486c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18486cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184870: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x184870u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x184874: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184874u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184878: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184878u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18487c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18487cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184880: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184880u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184884: 0xc060450  jal         func_181140
    ctx->pc = 0x184884u;
    SET_GPR_U32(ctx, 31, 0x18488Cu);
    ctx->pc = 0x184888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184884u;
    // 0x184888: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184884u, 0x18488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18488Cu;
label_18488c:
    // 0x18488c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x18488cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x184890: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x184890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x184894: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x184894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x184898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x184898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18489c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848a0: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x1848a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x1848a4: 0x4600f386  mov.s       $f14, $f30
    ctx->pc = 0x1848a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[30]);
    // 0x1848a8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1848a8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1848ac: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1848acu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1848b0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1848b0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1848b4: 0xc060450  jal         func_181140
    ctx->pc = 0x1848B4u;
    SET_GPR_U32(ctx, 31, 0x1848BCu);
    ctx->pc = 0x1848B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1848B4u;
    // 0x1848b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1848B4u, 0x1848BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1848BCu;
label_1848bc:
    // 0x1848bc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1848bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1848c0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1848c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1848c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1848c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848c8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1848c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1848cc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1848ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1848d0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1848d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1848d4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1848d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1848d8: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x1848d8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x1848dc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1848dcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1848e0: 0xc060450  jal         func_181140
    ctx->pc = 0x1848E0u;
    SET_GPR_U32(ctx, 31, 0x1848E8u);
    ctx->pc = 0x1848E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1848E0u;
    // 0x1848e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1848E0u, 0x1848E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1848E8u;
label_1848e8:
    // 0x1848e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1848e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1848ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1848f0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1848f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1848f4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1848f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1848f8: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1848f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x1848fc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1848fcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184900: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184900u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184904: 0xc060450  jal         func_181140
    ctx->pc = 0x184904u;
    SET_GPR_U32(ctx, 31, 0x18490Cu);
    ctx->pc = 0x184908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184904u;
    // 0x184908: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184904u, 0x18490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18490Cu;
label_18490c:
    // 0x18490c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184910: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184910u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184914: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x184914u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x184918: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x184918u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x18491c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18491cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184920: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184920u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184924: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184924u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184928: 0xc060450  jal         func_181140
    ctx->pc = 0x184928u;
    SET_GPR_U32(ctx, 31, 0x184930u);
    ctx->pc = 0x18492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184928u;
    // 0x18492c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184928u, 0x184930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184930u;
label_184930:
    // 0x184930: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x184930u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x184934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184938: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184938u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x18493c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18493cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184940: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184940u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184944: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184944u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184948: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184948u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18494c: 0xc060450  jal         func_181140
    ctx->pc = 0x18494Cu;
    SET_GPR_U32(ctx, 31, 0x184954u);
    ctx->pc = 0x184950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18494Cu;
    // 0x184950: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18494Cu, 0x184954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184954u;
label_184954:
    // 0x184954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184958: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184958u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x18495c: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x18495cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x184960: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184960u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184964: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x184964u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x184968: 0x4600dc06  mov.s       $f16, $f27
    ctx->pc = 0x184968u;
    ctx->f[16] = FPU_MOV_S(ctx->f[27]);
    // 0x18496c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18496cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184970: 0xc060450  jal         func_181140
    ctx->pc = 0x184970u;
    SET_GPR_U32(ctx, 31, 0x184978u);
    ctx->pc = 0x184974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184970u;
    // 0x184974: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184970u, 0x184978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184978u;
label_184978:
    // 0x184978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18497c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18497cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184980: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x184980u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x184984: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184984u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184988: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x184988u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x18498c: 0x4600dc06  mov.s       $f16, $f27
    ctx->pc = 0x18498cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[27]);
    // 0x184990: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184990u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184994: 0xc060450  jal         func_181140
    ctx->pc = 0x184994u;
    SET_GPR_U32(ctx, 31, 0x18499Cu);
    ctx->pc = 0x184998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184994u;
    // 0x184998: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184994u, 0x18499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18499Cu;
label_18499c:
    // 0x18499c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18499cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1849a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1849a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1849a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1849a8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1849a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1849ac: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1849acu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x1849b0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1849b0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1849b4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1849b4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1849b8: 0xc060450  jal         func_181140
    ctx->pc = 0x1849B8u;
    SET_GPR_U32(ctx, 31, 0x1849C0u);
    ctx->pc = 0x1849BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1849B8u;
    // 0x1849bc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1849B8u, 0x1849C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849C0u;
label_1849c0:
    // 0x1849c0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1849c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1849c4: 0x4600e446  mov.s       $f17, $f28
    ctx->pc = 0x1849c4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[28]);
    // 0x1849c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1849c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849cc: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1849ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1849d0: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1849d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x1849d4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1849d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1849d8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1849d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1849dc: 0xc060450  jal         func_181140
    ctx->pc = 0x1849DCu;
    SET_GPR_U32(ctx, 31, 0x1849E4u);
    ctx->pc = 0x1849E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1849DCu;
    // 0x1849e0: 0x4600b406  mov.s       $f16, $f22 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1849DCu, 0x1849E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849E4u;
label_1849e4:
    // 0x1849e4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1849e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1849e8: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x1849e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x1849ec: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x1849ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x1849f0: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x1849f0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x1849f4: 0x4600dc06  mov.s       $f16, $f27
    ctx->pc = 0x1849f4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[27]);
    // 0x1849f8: 0xc06049e  jal         func_181278
    ctx->pc = 0x1849F8u;
    SET_GPR_U32(ctx, 31, 0x184A00u);
    ctx->pc = 0x1849FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1849F8u;
    // 0x1849fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x1849F8u, 0x184A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A00u;
label_184a00:
    // 0x184a00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x184a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x184a08: 0x4600ec06  mov.s       $f16, $f29
    ctx->pc = 0x184a08u;
    ctx->f[16] = FPU_MOV_S(ctx->f[29]);
    // 0x184a0c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x184a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x184a10: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x184a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x184a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a18: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x184a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x184a1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x184a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x184a20: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x184a20u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x184a24: 0xc0604a6  jal         func_181298
    ctx->pc = 0x184A24u;
    SET_GPR_U32(ctx, 31, 0x184A2Cu);
    ctx->pc = 0x184A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A24u;
    // 0x184a28: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x184A24u, 0x184A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A2Cu;
label_184a2c:
    // 0x184a2c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x184a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x184a30: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x184a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x184a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184a38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184a3c: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x184A3Cu;
    SET_GPR_U32(ctx, 31, 0x184A44u);
    ctx->pc = 0x184A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A3Cu;
    // 0x184a40: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x184A3Cu, 0x184A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A44u;
label_184a44:
    // 0x184a44: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x184a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x184a48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x184a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184a4c: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x184a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x184a50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x184a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a54: 0xe47c0104  swc1        $f28, 0x104($v1)
    ctx->pc = 0x184a54u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x184a58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x184a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a5c: 0xe49c0108  swc1        $f28, 0x108($a0)
    ctx->pc = 0x184a5cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x184a60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x184a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x184a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184a68: 0xa205013b  sb          $a1, 0x13B($s0)
    ctx->pc = 0x184a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 5));
    // 0x184a6c: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x184a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x184a70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x184a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a74: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x184a74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x184a78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x184a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a7c: 0xa2050138  sb          $a1, 0x138($s0)
    ctx->pc = 0x184a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 5));
    // 0x184a80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x184a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a84: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x184a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x184a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184a8c: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x184a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x184a90: 0xe4de013c  swc1        $f30, 0x13C($a2)
    ctx->pc = 0x184a90u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 316), bits); }
    // 0x184a94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x184a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a98: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x184a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x184a9c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x184a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x184aa0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x184aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x184aa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x184aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184aa8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x184aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x184aac: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x184aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x184ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184ab4: 0x24a5f8a0  addiu       $a1, $a1, -0x760
    ctx->pc = 0x184ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965408));
    // 0x184ab8: 0xe4610144  swc1        $f1, 0x144($v1)
    ctx->pc = 0x184ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x184abc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x184ABCu;
    SET_GPR_U32(ctx, 31, 0x184AC4u);
    ctx->pc = 0x184AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184ABCu;
    // 0x184ac0: 0xe6200148  swc1        $f0, 0x148($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x184ABCu, 0x184AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AC4u;
label_184ac4:
    // 0x184ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x184ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184acc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x184accu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184ad0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x184ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184ad4: 0xc7be0070  lwc1        $f30, 0x70($sp)
    ctx->pc = 0x184ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x184ad8: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x184ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x184adc: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x184adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x184ae0: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x184ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x184ae4: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x184ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x184ae8: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x184ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x184aec: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x184aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x184af0: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x184af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x184af4: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x184af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x184af8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x184af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x184afc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x184afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x184b00: 0x3e00008  jr          $ra
    ctx->pc = 0x184B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B00u;
        // 0x184b04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184B08u;
}
