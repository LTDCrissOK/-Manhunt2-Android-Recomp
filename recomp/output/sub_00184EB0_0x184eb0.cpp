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

// Function: sub_00184EB0
// Address: 0x184eb0 - 0x185230
void sub_00184EB0_0x184eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184EB0_0x184eb0");
#endif

    switch (ctx->pc) {
        case 0x184f5cu: goto label_184f5c;
        case 0x184f88u: goto label_184f88;
        case 0x184fb4u: goto label_184fb4;
        case 0x184fd8u: goto label_184fd8;
        case 0x185000u: goto label_185000;
        case 0x185024u: goto label_185024;
        case 0x185048u: goto label_185048;
        case 0x18506cu: goto label_18506c;
        case 0x185090u: goto label_185090;
        case 0x1850b4u: goto label_1850b4;
        case 0x1850d8u: goto label_1850d8;
        case 0x1850fcu: goto label_1850fc;
        case 0x185124u: goto label_185124;
        case 0x185140u: goto label_185140;
        case 0x185174u: goto label_185174;
        case 0x185188u: goto label_185188;
        case 0x1851f4u: goto label_1851f4;
        default: break;
    }

    ctx->pc = 0x184eb0u;

    // 0x184eb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x184eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x184eb4: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x184eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x184eb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x184eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x184ebc: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x184ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x184ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x184ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x184ec4: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x184ec4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x184ec8: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x184ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x184ecc: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x184eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x184ed0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x184ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x184ed4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x184ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x184ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184edc: 0x2623012c  addiu       $v1, $s1, 0x12C
    ctx->pc = 0x184edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x184ee0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x184ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x184ee4: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x184ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x184ee8: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x184ee8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x184eec: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x184eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x184ef0: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x184ef0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x184ef4: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x184ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x184ef8: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x184ef8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x184efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f00: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x184f00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x184f04: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x184f04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x184f08: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x184f08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x184f0c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x184f0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x184f10: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x184f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x184f14: 0xe4590128  swc1        $f25, 0x128($v0)
    ctx->pc = 0x184f14u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x184f18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x184f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x184f1c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x184f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x184f20: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x184f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x184f24: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x184f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x184f28: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x184f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x184f2c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x184f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x184f30: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x184f30u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x184f34: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x184f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x184f38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x184f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x184f3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184f3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184f40: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x184f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x184f44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x184f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x184f48: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x184f48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x184f4c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x184f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x184f50: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x184f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x184f54: 0xc060498  jal         func_181260
    ctx->pc = 0x184F54u;
    SET_GPR_U32(ctx, 31, 0x184F5Cu);
    ctx->pc = 0x184F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184F54u;
    // 0x184f58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x184F54u, 0x184F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F5Cu;
label_184f5c:
    // 0x184f5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x184f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x184f60: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x184f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x184f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f68: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x184f68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x184f6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184f6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184f70: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x184f70u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x184f74: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184f74u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184f78: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184f78u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184f7c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184f7cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184f80: 0xc060450  jal         func_181140
    ctx->pc = 0x184F80u;
    SET_GPR_U32(ctx, 31, 0x184F88u);
    ctx->pc = 0x184F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184F80u;
    // 0x184f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184F80u, 0x184F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F88u;
label_184f88:
    // 0x184f88: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x184f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x184f8c: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x184f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x184f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f94: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x184f94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x184f98: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184f98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184f9c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x184f9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x184fa0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184fa0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184fa4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184fa4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184fa8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184fa8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184fac: 0xc060450  jal         func_181140
    ctx->pc = 0x184FACu;
    SET_GPR_U32(ctx, 31, 0x184FB4u);
    ctx->pc = 0x184FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184FACu;
    // 0x184fb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184FACu, 0x184FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FB4u;
