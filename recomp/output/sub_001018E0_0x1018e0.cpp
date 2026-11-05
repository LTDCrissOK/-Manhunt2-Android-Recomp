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

// Function: sub_001018E0
// Address: 0x1018e0 - 0x101b50
void sub_001018E0_0x1018e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001018E0_0x1018e0");
#endif

    switch (ctx->pc) {
        case 0x101918u: goto label_101918;
        case 0x101920u: goto label_101920;
        case 0x101928u: goto label_101928;
        case 0x101994u: goto label_101994;
        case 0x1019c0u: goto label_1019c0;
        case 0x101ac4u: goto label_101ac4;
        default: break;
    }

    ctx->pc = 0x1018e0u;

    // 0x1018e0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1018e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1018e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1018e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018e8: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x1018e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x1018ec: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x1018ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x1018f0: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x1018f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x1018f4: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x1018f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x1018f8: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x1018f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x1018fc: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x1018fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x101900: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x101900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x101904: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x101904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x101908: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x101908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x10190c: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x10190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x101910: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x101910u;
    SET_GPR_U32(ctx, 31, 0x101918u);
    ctx->pc = 0x101914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101910u;
    // 0x101914: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x101910u, 0x101918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101918u;
label_101918:
    // 0x101918: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x101918u;
    SET_GPR_U32(ctx, 31, 0x101920u);
    ctx->pc = 0x10191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101918u;
    // 0x10191c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x101918u, 0x101920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101920u;
label_101920:
    // 0x101920: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x101920u;
    SET_GPR_U32(ctx, 31, 0x101928u);
    ctx->pc = 0x101924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101920u;
    // 0x101924: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x101920u, 0x101928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101928u;
label_101928:
    // 0x101928: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x101928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x10192c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x10192cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x101930: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x101930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x101934: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x101934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x101938: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x101938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x10193c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x10193cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101940: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x101940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x101944: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x101944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x101948: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x101948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x10194c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x10194cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x101950: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x101950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x101954: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x101954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x101958: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x101958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10195c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x10195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101960: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x101960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x101964: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x101964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x101968: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x101968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x10196c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x10196cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x101970: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x101970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101974: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x101974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101978: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x101978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x10197c: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x10197cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101980: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x101980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101984: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x101984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x101988: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x101988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x10198c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x10198Cu;
    SET_GPR_U32(ctx, 31, 0x101994u);
    ctx->pc = 0x101990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10198Cu;
    // 0x101990: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x10198Cu, 0x101994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101994u;
