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

// Function: sub_00182670
// Address: 0x182670 - 0x182a30
void sub_00182670_0x182670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182670_0x182670");
#endif

    switch (ctx->pc) {
        case 0x182718u: goto label_182718;
        case 0x18274cu: goto label_18274c;
        case 0x182778u: goto label_182778;
        case 0x1827a4u: goto label_1827a4;
        case 0x1827d0u: goto label_1827d0;
        case 0x182800u: goto label_182800;
        case 0x18282cu: goto label_18282c;
        case 0x182858u: goto label_182858;
        case 0x182884u: goto label_182884;
        case 0x1828a8u: goto label_1828a8;
        case 0x1828ccu: goto label_1828cc;
        case 0x1828f0u: goto label_1828f0;
        case 0x182914u: goto label_182914;
        case 0x182930u: goto label_182930;
        case 0x182968u: goto label_182968;
        case 0x18297cu: goto label_18297c;
        case 0x1829ecu: goto label_1829ec;
        default: break;
    }

    ctx->pc = 0x182670u;

    // 0x182670: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x182670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x182674: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x182674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x182678: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x182678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18267c: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x18267cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x182680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182684: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x182684u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x182688: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x182688u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18268c: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x18268cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x182690: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x182690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x182694: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x182694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x182698: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x182698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x18269c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18269cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1826a0: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1826a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1826a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1826a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1826a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1826a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1826acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1826b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1826b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1826b4: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1826b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1826b8: 0xe7be0070  swc1        $f30, 0x70($sp)
    ctx->pc = 0x1826b8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1826bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1826bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826c0: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x1826c0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1826c4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1826c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1826c8: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x1826c8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1826cc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1826ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1826d0: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x1826d0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1826d4: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x1826d4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1826d8: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x1826d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1826dc: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1826dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1826e0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1826e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1826e4: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x1826e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x1826e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1826e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1826ec: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1826ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1826f0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1826f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1826f4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1826f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1826f8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1826f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1826fc: 0xe4610128  swc1        $f1, 0x128($v1)
    ctx->pc = 0x1826fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x182700: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x182700u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x182704: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x182704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x182708: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x182708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x18270c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x18270cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x182710: 0xc060498  jal         func_181260
    ctx->pc = 0x182710u;
    SET_GPR_U32(ctx, 31, 0x182718u);
    ctx->pc = 0x182714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182710u;
    // 0x182714: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x182710u, 0x182718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182718u;
label_182718:
    // 0x182718: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x182718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x18271c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x18271cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x182720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182724: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x182724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x182728: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x182728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18272c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18272cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x182730: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x182730u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x182734: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182734u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182738: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x182738u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x18273c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18273cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182740: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182740u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182744: 0xc060450  jal         func_181140
    ctx->pc = 0x182744u;
    SET_GPR_U32(ctx, 31, 0x18274Cu);
    ctx->pc = 0x182748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182744u;
    // 0x182748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182744u, 0x18274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18274Cu;
label_18274c:
    // 0x18274c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x18274cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x182750: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x182750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x182754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182758: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x182758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x18275c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x18275cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x182760: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182760u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182764: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182764u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182768: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182768u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18276c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18276cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182770: 0xc060450  jal         func_181140
    ctx->pc = 0x182770u;
    SET_GPR_U32(ctx, 31, 0x182778u);
    ctx->pc = 0x182774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182770u;
    // 0x182774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182770u, 0x182778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182778u;
label_182778:
    // 0x182778: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x182778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x18277c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x18277cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x182780: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x182780u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x182784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182788: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x182788u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x18278c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18278cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182790: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182790u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182794: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182794u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182798: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182798u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18279c: 0xc060450  jal         func_181140
    ctx->pc = 0x18279Cu;
    SET_GPR_U32(ctx, 31, 0x1827A4u);
    ctx->pc = 0x1827A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18279Cu;
    // 0x1827a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18279Cu, 0x1827A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1827A4u;
label_1827a4:
    // 0x1827a4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1827a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1827a8: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x1827a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x1827ac: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1827acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1827b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1827b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827b4: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x1827b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x1827b8: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x1827b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x1827bc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1827bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1827c0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1827c0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1827c4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1827c4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1827c8: 0xc060450  jal         func_181140
    ctx->pc = 0x1827C8u;
    SET_GPR_U32(ctx, 31, 0x1827D0u);
    ctx->pc = 0x1827CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1827C8u;
    // 0x1827cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1827C8u, 0x1827D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1827D0u;
