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

// Function: sub_00366218
// Address: 0x366218 - 0x3663a0
void sub_00366218_0x366218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366218_0x366218");
#endif

    switch (ctx->pc) {
        case 0x366218u: goto label_366218;
        case 0x36621cu: goto label_36621c;
        case 0x366220u: goto label_366220;
        case 0x366224u: goto label_366224;
        case 0x366228u: goto label_366228;
        case 0x36622cu: goto label_36622c;
        case 0x366230u: goto label_366230;
        case 0x366234u: goto label_366234;
        case 0x366238u: goto label_366238;
        case 0x36623cu: goto label_36623c;
        case 0x366240u: goto label_366240;
        case 0x366244u: goto label_366244;
        case 0x366248u: goto label_366248;
        case 0x36624cu: goto label_36624c;
        case 0x366250u: goto label_366250;
        case 0x366254u: goto label_366254;
        case 0x366258u: goto label_366258;
        case 0x36625cu: goto label_36625c;
        case 0x366260u: goto label_366260;
        case 0x366264u: goto label_366264;
        case 0x366268u: goto label_366268;
        case 0x36626cu: goto label_36626c;
        case 0x366270u: goto label_366270;
        case 0x366274u: goto label_366274;
        case 0x366278u: goto label_366278;
        case 0x36627cu: goto label_36627c;
        case 0x366280u: goto label_366280;
        case 0x366284u: goto label_366284;
        case 0x366288u: goto label_366288;
        case 0x36628cu: goto label_36628c;
        case 0x366290u: goto label_366290;
        case 0x366294u: goto label_366294;
        case 0x366298u: goto label_366298;
        case 0x36629cu: goto label_36629c;
        case 0x3662a0u: goto label_3662a0;
        case 0x3662a4u: goto label_3662a4;
        case 0x3662a8u: goto label_3662a8;
        case 0x3662acu: goto label_3662ac;
        case 0x3662b0u: goto label_3662b0;
        case 0x3662b4u: goto label_3662b4;
        case 0x3662b8u: goto label_3662b8;
        case 0x3662bcu: goto label_3662bc;
        case 0x3662c0u: goto label_3662c0;
        case 0x3662c4u: goto label_3662c4;
        case 0x3662c8u: goto label_3662c8;
        case 0x3662ccu: goto label_3662cc;
        case 0x3662d0u: goto label_3662d0;
        case 0x3662d4u: goto label_3662d4;
        case 0x3662d8u: goto label_3662d8;
        case 0x3662dcu: goto label_3662dc;
        case 0x3662e0u: goto label_3662e0;
        case 0x3662e4u: goto label_3662e4;
        case 0x3662e8u: goto label_3662e8;
        case 0x3662ecu: goto label_3662ec;
        case 0x3662f0u: goto label_3662f0;
        case 0x3662f4u: goto label_3662f4;
        case 0x3662f8u: goto label_3662f8;
        case 0x3662fcu: goto label_3662fc;
        case 0x366300u: goto label_366300;
        case 0x366304u: goto label_366304;
        case 0x366308u: goto label_366308;
        case 0x36630cu: goto label_36630c;
        case 0x366310u: goto label_366310;
        case 0x366314u: goto label_366314;
        case 0x366318u: goto label_366318;
        case 0x36631cu: goto label_36631c;
        case 0x366320u: goto label_366320;
        case 0x366324u: goto label_366324;
        case 0x366328u: goto label_366328;
        case 0x36632cu: goto label_36632c;
        case 0x366330u: goto label_366330;
        case 0x366334u: goto label_366334;
        case 0x366338u: goto label_366338;
        case 0x36633cu: goto label_36633c;
        case 0x366340u: goto label_366340;
        case 0x366344u: goto label_366344;
        case 0x366348u: goto label_366348;
        case 0x36634cu: goto label_36634c;
        case 0x366350u: goto label_366350;
        case 0x366354u: goto label_366354;
        case 0x366358u: goto label_366358;
        case 0x36635cu: goto label_36635c;
        case 0x366360u: goto label_366360;
        case 0x366364u: goto label_366364;
        case 0x366368u: goto label_366368;
        case 0x36636cu: goto label_36636c;
        case 0x366370u: goto label_366370;
        case 0x366374u: goto label_366374;
        case 0x366378u: goto label_366378;
        case 0x36637cu: goto label_36637c;
        case 0x366380u: goto label_366380;
        case 0x366384u: goto label_366384;
        case 0x366388u: goto label_366388;
        case 0x36638cu: goto label_36638c;
        case 0x366390u: goto label_366390;
        case 0x366394u: goto label_366394;
        case 0x366398u: goto label_366398;
        case 0x36639cu: goto label_36639c;
        default: break;
    }

    ctx->pc = 0x366218u;

