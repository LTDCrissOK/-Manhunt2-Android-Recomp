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

// Function: sub_00183530
// Address: 0x183530 - 0x1838d8
void sub_00183530_0x183530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183530_0x183530");
#endif

    switch (ctx->pc) {
        case 0x1835d0u: goto label_1835d0;
        case 0x183604u: goto label_183604;
        case 0x183630u: goto label_183630;
        case 0x18365cu: goto label_18365c;
        case 0x18368cu: goto label_18368c;
        case 0x1836b8u: goto label_1836b8;
        case 0x1836e4u: goto label_1836e4;
        case 0x183708u: goto label_183708;
        case 0x18372cu: goto label_18372c;
        case 0x183750u: goto label_183750;
        case 0x183774u: goto label_183774;
        case 0x183798u: goto label_183798;
        case 0x1837bcu: goto label_1837bc;
        case 0x1837d8u: goto label_1837d8;
        case 0x183810u: goto label_183810;
        case 0x183824u: goto label_183824;
        case 0x183894u: goto label_183894;
        default: break;
    }

    ctx->pc = 0x183530u;

    // 0x183530: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x183534: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x183534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x183538: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x183538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18353c: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x18353cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x183540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183544: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x183544u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x183548: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x183548u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18354c: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x18354cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183550: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x183550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x183554: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x183554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x183558: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x183558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x18355c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18355cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183560: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x183560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x183564: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x183564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x183568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18356c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x183570: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x183570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x183574: 0xe7be0070  swc1        $f30, 0x70($sp)
    ctx->pc = 0x183574u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x183578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18357c: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x18357cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x183580: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x183580u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x183584: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x183584u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x183588: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183588u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18358c: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x18358cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x183590: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x183590u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x183594: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x183594u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x183598: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x183598u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x18359c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x18359cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1835a0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1835a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1835a4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1835a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1835a8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1835a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1835ac: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1835acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1835b0: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1835b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1835b4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1835b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1835b8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1835b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1835bc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1835bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1835c0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1835c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1835c4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1835c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1835c8: 0xc060498  jal         func_181260
    ctx->pc = 0x1835C8u;
    SET_GPR_U32(ctx, 31, 0x1835D0u);
    ctx->pc = 0x1835CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1835C8u;
    // 0x1835cc: 0xe45b012c  swc1        $f27, 0x12C($v0) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x1835C8u, 0x1835D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835D0u;
label_1835d0:
    // 0x1835d0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1835d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1835d4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1835d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1835d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1835d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835dc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1835dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1835e0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1835e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1835e4: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x1835e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x1835e8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1835e8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1835ec: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1835ecu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1835f0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1835f0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1835f4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1835f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1835f8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1835f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1835fc: 0xc060450  jal         func_181140
    ctx->pc = 0x1835FCu;
    SET_GPR_U32(ctx, 31, 0x183604u);
    ctx->pc = 0x183600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1835FCu;
    // 0x183600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1835FCu, 0x183604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183604u;
label_183604:
    // 0x183604: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x183604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x183608: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x183608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x18360c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183610: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x183610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x183614: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x183614u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183618: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183618u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18361c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18361cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183620: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183620u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183624: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183624u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183628: 0xc060450  jal         func_181140
    ctx->pc = 0x183628u;
    SET_GPR_U32(ctx, 31, 0x183630u);
    ctx->pc = 0x18362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183628u;
    // 0x18362c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183628u, 0x183630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183630u;
label_183630:
    // 0x183630: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x183630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x183634: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x183634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x183638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18363c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18363cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x183640: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x183640u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183644: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183644u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183648: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183648u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18364c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18364cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183650: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183650u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183654: 0xc060450  jal         func_181140
    ctx->pc = 0x183654u;
    SET_GPR_U32(ctx, 31, 0x18365Cu);
    ctx->pc = 0x183658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183654u;
    // 0x183658: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183654u, 0x18365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18365Cu;