label_1827d0:
    // 0x1827d0: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x1827d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x1827d4: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x1827d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x1827d8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1827dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1827dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1827e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1827e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827e4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1827e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1827e8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1827e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1827ec: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1827ecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1827f0: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x1827f0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x1827f4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1827f4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1827f8: 0xc060450  jal         func_181140
    ctx->pc = 0x1827F8u;
    SET_GPR_U32(ctx, 31, 0x182800u);
    ctx->pc = 0x1827FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1827F8u;
    // 0x1827fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1827F8u, 0x182800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182800u;
label_182800:
    // 0x182800: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x182800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x182804: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x182804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x182808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18280c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x18280cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x182810: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x182810u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x182814: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182814u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182818: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182818u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18281c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18281cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182820: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182820u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182824: 0xc060450  jal         func_181140
    ctx->pc = 0x182824u;
    SET_GPR_U32(ctx, 31, 0x18282Cu);
    ctx->pc = 0x182828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182824u;
    // 0x182828: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182824u, 0x18282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18282Cu;
label_18282c:
    // 0x18282c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x18282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x182830: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x182830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x182834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182838: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x182838u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x18283c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x18283cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x182840: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182840u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182844: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182844u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182848: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182848u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18284c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18284cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182850: 0xc060450  jal         func_181140
    ctx->pc = 0x182850u;
    SET_GPR_U32(ctx, 31, 0x182858u);
    ctx->pc = 0x182854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182850u;
    // 0x182854: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182850u, 0x182858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182858u;
label_182858:
    // 0x182858: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x182858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x18285c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x18285cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x182860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182864: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x182864u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x182868: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182868u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18286c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18286cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182870: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182870u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182874: 0x4600dc06  mov.s       $f16, $f27
    ctx->pc = 0x182874u;
    ctx->f[16] = FPU_MOV_S(ctx->f[27]);
    // 0x182878: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182878u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18287c: 0xc060450  jal         func_181140
    ctx->pc = 0x18287Cu;
    SET_GPR_U32(ctx, 31, 0x182884u);
    ctx->pc = 0x182880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18287Cu;
    // 0x182880: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18287Cu, 0x182884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182884u;
label_182884:
    // 0x182884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182888: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x182888u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x18288c: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x18288cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x182890: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182890u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182894: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182894u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182898: 0x4600e406  mov.s       $f16, $f28
    ctx->pc = 0x182898u;
    ctx->f[16] = FPU_MOV_S(ctx->f[28]);
    // 0x18289c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18289cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1828a0: 0xc060450  jal         func_181140
    ctx->pc = 0x1828A0u;
    SET_GPR_U32(ctx, 31, 0x1828A8u);
    ctx->pc = 0x1828A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1828A0u;
    // 0x1828a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1828A0u, 0x1828A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828A8u;
label_1828a8:
    // 0x1828a8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1828a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1828ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1828acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828b0: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1828b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1828b4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1828b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1828b8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1828b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1828bc: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x1828bcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x1828c0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1828c0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1828c4: 0xc060450  jal         func_181140
    ctx->pc = 0x1828C4u;
    SET_GPR_U32(ctx, 31, 0x1828CCu);
    ctx->pc = 0x1828C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1828C4u;
    // 0x1828c8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1828C4u, 0x1828CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828CCu;
label_1828cc:
    // 0x1828cc: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1828ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1828d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1828d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828d4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x1828d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x1828d8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1828d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1828dc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1828dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1828e0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1828e0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1828e4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1828e4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1828e8: 0xc060450  jal         func_181140
    ctx->pc = 0x1828E8u;
    SET_GPR_U32(ctx, 31, 0x1828F0u);
    ctx->pc = 0x1828ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1828E8u;
    // 0x1828ec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1828E8u, 0x1828F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828F0u;
