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

// Function: sub_00211D78
// Address: 0x211d78 - 0x2122e8
void sub_00211D78_0x211d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211D78_0x211d78");
#endif

    switch (ctx->pc) {
        case 0x211e04u: goto label_211e04;
        case 0x211e38u: goto label_211e38;
        case 0x211f38u: goto label_211f38;
        case 0x211f40u: goto label_211f40;
        case 0x211fe0u: goto label_211fe0;
        case 0x2120b4u: goto label_2120b4;
        case 0x2120c0u: goto label_2120c0;
        case 0x2120ccu: goto label_2120cc;
        case 0x212250u: goto label_212250;
        case 0x21225cu: goto label_21225c;
        case 0x212264u: goto label_212264;
        case 0x212270u: goto label_212270;
        case 0x2122b0u: goto label_2122b0;
        default: break;
    }

    ctx->pc = 0x211d78u;

    // 0x211d78: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x211d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x211d7c: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x211d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x211d80: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x211d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x211d84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x211d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211d88: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x211d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x211d8c: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x211d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x211d90: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x211d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x211d94: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x211d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x211d98: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x211d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x211d9c: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x211d9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x211da0: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x211da0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x211da4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x211da4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x211da8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x211da8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x211dac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x211dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x211db0: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x211db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x211db4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x211db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x211db8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x211db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x211dbc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x211dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x211dc0: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x211DC0u;
    {
        const bool branch_taken_0x211dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DC0u;
        // 0x211dc4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211dc0) {
            ctx->pc = 0x21202Cu;
            goto label_21202c;
        }
    }
    ctx->pc = 0x211DC8u;
    // 0x211dc8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x211dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x211dcc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x211dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x211dd0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x211dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x211dd4: 0x24423510  addiu       $v0, $v0, 0x3510
    ctx->pc = 0x211dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
    // 0x211dd8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x211dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x211ddc: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x211ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x211de0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x211de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x211de4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x211de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3514u));
    // 0x211de8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x211de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x211dec: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x211decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x211df0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x211df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x211df4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x211df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x211df8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x211df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x211dfc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x211DFCu;
    SET_GPR_U32(ctx, 31, 0x211E04u);
    ctx->pc = 0x211E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DFCu;
    // 0x211e00: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x211DFCu, 0x211E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E04u;
label_211e04:
    // 0x211e04: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x211e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x211e08: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x211e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x211e0c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x211e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x211e10: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x211E10u;
    {
        const bool branch_taken_0x211e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x211E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E10u;
        // 0x211e14: 0xc4751480  lwc1        $f21, 0x1480($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e10) {
            ctx->pc = 0x21202Cu;
            goto label_21202c;
        }
    }
    ctx->pc = 0x211E18u;
    // 0x211e18: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x211e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x211e1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x211e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x211e20: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x211e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x211e24: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x211e24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x211e28: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x211e28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x211e2c: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x211e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x211e30: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x211e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x211e34: 0x0  nop
    ctx->pc = 0x211e34u;
    // NOP