label_366218:
    // 0x366218: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x366218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_36621c:
    // 0x36621c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x36621cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_366220:
    // 0x366220: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x366220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_366224:
    // 0x366224: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x366224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_366228:
    // 0x366228: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x366228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_36622c:
    // 0x36622c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36622cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_366230:
    // 0x366230: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x366230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_366234:
    // 0x366234: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x366234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_366238:
    // 0x366238: 0xc0d981e  jal         func_366078
label_36623c:
    if (ctx->pc == 0x36623Cu) {
        ctx->pc = 0x36623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366238u;
        // 0x36623c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366240u;
        goto label_366240;
    }
    ctx->pc = 0x366238u;
    SET_GPR_U32(ctx, 31, 0x366240u);
    ctx->pc = 0x36623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366238u;
    // 0x36623c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366078u, 0x366238u, 0x366240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366240u;
label_366240:
    // 0x366240: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x366240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_366244:
    // 0x366244: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_366248:
    if (ctx->pc == 0x366248u) {
        ctx->pc = 0x366248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366244u;
        // 0x366248: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36624Cu;
        goto label_36624c;
    }
    ctx->pc = 0x366244u;
    {
        const bool branch_taken_0x366244 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x366248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366244u;
        // 0x366248: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366244) {
            ctx->pc = 0x366254u;
            goto label_366254;
        }
    }
    ctx->pc = 0x36624Cu;
label_36624c:
    // 0x36624c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_366250:
    if (ctx->pc == 0x366250u) {
        ctx->pc = 0x366250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36624Cu;
        // 0x366250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366254u;
        goto label_366254;
    }
    ctx->pc = 0x36624Cu;
    {
        const bool branch_taken_0x36624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36624Cu;
        // 0x366250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36624c) {
            ctx->pc = 0x366380u;
            goto label_366380;
        }
    }
    ctx->pc = 0x366254u;
label_366254:
    // 0x366254: 0xc0b1488  jal         func_2C5220
label_366258:
    if (ctx->pc == 0x366258u) {
        ctx->pc = 0x366258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366254u;
        // 0x366258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36625Cu;
        goto label_36625c;
    }
    ctx->pc = 0x366254u;
    SET_GPR_U32(ctx, 31, 0x36625Cu);
    ctx->pc = 0x366258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366254u;
    // 0x366258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x366254u, 0x36625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36625Cu;
label_36625c:
    // 0x36625c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x36625cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_366260:
    // 0x366260: 0xc0f6a96  jal         func_3DAA58
label_366264:
    if (ctx->pc == 0x366264u) {
        ctx->pc = 0x366264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366260u;
        // 0x366264: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366268u;
        goto label_366268;
    }
    ctx->pc = 0x366260u;
    SET_GPR_U32(ctx, 31, 0x366268u);
    ctx->pc = 0x366264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366260u;
    // 0x366264: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x366260u, 0x366268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366268u;
label_366268:
    // 0x366268: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_36626c:
    if (ctx->pc == 0x36626Cu) {
        ctx->pc = 0x36626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366268u;
        // 0x36626c: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366270u;
        goto label_366270;
    }
    ctx->pc = 0x366268u;
    {
        const bool branch_taken_0x366268 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366268u;
        // 0x36626c: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366268) {
            ctx->pc = 0x36627Cu;
            goto label_36627c;
        }
    }
    ctx->pc = 0x366270u;
label_366270:
    // 0x366270: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x366270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_366274:
    // 0x366274: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x366274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_366278:
    // 0x366278: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x366278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_36627c:
    // 0x36627c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_366280:
    // 0x366280: 0xc0d8e20  jal         func_363880
