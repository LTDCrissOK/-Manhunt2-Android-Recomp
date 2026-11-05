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

// Function: sub_00181A20
// Address: 0x181a20 - 0x181d28
void sub_00181A20_0x181a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181A20_0x181a20");
#endif

    switch (ctx->pc) {
        case 0x181aacu: goto label_181aac;
        case 0x181ad0u: goto label_181ad0;
        case 0x181afcu: goto label_181afc;
        case 0x181b28u: goto label_181b28;
        case 0x181b4cu: goto label_181b4c;
        case 0x181b70u: goto label_181b70;
        case 0x181b94u: goto label_181b94;
        case 0x181bb8u: goto label_181bb8;
        case 0x181bdcu: goto label_181bdc;
        case 0x181c00u: goto label_181c00;
        case 0x181c24u: goto label_181c24;
        case 0x181c48u: goto label_181c48;
        case 0x181c6cu: goto label_181c6c;
        case 0x181c88u: goto label_181c88;
        case 0x181cb4u: goto label_181cb4;
        case 0x181cccu: goto label_181ccc;
        case 0x181cf8u: goto label_181cf8;
        default: break;
    }

    ctx->pc = 0x181a20u;

    // 0x181a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x181a24: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x181a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x181a28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x181a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x181a2c: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x181a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x181a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x181a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181a34: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x181a38: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x181a38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x181a3c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x181a3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x181a40: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x181a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x181a44: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x181a44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x181a48: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x181a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x181a4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x181a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181a50: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x181a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x181a54: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x181a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x181a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181a5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x181a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x181a60: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x181a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x181a64: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x181a64u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x181a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a6c: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x181a6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x181a70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181a70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181a74: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x181a74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x181a78: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181a78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181a7c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x181a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x181a80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x181a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x181a84: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x181a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x181a88: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x181a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x181a8c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x181a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x181a90: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x181a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x181a94: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x181a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x181a98: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x181a98u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x181a9c: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x181a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x181aa0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x181aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x181aa4: 0xc060498  jal         func_181260
    ctx->pc = 0x181AA4u;
    SET_GPR_U32(ctx, 31, 0x181AACu);
    ctx->pc = 0x181AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181AA4u;
    // 0x181aa8: 0xe455012c  swc1        $f21, 0x12C($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x181AA4u, 0x181AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AACu;
label_181aac:
    // 0x181aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ab0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181ab0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181ab4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181ab4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x181ab8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x181ab8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x181abc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181abcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181ac0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181ac0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181ac4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181ac4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181ac8: 0xc060450  jal         func_181140
    ctx->pc = 0x181AC8u;
    SET_GPR_U32(ctx, 31, 0x181AD0u);
    ctx->pc = 0x181ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181AC8u;
    // 0x181acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181AC8u, 0x181AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AD0u;
label_181ad0:
    // 0x181ad0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x181ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x181ad4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x181ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x181ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181adc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181adcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x181ae0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x181ae0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x181ae4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181ae4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181ae8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181ae8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181aec: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181aecu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181af0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181af0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181af4: 0xc060450  jal         func_181140
    ctx->pc = 0x181AF4u;
    SET_GPR_U32(ctx, 31, 0x181AFCu);
    ctx->pc = 0x181AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181AF4u;
    // 0x181af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181AF4u, 0x181AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AFCu;
label_181afc:
    // 0x181afc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x181afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x181b00: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x181b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x181b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b08: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181b08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x181b0c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x181b0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x181b10: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181b10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181b14: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x181b14u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x181b18: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181b18u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181b1c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181b1cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181b20: 0xc060450  jal         func_181140
    ctx->pc = 0x181B20u;
    SET_GPR_U32(ctx, 31, 0x181B28u);
    ctx->pc = 0x181B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B20u;
    // 0x181b24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181B20u, 0x181B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B28u;
label_181b28:
    // 0x181b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181b2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181b30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181b30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181b34: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x181b34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x181b38: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181b38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181b3c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181b3cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181b40: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181b40u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181b44: 0xc060450  jal         func_181140
    ctx->pc = 0x181B44u;
    SET_GPR_U32(ctx, 31, 0x181B4Cu);
    ctx->pc = 0x181B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B44u;
    // 0x181b48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181B44u, 0x181B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B4Cu;
label_181b4c:
    // 0x181b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181b50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181b54: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181b54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181b58: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181b58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181b5c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181b5cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181b60: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x181b60u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x181b64: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181b64u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181b68: 0xc060450  jal         func_181140
    ctx->pc = 0x181B68u;
    SET_GPR_U32(ctx, 31, 0x181B70u);
    ctx->pc = 0x181B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B68u;
    // 0x181b6c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181B68u, 0x181B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B70u;
label_181b70:
    // 0x181b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181b74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181b78: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181b78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181b7c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x181b7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x181b80: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x181b80u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x181b84: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181b84u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181b88: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181b88u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181b8c: 0xc060450  jal         func_181140
    ctx->pc = 0x181B8Cu;
    SET_GPR_U32(ctx, 31, 0x181B94u);
    ctx->pc = 0x181B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B8Cu;
    // 0x181b90: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181B8Cu, 0x181B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181B94u;
