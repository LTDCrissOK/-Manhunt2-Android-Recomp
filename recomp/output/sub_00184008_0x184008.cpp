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

// Function: sub_00184008
// Address: 0x184008 - 0x1843b8
void sub_00184008_0x184008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184008_0x184008");
#endif

    switch (ctx->pc) {
        case 0x1840b0u: goto label_1840b0;
        case 0x1840e4u: goto label_1840e4;
        case 0x184110u: goto label_184110;
        case 0x18413cu: goto label_18413c;
        case 0x18416cu: goto label_18416c;
        case 0x184190u: goto label_184190;
        case 0x1841b4u: goto label_1841b4;
        case 0x1841d8u: goto label_1841d8;
        case 0x1841fcu: goto label_1841fc;
        case 0x184224u: goto label_184224;
        case 0x184248u: goto label_184248;
        case 0x18426cu: goto label_18426c;
        case 0x184290u: goto label_184290;
        case 0x1842acu: goto label_1842ac;
        case 0x1842e4u: goto label_1842e4;
        case 0x1842f8u: goto label_1842f8;
        case 0x184378u: goto label_184378;
        default: break;
    }

    ctx->pc = 0x184008u;

    // 0x184008: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x184008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18400c: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x18400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x184010: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x184010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x184014: 0xa29018  mult        $s2, $a1, $v0
    ctx->pc = 0x184014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x184018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x184018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18401c: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x184020: 0xe7bc0060  swc1        $f28, 0x60($sp)
    ctx->pc = 0x184020u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x184024: 0xe7ba0050  swc1        $f26, 0x50($sp)
    ctx->pc = 0x184024u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x184028: 0x2631bdc0  addiu       $s1, $s1, -0x4240
    ctx->pc = 0x184028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950336));
    // 0x18402c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x18402cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x184030: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x184030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x184034: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x184034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x184038: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x184038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x18403c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18403cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184040: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x184040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184044: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x184044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x184048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18404c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x184050: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x184050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x184054: 0xe7bd0068  swc1        $f29, 0x68($sp)
    ctx->pc = 0x184054u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x184058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18405c: 0xe7bb0058  swc1        $f27, 0x58($sp)
    ctx->pc = 0x18405cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x184060: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184060u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184064: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x184064u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x184068: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x184068u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18406c: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x18406cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x184070: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x184070u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x184074: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x184074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x184078: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x184078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18407c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18407cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x184080: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x184080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x184084: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x184084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x184088: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x184088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x18408c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18408cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184090: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x184090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x184094: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x184094u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x184098: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x184098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x18409c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x18409cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1840a0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1840a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1840a4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1840a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1840a8: 0xc060498  jal         func_181260
    ctx->pc = 0x1840A8u;
    SET_GPR_U32(ctx, 31, 0x1840B0u);
    ctx->pc = 0x1840ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1840A8u;
    // 0x1840ac: 0xe47c012c  swc1        $f28, 0x12C($v1) (Delay Slot)
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x181260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181260u, 0x1840A8u, 0x1840B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840B0u;
label_1840b0:
    // 0x1840b0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1840b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1840b4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1840b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1840b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1840b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1840bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1840c0: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x1840c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x1840c4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1840c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x1840c8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1840c8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1840cc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1840ccu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1840d0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1840d0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1840d4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1840d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1840d8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1840d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1840dc: 0xc060450  jal         func_181140
    ctx->pc = 0x1840DCu;
    SET_GPR_U32(ctx, 31, 0x1840E4u);
    ctx->pc = 0x1840E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1840DCu;
    // 0x1840e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1840DCu, 0x1840E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840E4u;
label_1840e4:
    // 0x1840e4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1840e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1840e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1840e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1840ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1840ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1840f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1840f4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1840f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x1840f8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1840f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1840fc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1840fcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184100: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x184100u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184104: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184104u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184108: 0xc060450  jal         func_181140
    ctx->pc = 0x184108u;
    SET_GPR_U32(ctx, 31, 0x184110u);
    ctx->pc = 0x18410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184108u;
    // 0x18410c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184108u, 0x184110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184110u;
label_184110:
    // 0x184110: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x184110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x184114: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x184114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x184118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18411c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x18411cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184120: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x184120u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x184124: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184124u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184128: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184128u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18412c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18412cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184130: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184130u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184134: 0xc060450  jal         func_181140
    ctx->pc = 0x184134u;
    SET_GPR_U32(ctx, 31, 0x18413Cu);
    ctx->pc = 0x184138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184134u;
    // 0x184138: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184134u, 0x18413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18413Cu;