label_211e38:
    // 0x211e38: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x211e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211e3c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x211e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x211e40: 0x30420401  andi        $v0, $v0, 0x401
    ctx->pc = 0x211e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1025);
    // 0x211e44: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x211e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x211e48: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x211E48u;
    {
        const bool branch_taken_0x211e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E48u;
        // 0x211e4c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e48) {
            ctx->pc = 0x211FF8u;
            goto label_211ff8;
        }
    }
    ctx->pc = 0x211E50u;
    // 0x211e50: 0x92020292  lbu         $v0, 0x292($s0)
    ctx->pc = 0x211e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 658)));
    // 0x211e54: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x211E54u;
    {
        const bool branch_taken_0x211e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E54u;
        // 0x211e58: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e54) {
            ctx->pc = 0x211FF8u;
            goto label_211ff8;
        }
    }
    ctx->pc = 0x211E5Cu;
    // 0x211e5c: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x211e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x211e60: 0x260302b0  addiu       $v1, $s0, 0x2B0
    ctx->pc = 0x211e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x211e64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x211e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211e68: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x211e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x211e6c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x211e6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211e70: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x211e70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211e74: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x211e74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211e78: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x211e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211e7c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x211e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211e80: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x211e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x211e84: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x211e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211e88: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x211e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x211e8c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x211e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211e90: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x211e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x211e94: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x211e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x211e98: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x211e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x211e9c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x211e9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x211ea0: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x211ea0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x211ea4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x211ea4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x211ea8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x211ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211eac: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x211eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211eb0: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x211eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x211eb4: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x211eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x211eb8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x211eb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x211ebc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x211ebcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x211ec0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x211ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x211ec4: 0x46000505  abs.s       $f20, $f0
    ctx->pc = 0x211ec4u;
    ctx->f[20] = FPU_ABS_S(ctx->f[0]);
    // 0x211ec8: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x211ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211ecc: 0x0  nop
    ctx->pc = 0x211eccu;
    // NOP
    // 0x211ed0: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x211ED0u;
    {
        const bool branch_taken_0x211ed0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x211ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211ED0u;
        // 0x211ed4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ed0) {
            ctx->pc = 0x211FF8u;
            goto label_211ff8;
        }
    }
    ctx->pc = 0x211ED8u;
    // 0x211ed8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x211ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211edc: 0x0  nop
    ctx->pc = 0x211edcu;
    // NOP
    // 0x211ee0: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x211EE0u;
    {
        const bool branch_taken_0x211ee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211ee0) {
            ctx->pc = 0x211FF8u;
            goto label_211ff8;
        }
    }
    ctx->pc = 0x211EE8u;
    // 0x211ee8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x211ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211eec: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x211eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x211ef0: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x211ef0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x211ef4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x211ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x211ef8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x211ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x211efc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x211efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x211f00: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x211f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211f04: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x211f04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211f08: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x211f08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211f0c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x211f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211f10: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x211f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x211f14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x211f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x211f18: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x211f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f1c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x211f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211f20: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x211f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211f24: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x211f24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x211f28: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x211f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x211f2c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x211f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x211f30: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x211F30u;
    SET_GPR_U32(ctx, 31, 0x211F38u);
    ctx->pc = 0x211F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F30u;
    // 0x211f34: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x211F30u, 0x211F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F38u;
label_211f38:
    // 0x211f38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x211F38u;
    SET_GPR_U32(ctx, 31, 0x211F40u);
    ctx->pc = 0x211F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F38u;
    // 0x211f3c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x211F38u, 0x211F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F40u;
label_211f40:
    // 0x211f40: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x211f40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211f44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x211f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x211f48: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x211f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x211f4c: 0x7a0302b0  lq          $v1, 0x2B0($s0)
    ctx->pc = 0x211f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x211f50: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x211f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x211f54: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x211f54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x211f58: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x211f58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x211f5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x211f5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211f60: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x211f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211f64: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x211f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211f68: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x211f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x211f6c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x211f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x211f70: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x211f70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x211f74: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x211f74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x211f78: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x211f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x211f7c: 0x0  nop
    ctx->pc = 0x211f7cu;
    // NOP
    // 0x211f80: 0x0  nop
    ctx->pc = 0x211f80u;
    // NOP
    // 0x211f84: 0x46010084  c1          0x10084
    ctx->pc = 0x211f84u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x211f88: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x211f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x211f8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211f90: 0x0  nop
    ctx->pc = 0x211f90u;
    // NOP
    // 0x211f94: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x211f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211f98: 0x0  nop
    ctx->pc = 0x211f98u;
    // NOP
    // 0x211f9c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x211F9Cu;
    {
        const bool branch_taken_0x211f9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F9Cu;
        // 0x211fa0: 0xe7a200c0  swc1        $f2, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f9c) {
            ctx->pc = 0x211FC8u;
            goto label_211fc8;
        }
    }
    ctx->pc = 0x211FA4u;
    // 0x211fa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211fac: 0x0  nop
    ctx->pc = 0x211facu;
    // NOP
    // 0x211fb0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x211fb0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x211fb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x211fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x211fb8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x211fb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211fbc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x211fbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x211fc0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x211fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211fc4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x211fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_211fc8:
    // 0x211fc8: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x211fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x211fcc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x211fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x211fd0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x211fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x211fd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211fd8: 0xc07789e  jal         func_1DE278
    ctx->pc = 0x211FD8u;
    SET_GPR_U32(ctx, 31, 0x211FE0u);
    ctx->pc = 0x211FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FD8u;
    // 0x211fdc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE278u, 0x211FD8u, 0x211FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FE0u;