label_101994:
    // 0x101994: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x101994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x101998: 0x8c620700  lw          $v0, 0x700($v1)
    ctx->pc = 0x101998u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0700u));
    // 0x10199c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x10199Cu;
    {
        const bool branch_taken_0x10199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1019A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10199Cu;
        // 0x1019a0: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10199c) {
            ctx->pc = 0x101B1Cu;
            goto label_101b1c;
        }
    }
    ctx->pc = 0x1019A4u;
    // 0x1019a4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1019a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1019a8: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x1019a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x1019ac: 0xc454a4d4  lwc1        $f20, -0x5B2C($v0)
    ctx->pc = 0x1019acu;
    { uint32_t bits = FAST_READ32(0x43A4D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1019b0: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1019b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1019b4: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x1019b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1019b8: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x1019b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1019bc: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1019bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1019c0:
    // 0x1019c0: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1019c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1019c4: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x1019c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x1019c8: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x1019c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x1019cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1019ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1019d0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1019d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1019d4: 0x108980  sll         $s1, $s0, 6
    ctx->pc = 0x1019d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1019d8: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x1019d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x1019dc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1019dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1019e0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1019e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1019e4: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x1019e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x1019e8: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1019e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1019ec: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1019ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1019f0: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x1019f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x1019f4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1019f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1019f8: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1019f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x1019fc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1019fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x101a00: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x101a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x101a04: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x101a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x101a08: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x101a08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x101a0c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x101a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101a10: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x101a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101a14: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x101a18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x101a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x101a1c: 0x0  nop
    ctx->pc = 0x101a1cu;
    // NOP
    // 0x101a20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x101a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x101a24: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x101a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x101a28: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x101a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x101a2c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x101a2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101a30: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x101a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x101a34: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x101a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x101a38: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x101a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x101a3c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x101a3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x101a40: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x101a40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x101a44: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x101a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101a48: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x101a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x101a4c: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x101a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x101a50: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x101a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x101a54: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x101a54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x101a58: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x101a58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x101a5c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x101a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x101a60: 0x0  nop
    ctx->pc = 0x101a60u;
    // NOP
    // 0x101a64: 0x0  nop
    ctx->pc = 0x101a64u;
    // NOP
    // 0x101a68: 0x46010084  c1          0x10084
    ctx->pc = 0x101a68u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x101a6c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x101a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x101a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x101a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101a74: 0x0  nop
    ctx->pc = 0x101a74u;
    // NOP
    // 0x101a78: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x101a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x101a7c: 0x0  nop
    ctx->pc = 0x101a7cu;
    // NOP
    // 0x101a80: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x101A80u;
    {
        const bool branch_taken_0x101a80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x101A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A80u;
        // 0x101a84: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a80) {
            ctx->pc = 0x101AACu;
            goto label_101aac;
        }
    }
    ctx->pc = 0x101A88u;
    // 0x101a88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101a90: 0x0  nop
    ctx->pc = 0x101a90u;
    // NOP
    // 0x101a94: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x101a94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x101a98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x101a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x101a9c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x101a9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x101aa0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x101aa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x101aa4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x101aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x101aa8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x101aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_101aac:
    // 0x101aac: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x101aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x101ab0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x101ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x101ab4: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x101ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x101ab8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x101ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101abc: 0xc077912  jal         func_1DE448
    ctx->pc = 0x101ABCu;
    SET_GPR_U32(ctx, 31, 0x101AC4u);
    ctx->pc = 0x101AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101ABCu;
    // 0x101ac0: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x101ABCu, 0x101AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101AC4u;
label_101ac4:
    // 0x101ac4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x101ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x101ac8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x101AC8u;
    {
        const bool branch_taken_0x101ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AC8u;
        // 0x101acc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ac8) {
            ctx->pc = 0x101B08u;
            goto label_101b08;
        }
    }
    ctx->pc = 0x101AD0u;
    // 0x101ad0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x101ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x101ad4: 0xc440c6a4  lwc1        $f0, -0x395C($v0)
    ctx->pc = 0x101ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101ad8: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x101ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x101adc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x101adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x101ae0: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x101ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x101ae4: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x101ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101ae8: 0x8e620708  lw          $v0, 0x708($s3)
    ctx->pc = 0x101ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x101aec: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x101aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x101af0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x101af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x101af4: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x101af4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x101af8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x101af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x101afc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x101afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x101b00: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x101b00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x101b04: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x101b04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_101b08:
    // 0x101b08: 0x8ee20700  lw          $v0, 0x700($s7)
    ctx->pc = 0x101b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1792)));
    // 0x101b0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x101b10: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x101b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101b14: 0x5440ffaa  bnel        $v0, $zero, . + 4 + (-0x56 << 2)
    ctx->pc = 0x101B14u;
    {
        const bool branch_taken_0x101b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101b14) {
            ctx->pc = 0x101B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101B14u;
            // 0x101b18: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1019C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1019c0;
        }
    }
    ctx->pc = 0x101B1Cu;
label_101b1c:
    // 0x101b1c: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x101b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x101b20: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x101b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x101b24: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x101b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x101b28: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x101b28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x101b2c: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x101b2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x101b30: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x101b30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x101b34: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x101b34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x101b38: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x101b38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x101b3c: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x101b3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x101b40: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x101b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x101b44: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x101b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x101b48: 0x3e00008  jr          $ra
    ctx->pc = 0x101B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B48u;
        // 0x101b4c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101B50u;
}
