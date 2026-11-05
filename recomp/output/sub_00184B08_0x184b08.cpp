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

// Function: sub_00184B08
// Address: 0x184b08 - 0x184eb0
void sub_00184B08_0x184b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184B08_0x184b08");
#endif

    switch (ctx->pc) {
        case 0x184ba8u: goto label_184ba8;
        case 0x184bdcu: goto label_184bdc;
        case 0x184c08u: goto label_184c08;
        case 0x184c34u: goto label_184c34;
        case 0x184c64u: goto label_184c64;
        case 0x184c90u: goto label_184c90;
        case 0x184cbcu: goto label_184cbc;
        case 0x184ce0u: goto label_184ce0;
        case 0x184d04u: goto label_184d04;
        case 0x184d28u: goto label_184d28;
        case 0x184d4cu: goto label_184d4c;
        case 0x184d70u: goto label_184d70;
        case 0x184d94u: goto label_184d94;
        case 0x184db0u: goto label_184db0;
        case 0x184de4u: goto label_184de4;
        case 0x184df8u: goto label_184df8;
        case 0x184e6cu: goto label_184e6c;
        default: break;
    }

    ctx->pc = 0x184b08u;

    // 0x184b08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x184b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x184b0c: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x184b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x184b10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x184b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x184b14: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x184b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x184b18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x184b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x184b1c: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x184b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x184b20: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x184b20u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x184b24: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x184b24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x184b28: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x184b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x184b2c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x184b2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x184b30: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x184b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x184b34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184b38: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x184b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x184b3c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x184b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x184b40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184b44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x184b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x184b48: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x184b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x184b4c: 0xe7be0070  swc1        $f30, 0x70($sp)
    ctx->pc = 0x184b4cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x184b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b54: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x184b54u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x184b58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184b58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184b5c: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x184b5cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x184b60: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184b60u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184b64: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x184b64u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x184b68: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x184b68u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x184b6c: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x184b6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x184b70: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x184b70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x184b74: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x184b74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x184b78: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x184b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x184b7c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x184b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x184b80: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x184b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x184b84: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x184b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x184b88: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x184b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x184b8c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x184b8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x184b90: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x184b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x184b94: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x184b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x184b98: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x184b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x184b9c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x184b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x184ba0: 0xc060498  jal         func_181260
    ctx->pc = 0x184BA0u;
    SET_GPR_U32(ctx, 31, 0x184BA8u);
    ctx->pc = 0x184BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BA0u;
    // 0x184ba4: 0xe45b012c  swc1        $f27, 0x12C($v0) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x184BA0u, 0x184BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BA8u;
label_184ba8:
    // 0x184ba8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x184ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x184bac: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x184bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x184bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bb4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x184bb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184bb8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x184bb8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x184bbc: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x184bbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x184bc0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184bc0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184bc4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184bc4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184bc8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184bc8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184bcc: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x184bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x184bd0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x184bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x184bd4: 0xc060450  jal         func_181140
    ctx->pc = 0x184BD4u;
    SET_GPR_U32(ctx, 31, 0x184BDCu);
    ctx->pc = 0x184BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BD4u;
    // 0x184bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184BD4u, 0x184BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BDCu;
label_184bdc:
    // 0x184bdc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x184bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x184be0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x184be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x184be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184be8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x184be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184bec: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x184becu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x184bf0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184bf0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184bf4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184bf4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184bf8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184bf8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184bfc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184bfcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184c00: 0xc060450  jal         func_181140
    ctx->pc = 0x184C00u;
    SET_GPR_U32(ctx, 31, 0x184C08u);
    ctx->pc = 0x184C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C00u;
    // 0x184c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184C00u, 0x184C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C08u;
label_184c08:
    // 0x184c08: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x184c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x184c0c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x184c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x184c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c14: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x184c14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184c18: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x184c18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x184c1c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184c1cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184c20: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184c20u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184c24: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184c24u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184c28: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184c28u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184c2c: 0xc060450  jal         func_181140
    ctx->pc = 0x184C2Cu;
    SET_GPR_U32(ctx, 31, 0x184C34u);
    ctx->pc = 0x184C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C2Cu;
    // 0x184c30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184C2Cu, 0x184C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C34u;