label_18365c:
    // 0x18365c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x183660: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x183660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x183664: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x183664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x183668: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x183668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18366c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183670: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x183670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x183674: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x183674u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x183678: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183678u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18367c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18367cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183680: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183680u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183684: 0xc060450  jal         func_181140
    ctx->pc = 0x183684u;
    SET_GPR_U32(ctx, 31, 0x18368Cu);
    ctx->pc = 0x183688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183684u;
    // 0x183688: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183684u, 0x18368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18368Cu;
label_18368c:
    // 0x18368c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x18368cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x183690: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x183690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x183694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183698: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x183698u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18369c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18369cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1836a0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1836a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1836a4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1836a4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1836a8: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x1836a8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x1836ac: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1836acu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1836b0: 0xc060450  jal         func_181140
    ctx->pc = 0x1836B0u;
    SET_GPR_U32(ctx, 31, 0x1836B8u);
    ctx->pc = 0x1836B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836B0u;
    // 0x1836b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1836B0u, 0x1836B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1836B8u;
label_1836b8:
    // 0x1836b8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1836b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1836bc: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x1836bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x1836c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1836c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1836c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1836c8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1836c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1836cc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1836ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1836d0: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1836d0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x1836d4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1836d4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1836d8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1836d8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1836dc: 0xc060450  jal         func_181140
    ctx->pc = 0x1836DCu;
    SET_GPR_U32(ctx, 31, 0x1836E4u);
    ctx->pc = 0x1836E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836DCu;
    // 0x1836e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1836DCu, 0x1836E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1836E4u;
label_1836e4:
    // 0x1836e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1836e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1836e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1836ec: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1836ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x1836f0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1836f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1836f4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1836f4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1836f8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1836f8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1836fc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1836fcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183700: 0xc060450  jal         func_181140
    ctx->pc = 0x183700u;
    SET_GPR_U32(ctx, 31, 0x183708u);
    ctx->pc = 0x183704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183700u;
    // 0x183704: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183700u, 0x183708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183708u;
label_183708:
    // 0x183708: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x183708u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x18370c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183710: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183714: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183718: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183718u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18371c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18371cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183720: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183720u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183724: 0xc060450  jal         func_181140
    ctx->pc = 0x183724u;
    SET_GPR_U32(ctx, 31, 0x18372Cu);
    ctx->pc = 0x183728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183724u;
    // 0x183728: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183724u, 0x18372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18372Cu;
label_18372c:
    // 0x18372c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18372cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183730: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183730u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183734: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x183734u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x183738: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183738u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18373c: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x18373cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x183740: 0x4600e406  mov.s       $f16, $f28
    ctx->pc = 0x183740u;
    ctx->f[16] = FPU_MOV_S(ctx->f[28]);
    // 0x183744: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183744u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183748: 0xc060450  jal         func_181140
    ctx->pc = 0x183748u;
    SET_GPR_U32(ctx, 31, 0x183750u);
    ctx->pc = 0x18374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183748u;
    // 0x18374c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183748u, 0x183750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183750u;
label_183750:
    // 0x183750: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x183750u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x183754: 0x4600e406  mov.s       $f16, $f28
    ctx->pc = 0x183754u;
    ctx->f[16] = FPU_MOV_S(ctx->f[28]);
    // 0x183758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18375c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18375cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183760: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183760u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183764: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x183764u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x183768: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183768u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18376c: 0xc060450  jal         func_181140
    ctx->pc = 0x18376Cu;
    SET_GPR_U32(ctx, 31, 0x183774u);
    ctx->pc = 0x183770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18376Cu;
    // 0x183770: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18376Cu, 0x183774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183774u;
label_183774:
    // 0x183774: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183774u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18377c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18377cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x183780: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183780u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183784: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x183784u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x183788: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183788u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18378c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18378cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183790: 0xc060450  jal         func_181140
    ctx->pc = 0x183790u;
    SET_GPR_U32(ctx, 31, 0x183798u);
    ctx->pc = 0x183794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183790u;
    // 0x183794: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183790u, 0x183798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183798u;