label_184fb4:
    // 0x184fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184fb8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x184fb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x184fbc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184fbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184fc0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x184fc0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x184fc4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184fc4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184fc8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184fc8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184fcc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184fccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184fd0: 0xc060450  jal         func_181140
    ctx->pc = 0x184FD0u;
    SET_GPR_U32(ctx, 31, 0x184FD8u);
    ctx->pc = 0x184FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184FD0u;
    // 0x184fd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184FD0u, 0x184FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FD8u;
label_184fd8:
    // 0x184fd8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x184fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x184fdc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x184fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x184fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184fe4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x184fe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x184fe8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184fe8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184fec: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184fecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184ff0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184ff0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184ff4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184ff4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184ff8: 0xc060450  jal         func_181140
    ctx->pc = 0x184FF8u;
    SET_GPR_U32(ctx, 31, 0x185000u);
    ctx->pc = 0x184FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184FF8u;
    // 0x184ffc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184FF8u, 0x185000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185000u;
label_185000:
    // 0x185000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185004: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x185004u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x185008: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185008u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18500c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18500cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185010: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185010u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185014: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x185014u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x185018: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185018u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18501c: 0xc060450  jal         func_181140
    ctx->pc = 0x18501Cu;
    SET_GPR_U32(ctx, 31, 0x185024u);
    ctx->pc = 0x185020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18501Cu;
    // 0x185020: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18501Cu, 0x185024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185024u;
label_185024:
    // 0x185024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185028: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18502c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18502cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185030: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x185030u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x185034: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185034u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185038: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185038u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18503c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18503cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185040: 0xc060450  jal         func_181140
    ctx->pc = 0x185040u;
    SET_GPR_U32(ctx, 31, 0x185048u);
    ctx->pc = 0x185044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185040u;
    // 0x185044: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185040u, 0x185048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185048u;
label_185048:
    // 0x185048: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x185048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x18504c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18504cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185050: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185050u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185054: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185054u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185058: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185058u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18505c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18505cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185060: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185060u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185064: 0xc060450  jal         func_181140
    ctx->pc = 0x185064u;
    SET_GPR_U32(ctx, 31, 0x18506Cu);
    ctx->pc = 0x185068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185064u;
    // 0x185068: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185064u, 0x18506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18506Cu;
label_18506c:
    // 0x18506c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18506cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185070: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x185070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x185074: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185074u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185078: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185078u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18507c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18507cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185080: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x185080u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x185084: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185084u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185088: 0xc060450  jal         func_181140
    ctx->pc = 0x185088u;
    SET_GPR_U32(ctx, 31, 0x185090u);
    ctx->pc = 0x18508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185088u;
    // 0x18508c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185088u, 0x185090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185090u;
label_185090:
    // 0x185090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185094: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x185094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x185098: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185098u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18509c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18509cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1850a0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1850a0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1850a4: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x1850a4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x1850a8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1850a8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1850ac: 0xc060450  jal         func_181140
    ctx->pc = 0x1850ACu;
    SET_GPR_U32(ctx, 31, 0x1850B4u);
    ctx->pc = 0x1850B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1850ACu;
    // 0x1850b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1850ACu, 0x1850B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1850B4u;
label_1850b4:
    // 0x1850b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1850b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1850b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1850bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1850bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1850c0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1850c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1850c4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1850c4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1850c8: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x1850c8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x1850cc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1850ccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1850d0: 0xc060450  jal         func_181140
    ctx->pc = 0x1850D0u;
    SET_GPR_U32(ctx, 31, 0x1850D8u);
    ctx->pc = 0x1850D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1850D0u;
    // 0x1850d4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1850D0u, 0x1850D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1850D8u;
label_1850d8:
    // 0x1850d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1850d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1850dc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1850dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1850e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1850e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850e4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1850e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1850e8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1850e8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1850ec: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1850ecu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1850f0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1850f0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1850f4: 0xc060450  jal         func_181140
    ctx->pc = 0x1850F4u;
    SET_GPR_U32(ctx, 31, 0x1850FCu);
    ctx->pc = 0x1850F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1850F4u;
    // 0x1850f8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1850F4u, 0x1850FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1850FCu;