label_184c34:
    // 0x184c34: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x184c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x184c38: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x184c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x184c3c: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x184c40: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x184c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x184c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c48: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x184c48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x184c4c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x184c4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x184c50: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184c50u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184c54: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184c54u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184c58: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184c58u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184c5c: 0xc060450  jal         func_181140
    ctx->pc = 0x184C5Cu;
    SET_GPR_U32(ctx, 31, 0x184C64u);
    ctx->pc = 0x184C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C5Cu;
    // 0x184c60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184C5Cu, 0x184C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C64u;
label_184c64:
    // 0x184c64: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x184c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x184c68: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x184c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x184c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c70: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x184c70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184c74: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184c74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184c78: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184c78u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184c7c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184c7cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184c80: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x184c80u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x184c84: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184c84u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184c88: 0xc060450  jal         func_181140
    ctx->pc = 0x184C88u;
    SET_GPR_U32(ctx, 31, 0x184C90u);
    ctx->pc = 0x184C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C88u;
    // 0x184c8c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184C88u, 0x184C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C90u;
label_184c90:
    // 0x184c90: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x184c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x184c94: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x184c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x184c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c9c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184c9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184ca0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x184ca0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x184ca4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x184ca4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x184ca8: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x184ca8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x184cac: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184cacu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184cb0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184cb0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184cb4: 0xc060450  jal         func_181140
    ctx->pc = 0x184CB4u;
    SET_GPR_U32(ctx, 31, 0x184CBCu);
    ctx->pc = 0x184CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CB4u;
    // 0x184cb8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184CB4u, 0x184CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CBCu;
label_184cbc:
    // 0x184cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cc0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184cc4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x184cc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x184cc8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x184cc8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x184ccc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184cccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184cd0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184cd0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184cd4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184cd4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184cd8: 0xc060450  jal         func_181140
    ctx->pc = 0x184CD8u;
    SET_GPR_U32(ctx, 31, 0x184CE0u);
    ctx->pc = 0x184CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CD8u;
    // 0x184cdc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184CD8u, 0x184CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CE0u;
label_184ce0:
    // 0x184ce0: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x184ce0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x184ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ce8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184ce8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184cec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184cecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184cf0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184cf0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184cf4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184cf4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184cf8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184cf8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184cfc: 0xc060450  jal         func_181140
    ctx->pc = 0x184CFCu;
    SET_GPR_U32(ctx, 31, 0x184D04u);
    ctx->pc = 0x184D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CFCu;
    // 0x184d00: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184CFCu, 0x184D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D04u;
label_184d04:
    // 0x184d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d08: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184d08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184d0c: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x184d0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x184d10: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184d10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184d14: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x184d14u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x184d18: 0x4600ec06  mov.s       $f16, $f29
    ctx->pc = 0x184d18u;
    ctx->f[16] = FPU_MOV_S(ctx->f[29]);
    // 0x184d1c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184d1cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184d20: 0xc060450  jal         func_181140
    ctx->pc = 0x184D20u;
    SET_GPR_U32(ctx, 31, 0x184D28u);
    ctx->pc = 0x184D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D20u;
    // 0x184d24: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184D20u, 0x184D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D28u;
label_184d28:
    // 0x184d28: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x184d28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x184d2c: 0x4600ec06  mov.s       $f16, $f29
    ctx->pc = 0x184d2cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[29]);
    // 0x184d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d34: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184d34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184d38: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184d38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184d3c: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x184d3cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x184d40: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184d40u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184d44: 0xc060450  jal         func_181140
    ctx->pc = 0x184D44u;
    SET_GPR_U32(ctx, 31, 0x184D4Cu);
    ctx->pc = 0x184D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D44u;
    // 0x184d48: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184D44u, 0x184D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D4Cu;
label_184d4c:
    // 0x184d4c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184d4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d54: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x184d54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x184d58: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184d58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184d5c: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x184d5cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x184d60: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184d60u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184d64: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184d64u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184d68: 0xc060450  jal         func_181140
    ctx->pc = 0x184D68u;
    SET_GPR_U32(ctx, 31, 0x184D70u);
    ctx->pc = 0x184D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D68u;
    // 0x184d6c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184D68u, 0x184D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D70u;
