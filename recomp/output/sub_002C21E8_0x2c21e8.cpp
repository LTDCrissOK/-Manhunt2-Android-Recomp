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

// Function: sub_002C21E8
// Address: 0x2c21e8 - 0x2c26a8
void sub_002C21E8_0x2c21e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C21E8_0x2c21e8");
#endif

    switch (ctx->pc) {
        case 0x2c2228u: goto label_2c2228;
        case 0x2c2240u: goto label_2c2240;
        case 0x2c2248u: goto label_2c2248;
        case 0x2c2260u: goto label_2c2260;
        case 0x2c22a8u: goto label_2c22a8;
        case 0x2c2310u: goto label_2c2310;
        case 0x2c2324u: goto label_2c2324;
        case 0x2c2330u: goto label_2c2330;
        case 0x2c2350u: goto label_2c2350;
        case 0x2c2378u: goto label_2c2378;
        case 0x2c2390u: goto label_2c2390;
        case 0x2c23a0u: goto label_2c23a0;
        case 0x2c23acu: goto label_2c23ac;
        case 0x2c23b4u: goto label_2c23b4;
        case 0x2c2438u: goto label_2c2438;
        case 0x2c2450u: goto label_2c2450;
        case 0x2c2470u: goto label_2c2470;
        case 0x2c2480u: goto label_2c2480;
        case 0x2c24f8u: goto label_2c24f8;
        case 0x2c2560u: goto label_2c2560;
        case 0x2c2564u: goto label_2c2564;
        case 0x2c2578u: goto label_2c2578;
        case 0x2c25a8u: goto label_2c25a8;
        case 0x2c25b4u: goto label_2c25b4;
        case 0x2c25c0u: goto label_2c25c0;
        case 0x2c25e4u: goto label_2c25e4;
        case 0x2c25f8u: goto label_2c25f8;
        case 0x2c2608u: goto label_2c2608;
        case 0x2c2624u: goto label_2c2624;
        default: break;
    }

    ctx->pc = 0x2c21e8u;

    // 0x2c21e8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2c21e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2c21ec: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x2c21ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x2c21f0: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x2c21f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x2c21f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c21f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c21f8: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2c21f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2c21fc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2c21fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2200: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x2c2200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x2c2204: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x2c2204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x2c2208: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x2c2208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x2c220c: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x2c220cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x2c2210: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x2c2210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x2c2214: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x2c2214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x2c2218: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x2c2218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x2c221c: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x2c221cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x2c2220: 0xc0b081a  jal         func_2C2068
    ctx->pc = 0x2C2220u;
    SET_GPR_U32(ctx, 31, 0x2C2228u);
    ctx->pc = 0x2C2224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2220u;
    // 0x2c2224: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2068u, 0x2C2220u, 0x2C2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2228u;
label_2c2228:
    // 0x2c2228: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2c2228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c222c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2c222cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x2c2230: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2c2230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c2234: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2234u;
    {
        const bool branch_taken_0x2c2234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2234u;
        // 0x2c2238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2234) {
            ctx->pc = 0x2C2258u;
            goto label_2c2258;
        }
    }
    ctx->pc = 0x2C223Cu;
    // 0x2c223c: 0x0  nop
    ctx->pc = 0x2c223cu;
    // NOP
label_2c2240:
    // 0x2c2240: 0xc0b0e22  jal         func_2C3888
    ctx->pc = 0x2C2240u;
    SET_GPR_U32(ctx, 31, 0x2C2248u);
    ctx->pc = 0x2C2244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2240u;
    // 0x2c2244: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3888u, 0x2C2240u, 0x2C2248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2248u;
label_2c2248:
    // 0x2c2248: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2c2248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c224c: 0x0  nop
    ctx->pc = 0x2c224cu;
    // NOP
    // 0x2c2250: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C2250u;
    {
        const bool branch_taken_0x2c2250 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2250u;
        // 0x2c2254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2250) {
            ctx->pc = 0x2C2240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2240;
        }
    }
    ctx->pc = 0x2C2258u;
label_2c2258:
    // 0x2c2258: 0xc0b0d44  jal         func_2C3510
    ctx->pc = 0x2C2258u;
    SET_GPR_U32(ctx, 31, 0x2C2260u);
    ctx->pc = 0x2C225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2258u;
    // 0x2c225c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3510u, 0x2C2258u, 0x2C2260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2260u;
