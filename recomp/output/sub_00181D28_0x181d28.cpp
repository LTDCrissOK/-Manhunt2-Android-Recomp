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

// Function: sub_00181D28
// Address: 0x181d28 - 0x182068
void sub_00181D28_0x181d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181D28_0x181d28");
#endif

    switch (ctx->pc) {
        case 0x181dc0u: goto label_181dc0;
        case 0x181df4u: goto label_181df4;
        case 0x181e18u: goto label_181e18;
        case 0x181e3cu: goto label_181e3c;
        case 0x181e60u: goto label_181e60;
        case 0x181e88u: goto label_181e88;
        case 0x181eacu: goto label_181eac;
        case 0x181ed0u: goto label_181ed0;
        case 0x181ef8u: goto label_181ef8;
        case 0x181f1cu: goto label_181f1c;
        case 0x181f44u: goto label_181f44;
        case 0x181f68u: goto label_181f68;
        case 0x181f8cu: goto label_181f8c;
        case 0x181fa8u: goto label_181fa8;
        case 0x181fe4u: goto label_181fe4;
        case 0x181ffcu: goto label_181ffc;
        case 0x182030u: goto label_182030;
        default: break;
    }

    ctx->pc = 0x181d28u;

    // 0x181d28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x181d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x181d2c: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x181d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x181d30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x181d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x181d34: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x181d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x181d38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x181d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181d3c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x181d3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x181d40: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x181d40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x181d44: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x181d44u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x181d48: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x181d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x181d4c: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x181d4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x181d50: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x181d50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x181d54: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x181d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x181d58: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x181d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x181d5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x181d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x181d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181d64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x181d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x181d68: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x181d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x181d6c: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x181d6cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x181d70: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x181d70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x181d74: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x181d74u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x181d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d7c: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x181d7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x181d80: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x181d80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x181d84: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x181d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x181d88: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x181d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x181d8c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x181d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x181d90: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x181d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x181d94: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x181d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x181d98: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x181d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x181d9c: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x181d9cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x181da0: 0xe4550128  swc1        $f21, 0x128($v0)
    ctx->pc = 0x181da0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x181da4: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x181da4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x181da8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x181da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x181dac: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x181dacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x181db0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x181db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x181db4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x181db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x181db8: 0xc060498  jal         func_181260
    ctx->pc = 0x181DB8u;
    SET_GPR_U32(ctx, 31, 0x181DC0u);
    ctx->pc = 0x181DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DB8u;
    // 0x181dbc: 0xe455012c  swc1        $f21, 0x12C($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x181DB8u, 0x181DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DC0u;
label_181dc0:
    // 0x181dc0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x181dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x181dc4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x181dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x181dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181dcc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x181dccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x181dd0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181dd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181dd4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x181dd4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x181dd8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181dd8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181ddc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181ddcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181de0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181de0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181de4: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x181de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x181de8: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x181de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x181dec: 0xc060450  jal         func_181140
    ctx->pc = 0x181DECu;
    SET_GPR_U32(ctx, 31, 0x181DF4u);
    ctx->pc = 0x181DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DECu;
    // 0x181df0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181DECu, 0x181DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DF4u;
label_181df4:
    // 0x181df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181df8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x181df8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x181dfc: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x181dfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x181e00: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x181e00u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x181e04: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181e04u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181e08: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181e08u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181e0c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181e0cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181e10: 0xc060450  jal         func_181140
    ctx->pc = 0x181E10u;
    SET_GPR_U32(ctx, 31, 0x181E18u);
    ctx->pc = 0x181E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181E10u;
    // 0x181e14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181E10u, 0x181E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E18u;
label_181e18:
    // 0x181e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e1c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x181e1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x181e20: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x181e20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x181e24: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x181e24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x181e28: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181e28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181e2c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181e2cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181e30: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181e30u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181e34: 0xc060450  jal         func_181140
    ctx->pc = 0x181E34u;
    SET_GPR_U32(ctx, 31, 0x181E3Cu);
    ctx->pc = 0x181E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181E34u;
    // 0x181e38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181E34u, 0x181E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E3Cu;
label_181e3c:
    // 0x181e3c: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x181e3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x181e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x181e44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x181e48: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181e48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181e4c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181e4cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181e50: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181e50u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181e54: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181e54u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181e58: 0xc060450  jal         func_181140
    ctx->pc = 0x181E58u;
    SET_GPR_U32(ctx, 31, 0x181E60u);
    ctx->pc = 0x181E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181E58u;
    // 0x181e5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181E58u, 0x181E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E60u;
label_181e60:
    // 0x181e60: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x181e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x181e64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x181e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181e6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181e70: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181e70u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181e74: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181e74u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181e78: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x181e78u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x181e7c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181e7cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181e80: 0xc060450  jal         func_181140
    ctx->pc = 0x181E80u;
    SET_GPR_U32(ctx, 31, 0x181E88u);
    ctx->pc = 0x181E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181E80u;
    // 0x181e84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181E80u, 0x181E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E88u;
label_181e88:
    // 0x181e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e8c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x181e8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x181e90: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x181e90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x181e94: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181e94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181e98: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181e98u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181e9c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181e9cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181ea0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181ea0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181ea4: 0xc060450  jal         func_181140
    ctx->pc = 0x181EA4u;
    SET_GPR_U32(ctx, 31, 0x181EACu);
    ctx->pc = 0x181EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181EA4u;
    // 0x181ea8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181EA4u, 0x181EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181EACu;