label_1850fc:
    // 0x1850fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1850fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x185100: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x185100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x185104: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x185104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x185108: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x185108u;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
    // 0x18510c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x18510cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x185110: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x185110u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x185114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185118: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185118u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18511c: 0xc060450  jal         func_181140
    ctx->pc = 0x18511Cu;
    SET_GPR_U32(ctx, 31, 0x185124u);
    ctx->pc = 0x185120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18511Cu;
    // 0x185120: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18511Cu, 0x185124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185124u;
label_185124:
    // 0x185124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185128: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x185128u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x18512c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18512cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185130: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x185130u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x185134: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185134u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185138: 0xc06049e  jal         func_181278
    ctx->pc = 0x185138u;
    SET_GPR_U32(ctx, 31, 0x185140u);
    ctx->pc = 0x18513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185138u;
    // 0x18513c: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x185138u, 0x185140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185140u;
label_185140:
    // 0x185140: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x185140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x185144: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x185144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x185148: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x185148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x18514c: 0x4600e446  mov.s       $f17, $f28
    ctx->pc = 0x18514cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[28]);
    // 0x185150: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x185150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x185154: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x185154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x185158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18515c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18515cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x185160: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x185160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x185164: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x185164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x185168: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x185168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18516c: 0xc0604a6  jal         func_181298
    ctx->pc = 0x18516Cu;
    SET_GPR_U32(ctx, 31, 0x185174u);
    ctx->pc = 0x185170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18516Cu;
    // 0x185170: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x18516Cu, 0x185174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185174u;
label_185174:
    // 0x185174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185178: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18517c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x18517cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185180: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x185180u;
    SET_GPR_U32(ctx, 31, 0x185188u);
    ctx->pc = 0x185184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185180u;
    // 0x185184: 0x4600db86  mov.s       $f14, $f27 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x185180u, 0x185188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185188u;
label_185188:
    // 0x185188: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x185188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x18518c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x18518cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x185190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x185190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185194: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x185194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x185198: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x185198u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18519c: 0xe4770104  swc1        $f23, 0x104($v1)
    ctx->pc = 0x18519cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1851a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1851a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851a4: 0xe4970108  swc1        $f23, 0x108($a0)
    ctx->pc = 0x1851a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x1851a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1851a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1851ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1851acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1851b0: 0xa203013b  sb          $v1, 0x13B($s0)
    ctx->pc = 0x1851b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x1851b4: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x1851b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x1851b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1851b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851bc: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x1851bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x1851c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1851c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851c4: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x1851c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x1851c8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1851c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851cc: 0xe4bc013c  swc1        $f28, 0x13C($a1)
    ctx->pc = 0x1851ccu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 316), bits); }
    // 0x1851d0: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x1851d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x1851d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1851d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851d8: 0xe4c00140  swc1        $f0, 0x140($a2)
    ctx->pc = 0x1851d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 320), bits); }
    // 0x1851dc: 0xe4e00144  swc1        $f0, 0x144($a3)
    ctx->pc = 0x1851dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 324), bits); }
    // 0x1851e0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1851e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1851e4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1851e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1851e8: 0xe63b0148  swc1        $f27, 0x148($s1)
    ctx->pc = 0x1851e8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x1851ec: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x1851ECu;
    SET_GPR_U32(ctx, 31, 0x1851F4u);
    ctx->pc = 0x1851F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1851ECu;
    // 0x1851f0: 0x24a5f8c0  addiu       $a1, $a1, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1851ECu, 0x1851F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851F4u;
label_1851f4:
    // 0x1851f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1851f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1851f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1851f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1851fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1851fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185200: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x185200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x185204: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x185204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x185208: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x185208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x18520c: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x18520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x185210: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x185210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x185214: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x185214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x185218: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x185218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18521c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x18521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x185220: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x185220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x185224: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x185224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185228: 0x3e00008  jr          $ra
    ctx->pc = 0x185228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185228u;
        // 0x18522c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185230u;
}