label_2c2260:
    // 0x2c2260: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2c2260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2c2264: 0x8c83bd50  lw          $v1, -0x42B0($a0)
    ctx->pc = 0x2c2264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2c2268: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x2c2268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2c226c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2270: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2c2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2c2274: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c2274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2278: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2c2278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c227c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2c227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2280: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c2280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c2284: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c2284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2288: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2c2288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2c228c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c228cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2c2290: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c2290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c2294: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2298: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x2c2298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2c229c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2c229cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c22a0: 0xc0b0d44  jal         func_2C3510
    ctx->pc = 0x2C22A0u;
    SET_GPR_U32(ctx, 31, 0x2C22A8u);
    ctx->pc = 0x2C22A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22A0u;
    // 0x2c22a4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3510u, 0x2C22A0u, 0x2C22A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22A8u;
label_2c22a8:
    // 0x2c22a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2c22a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2c22ac: 0x8ca3bd50  lw          $v1, -0x42B0($a1)
    ctx->pc = 0x2c22acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2c22b0: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x2c22b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2c22b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c22b8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2c22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2c22bc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c22bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c22c0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2c22c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c22c4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c22c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c22c8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x2c22c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x2c22cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2c22ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2c22d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c22d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c22d4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2c22d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c22d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c22d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c22dc: 0x8e740014  lw          $s4, 0x14($s3)
    ctx->pc = 0x2c22dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2c22e0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2c22e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c22e4: 0x12800025  beqz        $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C22E4u;
    {
        const bool branch_taken_0x2c22e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22E4u;
        // 0x2c22e8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22e4) {
            ctx->pc = 0x2C237Cu;
            goto label_2c237c;
        }
    }
    ctx->pc = 0x2C22ECu;
    // 0x2c22ec: 0x8e6400e0  lw          $a0, 0xE0($s3)
    ctx->pc = 0x2c22ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x2c22f0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C22F0u;
    {
        const bool branch_taken_0x2c22f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c22f0) {
            ctx->pc = 0x2C22F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C22F0u;
            // 0x2c22f4: 0x8e6400e4  lw          $a0, 0xE4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2314u;
            goto label_2c2314;
        }
    }
    ctx->pc = 0x2C22F8u;
    // 0x2c22f8: 0x8e6200e8  lw          $v0, 0xE8($s3)
    ctx->pc = 0x2c22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x2c22fc: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x2c22fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2c2300: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C2300u;
    {
        const bool branch_taken_0x2c2300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2300) {
            ctx->pc = 0x2C2304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2300u;
            // 0x2c2304: 0x8e72000c  lw          $s2, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2380u;
            goto label_2c2380;
        }
    }
    ctx->pc = 0x2C2308u;
    // 0x2c2308: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2C2308u;
    SET_GPR_U32(ctx, 31, 0x2C2310u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2C2308u, 0x2C2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2310u;
label_2c2310:
    // 0x2c2310: 0x8e6400e4  lw          $a0, 0xE4($s3)
    ctx->pc = 0x2c2310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
label_2c2314:
    // 0x2c2314: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2314u;
    {
        const bool branch_taken_0x2c2314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2314) {
            ctx->pc = 0x2C2318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2314u;
            // 0x2c2318: 0xae7400e8  sw          $s4, 0xE8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2328u;
            goto label_2c2328;
        }
    }
    ctx->pc = 0x2C231Cu;
    // 0x2c231c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2C231Cu;
    SET_GPR_U32(ctx, 31, 0x2C2324u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2C231Cu, 0x2C2324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2324u;
label_2c2324:
    // 0x2c2324: 0xae7400e8  sw          $s4, 0xE8($s3)
    ctx->pc = 0x2c2324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 20));
label_2c2328:
    // 0x2c2328: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2C2328u;
    SET_GPR_U32(ctx, 31, 0x2C2330u);
    ctx->pc = 0x2C232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2328u;
    // 0x2c232c: 0x1420c0  sll         $a0, $s4, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2C2328u, 0x2C2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2330u;
label_2c2330:
    // 0x2c2330: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x2c2330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2c2334: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2334u;
    {
        const bool branch_taken_0x2c2334 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2334u;
        // 0x2c2338: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2334) {
            ctx->pc = 0x2C2368u;
            goto label_2c2368;
        }
    }
    ctx->pc = 0x2C233Cu;
    // 0x2c233c: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x2c233cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x2c2340: 0x34213f9a  ori         $at, $at, 0x3F9A
    ctx->pc = 0x2c2340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16282);
    // 0x2c2344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c2344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2348: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c2348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c234c: 0x0  nop
    ctx->pc = 0x2c234cu;
    // NOP