label_1828f0:
    // 0x1828f0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1828f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1828f4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1828f4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1828f8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1828f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1828fc: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x1828fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x182900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182904: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182904u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182908: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182908u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18290c: 0xc060450  jal         func_181140
    ctx->pc = 0x18290Cu;
    SET_GPR_U32(ctx, 31, 0x182914u);
    ctx->pc = 0x182910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18290Cu;
    // 0x182910: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18290Cu, 0x182914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182914u;
label_182914:
    // 0x182914: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x182914u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x182918: 0x4600eb86  mov.s       $f14, $f29
    ctx->pc = 0x182918u;
    ctx->f[14] = FPU_MOV_S(ctx->f[29]);
    // 0x18291c: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x18291cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x182920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182924: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x182924u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x182928: 0xc06049e  jal         func_181278
    ctx->pc = 0x182928u;
    SET_GPR_U32(ctx, 31, 0x182930u);
    ctx->pc = 0x18292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182928u;
    // 0x18292c: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x182928u, 0x182930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182930u;
label_182930:
    // 0x182930: 0x3c014108  lui         $at, 0x4108
    ctx->pc = 0x182930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16648 << 16));
    // 0x182934: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x182934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x182938: 0x4600f446  mov.s       $f17, $f30
    ctx->pc = 0x182938u;
    ctx->f[17] = FPU_MOV_S(ctx->f[30]);
    // 0x18293c: 0x3c01442f  lui         $at, 0x442F
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17455 << 16));
    // 0x182940: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x182940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x182944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x182944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x182948: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x182948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18294c: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x18294cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x182950: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x182950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x182954: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x182954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x182958: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x182958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18295c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x18295cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x182960: 0xc0604a6  jal         func_181298
    ctx->pc = 0x182960u;
    SET_GPR_U32(ctx, 31, 0x182968u);
    ctx->pc = 0x182964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182960u;
    // 0x182964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x182960u, 0x182968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182968u;
label_182968:
    // 0x182968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18296c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18296cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182970: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182970u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182974: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x182974u;
    SET_GPR_U32(ctx, 31, 0x18297Cu);
    ctx->pc = 0x182978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182974u;
    // 0x182978: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x182974u, 0x18297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18297Cu;
label_18297c:
    // 0x18297c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x18297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x182980: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x182980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x182984: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x182984u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x182988: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x182988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18298c: 0xe4750104  swc1        $f21, 0x104($v1)
    ctx->pc = 0x18298cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x182990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182994: 0xe4950108  swc1        $f21, 0x108($a0)
    ctx->pc = 0x182994u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x182998: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x182998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18299c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18299cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1829a0: 0xa205013b  sb          $a1, 0x13B($s0)
    ctx->pc = 0x1829a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 5));
    // 0x1829a4: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x1829a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x1829a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1829a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829ac: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x1829acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x1829b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1829b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829b4: 0xa2050139  sb          $a1, 0x139($s0)
    ctx->pc = 0x1829b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 5));
    // 0x1829b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1829b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829bc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1829bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1829c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1829c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1829c4: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x1829c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x1829c8: 0xe4de013c  swc1        $f30, 0x13C($a2)
    ctx->pc = 0x1829c8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 316), bits); }
    // 0x1829cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1829ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829d0: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1829d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1829d4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1829d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1829d8: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x1829d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x1829dc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1829dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1829e0: 0xe6360148  swc1        $f22, 0x148($s1)
    ctx->pc = 0x1829e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x1829e4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1829E4u;
    SET_GPR_U32(ctx, 31, 0x1829ECu);
    ctx->pc = 0x1829E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1829E4u;
    // 0x1829e8: 0x24a5f838  addiu       $a1, $a1, -0x7C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1829E4u, 0x1829ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1829ECu;
label_1829ec:
    // 0x1829ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1829ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1829f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1829f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1829f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1829f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1829f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1829f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1829fc: 0xc7be0070  lwc1        $f30, 0x70($sp)
    ctx->pc = 0x1829fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x182a00: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x182a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x182a04: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x182a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x182a08: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x182a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x182a0c: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x182a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x182a10: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x182a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x182a14: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x182a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x182a18: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x182a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x182a1c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x182a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x182a20: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x182a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x182a24: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x182a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x182a28: 0x3e00008  jr          $ra
    ctx->pc = 0x182A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A28u;
        // 0x182a2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182A30u;
}
