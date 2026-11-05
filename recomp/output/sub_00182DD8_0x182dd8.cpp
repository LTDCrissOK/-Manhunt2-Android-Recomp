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

// Function: sub_00182DD8
// Address: 0x182dd8 - 0x183180
void sub_00182DD8_0x182dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182DD8_0x182dd8");
#endif

    switch (ctx->pc) {
        case 0x182e74u: goto label_182e74;
        case 0x182ea8u: goto label_182ea8;
        case 0x182ed4u: goto label_182ed4;
        case 0x182f00u: goto label_182f00;
        case 0x182f2cu: goto label_182f2c;
        case 0x182f58u: goto label_182f58;
        case 0x182f84u: goto label_182f84;
        case 0x182fa8u: goto label_182fa8;
        case 0x182fccu: goto label_182fcc;
        case 0x182ff0u: goto label_182ff0;
        case 0x183014u: goto label_183014;
        case 0x183038u: goto label_183038;
        case 0x183060u: goto label_183060;
        case 0x183080u: goto label_183080;
        case 0x1830b4u: goto label_1830b4;
        case 0x1830c8u: goto label_1830c8;
        case 0x183140u: goto label_183140;
        default: break;
    }

    ctx->pc = 0x182dd8u;

    // 0x182dd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x182dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x182ddc: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x182ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x182de0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x182de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182de4: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x182de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x182de8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182dec: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x182decu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x182df0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x182df0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x182df4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x182df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x182df8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x182df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182dfc: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x182dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x182e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182e04: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x182e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x182e08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x182e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x182e0c: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x182e0cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x182e10: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x182e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x182e14: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x182e14u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x182e18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x182e18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e1c: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x182e1cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x182e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e24: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x182e24u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x182e28: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x182e28u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x182e2c: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x182e2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x182e30: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x182e30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x182e34: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x182e34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x182e38: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x182e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x182e3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x182e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182e40: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x182e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x182e44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x182e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x182e48: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x182e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x182e4c: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x182e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x182e50: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x182e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x182e54: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x182e54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x182e58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x182e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x182e5c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x182e5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x182e60: 0xe461012c  swc1        $f1, 0x12C($v1)
    ctx->pc = 0x182e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x182e64: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x182e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x182e68: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x182e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x182e6c: 0xc060498  jal         func_181260
    ctx->pc = 0x182E6Cu;
    SET_GPR_U32(ctx, 31, 0x182E74u);
    ctx->pc = 0x182E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E6Cu;
    // 0x182e70: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x182E6Cu, 0x182E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E74u;
label_182e74:
    // 0x182e74: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x182e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x182e78: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x182e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x182e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e80: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182e80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182e84: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x182e84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x182e88: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x182e88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x182e8c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182e8cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182e90: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182e90u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182e94: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182e94u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182e98: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x182e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x182e9c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x182e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x182ea0: 0xc060450  jal         func_181140
    ctx->pc = 0x182EA0u;
    SET_GPR_U32(ctx, 31, 0x182EA8u);
    ctx->pc = 0x182EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182EA0u;
    // 0x182ea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182EA0u, 0x182EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182EA8u;
label_182ea8:
    // 0x182ea8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x182ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x182eac: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x182eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x182eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182eb4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182eb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182eb8: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x182eb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x182ebc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182ebcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182ec0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182ec0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182ec4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182ec4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182ec8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182ec8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182ecc: 0xc060450  jal         func_181140
    ctx->pc = 0x182ECCu;
    SET_GPR_U32(ctx, 31, 0x182ED4u);
    ctx->pc = 0x182ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182ECCu;
    // 0x182ed0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182ECCu, 0x182ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182ED4u;
label_182ed4:
    // 0x182ed4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x182ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x182ed8: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x182ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x182edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ee0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182ee0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182ee4: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x182ee4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x182ee8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182ee8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182eec: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182eecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182ef0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182ef0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182ef4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182ef4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182ef8: 0xc060450  jal         func_181140
    ctx->pc = 0x182EF8u;
    SET_GPR_U32(ctx, 31, 0x182F00u);
    ctx->pc = 0x182EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182EF8u;
    // 0x182efc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182EF8u, 0x182F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F00u;