label_2c2350:
    // 0x2c2350: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2c2350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2c2354: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2c2354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c2358: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2c2358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2c235c: 0x0  nop
    ctx->pc = 0x2c235cu;
    // NOP
    // 0x2c2360: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C2360u;
    {
        const bool branch_taken_0x2c2360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2360u;
        // 0x2c2364: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2360) {
            ctx->pc = 0x2C2350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2350;
        }
    }
    ctx->pc = 0x2C2368u;
label_2c2368:
    // 0x2c2368: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x2c2368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x2c236c: 0xae6200e0  sw          $v0, 0xE0($s3)
    ctx->pc = 0x2c236cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 2));
    // 0x2c2370: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2C2370u;
    SET_GPR_U32(ctx, 31, 0x2C2378u);
    ctx->pc = 0x2C2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2370u;
    // 0x2c2374: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2C2370u, 0x2C2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2378u;
label_2c2378:
    // 0x2c2378: 0xae6200e4  sw          $v0, 0xE4($s3)
    ctx->pc = 0x2c2378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 2));
label_2c237c:
    // 0x2c237c: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x2c237cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2c2380:
    // 0x2c2380: 0x1a800028  blez        $s4, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C2380u;
    {
        const bool branch_taken_0x2c2380 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2C2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2380u;
        // 0x2c2384: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2380) {
            ctx->pc = 0x2C2424u;
            goto label_2c2424;
        }
    }
    ctx->pc = 0x2C2388u;
    // 0x2c2388: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x2c2388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c238c: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x2c238cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2c2390:
    // 0x2c2390: 0x8ed00100  lw          $s0, 0x100($s6)
    ctx->pc = 0x2c2390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 256)));
    // 0x2c2394: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c2394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c2398: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C2398u;
    SET_GPR_U32(ctx, 31, 0x2C23A0u);
    ctx->pc = 0x2C239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2398u;
    // 0x2c239c: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C2398u, 0x2C23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23A0u;
label_2c23a0:
    // 0x2c23a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c23a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23a4: 0xc0b10a6  jal         func_2C4298
    ctx->pc = 0x2C23A4u;
    SET_GPR_U32(ctx, 31, 0x2C23ACu);
    ctx->pc = 0x2C23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23A4u;
    // 0x2c23a8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4298u, 0x2C23A4u, 0x2C23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23ACu;
label_2c23ac:
    // 0x2c23ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2C23ACu;
    SET_GPR_U32(ctx, 31, 0x2C23B4u);
    ctx->pc = 0x2C23B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23ACu;
    // 0x2c23b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2C23ACu, 0x2C23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23B4u;
label_2c23b4:
    // 0x2c23b4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2c23b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c23b8: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2c23b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c23bc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2c23bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2c23c0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2c23c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c23c4: 0x8e6200e0  lw          $v0, 0xE0($s3)
    ctx->pc = 0x2c23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x2c23c8: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x2c23c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2c23cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c23d0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2c23d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2c23d4: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2c23d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c23d8: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x2c23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c23dc: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x2c23dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c23e0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2c23e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2c23e4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2c23e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2c23e8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2c23e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2c23ec: 0x46000004  c1          0x4
    ctx->pc = 0x2c23ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c23f0: 0x8e6200e0  lw          $v0, 0xE0($s3)
    ctx->pc = 0x2c23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x2c23f4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2c23f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c23f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c23f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c23fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c2400: 0x234302a  slt         $a2, $s1, $s4
    ctx->pc = 0x2c2400u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2c2404: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2c2404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c2408: 0x8e6300e4  lw          $v1, 0xE4($s3)
    ctx->pc = 0x2c2408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x2c240c: 0x8e6200e0  lw          $v0, 0xE0($s3)
    ctx->pc = 0x2c240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x2c2410: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c2410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c2414: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c2414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c2418: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c2418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c241c: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2C241Cu;
    {
        const bool branch_taken_0x2c241c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C241Cu;
        // 0x2c2420: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c241c) {
            ctx->pc = 0x2C2390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2390;
        }
    }
    ctx->pc = 0x2C2424u;
