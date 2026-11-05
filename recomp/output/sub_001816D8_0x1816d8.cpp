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

// Function: sub_001816D8
// Address: 0x1816d8 - 0x181a20
void sub_001816D8_0x1816d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001816D8_0x1816d8");
#endif

    switch (ctx->pc) {
        case 0x18176cu: goto label_18176c;
        case 0x1817a0u: goto label_1817a0;
        case 0x1817ccu: goto label_1817cc;
        case 0x1817f8u: goto label_1817f8;
        case 0x181824u: goto label_181824;
        case 0x18184cu: goto label_18184c;
        case 0x181870u: goto label_181870;
        case 0x181898u: goto label_181898;
        case 0x1818bcu: goto label_1818bc;
        case 0x1818e0u: goto label_1818e0;
        case 0x181904u: goto label_181904;
        case 0x181928u: goto label_181928;
        case 0x18194cu: goto label_18194c;
        case 0x181968u: goto label_181968;
        case 0x1819a4u: goto label_1819a4;
        case 0x1819bcu: goto label_1819bc;
        case 0x1819e8u: goto label_1819e8;
        default: break;
    }

    ctx->pc = 0x1816d8u;

    // 0x1816d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1816d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1816dc: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1816dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1816e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1816e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1816e4: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x1816e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1816e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1816e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1816ec: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x1816ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x1816f0: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x1816f0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1816f4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1816f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1816f8: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x1816f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x1816fc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1816fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x181700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x181700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181704: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x181704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x181708: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x18170c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18170cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181710: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x181710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x181714: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x181714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x181718: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x181718u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18171c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181720: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x181720u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x181724: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181724u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181728: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x181728u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18172c: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x18172cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x181730: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x181730u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x181734: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x181734u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x181738: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x181738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x18173c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18173cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181740: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x181740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x181744: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x181744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x181748: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x181748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x18174c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18174cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181750: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x181750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x181754: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x181754u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x181758: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x181758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x18175c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x18175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x181760: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x181760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x181764: 0xc060498  jal         func_181260
    ctx->pc = 0x181764u;
    SET_GPR_U32(ctx, 31, 0x18176Cu);
    ctx->pc = 0x181768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181764u;
    // 0x181768: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x181764u, 0x18176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18176Cu;
label_18176c:
    // 0x18176c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x18176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x181770: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x181770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x181774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181778: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x181778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x18177c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18177cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x181780: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x181780u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x181784: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x181784u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x181788: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181788u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18178c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18178cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x181790: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181790u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181794: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181794u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181798: 0xc060450  jal         func_181140
    ctx->pc = 0x181798u;
    SET_GPR_U32(ctx, 31, 0x1817A0u);
    ctx->pc = 0x18179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181798u;
    // 0x18179c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181798u, 0x1817A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1817A0u;
label_1817a0:
    // 0x1817a0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1817a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1817a4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1817a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1817a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1817a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1817acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1817b0: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x1817b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x1817b4: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x1817b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x1817b8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1817b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1817bc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1817bcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1817c0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1817c0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1817c4: 0xc060450  jal         func_181140
    ctx->pc = 0x1817C4u;
    SET_GPR_U32(ctx, 31, 0x1817CCu);
    ctx->pc = 0x1817C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1817C4u;
    // 0x1817c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1817C4u, 0x1817CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1817CCu;
label_1817cc:
    // 0x1817cc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1817ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1817d0: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1817d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1817d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1817d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1817d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1817dc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1817dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1817e0: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x1817e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x1817e4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1817e4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1817e8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1817e8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1817ec: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1817ecu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1817f0: 0xc060450  jal         func_181140
    ctx->pc = 0x1817F0u;
    SET_GPR_U32(ctx, 31, 0x1817F8u);
    ctx->pc = 0x1817F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1817F0u;
    // 0x1817f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1817F0u, 0x1817F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1817F8u;
label_1817f8:
    // 0x1817f8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1817f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1817fc: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1817fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x181800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181804: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x181804u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x181808: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x181808u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x18180c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x18180cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x181810: 0x4600dbc6  mov.s       $f15, $f27
    ctx->pc = 0x181810u;
    ctx->f[15] = FPU_MOV_S(ctx->f[27]);
    // 0x181814: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181814u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181818: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181818u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18181c: 0xc060450  jal         func_181140
    ctx->pc = 0x18181Cu;
    SET_GPR_U32(ctx, 31, 0x181824u);
    ctx->pc = 0x181820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18181Cu;
    // 0x181820: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18181Cu, 0x181824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181824u;
label_181824:
    // 0x181824: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x181824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x181828: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x181828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18182c: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x18182cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x181830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181834: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181834u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181838: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181838u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18183c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18183cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181840: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181840u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181844: 0xc060450  jal         func_181140
    ctx->pc = 0x181844u;
    SET_GPR_U32(ctx, 31, 0x18184Cu);
    ctx->pc = 0x181848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181844u;
    // 0x181848: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181844u, 0x18184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18184Cu;
label_18184c:
    // 0x18184c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18184cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181850: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x181850u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x181854: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x181854u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x181858: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x181858u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x18185c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18185cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181860: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181860u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181864: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181864u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181868: 0xc060450  jal         func_181140
    ctx->pc = 0x181868u;
    SET_GPR_U32(ctx, 31, 0x181870u);
    ctx->pc = 0x18186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181868u;
    // 0x18186c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181868u, 0x181870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181870u;
