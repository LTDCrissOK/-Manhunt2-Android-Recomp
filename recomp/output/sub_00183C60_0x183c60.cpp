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

// Function: sub_00183C60
// Address: 0x183c60 - 0x184008
void sub_00183C60_0x183c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183C60_0x183c60");
#endif

    switch (ctx->pc) {
        case 0x183d0cu: goto label_183d0c;
        case 0x183d30u: goto label_183d30;
        case 0x183d5cu: goto label_183d5c;
        case 0x183d88u: goto label_183d88;
        case 0x183db4u: goto label_183db4;
        case 0x183de4u: goto label_183de4;
        case 0x183e10u: goto label_183e10;
        case 0x183e3cu: goto label_183e3c;
        case 0x183e60u: goto label_183e60;
        case 0x183e84u: goto label_183e84;
        case 0x183ea8u: goto label_183ea8;
        case 0x183eccu: goto label_183ecc;
        case 0x183ef0u: goto label_183ef0;
        case 0x183f10u: goto label_183f10;
        case 0x183f44u: goto label_183f44;
        case 0x183f58u: goto label_183f58;
        case 0x183fc4u: goto label_183fc4;
        default: break;
    }

    ctx->pc = 0x183c60u;

    // 0x183c60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x183c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x183c64: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x183c68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x183c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x183c6c: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x183c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x183c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183c74: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x183c74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x183c78: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x183c78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183c7c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x183c7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x183c80: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x183c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x183c84: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x183c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x183c88: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x183c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x183c8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183c90: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x183c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x183c94: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x183c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x183c98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x183c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183ca0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x183ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x183ca4: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x183ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x183ca8: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x183ca8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x183cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cb0: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x183cb0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x183cb4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183cb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183cb8: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x183cb8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x183cbc: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x183cbcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x183cc0: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x183cc0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x183cc4: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x183cc4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x183cc8: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x183cc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x183ccc: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x183cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x183cd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183cd4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x183cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x183cd8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x183cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x183cdc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x183cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x183ce0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x183ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x183ce4: 0xe4610128  swc1        $f1, 0x128($v1)
    ctx->pc = 0x183ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x183ce8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x183ce8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x183cec: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x183cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x183cf0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183cf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183cf4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x183cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x183cf8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x183cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x183cfc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x183cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x183d00: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x183d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x183d04: 0xc060498  jal         func_181260
    ctx->pc = 0x183D04u;
    SET_GPR_U32(ctx, 31, 0x183D0Cu);
    ctx->pc = 0x183D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D04u;
    // 0x183d08: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x183D04u, 0x183D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D0Cu;
label_183d0c:
    // 0x183d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d10: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183d10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183d14: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x183d14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183d18: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x183d18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x183d1c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183d1cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183d20: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183d20u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183d24: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183d24u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183d28: 0xc060450  jal         func_181140
    ctx->pc = 0x183D28u;
    SET_GPR_U32(ctx, 31, 0x183D30u);
    ctx->pc = 0x183D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D28u;
    // 0x183d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183D28u, 0x183D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D30u;
label_183d30:
    // 0x183d30: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x183d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x183d34: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x183d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x183d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d3c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183d3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183d40: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x183d40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183d44: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183d44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183d48: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183d48u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183d4c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183d4cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183d50: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183d50u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183d54: 0xc060450  jal         func_181140
    ctx->pc = 0x183D54u;
    SET_GPR_U32(ctx, 31, 0x183D5Cu);
    ctx->pc = 0x183D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D54u;
    // 0x183d58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183D54u, 0x183D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D5Cu;
label_183d5c:
    // 0x183d5c: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x183d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x183d60: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x183d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x183d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d68: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183d68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183d6c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x183d6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183d70: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183d70u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183d74: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183d74u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183d78: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183d78u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183d7c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183d7cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183d80: 0xc060450  jal         func_181140
    ctx->pc = 0x183D80u;
    SET_GPR_U32(ctx, 31, 0x183D88u);
    ctx->pc = 0x183D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D80u;
    // 0x183d84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183D80u, 0x183D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D88u;