label_2c2424:
    // 0x2c2424: 0x12800093  beqz        $s4, . + 4 + (0x93 << 2)
    ctx->pc = 0x2C2424u;
    {
        const bool branch_taken_0x2c2424 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2424u;
        // 0x2c2428: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2424) {
            ctx->pc = 0x2C2674u;
            goto label_2c2674;
        }
    }
    ctx->pc = 0x2C242Cu;
    // 0x2c242c: 0x8e6400e4  lw          $a0, 0xE4($s3)
    ctx->pc = 0x2c242cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x2c2430: 0xc0fb166  jal         func_3EC598
    ctx->pc = 0x2C2430u;
    SET_GPR_U32(ctx, 31, 0x2C2438u);
    ctx->pc = 0x2C2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2430u;
    // 0x2c2434: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC598u, 0x2C2430u, 0x2C2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2438u;
label_2c2438:
    // 0x2c2438: 0x1a80008e  blez        $s4, . + 4 + (0x8E << 2)
    ctx->pc = 0x2C2438u;
    {
        const bool branch_taken_0x2c2438 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2C243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2438u;
        // 0x2c243c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2438) {
            ctx->pc = 0x2C2674u;
            goto label_2c2674;
        }
    }
    ctx->pc = 0x2C2440u;
    // 0x2c2440: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2c2440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c2444: 0x27be00d0  addiu       $fp, $sp, 0xD0
    ctx->pc = 0x2c2444u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c2448: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x2c2448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x2c244c: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x2c244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
label_2c2450:
    // 0x2c2450: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2c2450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c2454: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2c2454u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2c2458: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c2458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c245c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2460: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2c2460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2464: 0xc48c0004  lwc1        $f12, 0x4($a0)
    ctx->pc = 0x2c2464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c2468: 0xc0b100a  jal         func_2C4028
    ctx->pc = 0x2C2468u;
    SET_GPR_U32(ctx, 31, 0x2C2470u);
    ctx->pc = 0x2C246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2468u;
    // 0x2c246c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4028u, 0x2C2468u, 0x2C2470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2470u;
label_2c2470:
    // 0x2c2470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2470u;
    {
        const bool branch_taken_0x2c2470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2470u;
        // 0x2c2474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2470) {
            ctx->pc = 0x2C2488u;
            goto label_2c2488;
        }
    }
    ctx->pc = 0x2C2478u;
    // 0x2c2478: 0xc0b0ab2  jal         func_2C2AC8
    ctx->pc = 0x2C2478u;
    SET_GPR_U32(ctx, 31, 0x2C2480u);
    ctx->pc = 0x2C247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2478u;
    // 0x2c247c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AC8u, 0x2C2478u, 0x2C2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2480u;
label_2c2480:
    // 0x2c2480: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2C2480u;
    {
        const bool branch_taken_0x2c2480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2480u;
        // 0x2c2484: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2480) {
            ctx->pc = 0x2C2664u;
            goto label_2c2664;
        }
    }
    ctx->pc = 0x2C2488u;
label_2c2488:
    // 0x2c2488: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2c2488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2c248c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c248cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2490: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2c2490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x2c2494: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2494u;
    {
        const bool branch_taken_0x2c2494 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2494u;
        // 0x2c2498: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2494) {
            ctx->pc = 0x2C24B0u;
            goto label_2c24b0;
        }
    }
    ctx->pc = 0x2C249Cu;
    // 0x2c249c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c249cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c24a0: 0x0  nop
    ctx->pc = 0x2c24a0u;
    // NOP
    // 0x2c24a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c24a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c24a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C24A8u;
    {
        const bool branch_taken_0x2c24a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24A8u;
        // 0x2c24ac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24a8) {
            ctx->pc = 0x2C24CCu;
            goto label_2c24cc;
        }
    }
    ctx->pc = 0x2C24B0u;
label_2c24b0:
    // 0x2c24b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c24b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c24b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c24b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c24b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c24b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c24bc: 0x0  nop
    ctx->pc = 0x2c24bcu;
    // NOP
    // 0x2c24c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c24c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c24c4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c24c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2c24c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2c24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2c24cc:
    // 0x2c24cc: 0x3c01442f  lui         $at, 0x442F
    ctx->pc = 0x2c24ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17455 << 16));
    // 0x2c24d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c24d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c24d4: 0xc440b3e0  lwc1        $f0, -0x4C20($v0)
    ctx->pc = 0x2c24d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c24d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c24d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24dc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2c24dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c24e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c24e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c24e4: 0x0  nop
    ctx->pc = 0x2c24e4u;
    // NOP
    // 0x2c24e8: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x2C24E8u;
    {
        const bool branch_taken_0x2c24e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24E8u;
        // 0x2c24ec: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24e8) {
            ctx->pc = 0x2C2664u;
            goto label_2c2664;
        }
    }
    ctx->pc = 0x2C24F0u;
    // 0x2c24f0: 0xc0b10c0  jal         func_2C4300
    ctx->pc = 0x2C24F0u;
    SET_GPR_U32(ctx, 31, 0x2C24F8u);
    ctx->pc = 0x2C24F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C24F0u;
    // 0x2c24f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4300u, 0x2C24F0u, 0x2C24F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C24F8u;