label_181b94:
    // 0x181b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181b98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181b9c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x181b9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x181ba0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181ba0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181ba4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181ba4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181ba8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181ba8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181bac: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181bacu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181bb0: 0xc060450  jal         func_181140
    ctx->pc = 0x181BB0u;
    SET_GPR_U32(ctx, 31, 0x181BB8u);
    ctx->pc = 0x181BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BB0u;
    // 0x181bb4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181BB0u, 0x181BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BB8u;
label_181bb8:
    // 0x181bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181bbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181bc0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181bc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181bc4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181bc4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181bc8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181bc8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181bcc: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x181bccu;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x181bd0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181bd0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181bd4: 0xc060450  jal         func_181140
    ctx->pc = 0x181BD4u;
    SET_GPR_U32(ctx, 31, 0x181BDCu);
    ctx->pc = 0x181BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BD4u;
    // 0x181bd8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181BD4u, 0x181BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BDCu;
label_181bdc:
    // 0x181bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181be0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181be0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181be4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x181be4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x181be8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181be8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181bec: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181becu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181bf0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181bf0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181bf4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181bf4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181bf8: 0xc060450  jal         func_181140
    ctx->pc = 0x181BF8u;
    SET_GPR_U32(ctx, 31, 0x181C00u);
    ctx->pc = 0x181BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BF8u;
    // 0x181bfc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181BF8u, 0x181C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C00u;
label_181c00:
    // 0x181c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181c04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181c08: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x181c08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x181c0c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181c0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181c10: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x181c10u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x181c14: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181c14u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181c18: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181c18u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181c1c: 0xc060450  jal         func_181140
    ctx->pc = 0x181C1Cu;
    SET_GPR_U32(ctx, 31, 0x181C24u);
    ctx->pc = 0x181C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C1Cu;
    // 0x181c20: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181C1Cu, 0x181C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C24u;
label_181c24:
    // 0x181c24: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x181c24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x181c28: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x181c28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x181c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c30: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x181c30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x181c34: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181c34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181c38: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181c38u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181c3c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181c3cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181c40: 0xc060450  jal         func_181140
    ctx->pc = 0x181C40u;
    SET_GPR_U32(ctx, 31, 0x181C48u);
    ctx->pc = 0x181C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C40u;
    // 0x181c44: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181C40u, 0x181C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C48u;
label_181c48:
    // 0x181c48: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x181c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x181c4c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181c4cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181c54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181c58: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x181c58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x181c5c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181c5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181c60: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181c60u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181c64: 0xc060450  jal         func_181140
    ctx->pc = 0x181C64u;
    SET_GPR_U32(ctx, 31, 0x181C6Cu);
    ctx->pc = 0x181C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C64u;
    // 0x181c68: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181C64u, 0x181C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C6Cu;
label_181c6c:
    // 0x181c6c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x181c6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x181c70: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x181c70u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x181c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181c78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181c7c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x181c7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x181c80: 0xc06049e  jal         func_181278
    ctx->pc = 0x181C80u;
    SET_GPR_U32(ctx, 31, 0x181C88u);
    ctx->pc = 0x181C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C80u;
    // 0x181c84: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x181C80u, 0x181C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C88u;
label_181c88:
    // 0x181c88: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x181c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x181c8c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x181c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x181c90: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181c90u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181c94: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x181c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x181c98: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x181c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x181c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x181ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x181ca4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x181ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181ca8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181ca8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181cac: 0xc0604a6  jal         func_181298
    ctx->pc = 0x181CACu;
    SET_GPR_U32(ctx, 31, 0x181CB4u);
    ctx->pc = 0x181CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CACu;
    // 0x181cb0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x181CACu, 0x181CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CB4u;
label_181cb4:
    // 0x181cb4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x181cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x181cb8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x181cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x181cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181cc4: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x181CC4u;
    SET_GPR_U32(ctx, 31, 0x181CCCu);
    ctx->pc = 0x181CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CC4u;
    // 0x181cc8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x181CC4u, 0x181CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CCCu;
label_181ccc:
    // 0x181ccc: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x181cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x181cd0: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x181cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x181cd4: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x181cd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x181cd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cdc: 0xe4750104  swc1        $f21, 0x104($v1)
    ctx->pc = 0x181cdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x181ce0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x181ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ce4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x181ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x181ce8: 0xe6350108  swc1        $f21, 0x108($s1)
    ctx->pc = 0x181ce8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x181cec: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x181cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x181cf0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x181CF0u;
    SET_GPR_U32(ctx, 31, 0x181CF8u);
    ctx->pc = 0x181CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CF0u;
    // 0x181cf4: 0x24a5f808  addiu       $a1, $a1, -0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x181CF0u, 0x181CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CF8u;
label_181cf8:
    // 0x181cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181cfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x181d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181d04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x181d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181d08: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x181d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x181d0c: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x181d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x181d10: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x181d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x181d14: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x181d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x181d18: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x181d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x181d1c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x181d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x181d20: 0x3e00008  jr          $ra
    ctx->pc = 0x181D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D20u;
        // 0x181d24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D28u;
}
