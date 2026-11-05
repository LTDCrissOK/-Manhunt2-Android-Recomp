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

// Function: sub_00182A30
// Address: 0x182a30 - 0x182dd8
void sub_00182A30_0x182a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182A30_0x182a30");
#endif

    switch (ctx->pc) {
        case 0x182ad0u: goto label_182ad0;
        case 0x182b04u: goto label_182b04;
        case 0x182b30u: goto label_182b30;
        case 0x182b5cu: goto label_182b5c;
        case 0x182b8cu: goto label_182b8c;
        case 0x182bb8u: goto label_182bb8;
        case 0x182be4u: goto label_182be4;
        case 0x182c08u: goto label_182c08;
        case 0x182c2cu: goto label_182c2c;
        case 0x182c54u: goto label_182c54;
        case 0x182c78u: goto label_182c78;
        case 0x182c9cu: goto label_182c9c;
        case 0x182cc0u: goto label_182cc0;
        case 0x182cdcu: goto label_182cdc;
        case 0x182d10u: goto label_182d10;
        case 0x182d24u: goto label_182d24;
        case 0x182d9cu: goto label_182d9c;
        default: break;
    }

    ctx->pc = 0x182a30u;

    // 0x182a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x182a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x182a34: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x182a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x182a38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x182a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182a3c: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x182a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x182a40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182a44: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x182a44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x182a48: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x182a48u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x182a4c: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x182a4cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x182a50: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x182a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x182a54: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x182a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x182a58: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x182a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x182a5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x182a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182a60: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x182a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x182a64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x182a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x182a68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x182a68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182a70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x182a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x182a74: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x182a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x182a78: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x182a78u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x182a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a80: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x182a80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x182a84: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182a84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182a88: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x182a88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x182a8c: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x182a8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x182a90: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x182a90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x182a94: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x182a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x182a98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x182a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182a9c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x182a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x182aa0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x182aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x182aa4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x182aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x182aa8: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x182aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x182aac: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x182aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x182ab0: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x182ab0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x182ab4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x182ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x182ab8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x182ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x182abc: 0x4600dbc6  mov.s       $f15, $f27
    ctx->pc = 0x182abcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[27]);
    // 0x182ac0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x182ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x182ac4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x182ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x182ac8: 0xc060498  jal         func_181260
    ctx->pc = 0x182AC8u;
    SET_GPR_U32(ctx, 31, 0x182AD0u);
    ctx->pc = 0x182ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182AC8u;
    // 0x182acc: 0xe460012c  swc1        $f0, 0x12C($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x182AC8u, 0x182AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182AD0u;
label_182ad0:
    // 0x182ad0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x182ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x182ad4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x182ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x182ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182adc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x182adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x182ae0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x182ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x182ae4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x182ae4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x182ae8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182ae8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182aec: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182aecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182af0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x182af0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x182af4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182af4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182af8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182af8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182afc: 0xc060450  jal         func_181140
    ctx->pc = 0x182AFCu;
    SET_GPR_U32(ctx, 31, 0x182B04u);
    ctx->pc = 0x182B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182AFCu;
    // 0x182b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182AFCu, 0x182B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B04u;
label_182b04:
    // 0x182b04: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x182b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x182b08: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x182b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x182b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b10: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182b10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182b14: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x182b14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x182b18: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182b18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182b1c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182b1cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182b20: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182b20u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182b24: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182b24u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182b28: 0xc060450  jal         func_181140
    ctx->pc = 0x182B28u;
    SET_GPR_U32(ctx, 31, 0x182B30u);
    ctx->pc = 0x182B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182B28u;
    // 0x182b2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182B28u, 0x182B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B30u;
label_182b30:
    // 0x182b30: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x182b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x182b34: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x182b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x182b38: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x182b38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x182b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b40: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182b40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182b44: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182b44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182b48: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182b48u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182b4c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182b4cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182b50: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182b50u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182b54: 0xc060450  jal         func_181140
    ctx->pc = 0x182B54u;
    SET_GPR_U32(ctx, 31, 0x182B5Cu);
    ctx->pc = 0x182B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182B54u;
    // 0x182b58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182B54u, 0x182B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B5Cu;