label_181870:
    // 0x181870: 0x3c01425c  lui         $at, 0x425C
    ctx->pc = 0x181870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16988 << 16));
    // 0x181874: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x181874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18187c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x18187cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x181880: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x181880u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x181884: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181884u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181888: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181888u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18188c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18188cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181890: 0xc060450  jal         func_181140
    ctx->pc = 0x181890u;
    SET_GPR_U32(ctx, 31, 0x181898u);
    ctx->pc = 0x181894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181890u;
    // 0x181894: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181890u, 0x181898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181898u;
label_181898:
    // 0x181898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18189c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18189cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1818a0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1818a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1818a4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1818a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1818a8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1818a8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1818ac: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x1818acu;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x1818b0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1818b0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1818b4: 0xc060450  jal         func_181140
    ctx->pc = 0x1818B4u;
    SET_GPR_U32(ctx, 31, 0x1818BCu);
    ctx->pc = 0x1818B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1818B4u;
    // 0x1818b8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1818B4u, 0x1818BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1818BCu;
label_1818bc:
    // 0x1818bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1818bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818c0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1818c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1818c4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1818c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1818c8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1818c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1818cc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1818ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1818d0: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x1818d0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x1818d4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1818d4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1818d8: 0xc060450  jal         func_181140
    ctx->pc = 0x1818D8u;
    SET_GPR_U32(ctx, 31, 0x1818E0u);
    ctx->pc = 0x1818DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1818D8u;
    // 0x1818dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1818D8u, 0x1818E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1818E0u;
label_1818e0:
    // 0x1818e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1818e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818e4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1818e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1818e8: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1818e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x1818ec: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1818ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1818f0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1818f0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1818f4: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x1818f4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x1818f8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1818f8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1818fc: 0xc060450  jal         func_181140
    ctx->pc = 0x1818FCu;
    SET_GPR_U32(ctx, 31, 0x181904u);
    ctx->pc = 0x181900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1818FCu;
    // 0x181900: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1818FCu, 0x181904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181904u;
label_181904:
    // 0x181904: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x181904u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x181908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18190c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x18190cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x181910: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181910u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181914: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181914u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181918: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181918u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18191c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18191cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181920: 0xc060450  jal         func_181140
    ctx->pc = 0x181920u;
    SET_GPR_U32(ctx, 31, 0x181928u);
    ctx->pc = 0x181924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181920u;
    // 0x181924: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181920u, 0x181928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181928u;
label_181928:
    // 0x181928: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x181928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18192c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18192cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181930: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x181930u;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x181934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181938: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x181938u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18193c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x18193cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x181940: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181940u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181944: 0xc060450  jal         func_181140
    ctx->pc = 0x181944u;
    SET_GPR_U32(ctx, 31, 0x18194Cu);
    ctx->pc = 0x181948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181944u;
    // 0x181948: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181944u, 0x18194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18194Cu;
label_18194c:
    // 0x18194c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18194cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x181950: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x181950u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x181954: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x181954u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x181958: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x181958u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x18195c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18195cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181960: 0xc06049e  jal         func_181278
    ctx->pc = 0x181960u;
    SET_GPR_U32(ctx, 31, 0x181968u);
    ctx->pc = 0x181964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181960u;
    // 0x181964: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x181960u, 0x181968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181968u;
label_181968:
    // 0x181968: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x181968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x18196c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18196cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x181970: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x181970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x181974: 0x4600dc46  mov.s       $f17, $f27
    ctx->pc = 0x181974u;
    ctx->f[17] = FPU_MOV_S(ctx->f[27]);
    // 0x181978: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x181978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x18197c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x18197cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x181980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x181980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x181984: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x181984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181988: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x181988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x18198c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x18198cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x181990: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x181990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x181994: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x181994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x181998: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x181998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18199c: 0xc0604a6  jal         func_181298
    ctx->pc = 0x18199Cu;
    SET_GPR_U32(ctx, 31, 0x1819A4u);
    ctx->pc = 0x1819A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18199Cu;
    // 0x1819a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x18199Cu, 0x1819A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1819A4u;
label_1819a4:
    // 0x1819a4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1819a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1819a8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1819a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1819ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1819acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1819b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1819b4: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x1819B4u;
    SET_GPR_U32(ctx, 31, 0x1819BCu);
    ctx->pc = 0x1819B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1819B4u;
    // 0x1819b8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x1819B4u, 0x1819BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1819BCu;
label_1819bc:
    // 0x1819bc: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1819bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1819c0: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x1819c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x1819c4: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x1819c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1819c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1819c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819cc: 0xe47a0104  swc1        $f26, 0x104($v1)
    ctx->pc = 0x1819ccu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1819d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1819d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819d4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1819d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1819d8: 0xe63a0108  swc1        $f26, 0x108($s1)
    ctx->pc = 0x1819d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x1819dc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1819dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1819e0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1819E0u;
    SET_GPR_U32(ctx, 31, 0x1819E8u);
    ctx->pc = 0x1819E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1819E0u;
    // 0x1819e4: 0x24a5f7f0  addiu       $a1, $a1, -0x810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1819E0u, 0x1819E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1819E8u;
label_1819e8:
    // 0x1819e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1819e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1819ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1819ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1819f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1819f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1819f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1819f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1819f8: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x1819f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1819fc: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x1819fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x181a00: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x181a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x181a04: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x181a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x181a08: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x181a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x181a0c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x181a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x181a10: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x181a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x181a14: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x181a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x181a18: 0x3e00008  jr          $ra
    ctx->pc = 0x181A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A18u;
        // 0x181a1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181A20u;
}