label_18413c:
    // 0x18413c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x18413cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x184140: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x184140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x184144: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x184144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x184148: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x184148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18414c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184150: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x184150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x184154: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x184154u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x184158: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184158u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18415c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18415cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184160: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184160u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184164: 0xc060450  jal         func_181140
    ctx->pc = 0x184164u;
    SET_GPR_U32(ctx, 31, 0x18416Cu);
    ctx->pc = 0x184168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184164u;
    // 0x184168: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184164u, 0x18416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18416Cu;
label_18416c:
    // 0x18416c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18416cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184170: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x184170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x184174: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x184174u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x184178: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184178u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x18417c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18417cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184180: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x184180u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x184184: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184184u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184188: 0xc060450  jal         func_181140
    ctx->pc = 0x184188u;
    SET_GPR_U32(ctx, 31, 0x184190u);
    ctx->pc = 0x18418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184188u;
    // 0x18418c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184188u, 0x184190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184190u;
label_184190:
    // 0x184190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184194: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x184194u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x184198: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x184198u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x18419c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x18419cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x1841a0: 0x4600dbc6  mov.s       $f15, $f27
    ctx->pc = 0x1841a0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[27]);
    // 0x1841a4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1841a4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1841a8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1841a8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1841ac: 0xc060450  jal         func_181140
    ctx->pc = 0x1841ACu;
    SET_GPR_U32(ctx, 31, 0x1841B4u);
    ctx->pc = 0x1841B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1841ACu;
    // 0x1841b0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1841ACu, 0x1841B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1841B4u;
label_1841b4:
    // 0x1841b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1841b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1841b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1841b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1841bc: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1841bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x1841c0: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x1841c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x1841c4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1841c4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1841c8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1841c8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1841cc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1841ccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1841d0: 0xc060450  jal         func_181140
    ctx->pc = 0x1841D0u;
    SET_GPR_U32(ctx, 31, 0x1841D8u);
    ctx->pc = 0x1841D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1841D0u;
    // 0x1841d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1841D0u, 0x1841D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1841D8u;
label_1841d8:
    // 0x1841d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1841d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1841dc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1841dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1841e0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1841e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1841e4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1841e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1841e8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1841e8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1841ec: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x1841ecu;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x1841f0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1841f0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1841f4: 0xc060450  jal         func_181140
    ctx->pc = 0x1841F4u;
    SET_GPR_U32(ctx, 31, 0x1841FCu);
    ctx->pc = 0x1841F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1841F4u;
    // 0x1841f8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1841F4u, 0x1841FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1841FCu;
label_1841fc:
    // 0x1841fc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1841fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x184200: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x184200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x184204: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x184204u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x184208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18420c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18420cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x184210: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184210u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184214: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x184214u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x184218: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184218u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18421c: 0xc060450  jal         func_181140
    ctx->pc = 0x18421Cu;
    SET_GPR_U32(ctx, 31, 0x184224u);
    ctx->pc = 0x184220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18421Cu;
    // 0x184220: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18421Cu, 0x184224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184224u;
label_184224:
    // 0x184224: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x184224u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x184228: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x184228u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x18422c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184230: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x184230u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x184234: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184234u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184238: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184238u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18423c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18423cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184240: 0xc060450  jal         func_181140
    ctx->pc = 0x184240u;
    SET_GPR_U32(ctx, 31, 0x184248u);
    ctx->pc = 0x184244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184240u;
    // 0x184244: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184240u, 0x184248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184248u;
label_184248:
    // 0x184248: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x184248u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x18424c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184250: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x184250u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x184254: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184254u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184258: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184258u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x18425c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x18425cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x184260: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x184260u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x184264: 0xc060450  jal         func_181140
    ctx->pc = 0x184264u;
    SET_GPR_U32(ctx, 31, 0x18426Cu);
    ctx->pc = 0x184268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184264u;
    // 0x184268: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184264u, 0x18426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18426Cu;
