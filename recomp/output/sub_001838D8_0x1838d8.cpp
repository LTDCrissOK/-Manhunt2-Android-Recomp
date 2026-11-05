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

// Function: sub_001838D8
// Address: 0x1838d8 - 0x183c60
void sub_001838D8_0x1838d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001838D8_0x1838d8");
#endif

    switch (ctx->pc) {
        case 0x183984u: goto label_183984;
        case 0x1839b0u: goto label_1839b0;
        case 0x1839dcu: goto label_1839dc;
        case 0x183a00u: goto label_183a00;
        case 0x183a28u: goto label_183a28;
        case 0x183a4cu: goto label_183a4c;
        case 0x183a70u: goto label_183a70;
        case 0x183a94u: goto label_183a94;
        case 0x183ab8u: goto label_183ab8;
        case 0x183adcu: goto label_183adc;
        case 0x183b00u: goto label_183b00;
        case 0x183b24u: goto label_183b24;
        case 0x183b4cu: goto label_183b4c;
        case 0x183b68u: goto label_183b68;
        case 0x183ba0u: goto label_183ba0;
        case 0x183bb4u: goto label_183bb4;
        case 0x183c24u: goto label_183c24;
        default: break;
    }

    ctx->pc = 0x1838d8u;

    // 0x1838d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1838d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1838dc: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1838dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1838e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1838e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1838e4: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x1838e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1838e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1838e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1838ec: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x1838ecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1838f0: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x1838f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x1838f4: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x1838f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x1838f8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1838f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1838fc: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1838fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x183900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183904: 0x2623012c  addiu       $v1, $s1, 0x12C
    ctx->pc = 0x183904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x183908: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x183908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18390c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x18390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x183910: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x183910u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x183914: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x183914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x183918: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x183918u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18391c: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x18391cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x183920: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x183920u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x183924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183928: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x183928u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18392c: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x18392cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x183930: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x183930u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x183934: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x183934u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x183938: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x183938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18393c: 0xe45a0128  swc1        $f26, 0x128($v0)
    ctx->pc = 0x18393cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x183940: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x183940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x183944: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x183944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x183948: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x183948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x18394c: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x18394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183950: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x183950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x183954: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x183954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x183958: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x183958u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x18395c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x18395cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x183960: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x183960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x183964: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x183964u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x183968: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x183968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x18396c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18396cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x183970: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x183970u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x183974: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x183974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x183978: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x183978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x18397c: 0xc060498  jal         func_181260
    ctx->pc = 0x18397Cu;
    SET_GPR_U32(ctx, 31, 0x183984u);
    ctx->pc = 0x183980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18397Cu;
    // 0x183980: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x18397Cu, 0x183984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183984u;
label_183984:
    // 0x183984: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x183984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x183988: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x183988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x18398c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183990: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x183990u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x183994: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183994u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183998: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x183998u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x18399c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18399cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1839a0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1839a0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1839a4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1839a4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1839a8: 0xc060450  jal         func_181140
    ctx->pc = 0x1839A8u;
    SET_GPR_U32(ctx, 31, 0x1839B0u);
    ctx->pc = 0x1839ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839A8u;
    // 0x1839ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1839A8u, 0x1839B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839B0u;
label_1839b0:
    // 0x1839b0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1839b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1839b4: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1839b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1839b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1839b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839bc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1839bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1839c0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1839c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1839c4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1839c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1839c8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1839c8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1839cc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1839ccu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1839d0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1839d0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1839d4: 0xc060450  jal         func_181140
    ctx->pc = 0x1839D4u;
    SET_GPR_U32(ctx, 31, 0x1839DCu);
    ctx->pc = 0x1839D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839D4u;
    // 0x1839d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1839D4u, 0x1839DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839DCu;
label_1839dc:
    // 0x1839dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1839dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839e0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1839e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1839e4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1839e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1839e8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1839e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1839ec: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1839ecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1839f0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1839f0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1839f4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1839f4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1839f8: 0xc060450  jal         func_181140
    ctx->pc = 0x1839F8u;
    SET_GPR_U32(ctx, 31, 0x183A00u);
    ctx->pc = 0x1839FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839F8u;
    // 0x1839fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1839F8u, 0x183A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A00u;