label_183d88:
    // 0x183d88: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x183d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x183d8c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x183d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x183d90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183d90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d98: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x183d98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x183d9c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x183d9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x183da0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183da0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183da4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183da4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183da8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183da8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183dac: 0xc060450  jal         func_181140
    ctx->pc = 0x183DACu;
    SET_GPR_U32(ctx, 31, 0x183DB4u);
    ctx->pc = 0x183DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DACu;
    // 0x183db0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183DACu, 0x183DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DB4u;
label_183db4:
    // 0x183db4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x183db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x183db8: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x183db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x183dbc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x183dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x183dc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183dc8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183dc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183dcc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183dccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183dd0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183dd0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183dd4: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x183dd4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x183dd8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183dd8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183ddc: 0xc060450  jal         func_181140
    ctx->pc = 0x183DDCu;
    SET_GPR_U32(ctx, 31, 0x183DE4u);
    ctx->pc = 0x183DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DDCu;
    // 0x183de0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183DDCu, 0x183DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DE4u;
label_183de4:
    // 0x183de4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x183de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x183de8: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x183de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x183dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183df0: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x183df0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x183df4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x183df4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x183df8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183df8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183dfc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183dfcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183e00: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183e00u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183e04: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183e04u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183e08: 0xc060450  jal         func_181140
    ctx->pc = 0x183E08u;
    SET_GPR_U32(ctx, 31, 0x183E10u);
    ctx->pc = 0x183E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E08u;
    // 0x183e0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183E08u, 0x183E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E10u;
label_183e10:
    // 0x183e10: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x183e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x183e14: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x183e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x183e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e1c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x183e1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x183e20: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x183e20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x183e24: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183e24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183e28: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183e28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183e2c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183e2cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183e30: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183e30u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183e34: 0xc060450  jal         func_181140
    ctx->pc = 0x183E34u;
    SET_GPR_U32(ctx, 31, 0x183E3Cu);
    ctx->pc = 0x183E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E34u;
    // 0x183e38: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183E34u, 0x183E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E3Cu;
label_183e3c:
    // 0x183e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e40: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x183e40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x183e44: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183e44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183e48: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183e48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183e4c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183e4cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183e50: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x183e50u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x183e54: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183e54u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183e58: 0xc060450  jal         func_181140
    ctx->pc = 0x183E58u;
    SET_GPR_U32(ctx, 31, 0x183E60u);
    ctx->pc = 0x183E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E58u;
    // 0x183e5c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183E58u, 0x183E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E60u;
label_183e60:
    // 0x183e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e64: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x183e64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x183e68: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x183e68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x183e6c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183e6cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183e70: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183e70u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183e74: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x183e74u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x183e78: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183e78u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183e7c: 0xc060450  jal         func_181140
    ctx->pc = 0x183E7Cu;
    SET_GPR_U32(ctx, 31, 0x183E84u);
    ctx->pc = 0x183E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183E7Cu;
    // 0x183e80: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183E7Cu, 0x183E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E84u;
label_183e84:
    // 0x183e84: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x183e84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x183e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e8c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x183e8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x183e90: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183e90u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183e94: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183e94u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183e98: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x183e98u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x183e9c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183e9cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183ea0: 0xc060450  jal         func_181140
    ctx->pc = 0x183EA0u;
    SET_GPR_U32(ctx, 31, 0x183EA8u);
    ctx->pc = 0x183EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183EA0u;
    // 0x183ea4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183EA0u, 0x183EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183EA8u;
label_183ea8:
    // 0x183ea8: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x183ea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x183eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183eb0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x183eb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x183eb4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183eb4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183eb8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183eb8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183ebc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183ebcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183ec0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183ec0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183ec4: 0xc060450  jal         func_181140
    ctx->pc = 0x183EC4u;
    SET_GPR_U32(ctx, 31, 0x183ECCu);
    ctx->pc = 0x183EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183EC4u;
    // 0x183ec8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183EC4u, 0x183ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183ECCu;