label_211fe0:
    // 0x211fe0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x211FE0u;
    {
        const bool branch_taken_0x211fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FE0u;
        // 0x211fe4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fe0) {
            ctx->pc = 0x211FF8u;
            goto label_211ff8;
        }
    }
    ctx->pc = 0x211FE8u;
    // 0x211fe8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x211fe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211fec: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x211fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211ff0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x211ff0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x211ff4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x211ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_211ff8:
    // 0x211ff8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x211FF8u;
    {
        const bool branch_taken_0x211ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211ff8) {
            ctx->pc = 0x211FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211FF8u;
            // 0x211ffc: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21200Cu;
            goto label_21200c;
        }
    }
    ctx->pc = 0x212000u;
    // 0x212000: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x212000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x212004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x212004u;
    {
        const bool branch_taken_0x212004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212004u;
        // 0x212008: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212004) {
            ctx->pc = 0x21201Cu;
            goto label_21201c;
        }
    }
    ctx->pc = 0x21200Cu;
label_21200c:
    // 0x21200c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21200Cu;
    {
        const bool branch_taken_0x21200c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21200Cu;
        // 0x212010: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21200c) {
            ctx->pc = 0x212020u;
            goto label_212020;
        }
    }
    ctx->pc = 0x212014u;
    // 0x212014: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x212014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x212018: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x212018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_21201c:
    // 0x21201c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x21201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_212020:
    // 0x212020: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x212020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x212024: 0x1462ff84  bne         $v1, $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x212024u;
    {
        const bool branch_taken_0x212024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x212028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212024u;
        // 0x212028: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212024) {
            ctx->pc = 0x211E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211e38;
        }
    }
    ctx->pc = 0x21202Cu;
label_21202c:
    // 0x21202c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x21202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212030: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x212030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x212034: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x212034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x212038: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21203c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x21203cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x212040: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x212040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212044: 0x0  nop
    ctx->pc = 0x212044u;
    // NOP
    // 0x212048: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x212048u;
    {
        const bool branch_taken_0x212048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212048u;
        // 0x21204c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212048) {
            ctx->pc = 0x21207Cu;
            goto label_21207c;
        }
    }
    ctx->pc = 0x212050u;
    // 0x212050: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x212050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212054: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x212054u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x212058: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x212058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21205c: 0x0  nop
    ctx->pc = 0x21205cu;
    // NOP
    // 0x212060: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x212060u;
    {
        const bool branch_taken_0x212060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212060u;
        // 0x212064: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212060) {
            ctx->pc = 0x21207Cu;
            goto label_21207c;
        }
    }
    ctx->pc = 0x212068u;
    // 0x212068: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x212068u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x21206c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x21206cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212070: 0x0  nop
    ctx->pc = 0x212070u;
    // NOP
    // 0x212074: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x212074u;
    {
        const bool branch_taken_0x212074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212074) {
            ctx->pc = 0x212078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212074u;
            // 0x212078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21207Cu;
            goto label_21207c;
        }
    }
    ctx->pc = 0x21207Cu;