label_181eac:
    // 0x181eac: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x181eacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x181eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181eb4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x181eb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x181eb8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181eb8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181ebc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181ebcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181ec0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181ec0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181ec4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181ec4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181ec8: 0xc060450  jal         func_181140
    ctx->pc = 0x181EC8u;
    SET_GPR_U32(ctx, 31, 0x181ED0u);
    ctx->pc = 0x181ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181EC8u;
    // 0x181ecc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181EC8u, 0x181ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181ED0u;
label_181ed0:
    // 0x181ed0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x181ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x181ed4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x181ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x181ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181edc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181edcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x181ee0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x181ee0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x181ee4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181ee4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181ee8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181ee8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181eec: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181eecu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181ef0: 0xc060450  jal         func_181140
    ctx->pc = 0x181EF0u;
    SET_GPR_U32(ctx, 31, 0x181EF8u);
    ctx->pc = 0x181EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181EF0u;
    // 0x181ef4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181EF0u, 0x181EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181EF8u;
label_181ef8:
    // 0x181ef8: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x181ef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x181efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f00: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x181f00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x181f04: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181f04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181f08: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181f08u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181f0c: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x181f0cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x181f10: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181f10u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181f14: 0xc060450  jal         func_181140
    ctx->pc = 0x181F14u;
    SET_GPR_U32(ctx, 31, 0x181F1Cu);
    ctx->pc = 0x181F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F14u;
    // 0x181f18: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181F14u, 0x181F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F1Cu;
label_181f1c:
    // 0x181f1c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x181f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x181f20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x181f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181f24: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x181f24u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x181f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f2c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x181f2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x181f30: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181f30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181f34: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181f34u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181f38: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181f38u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181f3c: 0xc060450  jal         func_181140
    ctx->pc = 0x181F3Cu;
    SET_GPR_U32(ctx, 31, 0x181F44u);
    ctx->pc = 0x181F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F3Cu;
    // 0x181f40: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181F3Cu, 0x181F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F44u;
label_181f44:
    // 0x181f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f48: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181f48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x181f4c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x181f4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x181f50: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181f50u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181f54: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181f54u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181f58: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x181f58u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x181f5c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181f5cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181f60: 0xc060450  jal         func_181140
    ctx->pc = 0x181F60u;
    SET_GPR_U32(ctx, 31, 0x181F68u);
    ctx->pc = 0x181F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F60u;
    // 0x181f64: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181F60u, 0x181F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F68u;
label_181f68:
    // 0x181f68: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x181f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x181f6c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x181f6cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x181f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f74: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x181f74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x181f78: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x181f78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x181f7c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x181f7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x181f80: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x181f80u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x181f84: 0xc060450  jal         func_181140
    ctx->pc = 0x181F84u;
    SET_GPR_U32(ctx, 31, 0x181F8Cu);
    ctx->pc = 0x181F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F84u;
    // 0x181f88: 0x4600bc06  mov.s       $f16, $f23 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x181F84u, 0x181F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F8Cu;
label_181f8c:
    // 0x181f8c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x181f8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x181f90: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x181f90u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x181f94: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x181f94u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x181f98: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x181f98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x181f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fa0: 0xc06049e  jal         func_181278
    ctx->pc = 0x181FA0u;
    SET_GPR_U32(ctx, 31, 0x181FA8u);
    ctx->pc = 0x181FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181FA0u;
    // 0x181fa4: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x181FA0u, 0x181FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181FA8u;
label_181fa8:
    // 0x181fa8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x181fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x181fac: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x181facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x181fb0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x181fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x181fb4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x181fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x181fb8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x181fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x181fbc: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x181fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x181fc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x181fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x181fc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x181fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181fc8: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x181fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x181fcc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x181fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x181fd0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x181fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x181fd4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x181fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x181fd8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x181fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x181fdc: 0xc0604a6  jal         func_181298
    ctx->pc = 0x181FDCu;
    SET_GPR_U32(ctx, 31, 0x181FE4u);
    ctx->pc = 0x181FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181FDCu;
    // 0x181fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x181FDCu, 0x181FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181FE4u;
label_181fe4:
    // 0x181fe4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x181fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x181fe8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x181fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x181fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ff0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x181ff0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x181ff4: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x181FF4u;
    SET_GPR_U32(ctx, 31, 0x181FFCu);
    ctx->pc = 0x181FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181FF4u;
    // 0x181ff8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x181FF4u, 0x181FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181FFCu;
label_181ffc:
    // 0x181ffc: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x181ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x182000: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x182000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x182004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x182004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182008: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x182008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x18200c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18200cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182010: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x182010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x182014: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x182014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x182018: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x182018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18201c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x18201cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x182020: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x182020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x182024: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x182024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x182028: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x182028u;
    SET_GPR_U32(ctx, 31, 0x182030u);
    ctx->pc = 0x18202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182028u;
    // 0x18202c: 0x24a5f810  addiu       $a1, $a1, -0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x182028u, 0x182030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182030u;
label_182030:
    // 0x182030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182038: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18203c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18203cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182040: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x182040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x182044: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x182044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x182048: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x182048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x18204c: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x18204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x182050: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x182050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x182054: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x182054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x182058: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x182058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18205c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x182060: 0x3e00008  jr          $ra
    ctx->pc = 0x182060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182060u;
        // 0x182064: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182068u;
}