label_366284:
    if (ctx->pc == 0x366284u) {
        ctx->pc = 0x366284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366280u;
        // 0x366284: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366288u;
        goto label_366288;
    }
    ctx->pc = 0x366280u;
    SET_GPR_U32(ctx, 31, 0x366288u);
    ctx->pc = 0x366284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366280u;
    // 0x366284: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363880u, 0x366280u, 0x366288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366288u;
label_366288:
    // 0x366288: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_36628c:
    if (ctx->pc == 0x36628Cu) {
        ctx->pc = 0x36628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366288u;
        // 0x36628c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366290u;
        goto label_366290;
    }
    ctx->pc = 0x366288u;
    {
        const bool branch_taken_0x366288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x36628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366288u;
        // 0x36628c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366288) {
            ctx->pc = 0x3662B8u;
            goto label_3662b8;
        }
    }
    ctx->pc = 0x366290u;
label_366290:
    // 0x366290: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x366290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_366294:
    // 0x366294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x366294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_366298:
    // 0x366298: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x366298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36629c:
    // 0x36629c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3662a0:
    // 0x3662a0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3662a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3662a4:
    // 0x3662a4: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x3662a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3662a8:
    // 0x3662a8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3662a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3662ac:
    // 0x3662ac: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x3662acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3662b0:
    // 0x3662b0: 0xc0d8e26  jal         func_363898
label_3662b4:
    if (ctx->pc == 0x3662B4u) {
        ctx->pc = 0x3662B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662B0u;
        // 0x3662b4: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662B8u;
        goto label_3662b8;
    }
    ctx->pc = 0x3662B0u;
    SET_GPR_U32(ctx, 31, 0x3662B8u);
    ctx->pc = 0x3662B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662B0u;
    // 0x3662b4: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x363898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363898u, 0x3662B0u, 0x3662B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662B8u;
label_3662b8:
    // 0x3662b8: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x3662b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3662bc:
    // 0x3662bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3662bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3662c0:
    // 0x3662c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3662c4:
    // 0x3662c4: 0x40f809  jalr        $v0
label_3662c8:
    if (ctx->pc == 0x3662C8u) {
        ctx->pc = 0x3662C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662C4u;
        // 0x3662c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662CCu;
        goto label_3662cc;
    }
    ctx->pc = 0x3662C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3662CCu);
        ctx->pc = 0x3662C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662C4u;
        // 0x3662c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3662C4u, 0x3662CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3662CCu;
label_3662cc:
    // 0x3662cc: 0xc0d8de2  jal         func_363788
label_3662d0:
    if (ctx->pc == 0x3662D0u) {
        ctx->pc = 0x3662D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662CCu;
        // 0x3662d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662D4u;
        goto label_3662d4;
    }
    ctx->pc = 0x3662CCu;
    SET_GPR_U32(ctx, 31, 0x3662D4u);
    ctx->pc = 0x3662D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662CCu;
    // 0x3662d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x3662CCu, 0x3662D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662D4u;
label_3662d4:
    // 0x3662d4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3662d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3662d8:
    // 0x3662d8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_3662dc:
    if (ctx->pc == 0x3662DCu) {
        ctx->pc = 0x3662E0u;
        goto label_3662e0;
    }
    ctx->pc = 0x3662D8u;
    {
        const bool branch_taken_0x3662d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3662d8) {
            ctx->pc = 0x366364u;
            goto label_366364;
        }
    }
    ctx->pc = 0x3662E0u;
label_3662e0:
    // 0x3662e0: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
label_3662e4:
    if (ctx->pc == 0x3662E4u) {
        ctx->pc = 0x3662E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662E0u;
        // 0x3662e4: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662E8u;
        goto label_3662e8;
    }
    ctx->pc = 0x3662E0u;
    {
        const bool branch_taken_0x3662e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3662E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662E0u;
        // 0x3662e4: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3662e0) {
            ctx->pc = 0x366364u;
            goto label_366364;
        }
    }
    ctx->pc = 0x3662E8u;
label_3662e8:
    // 0x3662e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3662e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3662ec:
    // 0x3662ec: 0xc07f55a  jal         func_1FD568