label_183a00:
    // 0x183a00: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x183a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x183a04: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x183a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x183a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a0c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x183a0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x183a10: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183a10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183a14: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183a14u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183a18: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183a18u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183a1c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183a1cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183a20: 0xc060450  jal         func_181140
    ctx->pc = 0x183A20u;
    SET_GPR_U32(ctx, 31, 0x183A28u);
    ctx->pc = 0x183A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A20u;
    // 0x183a24: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183A20u, 0x183A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A28u;
label_183a28:
    // 0x183a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a2c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x183a2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x183a30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183a30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183a34: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183a34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183a38: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183a38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183a3c: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x183a3cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
    // 0x183a40: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183a40u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183a44: 0xc060450  jal         func_181140
    ctx->pc = 0x183A44u;
    SET_GPR_U32(ctx, 31, 0x183A4Cu);
    ctx->pc = 0x183A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A44u;
    // 0x183a48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183A44u, 0x183A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A4Cu;
label_183a4c:
    // 0x183a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a50: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x183a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x183a54: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183a54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183a58: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x183a58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x183a5c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183a5cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183a60: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183a60u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183a64: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183a64u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183a68: 0xc060450  jal         func_181140
    ctx->pc = 0x183A68u;
    SET_GPR_U32(ctx, 31, 0x183A70u);
    ctx->pc = 0x183A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A68u;
    // 0x183a6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183A68u, 0x183A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A70u;
label_183a70:
    // 0x183a70: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x183a70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x183a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a78: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183a78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183a7c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183a7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183a80: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183a80u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183a84: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183a84u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183a88: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183a88u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183a8c: 0xc060450  jal         func_181140
    ctx->pc = 0x183A8Cu;
    SET_GPR_U32(ctx, 31, 0x183A94u);
    ctx->pc = 0x183A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A8Cu;
    // 0x183a90: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183A8Cu, 0x183A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A94u;
label_183a94:
    // 0x183a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a98: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183a98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183a9c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183a9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183aa0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183aa0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183aa4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183aa4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183aa8: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x183aa8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x183aac: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183aacu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183ab0: 0xc060450  jal         func_181140
    ctx->pc = 0x183AB0u;
    SET_GPR_U32(ctx, 31, 0x183AB8u);
    ctx->pc = 0x183AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AB0u;
    // 0x183ab4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183AB0u, 0x183AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AB8u;
label_183ab8:
    // 0x183ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183abc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183ac0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183ac0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183ac4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183ac4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183ac8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183ac8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183acc: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x183accu;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x183ad0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183ad0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183ad4: 0xc060450  jal         func_181140
    ctx->pc = 0x183AD4u;
    SET_GPR_U32(ctx, 31, 0x183ADCu);
    ctx->pc = 0x183AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AD4u;
    // 0x183ad8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183AD4u, 0x183ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183ADCu;
label_183adc:
    // 0x183adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ae0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183ae0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183ae4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183ae4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183ae8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183ae8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183aec: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183aecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183af0: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x183af0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x183af4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183af4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183af8: 0xc060450  jal         func_181140
    ctx->pc = 0x183AF8u;
    SET_GPR_U32(ctx, 31, 0x183B00u);
    ctx->pc = 0x183AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AF8u;
    // 0x183afc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183AF8u, 0x183B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B00u;
label_183b00:
    // 0x183b00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x183b00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x183b04: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x183b04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x183b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b0c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183b0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183b10: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x183b10u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x183b14: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x183b14u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x183b18: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x183b18u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x183b1c: 0xc060450  jal         func_181140
    ctx->pc = 0x183B1Cu;
    SET_GPR_U32(ctx, 31, 0x183B24u);
    ctx->pc = 0x183B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B1Cu;
    // 0x183b20: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183B1Cu, 0x183B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B24u;