label_21207c:
    // 0x21207c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21207Cu;
    {
        const bool branch_taken_0x21207c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21207Cu;
        // 0x212080: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21207c) {
            ctx->pc = 0x2120ECu;
            goto label_2120ec;
        }
    }
    ctx->pc = 0x212084u;
    // 0x212084: 0x244221e8  addiu       $v0, $v0, 0x21E8
    ctx->pc = 0x212084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8680));
    // 0x212088: 0x9043009c  lbu         $v1, 0x9C($v0)
    ctx->pc = 0x212088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x21208c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x21208Cu;
    {
        const bool branch_taken_0x21208c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21208Cu;
        // 0x212090: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21208c) {
            ctx->pc = 0x2120F0u;
            goto label_2120f0;
        }
    }
    ctx->pc = 0x212094u;
    // 0x212094: 0xc4540094  lwc1        $f20, 0x94($v0)
    ctx->pc = 0x212094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x212098: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x212098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x21209c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x21209cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2120a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2120a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2120a4: 0xc4560098  lwc1        $f22, 0x98($v0)
    ctx->pc = 0x2120a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2120a8: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x2120a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2120ac: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2120ACu;
    SET_GPR_U32(ctx, 31, 0x2120B4u);
    ctx->pc = 0x2120B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120ACu;
    // 0x2120b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2120ACu, 0x2120B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120B4u;
label_2120b4:
    // 0x2120b4: 0x4615b302  mul.s       $f12, $f22, $f21
    ctx->pc = 0x2120b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x2120b8: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2120B8u;
    SET_GPR_U32(ctx, 31, 0x2120C0u);
    ctx->pc = 0x2120BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120B8u;
    // 0x2120bc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2120B8u, 0x2120C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120C0u;
label_2120c0:
    // 0x2120c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2120c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2120c4: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2120C4u;
    SET_GPR_U32(ctx, 31, 0x2120CCu);
    ctx->pc = 0x2120C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120C4u;
    // 0x2120c8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2120C4u, 0x2120CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120CCu;
label_2120cc:
    // 0x2120cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2120ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2120d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2120d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2120d4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2120d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2120d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2120d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2120dc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2120dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2120e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2120e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2120e4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2120e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2120e8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2120e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2120ec:
    // 0x2120ec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2120ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2120f0:
    // 0x2120f0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2120f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x2120f4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2120f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x2120f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2120f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2120fc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2120fcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x212100: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x212100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212104: 0x0  nop
    ctx->pc = 0x212104u;
    // NOP
    // 0x212108: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x212108u;
    {
        const bool branch_taken_0x212108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212108u;
        // 0x21210c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212108) {
            ctx->pc = 0x21213Cu;
            goto label_21213c;
        }
    }
    ctx->pc = 0x212110u;
    // 0x212110: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x212110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212114: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x212114u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x212118: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x212118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21211c: 0x0  nop
    ctx->pc = 0x21211cu;
    // NOP
    // 0x212120: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x212120u;
    {
        const bool branch_taken_0x212120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212120u;
        // 0x212124: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212120) {
            ctx->pc = 0x21213Cu;
            goto label_21213c;
        }
    }
    ctx->pc = 0x212128u;
    // 0x212128: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x212128u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x21212c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x21212cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212130: 0x0  nop
    ctx->pc = 0x212130u;
    // NOP
    // 0x212134: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x212134u;
    {
        const bool branch_taken_0x212134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212134) {
            ctx->pc = 0x212138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212134u;
            // 0x212138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21213Cu;
            goto label_21213c;
        }
    }
    ctx->pc = 0x21213Cu;