label_182f00:
    // 0x182f00: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x182f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x182f04: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x182f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x182f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f0c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x182f0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x182f10: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182f10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182f14: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x182f14u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x182f18: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182f18u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182f1c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182f1cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182f20: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182f20u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182f24: 0xc060450  jal         func_181140
    ctx->pc = 0x182F24u;
    SET_GPR_U32(ctx, 31, 0x182F2Cu);
    ctx->pc = 0x182F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F24u;
    // 0x182f28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182F24u, 0x182F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F2Cu;
label_182f2c:
    // 0x182f2c: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x182f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x182f30: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x182f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x182f34: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x182f34u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x182f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f3c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x182f3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x182f40: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182f40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182f44: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182f44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182f48: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182f48u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182f4c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182f4cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182f50: 0xc060450  jal         func_181140
    ctx->pc = 0x182F50u;
    SET_GPR_U32(ctx, 31, 0x182F58u);
    ctx->pc = 0x182F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F50u;
    // 0x182f54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182F50u, 0x182F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F58u;
label_182f58:
    // 0x182f58: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x182f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x182f5c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x182f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x182f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f64: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182f68: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x182f68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x182f6c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x182f6cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x182f70: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x182f70u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x182f74: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182f74u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182f78: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182f78u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182f7c: 0xc060450  jal         func_181140
    ctx->pc = 0x182F7Cu;
    SET_GPR_U32(ctx, 31, 0x182F84u);
    ctx->pc = 0x182F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F7Cu;
    // 0x182f80: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182F7Cu, 0x182F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182F84u;
label_182f84:
    // 0x182f84: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182f84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f8c: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x182f8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x182f90: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x182f90u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x182f94: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182f94u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182f98: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182f98u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182f9c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182f9cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182fa0: 0xc060450  jal         func_181140
    ctx->pc = 0x182FA0u;
    SET_GPR_U32(ctx, 31, 0x182FA8u);
    ctx->pc = 0x182FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FA0u;
    // 0x182fa4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182FA0u, 0x182FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FA8u;
label_182fa8:
    // 0x182fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fac: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x182facu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x182fb0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182fb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182fb4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182fb4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182fb8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182fb8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182fbc: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x182fbcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x182fc0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182fc0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182fc4: 0xc060450  jal         func_181140
    ctx->pc = 0x182FC4u;
    SET_GPR_U32(ctx, 31, 0x182FCCu);
    ctx->pc = 0x182FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FC4u;
    // 0x182fc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182FC4u, 0x182FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FCCu;
label_182fcc:
    // 0x182fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fd0: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x182fd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    // 0x182fd4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x182fd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x182fd8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182fd8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182fdc: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x182fdcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x182fe0: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x182fe0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x182fe4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182fe4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182fe8: 0xc060450  jal         func_181140
    ctx->pc = 0x182FE8u;
    SET_GPR_U32(ctx, 31, 0x182FF0u);
    ctx->pc = 0x182FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FE8u;
    // 0x182fec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182FE8u, 0x182FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FF0u;
label_182ff0:
    // 0x182ff0: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x182ff0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
    // 0x182ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ff8: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x182ff8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x182ffc: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x182ffcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x183000: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x183000u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x183004: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x183004u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x183008: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183008u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18300c: 0xc060450  jal         func_181140
    ctx->pc = 0x18300Cu;
    SET_GPR_U32(ctx, 31, 0x183014u);
    ctx->pc = 0x183010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18300Cu;
    // 0x183010: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18300Cu, 0x183014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183014u;
label_183014:
    // 0x183014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183018: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x183018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x18301c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x18301cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x183020: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x183020u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x183024: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x183024u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x183028: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183028u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18302c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18302cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183030: 0xc060450  jal         func_181140
    ctx->pc = 0x183030u;
    SET_GPR_U32(ctx, 31, 0x183038u);
    ctx->pc = 0x183034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183030u;
    // 0x183034: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183030u, 0x183038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183038u;