label_2c24f8:
    // 0x2c24f8: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2C24F8u;
    {
        const bool branch_taken_0x2c24f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24F8u;
        // 0x2c24fc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24f8) {
            ctx->pc = 0x2C2668u;
            goto label_2c2668;
        }
    }
    ctx->pc = 0x2C2500u;
    // 0x2c2500: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2c2500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2c2504: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c2504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2508: 0x24460860  addiu       $a2, $v0, 0x860
    ctx->pc = 0x2c2508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2144));
    // 0x2c250c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2c250cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c2510: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2c2510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c2514: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x2c2514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c2518: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x2c2518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c251c: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x2c251cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c2520: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x2c2520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c2524: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x2c2524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2528: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x2c2528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c252c: 0xb3a4004f  sdl         $a0, 0x4F($sp)
    ctx->pc = 0x2c252cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2530: 0xb7a40048  sdr         $a0, 0x48($sp)
    ctx->pc = 0x2c2530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2534: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x2c2534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2538: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x2c2538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c253c: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x2c253cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c2540: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x2c2540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c2544: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x2c2544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c2548: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x2c2548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c254c: 0xb3a3005f  sdl         $v1, 0x5F($sp)
    ctx->pc = 0x2c254cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2550: 0xb7a30058  sdr         $v1, 0x58($sp)
    ctx->pc = 0x2c2550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2554: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x2c2554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c2558: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x2c2558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c255c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c255cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2560:
    // 0x2c2560: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2c2560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2c2564:
    // 0x2c2564: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2564u;
    {
        const bool branch_taken_0x2c2564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2564u;
        // 0x2c2568: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2564) {
            ctx->pc = 0x2C2598u;
            goto label_2c2598;
        }
    }
    ctx->pc = 0x2C256Cu;
    // 0x2c256c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2c256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2c2570: 0xc0b055a  jal         func_2C1568
    ctx->pc = 0x2C2570u;
    SET_GPR_U32(ctx, 31, 0x2C2578u);
    ctx->pc = 0x2C2574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2570u;
    // 0x2c2574: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1568u, 0x2C2570u, 0x2C2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2578u;
label_2c2578:
    // 0x2c2578: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c2578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c257c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c2580: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C2580u;
    {
        const bool branch_taken_0x2c2580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2580u;
        // 0x2c2584: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2580) {
            ctx->pc = 0x2C2560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2560;
        }
    }
    ctx->pc = 0x2C2588u;
    // 0x2c2588: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c2588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c258c: 0x1443fff5  bne         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C258Cu;
    {
        const bool branch_taken_0x2c258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C258Cu;
        // 0x2c2590: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c258c) {
            ctx->pc = 0x2C2564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2564;
        }
    }
    ctx->pc = 0x2C2594u;
    // 0x2c2594: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c2594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2598:
    // 0x2c2598: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C2598u;
    {
        const bool branch_taken_0x2c2598 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2598u;
        // 0x2c259c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2598) {
            ctx->pc = 0x2C2668u;
            goto label_2c2668;
        }
    }
    ctx->pc = 0x2C25A0u;
    // 0x2c25a0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C25A0u;
    SET_GPR_U32(ctx, 31, 0x2C25A8u);
    ctx->pc = 0x2C25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25A0u;
    // 0x2c25a4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C25A0u, 0x2C25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25A8u;
label_2c25a8:
    // 0x2c25a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c25a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25ac: 0xc0b10a6  jal         func_2C4298
    ctx->pc = 0x2C25ACu;
    SET_GPR_U32(ctx, 31, 0x2C25B4u);
    ctx->pc = 0x2C25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25ACu;
    // 0x2c25b0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4298u, 0x2C25ACu, 0x2C25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25B4u;
label_2c25b4:
    // 0x2c25b4: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2c25b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c25b8: 0xc0b0d44  jal         func_2C3510
    ctx->pc = 0x2C25B8u;
    SET_GPR_U32(ctx, 31, 0x2C25C0u);
    ctx->pc = 0x2C25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25B8u;
    // 0x2c25bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3510u, 0x2C25B8u, 0x2C25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25C0u;