label_183b24:
    // 0x183b24: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x183b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x183b28: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x183b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x183b2c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x183b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x183b30: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x183b30u;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
    // 0x183b34: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x183b34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x183b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b3c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x183b3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x183b40: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x183b40u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x183b44: 0xc060450  jal         func_181140
    ctx->pc = 0x183B44u;
    SET_GPR_U32(ctx, 31, 0x183B4Cu);
    ctx->pc = 0x183B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B44u;
    // 0x183b48: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x183B44u, 0x183B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B4Cu;
label_183b4c:
    // 0x183b4c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x183b4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x183b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b54: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x183b54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x183b58: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x183b58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x183b5c: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x183b5cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x183b60: 0xc06049e  jal         func_181278
    ctx->pc = 0x183B60u;
    SET_GPR_U32(ctx, 31, 0x183B68u);
    ctx->pc = 0x183B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B60u;
    // 0x183b64: 0x46006406  mov.s       $f16, $f12 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x183B60u, 0x183B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B68u;
label_183b68:
    // 0x183b68: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x183b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x183b6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x183b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x183b70: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x183b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x183b74: 0x4600e446  mov.s       $f17, $f28
    ctx->pc = 0x183b74u;
    ctx->f[17] = FPU_MOV_S(ctx->f[28]);
    // 0x183b78: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x183b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x183b7c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x183b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x183b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x183b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183b84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x183b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183b88: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x183b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x183b8c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x183b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x183b90: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x183b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x183b94: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x183b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x183b98: 0xc0604a6  jal         func_181298
    ctx->pc = 0x183B98u;
    SET_GPR_U32(ctx, 31, 0x183BA0u);
    ctx->pc = 0x183B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B98u;
    // 0x183b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x183B98u, 0x183BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BA0u;
label_183ba0:
    // 0x183ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ba4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x183ba4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x183ba8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183ba8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x183bac: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x183BACu;
    SET_GPR_U32(ctx, 31, 0x183BB4u);
    ctx->pc = 0x183BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183BACu;
    // 0x183bb0: 0x4600db86  mov.s       $f14, $f27 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x183BACu, 0x183BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BB4u;
label_183bb4:
    // 0x183bb4: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x183bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x183bb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x183bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x183bbc: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x183bbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x183bc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x183bc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bc4: 0xe4770104  swc1        $f23, 0x104($v1)
    ctx->pc = 0x183bc4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x183bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bcc: 0xe4970108  swc1        $f23, 0x108($a0)
    ctx->pc = 0x183bccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x183bd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183bd8: 0xa205013b  sb          $a1, 0x13B($s0)
    ctx->pc = 0x183bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 5));
    // 0x183bdc: 0xa2020139  sb          $v0, 0x139($s0)
    ctx->pc = 0x183bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x183be0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x183be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183be4: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x183be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x183be8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x183be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bec: 0xa2050138  sb          $a1, 0x138($s0)
    ctx->pc = 0x183becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 5));
    // 0x183bf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x183bf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bf4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x183bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x183bf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183bfc: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x183bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x183c00: 0xe4dc013c  swc1        $f28, 0x13C($a2)
    ctx->pc = 0x183c00u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 316), bits); }
    // 0x183c04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x183c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c08: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x183c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x183c0c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x183c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x183c10: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x183c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x183c14: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x183c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x183c18: 0xe63b0148  swc1        $f27, 0x148($s1)
    ctx->pc = 0x183c18u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x183c1c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x183C1Cu;
    SET_GPR_U32(ctx, 31, 0x183C24u);
    ctx->pc = 0x183C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C1Cu;
    // 0x183c20: 0x24a5f868  addiu       $a1, $a1, -0x798 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x183C1Cu, 0x183C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C24u;
label_183c24:
    // 0x183c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183c2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x183c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x183c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183c34: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x183c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x183c38: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x183c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x183c3c: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x183c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x183c40: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x183c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x183c44: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x183c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x183c48: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x183c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x183c4c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x183c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x183c50: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x183c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x183c54: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x183c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183c58: 0x3e00008  jr          $ra
    ctx->pc = 0x183C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C58u;
        // 0x183c5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C60u;
}