label_21213c:
    // 0x21213c: 0x54400057  bnel        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x21213Cu;
    {
        const bool branch_taken_0x21213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21213c) {
            ctx->pc = 0x212140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21213Cu;
            // 0x212140: 0x8e450130  lw          $a1, 0x130($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21229Cu;
            goto label_21229c;
        }
    }
    ctx->pc = 0x212144u;
    // 0x212144: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x212144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212148: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x212148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21214c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x21214cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212150: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x212150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212154: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x212154u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x212158: 0x4a0003bf  vwaitq
    ctx->pc = 0x212158u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x21215c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x21215cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212160: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x212160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212164: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x212164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212168: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x212168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21216c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x21216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212170: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x212170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x212174: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x212174u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x212178: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x212178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21217c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x21217cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x212180: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x212180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x212184: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x212184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x212188: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x212188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x21218c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21218cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212190: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x212190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212194: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x212194u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x212198: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x212198u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21219c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x21219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2121a0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2121a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2121a4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2121a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2121a8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2121a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2121ac: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2121acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2121b0: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x2121b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2121b4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2121b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2121b8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2121b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2121bc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2121bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2121c0: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2121c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2121c4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2121c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2121c8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2121c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2121cc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2121ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2121d0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2121d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2121d4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2121d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2121d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2121d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2121dc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2121dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2121e0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2121e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2121e4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2121e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2121e8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2121e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2121ec: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2121ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2121f0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2121f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2121f4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2121f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2121f8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2121f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2121fc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2121fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212200: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x212200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212204: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x212204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212208: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x212208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x21220c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x21220cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x212210: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x212210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x212214: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x212214u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x212218: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x212218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21221c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x21221cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212220: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x212220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212224: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x212224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212228: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x212228u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x21222c: 0x4a0003bf  vwaitq
    ctx->pc = 0x21222cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x212230: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x212230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212234: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x212234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212238: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x212238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x21223c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21223Cu;
    {
        const bool branch_taken_0x21223c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21223Cu;
        // 0x212240: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21223c) {
            ctx->pc = 0x212274u;
            goto label_212274;
        }
    }
    ctx->pc = 0x212244u;
    // 0x212244: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x212244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x212248: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x212248u;
    SET_GPR_U32(ctx, 31, 0x212250u);
    ctx->pc = 0x21224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212248u;
    // 0x21224c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x212248u, 0x212250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212250u;
label_212250:
    // 0x212250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x212250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212254: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x212254u;
    SET_GPR_U32(ctx, 31, 0x21225Cu);
    ctx->pc = 0x212258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212254u;
    // 0x212258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x212254u, 0x21225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21225Cu;
label_21225c:
    // 0x21225c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x21225Cu;
    SET_GPR_U32(ctx, 31, 0x212264u);
    ctx->pc = 0x212260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21225Cu;
    // 0x212260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x21225Cu, 0x212264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212264u;
label_212264:
    // 0x212264: 0xae500130  sw          $s0, 0x130($s2)
    ctx->pc = 0x212264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 16));
    // 0x212268: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x212268u;
    SET_GPR_U32(ctx, 31, 0x212270u);
    ctx->pc = 0x21226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212268u;
    // 0x21226c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x212268u, 0x212270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212270u;
label_212270:
    // 0x212270: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x212270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_212274:
    // 0x212274: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x212274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212278: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x212278u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21227c: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x21227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x212280: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x212280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x212284: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x212284u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212288: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x212288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x21228c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x21228cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212290: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x212290u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x212294u;
    {
        const bool branch_taken_0x212294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212294u;
        // 0x212298: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212294) {
            ctx->pc = 0x2122B8u;
            goto label_2122b8;
        }
    }
    ctx->pc = 0x21229Cu;
label_21229c:
    // 0x21229c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21229Cu;
    {
        const bool branch_taken_0x21229c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21229Cu;
        // 0x2122a0: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21229c) {
            ctx->pc = 0x2122B8u;
            goto label_2122b8;
        }
    }
    ctx->pc = 0x2122A4u;
    // 0x2122a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2122a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2122a8: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2122A8u;
    SET_GPR_U32(ctx, 31, 0x2122B0u);
    ctx->pc = 0x2122ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2122A8u;
    // 0x2122ac: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2122A8u, 0x2122B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2122B0u;
label_2122b0:
    // 0x2122b0: 0xae400130  sw          $zero, 0x130($s2)
    ctx->pc = 0x2122b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
    // 0x2122b4: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x2122b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2122b8:
    // 0x2122b8: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x2122b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2122bc: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2122bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2122c0: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x2122c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2122c4: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2122c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2122c8: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x2122c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2122cc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2122ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2122d0: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x2122d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2122d4: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x2122d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2122d8: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2122d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2122dc: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2122dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2122e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2122E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E0u;
        // 0x2122e4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2122E8u;
}