label_2c25c0:
    // 0x2c25c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2c25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c25c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c25c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c25c8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2c25c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c25cc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c25ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c25d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c25d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c25d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c25d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c25d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25dc: 0xc0b0d50  jal         func_2C3540
    ctx->pc = 0x2C25DCu;
    SET_GPR_U32(ctx, 31, 0x2C25E4u);
    ctx->pc = 0x2C25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25DCu;
    // 0x2c25e0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3540u, 0x2C25DCu, 0x2C25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25E4u;
label_2c25e4:
    // 0x2c25e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C25E4u;
    {
        const bool branch_taken_0x2c25e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c25e4) {
            ctx->pc = 0x2C2600u;
            goto label_2c2600;
        }
    }
    ctx->pc = 0x2C25ECu;
    // 0x2c25ec: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x2c25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2c25f0: 0xc0b0d50  jal         func_2C3540
    ctx->pc = 0x2C25F0u;
    SET_GPR_U32(ctx, 31, 0x2C25F8u);
    ctx->pc = 0x2C25F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25F0u;
    // 0x2c25f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3540u, 0x2C25F0u, 0x2C25F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25F8u;
label_2c25f8:
    // 0x2c25f8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C25F8u;
    {
        const bool branch_taken_0x2c25f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25F8u;
        // 0x2c25fc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25f8) {
            ctx->pc = 0x2C2668u;
            goto label_2c2668;
        }
    }
    ctx->pc = 0x2C2600u;
label_2c2600:
    // 0x2c2600: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2C2600u;
    SET_GPR_U32(ctx, 31, 0x2C2608u);
    ctx->pc = 0x2C2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2600u;
    // 0x2c2604: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2C2600u, 0x2C2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2608u;
label_2c2608:
    // 0x2c2608: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2c2608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2c260c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2c260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c2610: 0x8c64bd50  lw          $a0, -0x42B0($v1)
    ctx->pc = 0x2c2610u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2c2614: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c2614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2618: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2c2618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c261c: 0xc08b180  jal         func_22C600
    ctx->pc = 0x2C261Cu;
    SET_GPR_U32(ctx, 31, 0x2C2624u);
    ctx->pc = 0x2C2620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C261Cu;
    // 0x2c2620: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C600u, 0x2C261Cu, 0x2C2624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2624u;
label_2c2624:
    // 0x2c2624: 0x8ee22b00  lw          $v0, 0x2B00($s7)
    ctx->pc = 0x2c2624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11008)));
    // 0x2c2628: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2628u;
    {
        const bool branch_taken_0x2c2628 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2628u;
        // 0x2c262c: 0x26c4b3e0  addiu       $a0, $s6, -0x4C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2628) {
            ctx->pc = 0x2C2644u;
            goto label_2c2644;
        }
    }
    ctx->pc = 0x2C2630u;
    // 0x2c2630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2634: 0x0  nop
    ctx->pc = 0x2c2634u;
    // NOP
    // 0x2c2638: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c263c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C263Cu;
    {
        const bool branch_taken_0x2c263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C263Cu;
        // 0x2c2640: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c263c) {
            ctx->pc = 0x2C2664u;
            goto label_2c2664;
        }
    }
    ctx->pc = 0x2C2644u;
label_2c2644:
    // 0x2c2644: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c2644u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c2648: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c2648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c264c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c2650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2654: 0x0  nop
    ctx->pc = 0x2c2654u;
    // NOP
    // 0x2c2658: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c2658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c265c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c265cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c2660: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2c2660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2c2664:
    // 0x2c2664: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2c2664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c2668:
    // 0x2c2668: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x2c2668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2c266c: 0x5440ff78  bnel        $v0, $zero, . + 4 + (-0x88 << 2)
    ctx->pc = 0x2C266Cu;
    {
        const bool branch_taken_0x2c266c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c266c) {
            ctx->pc = 0x2C2670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C266Cu;
            // 0x2c2670: 0x8e6200e4  lw          $v0, 0xE4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2450;
        }
    }
    ctx->pc = 0x2C2674u;
label_2c2674:
    // 0x2c2674: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x2c2674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c2678: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x2c2678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2c267c: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x2c267cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c2680: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x2c2680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2c2684: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x2c2684u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c2688: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x2c2688u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2c268c: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x2c268cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c2690: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x2c2690u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2c2694: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x2c2694u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2c2698: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x2c2698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2c269c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2c269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c26a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C26A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26A0u;
        // 0x2c26a4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C26A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C26A8u;
}