label_18426c:
    // 0x18426c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x18426cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x184270: 0x4600cc46  mov.s       $f17, $f25
    ctx->pc = 0x184270u;
    ctx->f[17] = FPU_MOV_S(ctx->f[25]);
    // 0x184274: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x184274u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x184278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18427c: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x18427cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x184280: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x184280u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x184284: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x184284u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x184288: 0xc060450  jal         func_181140
    ctx->pc = 0x184288u;
    SET_GPR_U32(ctx, 31, 0x184290u);
    ctx->pc = 0x18428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184288u;
    // 0x18428c: 0x4600bc06  mov.s       $f16, $f23 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x184288u, 0x184290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184290u;
label_184290:
    // 0x184290: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x184290u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x184294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184298: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x184298u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x18429c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x18429cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1842a0: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x1842a0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x1842a4: 0xc06049e  jal         func_181278
    ctx->pc = 0x1842A4u;
    SET_GPR_U32(ctx, 31, 0x1842ACu);
    ctx->pc = 0x1842A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1842A4u;
    // 0x1842a8: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x1842A4u, 0x1842ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1842ACu;
label_1842ac:
    // 0x1842ac: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1842acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1842b0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1842b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1842b4: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x1842b4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x1842b8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1842b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x1842bc: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1842bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1842c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1842c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1842c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1842c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1842c8: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1842c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x1842cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1842ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1842d0: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1842d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1842d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1842d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1842d8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1842d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1842dc: 0xc0604a6  jal         func_181298
    ctx->pc = 0x1842DCu;
    SET_GPR_U32(ctx, 31, 0x1842E4u);
    ctx->pc = 0x1842E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1842DCu;
    // 0x1842e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181298u, 0x1842DCu, 0x1842E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1842E4u;
label_1842e4:
    // 0x1842e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1842e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1842e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1842ec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1842ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1842f0: 0xc0604ae  jal         func_1812B8
    ctx->pc = 0x1842F0u;
    SET_GPR_U32(ctx, 31, 0x1842F8u);
    ctx->pc = 0x1842F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1842F0u;
    // 0x1842f4: 0x4600eb86  mov.s       $f14, $f29 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[29]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812B8u, 0x1842F0u, 0x1842F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1842F8u;
label_1842f8:
    // 0x1842f8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1842f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1842fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1842fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x184300: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x184300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x184304: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x184304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184308: 0xe4760104  swc1        $f22, 0x104($v1)
    ctx->pc = 0x184308u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x18430c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18430cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184310: 0xe4960108  swc1        $f22, 0x108($a0)
    ctx->pc = 0x184310u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x184314: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x184314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18431c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x18431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x184320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184324: 0xa205013b  sb          $a1, 0x13B($s0)
    ctx->pc = 0x184324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 315), (uint8_t)GPR_U32(ctx, 5));
    // 0x184328: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x184328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18432c: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x18432cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x184330: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x184330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184334: 0xa203013a  sb          $v1, 0x13A($s0)
    ctx->pc = 0x184334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x184338: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x184338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18433c: 0xa2050139  sb          $a1, 0x139($s0)
    ctx->pc = 0x18433cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 5));
    // 0x184340: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x184340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x184344: 0xe4c0013c  swc1        $f0, 0x13C($a2)
    ctx->pc = 0x184344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 316), bits); }
    // 0x184348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x184348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18434c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x18434cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x184350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x184350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184354: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x184354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x184358: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x184358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x18435c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18435cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184360: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x184360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x184364: 0xe4e10140  swc1        $f1, 0x140($a3)
    ctx->pc = 0x184364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 320), bits); }
    // 0x184368: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x184368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x18436c: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x18436cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x184370: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x184370u;
    SET_GPR_U32(ctx, 31, 0x184378u);
    ctx->pc = 0x184374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184370u;
    // 0x184374: 0xe63d0148  swc1        $f29, 0x148($s1) (Delay Slot)
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x184370u, 0x184378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184378u;
label_184378:
    // 0x184378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18437c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18437cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x184380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184384: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x184384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184388: 0xc7bd0068  lwc1        $f29, 0x68($sp)
    ctx->pc = 0x184388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x18438c: 0xc7bc0060  lwc1        $f28, 0x60($sp)
    ctx->pc = 0x18438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x184390: 0xc7bb0058  lwc1        $f27, 0x58($sp)
    ctx->pc = 0x184390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x184394: 0xc7ba0050  lwc1        $f26, 0x50($sp)
    ctx->pc = 0x184394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x184398: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x184398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x18439c: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x18439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1843a0: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x1843a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1843a4: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1843a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1843a8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1843a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1843ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1843acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1843b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1843B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1843B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843B0u;
        // 0x1843b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1843B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1843B8u;
}