label_183798:
    // 0x183798: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x183798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18379c: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x18379cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x1837a0: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1837a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1837a4: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x1837a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x1837a8: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x1837a8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x1837ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1837acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1837b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1837b4: 0xc060450  jal         func_181140
    ctx->pc = 0x1837B4u;
    SET_GPR_U32(ctx, 31, 0x1837BCu);
    ctx->pc = 0x1837B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1837B4u;
    // 0x1837b8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1837B4u, 0x1837BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837BCu;
label_1837bc:
    // 0x1837bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1837bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837c0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1837c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1837c4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1837c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1837c8: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x1837c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x1837cc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1837ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1837d0: 0xc06049e  jal         func_181278
    ctx->pc = 0x1837D0u;
    SET_GPR_U32(ctx, 31, 0x1837D8u);
    ctx->pc = 0x1837D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1837D0u;
    // 0x1837d4: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x1837D0u, 0x1837D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837D8u;
label_1837d8:
    // 0x1837d8: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x1837d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x1837dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1837dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1837e0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1837e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1837e4: 0x4600f446  mov.s       $f17, $f30
    ctx->pc = 0x1837e4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[30]);
    // 0x1837e8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1837e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x1837ec: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1837ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1837f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1837f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1837f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1837f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1837f8: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1837f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x1837fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1837fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x183800: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x183800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x183804: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x183804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x183808: 0xc0604a6  jal         func_181298
    ctx->pc = 0x183808u;
    SET_GPR_U32(ctx, 31, 0x183810u);
    ctx->pc = 0x18380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183808u;
    // 0x18380c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x183808u, 0x183810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183810u;
label_183810:
    // 0x183810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183814: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x183814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x183818: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183818u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18381c: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x18381Cu;
    SET_GPR_U32(ctx, 31, 0x183824u);
    ctx->pc = 0x183820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18381Cu;
    // 0x183820: 0x4600eb86  mov.s       $f14, $f29 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[29]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x18381Cu, 0x183824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183824u;
label_183824:
    // 0x183824: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x183824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x183828: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x183828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18382c: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x18382cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x183830: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x183830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183834: 0xe4780104  swc1        $f24, 0x104($v1)
    ctx->pc = 0x183834u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x183838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18383c: 0xe4980108  swc1        $f24, 0x108($a0)
    ctx->pc = 0x18383cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x183840: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183848: 0xa205013b  sb          $a1, 0x13B($s0)
    ctx->pc = 0x183848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 5));
    // 0x18384c: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x18384cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x183850: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x183850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183854: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x183854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x183858: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x183858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18385c: 0xa2050138  sb          $a1, 0x138($s0)
    ctx->pc = 0x18385cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 5));
    // 0x183860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x183860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183864: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x183864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x183868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18386c: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x18386cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x183870: 0xe4de013c  swc1        $f30, 0x13C($a2)
    ctx->pc = 0x183870u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 316), bits); }
    // 0x183874: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x183874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183878: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x183878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x18387c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x18387cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x183880: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x183880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x183884: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x183884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x183888: 0xe63d0148  swc1        $f29, 0x148($s1)
    ctx->pc = 0x183888u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x18388c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x18388Cu;
    SET_GPR_U32(ctx, 31, 0x183894u);
    ctx->pc = 0x183890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18388Cu;
    // 0x183890: 0x24a5f860  addiu       $a1, $a1, -0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x18388Cu, 0x183894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183894u;
label_183894:
    // 0x183894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18389c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18389cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1838a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1838a4: 0xc7be0070  lwc1        $f30, 0x70($sp)
    ctx->pc = 0x1838a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1838a8: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x1838a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1838ac: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x1838acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1838b0: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x1838b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1838b4: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x1838b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1838b8: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x1838b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1838bc: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x1838bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1838c0: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x1838c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1838c4: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1838c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1838c8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1838c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1838cc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1838ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1838d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1838D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1838D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838D0u;
        // 0x1838d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1838D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1838D8u;
}