label_183038:
    // 0x183038: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x183038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x18303c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x18303cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x183040: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x183040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x183044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183048: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x183048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x18304c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x18304cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x183050: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183050u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183054: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183054u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183058: 0xc060450  jal         func_181140
    ctx->pc = 0x183058u;
    SET_GPR_U32(ctx, 31, 0x183060u);
    ctx->pc = 0x18305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183058u;
    // 0x18305c: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183058u, 0x183060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183060u;
label_183060:
    // 0x183060: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x183060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x183064: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x183064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x183068: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183068u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x18306c: 0x4600db86  mov.s       $f14, $f27
    ctx->pc = 0x18306cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
    // 0x183070: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x183070u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x183074: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x183074u;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x183078: 0xc06049e  jal         func_181278
    ctx->pc = 0x183078u;
    SET_GPR_U32(ctx, 31, 0x183080u);
    ctx->pc = 0x18307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183078u;
    // 0x18307c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x183078u, 0x183080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183080u;
label_183080:
    // 0x183080: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x183080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x183084: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x183084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x183088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18308c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x18308cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x183090: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x183090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x183094: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x183094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x183098: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x183098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x18309c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18309cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1830a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1830a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1830a4: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1830a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x1830a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1830a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1830ac: 0xc0604a6  jal         func_181298
    ctx->pc = 0x1830ACu;
    SET_GPR_U32(ctx, 31, 0x1830B4u);
    ctx->pc = 0x1830B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1830ACu;
    // 0x1830b0: 0x4600cb86  mov.s       $f14, $f25 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x1830ACu, 0x1830B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830B4u;
label_1830b4:
    // 0x1830b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1830b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1830b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1830bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1830bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1830c0: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x1830C0u;
    SET_GPR_U32(ctx, 31, 0x1830C8u);
    ctx->pc = 0x1830C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1830C0u;
    // 0x1830c4: 0x4600cb86  mov.s       $f14, $f25 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x1830C0u, 0x1830C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830C8u;
label_1830c8:
    // 0x1830c8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1830c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1830cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1830ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1830d0: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x1830d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1830d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1830d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830d8: 0xe47a0104  swc1        $f26, 0x104($v1)
    ctx->pc = 0x1830d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1830dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1830dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830e0: 0xe49a0108  swc1        $f26, 0x108($a0)
    ctx->pc = 0x1830e0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x1830e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1830e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1830e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1830e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1830ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1830ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1830f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1830f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1830f4: 0xa205013b  sb          $a1, 0x13B($s0)
    ctx->pc = 0x1830f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 5));
    // 0x1830f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1830f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1830fc: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x1830fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x183100: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x183100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183104: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x183104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x183108: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x183108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18310c: 0xa2050138  sb          $a1, 0x138($s0)
    ctx->pc = 0x18310cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 5));
    // 0x183110: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x183110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x183114: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x183114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x183118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18311c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18311cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183120: 0xe4c1013c  swc1        $f1, 0x13C($a2)
    ctx->pc = 0x183120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 316), bits); }
    // 0x183124: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x183124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x183128: 0xe4e00140  swc1        $f0, 0x140($a3)
    ctx->pc = 0x183128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 320), bits); }
    // 0x18312c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x18312cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x183130: 0xe4410144  swc1        $f1, 0x144($v0)
    ctx->pc = 0x183130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x183134: 0x24a5f848  addiu       $a1, $a1, -0x7B8
    ctx->pc = 0x183134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965320));
    // 0x183138: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x183138u;
    SET_GPR_U32(ctx, 31, 0x183140u);
    ctx->pc = 0x18313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183138u;
    // 0x18313c: 0xe6390148  swc1        $f25, 0x148($s1) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x183138u, 0x183140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183140u;
label_183140:
    // 0x183140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183148: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x183148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18314c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183150: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x183150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x183154: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x183154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x183158: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x183158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x18315c: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x18315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x183160: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x183160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x183164: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x183164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x183168: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x183168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18316c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x18316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x183170: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x183170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183174: 0x3e00008  jr          $ra
    ctx->pc = 0x183174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183174u;
        // 0x183178: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18317Cu;
    // 0x18317c: 0x0  nop
    ctx->pc = 0x18317cu;
    // NOP
    ctx->pc = 0x183180u;
}