label_182b5c:
    // 0x182b5c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x182b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x182b60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x182b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x182b64: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x182b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x182b68: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x182b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x182b6c: 0x4600db86  mov.s       $f14, $f27
    ctx->pc = 0x182b6cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
    // 0x182b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b74: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x182b74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x182b78: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182b78u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182b7c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182b7cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182b80: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182b80u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182b84: 0xc060450  jal         func_181140
    ctx->pc = 0x182B84u;
    SET_GPR_U32(ctx, 31, 0x182B8Cu);
    ctx->pc = 0x182B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182B84u;
    // 0x182b88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182B84u, 0x182B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B8Cu;
label_182b8c:
    // 0x182b8c: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x182b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x182b90: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x182b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x182b94: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x182b94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x182b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b9c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182b9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182ba0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182ba0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182ba4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182ba4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182ba8: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x182ba8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x182bac: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182bacu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182bb0: 0xc060450  jal         func_181140
    ctx->pc = 0x182BB0u;
    SET_GPR_U32(ctx, 31, 0x182BB8u);
    ctx->pc = 0x182BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182BB0u;
    // 0x182bb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182BB0u, 0x182BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BB8u;
label_182bb8:
    // 0x182bb8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x182bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x182bbc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x182bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x182bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bc4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x182bc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x182bc8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x182bc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x182bcc: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x182bccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x182bd0: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x182bd0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x182bd4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182bd4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182bd8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182bd8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182bdc: 0xc060450  jal         func_181140
    ctx->pc = 0x182BDCu;
    SET_GPR_U32(ctx, 31, 0x182BE4u);
    ctx->pc = 0x182BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182BDCu;
    // 0x182be0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182BDCu, 0x182BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BE4u;
label_182be4:
    // 0x182be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182be8: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x182be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x182bec: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x182becu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x182bf0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x182bf0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x182bf4: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x182bf4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x182bf8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182bf8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182bfc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182bfcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182c00: 0xc060450  jal         func_181140
    ctx->pc = 0x182C00u;
    SET_GPR_U32(ctx, 31, 0x182C08u);
    ctx->pc = 0x182C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C00u;
    // 0x182c04: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182C00u, 0x182C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C08u;
label_182c08:
    // 0x182c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c0c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x182c0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x182c10: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182c10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182c14: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182c14u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182c18: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182c18u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182c1c: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x182c1cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x182c20: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182c20u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182c24: 0xc060450  jal         func_181140
    ctx->pc = 0x182C24u;
    SET_GPR_U32(ctx, 31, 0x182C2Cu);
    ctx->pc = 0x182C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C24u;
    // 0x182c28: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182C24u, 0x182C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C2Cu;
label_182c2c:
    // 0x182c2c: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x182c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x182c30: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x182c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x182c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c38: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x182c38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x182c3c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x182c3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x182c40: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182c40u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182c44: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x182c44u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x182c48: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182c48u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182c4c: 0xc060450  jal         func_181140
    ctx->pc = 0x182C4Cu;
    SET_GPR_U32(ctx, 31, 0x182C54u);
    ctx->pc = 0x182C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C4Cu;
    // 0x182c50: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182C4Cu, 0x182C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C54u;
label_182c54:
    // 0x182c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c58: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x182c58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x182c5c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x182c5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x182c60: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x182c60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x182c64: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182c64u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182c68: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x182c68u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x182c6c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182c6cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182c70: 0xc060450  jal         func_181140
    ctx->pc = 0x182C70u;
    SET_GPR_U32(ctx, 31, 0x182C78u);
    ctx->pc = 0x182C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C70u;
    // 0x182c74: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182C70u, 0x182C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C78u;
label_182c78:
    // 0x182c78: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x182c78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x182c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c80: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x182c80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x182c84: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x182c84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x182c88: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x182c88u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x182c8c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x182c8cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x182c90: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182c90u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182c94: 0xc060450  jal         func_181140
    ctx->pc = 0x182C94u;
    SET_GPR_U32(ctx, 31, 0x182C9Cu);
    ctx->pc = 0x182C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182C94u;
    // 0x182c98: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182C94u, 0x182C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C9Cu;