label_3662f0:
    if (ctx->pc == 0x3662F0u) {
        ctx->pc = 0x3662F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662ECu;
        // 0x3662f0: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662F4u;
        goto label_3662f4;
    }
    ctx->pc = 0x3662ECu;
    SET_GPR_U32(ctx, 31, 0x3662F4u);
    ctx->pc = 0x3662F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662ECu;
    // 0x3662f0: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD568u, 0x3662ECu, 0x3662F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662F4u;
label_3662f4:
    // 0x3662f4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x3662f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_3662f8:
    // 0x3662f8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3662f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3662fc:
    // 0x3662fc: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x3662fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_366300:
    // 0x366300: 0xc0466b6  jal         func_119AD8
label_366304:
    if (ctx->pc == 0x366304u) {
        ctx->pc = 0x366304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366300u;
        // 0x366304: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366308u;
        goto label_366308;
    }
    ctx->pc = 0x366300u;
    SET_GPR_U32(ctx, 31, 0x366308u);
    ctx->pc = 0x366304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366300u;
    // 0x366304: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119AD8u, 0x366300u, 0x366308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366308u;
label_366308:
    // 0x366308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x366308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36630c:
    // 0x36630c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x36630cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_366310:
    // 0x366310: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x366310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_366314:
    // 0x366314: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x366314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_366318:
    // 0x366318: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x366318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_36631c:
    // 0x36631c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36631cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_366320:
    // 0x366320: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x366320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_366324:
    // 0x366324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366328:
    // 0x366328: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x366328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
label_36632c:
    // 0x36632c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x36632cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_366330:
    // 0x366330: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x366330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_366334:
    // 0x366334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366338:
    // 0x366338: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x366338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_36633c:
    // 0x36633c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x36633cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_366340:
    // 0x366340: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x366340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_366344:
    // 0x366344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x366344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_366348:
    // 0x366348: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x366348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_36634c:
    // 0x36634c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x36634cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_366350:
    // 0x366350: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x366350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_366354:
    // 0x366354: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x366354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_366358:
    // 0x366358: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x366358u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36635c:
    // 0x36635c: 0xc0cf430  jal         func_33D0C0
label_366360:
    if (ctx->pc == 0x366360u) {
        ctx->pc = 0x366360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36635Cu;
        // 0x366360: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366364u;
        goto label_366364;
    }
    ctx->pc = 0x36635Cu;
    SET_GPR_U32(ctx, 31, 0x366364u);
    ctx->pc = 0x366360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36635Cu;
    // 0x366360: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x36635Cu, 0x366364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366364u;
label_366364:
    // 0x366364: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_366368:
    if (ctx->pc == 0x366368u) {
        ctx->pc = 0x366368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366364u;
        // 0x366368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36636Cu;
        goto label_36636c;
    }
    ctx->pc = 0x366364u;
    {
        const bool branch_taken_0x366364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x366368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366364u;
        // 0x366368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366364) {
            ctx->pc = 0x36637Cu;
            goto label_36637c;
        }
    }
    ctx->pc = 0x36636Cu;
label_36636c:
    // 0x36636c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x36636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_366370:
    // 0x366370: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x366370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_366374:
    // 0x366374: 0x40f809  jalr        $v0
label_366378:
    if (ctx->pc == 0x366378u) {
        ctx->pc = 0x366378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366374u;
        // 0x366378: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36637Cu;
        goto label_36637c;
    }
    ctx->pc = 0x366374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36637Cu);
        ctx->pc = 0x366378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366374u;
        // 0x366378: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366374u, 0x36637Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36637Cu;
label_36637c:
    // 0x36637c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366380:
    // 0x366380: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x366380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_366384:
    // 0x366384: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x366384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_366388:
    // 0x366388: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x366388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_36638c:
    // 0x36638c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x36638cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_366390:
    // 0x366390: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x366390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_366394:
    // 0x366394: 0x3e00008  jr          $ra
label_366398:
    if (ctx->pc == 0x366398u) {
        ctx->pc = 0x366398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366394u;
        // 0x366398: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36639Cu;
        goto label_36639c;
    }
    ctx->pc = 0x366394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366394u;
        // 0x366398: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36639Cu;
label_36639c:
    // 0x36639c: 0x0  nop
    ctx->pc = 0x36639cu;
    // NOP
    ctx->pc = 0x3663a0u;
}