label_184d70:
    // 0x184d70: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x184d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x184d74: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x184d74u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x184d78: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x184d78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x184d7c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x184d7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x184d80: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x184d80u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x184d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d88: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184d88u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184d8c: 0xc060450  jal         func_181140
    ctx->pc = 0x184D8Cu;
    SET_GPR_U32(ctx, 31, 0x184D94u);
    ctx->pc = 0x184D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D8Cu;
    // 0x184d90: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184D8Cu, 0x184D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D94u;
label_184d94:
    // 0x184d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d98: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x184d98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x184d9c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184d9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184da0: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x184da0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x184da4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184da4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184da8: 0xc06049e  jal         func_181278
    ctx->pc = 0x184DA8u;
    SET_GPR_U32(ctx, 31, 0x184DB0u);
    ctx->pc = 0x184DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DA8u;
    // 0x184dac: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x184DA8u, 0x184DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DB0u;
label_184db0:
    // 0x184db0: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x184db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x184db4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x184db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x184db8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x184db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x184dbc: 0x4600f446  mov.s       $f17, $f30
    ctx->pc = 0x184dbcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[30]);
    // 0x184dc0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x184dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x184dc4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x184dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x184dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184dd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x184dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x184dd4: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x184dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x184dd8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x184dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x184ddc: 0xc0604a6  jal         func_181298
    ctx->pc = 0x184DDCu;
    SET_GPR_U32(ctx, 31, 0x184DE4u);
    ctx->pc = 0x184DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DDCu;
    // 0x184de0: 0x4600e386  mov.s       $f14, $f28 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x184DDCu, 0x184DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DE4u;
label_184de4:
    // 0x184de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184de8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184de8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184dec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184decu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184df0: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x184DF0u;
    SET_GPR_U32(ctx, 31, 0x184DF8u);
    ctx->pc = 0x184DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DF0u;
    // 0x184df4: 0x4600e386  mov.s       $f14, $f28 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x184DF0u, 0x184DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DF8u;
label_184df8:
    // 0x184df8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x184df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x184dfc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x184dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x184e00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x184e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184e04: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x184e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x184e08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x184e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e0c: 0xe4780104  swc1        $f24, 0x104($v1)
    ctx->pc = 0x184e0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x184e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x184e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e14: 0xe4980108  swc1        $f24, 0x108($a0)
    ctx->pc = 0x184e14u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x184e18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x184e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184e1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184e20: 0xa202013b  sb          $v0, 0x13B($s0)
    ctx->pc = 0x184e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 2));
    // 0x184e24: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x184e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x184e28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x184e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e2c: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x184e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x184e30: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x184e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e34: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x184e34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x184e38: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x184e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e3c: 0xe4be013c  swc1        $f30, 0x13C($a1)
    ctx->pc = 0x184e3cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 316), bits); }
    // 0x184e40: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x184e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x184e44: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x184e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x184e48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184e4c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x184e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e50: 0xe4c10140  swc1        $f1, 0x140($a2)
    ctx->pc = 0x184e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 320), bits); }
    // 0x184e54: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x184e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x184e58: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x184e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x184e5c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x184e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x184e60: 0xe63c0148  swc1        $f28, 0x148($s1)
    ctx->pc = 0x184e60u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x184e64: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x184E64u;
    SET_GPR_U32(ctx, 31, 0x184E6Cu);
    ctx->pc = 0x184E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E64u;
    // 0x184e68: 0x24a5f8b0  addiu       $a1, $a1, -0x750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x184E64u, 0x184E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E6Cu;
label_184e6c:
    // 0x184e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x184e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184e74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x184e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184e78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x184e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184e7c: 0xc7be0070  lwc1        $f30, 0x70($sp)
    ctx->pc = 0x184e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x184e80: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x184e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x184e84: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x184e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x184e88: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x184e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x184e8c: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x184e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x184e90: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x184e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x184e94: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x184e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x184e98: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x184e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x184e9c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x184e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x184ea0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x184ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x184ea4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x184ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x184ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x184EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EA8u;
        // 0x184eac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184EB0u;
}