label_182c9c:
    // 0x182c9c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x182c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x182ca0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x182ca0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x182ca4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x182ca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x182ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cac: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x182cacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x182cb0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182cb0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182cb4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x182cb4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x182cb8: 0xc060450  jal         func_181140
    ctx->pc = 0x182CB8u;
    SET_GPR_U32(ctx, 31, 0x182CC0u);
    ctx->pc = 0x182CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CB8u;
    // 0x182cbc: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x182CB8u, 0x182CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182CC0u;
label_182cc0:
    // 0x182cc0: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x182cc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x182cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cc8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x182cc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x182ccc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x182cccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x182cd0: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x182cd0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x182cd4: 0xc06049e  jal         func_181278
    ctx->pc = 0x182CD4u;
    SET_GPR_U32(ctx, 31, 0x182CDCu);
    ctx->pc = 0x182CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CD4u;
    // 0x182cd8: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x182CD4u, 0x182CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182CDCu;
label_182cdc:
    // 0x182cdc: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x182cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x182ce0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x182ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x182ce4: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x182ce4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x182ce8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x182ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x182cec: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x182cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x182cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x182cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x182cf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x182cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x182cfc: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x182cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x182d00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x182d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x182d04: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x182d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x182d08: 0xc0604a6  jal         func_181298
    ctx->pc = 0x182D08u;
    SET_GPR_U32(ctx, 31, 0x182D10u);
    ctx->pc = 0x182D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D08u;
    // 0x182d0c: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x182D08u, 0x182D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D10u;
label_182d10:
    // 0x182d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x182d14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x182d18: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x182d18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x182d1c: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x182D1Cu;
    SET_GPR_U32(ctx, 31, 0x182D24u);
    ctx->pc = 0x182D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D1Cu;
    // 0x182d20: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x182D1Cu, 0x182D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D24u;
label_182d24:
    // 0x182d24: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x182d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x182d28: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x182d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x182d2c: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x182d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x182d30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x182d30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d34: 0xe4780104  swc1        $f24, 0x104($v1)
    ctx->pc = 0x182d34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x182d38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d3c: 0xe4980108  swc1        $f24, 0x108($a0)
    ctx->pc = 0x182d3cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x182d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182d44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x182d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x182d48: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x182d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x182d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x182d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182d50: 0xa202013b  sb          $v0, 0x13B($s0)
    ctx->pc = 0x182d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 2));
    // 0x182d54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x182d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d58: 0xa2060139  sb          $a2, 0x139($s0)
    ctx->pc = 0x182d58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 6));
    // 0x182d5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x182d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d60: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x182d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x182d64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x182d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d68: 0xa2060138  sb          $a2, 0x138($s0)
    ctx->pc = 0x182d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 6));
    // 0x182d6c: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x182d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x182d70: 0xe4a0013c  swc1        $f0, 0x13C($a1)
    ctx->pc = 0x182d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 316), bits); }
    // 0x182d74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x182d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d78: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x182d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x182d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x182d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182d80: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x182d84: 0xe45a0140  swc1        $f26, 0x140($v0)
    ctx->pc = 0x182d84u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x182d88: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x182d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x182d8c: 0xe4e00144  swc1        $f0, 0x144($a3)
    ctx->pc = 0x182d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 324), bits); }
    // 0x182d90: 0x24a5f840  addiu       $a1, $a1, -0x7C0
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965312));
    // 0x182d94: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x182D94u;
    SET_GPR_U32(ctx, 31, 0x182D9Cu);
    ctx->pc = 0x182D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182D94u;
    // 0x182d98: 0xe6370148  swc1        $f23, 0x148($s1) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x182D94u, 0x182D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182D9Cu;
label_182d9c:
    // 0x182d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182da0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182da4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182da8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x182da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182dac: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x182dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x182db0: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x182db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x182db4: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x182db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x182db8: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x182db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x182dbc: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x182dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x182dc0: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x182dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x182dc4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x182dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x182dc8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x182dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x182dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x182DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DCCu;
        // 0x182dd0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182DD4u;
    // 0x182dd4: 0x0  nop
    ctx->pc = 0x182dd4u;
    // NOP
    ctx->pc = 0x182dd8u;
}