label_183ecc:
    // 0x183ecc: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x183eccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x183ed0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x183ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x183ed4: 0x46006c46  mov.s       $f17, $f13
    ctx->pc = 0x183ed4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    // 0x183ed8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x183ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x183edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ee0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183ee0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183ee4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183ee4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183ee8: 0xc060450  jal         func_181140
    ctx->pc = 0x183EE8u;
    SET_GPR_U32(ctx, 31, 0x183EF0u);
    ctx->pc = 0x183EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183EE8u;
    // 0x183eec: 0x4600bc06  mov.s       $f16, $f23 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183EE8u, 0x183EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183EF0u;
label_183ef0:
    // 0x183ef0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x183ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x183ef4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x183ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x183ef8: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x183ef8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183efc: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x183efcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x183f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f04: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x183f04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x183f08: 0xc06049e  jal         func_181278
    ctx->pc = 0x183F08u;
    SET_GPR_U32(ctx, 31, 0x183F10u);
    ctx->pc = 0x183F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F08u;
    // 0x183f0c: 0x46007406  mov.s       $f16, $f14 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x183F08u, 0x183F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F10u;
label_183f10:
    // 0x183f10: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x183f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x183f14: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x183f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x183f18: 0x4600ec46  mov.s       $f17, $f29
    ctx->pc = 0x183f18u;
    ctx->f[17] = FPU_MOV_S(ctx->f[29]);
    // 0x183f1c: 0x3c01442f  lui         $at, 0x442F
    ctx->pc = 0x183f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17455 << 16));
    // 0x183f20: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x183f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x183f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x183f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183f2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183f30: 0x3c01402c  lui         $at, 0x402C
    ctx->pc = 0x183f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16428 << 16));
    // 0x183f34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x183f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x183f38: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x183f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x183f3c: 0xc0604a6  jal         func_181298
    ctx->pc = 0x183F3Cu;
    SET_GPR_U32(ctx, 31, 0x183F44u);
    ctx->pc = 0x183F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F3Cu;
    // 0x183f40: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x183F3Cu, 0x183F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F44u;
label_183f44:
    // 0x183f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x183f48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x183f4c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183f4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183f50: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x183F50u;
    SET_GPR_U32(ctx, 31, 0x183F58u);
    ctx->pc = 0x183F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F50u;
    // 0x183f54: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x183F50u, 0x183F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F58u;
label_183f58:
    // 0x183f58: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x183f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x183f5c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x183f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x183f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183f64: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x183f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x183f68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x183f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f6c: 0xe47b0104  swc1        $f27, 0x104($v1)
    ctx->pc = 0x183f6cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x183f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f74: 0xe49b0108  swc1        $f27, 0x108($a0)
    ctx->pc = 0x183f74u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x183f78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x183f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x183f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f80: 0xa202013b  sb          $v0, 0x13B($s0)
    ctx->pc = 0x183f80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 2));
    // 0x183f84: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x183f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x183f88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x183f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f8c: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x183f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x183f90: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x183f90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f94: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x183f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x183f98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x183f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f9c: 0xe4bd013c  swc1        $f29, 0x13C($a1)
    ctx->pc = 0x183f9cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 316), bits); }
    // 0x183fa0: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x183fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x183fa4: 0xe4c00140  swc1        $f0, 0x140($a2)
    ctx->pc = 0x183fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 320), bits); }
    // 0x183fa8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x183fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183fac: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x183facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x183fb0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x183fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x183fb4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x183fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x183fb8: 0xe6350148  swc1        $f21, 0x148($s1)
    ctx->pc = 0x183fb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x183fbc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x183FBCu;
    SET_GPR_U32(ctx, 31, 0x183FC4u);
    ctx->pc = 0x183FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FBCu;
    // 0x183fc0: 0x24a5f870  addiu       $a1, $a1, -0x790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x183FBCu, 0x183FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FC4u;
label_183fc4:
    // 0x183fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183fcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x183fccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183fd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x183fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183fd4: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x183fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x183fd8: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x183fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x183fdc: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x183fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x183fe0: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x183fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x183fe4: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x183fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x183fe8: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x183fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x183fec: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x183fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x183ff0: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x183ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x183ff4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x183ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x183ff8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x183ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x183FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FFCu;
        // 0x184000: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184004u;
    // 0x184004: 0x0  nop
    ctx->pc = 0x184004u;
    // NOP
    ctx->pc = 0x184008u;
}
