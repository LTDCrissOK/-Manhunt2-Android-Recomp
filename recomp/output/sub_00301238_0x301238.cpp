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

// Function: sub_00301238
// Address: 0x301238 - 0x301788
void sub_00301238_0x301238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301238_0x301238");
#endif

    switch (ctx->pc) {
        case 0x301328u: goto label_301328;
        case 0x3013a4u: goto label_3013a4;
        case 0x301420u: goto label_301420;
        case 0x301584u: goto label_301584;
        case 0x3015a0u: goto label_3015a0;
        case 0x3015b0u: goto label_3015b0;
        case 0x301648u: goto label_301648;
        case 0x30166cu: goto label_30166c;
        case 0x301674u: goto label_301674;
        case 0x301684u: goto label_301684;
        case 0x3016acu: goto label_3016ac;
        case 0x3016e0u: goto label_3016e0;
        case 0x301744u: goto label_301744;
        default: break;
    }

    ctx->pc = 0x301238u;

    // 0x301238: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x301238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x30123c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x30123cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x301240: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x301240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x301244: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x301244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x301248: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x301248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x30124c: 0x24525870  addiu       $s2, $v0, 0x5870
    ctx->pc = 0x30124cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x301250: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x301250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x301254: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x301254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301258: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x301258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x30125c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x30125cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301260: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x301260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x301264: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x301264u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301268: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x301268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x30126c: 0x24626550  addiu       $v0, $v1, 0x6550
    ctx->pc = 0x30126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 25936));
    // 0x301270: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x301270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x301274: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x301274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x301278: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x301278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x30127c: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x30127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x301280: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x301280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x301284: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x301284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x301288: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x301288u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5A6550u));
    // 0x30128c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x30128cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x301290: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x301290u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x301294: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x301294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x301298: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x301298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30129c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30129cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3012a0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3012a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3012a4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3012a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3012a8: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x3012a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3012ac: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3012acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3012b0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3012b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3012b4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3012b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3012b8: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x3012b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3012bc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3012bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3012c0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3012c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3012c4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x3012c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3012c8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3012c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3012cc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3012ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3012d0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x3012d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3012d4: 0x46010044  c1          0x10044
    ctx->pc = 0x3012d4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3012d8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3012d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3012dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3012dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3012e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3012e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3012e4: 0x0  nop
    ctx->pc = 0x3012e4u;
    // NOP
    // 0x3012e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3012e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3012ec: 0x0  nop
    ctx->pc = 0x3012ecu;
    // NOP
    // 0x3012f0: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x3012F0u;
    {
        const bool branch_taken_0x3012f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3012F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012F0u;
        // 0x3012f4: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012f0) {
            ctx->pc = 0x301374u;
            goto label_301374;
        }
    }
    ctx->pc = 0x3012F8u;
    // 0x3012f8: 0x8e700334  lw          $s0, 0x334($s3)
    ctx->pc = 0x3012f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x3012fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3012fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301300: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x301300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x301304: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x301304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x301308: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x301308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30130c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30130Cu;
    {
        const bool branch_taken_0x30130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30130Cu;
        // 0x301310: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30130c) {
            ctx->pc = 0x301348u;
            goto label_301348;
        }
    }
    ctx->pc = 0x301314u;
    // 0x301314: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x301314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x301318: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x301318u;
    {
        const bool branch_taken_0x301318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x301318) {
            ctx->pc = 0x30131Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301318u;
            // 0x30131c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30134Cu;
            goto label_30134c;
        }
    }
    ctx->pc = 0x301320u;
    // 0x301320: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x301320u;
    SET_GPR_U32(ctx, 31, 0x301328u);
    ctx->pc = 0x301324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301320u;
    // 0x301324: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x301320u, 0x301328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301328u;
label_301328:
    // 0x301328: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x301328u;
    {
        const bool branch_taken_0x301328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301328) {
            ctx->pc = 0x30132Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301328u;
            // 0x30132c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30134Cu;
            goto label_30134c;
        }
    }
    ctx->pc = 0x301330u;
    // 0x301330: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x301330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x301334: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x301334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x301338: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301338u;
    {
        const bool branch_taken_0x301338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301338u;
        // 0x30133c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301338) {
            ctx->pc = 0x301348u;
            goto label_301348;
        }
    }
    ctx->pc = 0x301340u;
    // 0x301340: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x301340u;
    {
        const bool branch_taken_0x301340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x301340) {
            ctx->pc = 0x30134Cu;
            goto label_30134c;
        }
    }
    ctx->pc = 0x301348u;
label_301348:
    // 0x301348: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x301348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30134c:
    // 0x30134c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30134Cu;
    {
        const bool branch_taken_0x30134c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30134c) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x301354u;
    // 0x301354: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x301354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x301358: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x301358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30135c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x301360: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x301360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301364: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x301364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x301368: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x301368u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_30136c:
    // 0x30136c: 0x56800040  bnel        $s4, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x30136Cu;
    {
        const bool branch_taken_0x30136c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x30136c) {
            ctx->pc = 0x301370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30136Cu;
            // 0x301370: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301470u;
            goto label_301470;
        }
    }
    ctx->pc = 0x301374u;
label_301374:
    // 0x301374: 0x8e700334  lw          $s0, 0x334($s3)
    ctx->pc = 0x301374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x301378: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x301378u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30137c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x30137cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x301380: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x301380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x301384: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x301384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x301388: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x301388u;
    {
        const bool branch_taken_0x301388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301388u;
        // 0x30138c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301388) {
            ctx->pc = 0x3013C4u;
            goto label_3013c4;
        }
    }
    ctx->pc = 0x301390u;
    // 0x301390: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x301390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x301394: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x301394u;
    {
        const bool branch_taken_0x301394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x301394) {
            ctx->pc = 0x301398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301394u;
            // 0x301398: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3013C8u;
            goto label_3013c8;
        }
    }
    ctx->pc = 0x30139Cu;
    // 0x30139c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x30139Cu;
    SET_GPR_U32(ctx, 31, 0x3013A4u);
    ctx->pc = 0x3013A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30139Cu;
    // 0x3013a0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x30139Cu, 0x3013A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013A4u;
label_3013a4:
    // 0x3013a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3013A4u;
    {
        const bool branch_taken_0x3013a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3013a4) {
            ctx->pc = 0x3013A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3013A4u;
            // 0x3013a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3013C8u;
            goto label_3013c8;
        }
    }
    ctx->pc = 0x3013ACu;
    // 0x3013ac: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x3013acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3013b0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x3013b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x3013b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3013B4u;
    {
        const bool branch_taken_0x3013b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3013B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013B4u;
        // 0x3013b8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013b4) {
            ctx->pc = 0x3013C4u;
            goto label_3013c4;
        }
    }
    ctx->pc = 0x3013BCu;
    // 0x3013bc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3013BCu;
    {
        const bool branch_taken_0x3013bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3013bc) {
            ctx->pc = 0x3013C8u;
            goto label_3013c8;
        }
    }
    ctx->pc = 0x3013C4u;
label_3013c4:
    // 0x3013c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3013c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3013c8:
    // 0x3013c8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3013C8u;
    {
        const bool branch_taken_0x3013c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3013c8) {
            ctx->pc = 0x3013E8u;
            goto label_3013e8;
        }
    }
    ctx->pc = 0x3013D0u;
    // 0x3013d0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x3013d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3013d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3013d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3013d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3013d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3013dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3013dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3013e0: 0x38630049  xori        $v1, $v1, 0x49
    ctx->pc = 0x3013e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)73);
    // 0x3013e4: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x3013e4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3013e8:
    // 0x3013e8: 0x56800021  bnel        $s4, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3013E8u;
    {
        const bool branch_taken_0x3013e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3013e8) {
            ctx->pc = 0x3013ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3013E8u;
            // 0x3013ec: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301470u;
            goto label_301470;
        }
    }
    ctx->pc = 0x3013F0u;
    // 0x3013f0: 0x8e700334  lw          $s0, 0x334($s3)
    ctx->pc = 0x3013f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x3013f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3013f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3013f8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x3013f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3013fc: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x3013fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x301400: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x301400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x301404: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x301404u;
    {
        const bool branch_taken_0x301404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301404u;
        // 0x301408: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301404) {
            ctx->pc = 0x301440u;
            goto label_301440;
        }
    }
    ctx->pc = 0x30140Cu;
    // 0x30140c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x30140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x301410: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x301410u;
    {
        const bool branch_taken_0x301410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x301410) {
            ctx->pc = 0x301414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301410u;
            // 0x301414: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301444u;
            goto label_301444;
        }
    }
    ctx->pc = 0x301418u;
    // 0x301418: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x301418u;
    SET_GPR_U32(ctx, 31, 0x301420u);
    ctx->pc = 0x30141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301418u;
    // 0x30141c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x301418u, 0x301420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301420u;
label_301420:
    // 0x301420: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x301420u;
    {
        const bool branch_taken_0x301420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301420) {
            ctx->pc = 0x301424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301420u;
            // 0x301424: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301444u;
            goto label_301444;
        }
    }
    ctx->pc = 0x301428u;
    // 0x301428: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x301428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x30142c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x30142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x301430: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301430u;
    {
        const bool branch_taken_0x301430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x301434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301430u;
        // 0x301434: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301430) {
            ctx->pc = 0x301440u;
            goto label_301440;
        }
    }
    ctx->pc = 0x301438u;
    // 0x301438: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x301438u;
    {
        const bool branch_taken_0x301438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x301438) {
            ctx->pc = 0x301444u;
            goto label_301444;
        }
    }
    ctx->pc = 0x301440u;
label_301440:
    // 0x301440: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x301440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301444:
    // 0x301444: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x301444u;
    {
        const bool branch_taken_0x301444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x301444) {
            ctx->pc = 0x301464u;
            goto label_301464;
        }
    }
    ctx->pc = 0x30144Cu;
    // 0x30144c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x30144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x301450: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x301450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x301454: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x301454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x301458: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x301458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30145c: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x30145cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x301460: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x301460u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_301464:
    // 0x301464: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x301464u;
    {
        const bool branch_taken_0x301464 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x301464) {
            ctx->pc = 0x301468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301464u;
            // 0x301468: 0x8e630334  lw          $v1, 0x334($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301474u;
            goto label_301474;
        }
    }
    ctx->pc = 0x30146Cu;
    // 0x30146c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x30146cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301470:
    // 0x301470: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x301470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_301474:
    // 0x301474: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x301474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x301478: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x301478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x30147c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30147Cu;
    {
        const bool branch_taken_0x30147c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x301480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30147Cu;
        // 0x301480: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30147c) {
            ctx->pc = 0x301490u;
            goto label_301490;
        }
    }
    ctx->pc = 0x301484u;
    // 0x301484: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x301484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x301488: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x301488u;
    {
        const bool branch_taken_0x301488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x301488) {
            ctx->pc = 0x301494u;
            goto label_301494;
        }
    }
    ctx->pc = 0x301490u;
label_301490:
    // 0x301490: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301494:
    // 0x301494: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x301494u;
    {
        const bool branch_taken_0x301494 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x301498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301494u;
        // 0x301498: 0x4102b  sltu        $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301494) {
            ctx->pc = 0x3014B4u;
            goto label_3014b4;
        }
    }
    ctx->pc = 0x30149Cu;
    // 0x30149c: 0xc640007c  lwc1        $f0, 0x7C($s2)
    ctx->pc = 0x30149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3014a0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3014a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x3014a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3014a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3014a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3014a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3014ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3014ACu;
    {
        const bool branch_taken_0x3014ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3014B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014ACu;
        // 0x3014b0: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014ac) {
            ctx->pc = 0x3014F0u;
            goto label_3014f0;
        }
    }
    ctx->pc = 0x3014B4u;
label_3014b4:
    // 0x3014b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3014B4u;
    {
        const bool branch_taken_0x3014b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014B4u;
        // 0x3014b8: 0xc640007c  lwc1        $f0, 0x7C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014b4) {
            ctx->pc = 0x3014DCu;
            goto label_3014dc;
        }
    }
    ctx->pc = 0x3014BCu;
    // 0x3014bc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3014bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x3014c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3014c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3014c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3014c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3014c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3014c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3014cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3014ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3014d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3014d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3014d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3014D4u;
    {
        const bool branch_taken_0x3014d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3014D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014D4u;
        // 0x3014d8: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014d4) {
            ctx->pc = 0x3014F0u;
            goto label_3014f0;
        }
    }
    ctx->pc = 0x3014DCu;
label_3014dc:
    // 0x3014dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3014dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3014e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3014e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3014e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3014e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3014e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3014e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3014ec: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x3014ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3014f0:
    // 0x3014f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3014f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3014f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3014f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3014f8: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x3014f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x3014fc: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x3014fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x301500: 0xfbc16550  sqc2        $vf1, 0x6550($fp)
    ctx->pc = 0x301500u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 25936), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x301504: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x301504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x301508: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x301508u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x30150c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30150cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x301510: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x301510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x301514: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x301514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301518: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x301518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30151c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x30151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301520: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x301520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x301524: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x301524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301528: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x301528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30152c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x30152cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301530: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x301530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x301534: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x301534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x301538: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x301538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x30153c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x30153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301540: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x301540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301544: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x301544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x301548: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x301548u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x30154c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x30154cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x301550: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x301550u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x301554: 0x46150544  c1          0x150544
    ctx->pc = 0x301554u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x301558: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30155c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30155cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301560: 0x0  nop
    ctx->pc = 0x301560u;
    // NOP
    // 0x301564: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x301564u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x301568: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x301568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30156c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30156cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x301570: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x301570u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x301574: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x301574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x301578: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x301578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30157c: 0xc0bfeae  jal         func_2FFAB8
    ctx->pc = 0x30157Cu;
    SET_GPR_U32(ctx, 31, 0x301584u);
    ctx->pc = 0x2FFAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFAB8u, 0x30157Cu, 0x301584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301584u;
label_301584:
    // 0x301584: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x301584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30158c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30158cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301590: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x301590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x301594: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x301594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301598: 0xc0c0216  jal         func_300858
    ctx->pc = 0x301598u;
    SET_GPR_U32(ctx, 31, 0x3015A0u);
    ctx->pc = 0x30159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301598u;
    // 0x30159c: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300858u, 0x301598u, 0x3015A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015A0u;
label_3015a0:
    // 0x3015a0: 0xc654007c  lwc1        $f20, 0x7C($s2)
    ctx->pc = 0x3015a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3015a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3015a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3015a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3015A8u;
    SET_GPR_U32(ctx, 31, 0x3015B0u);
    ctx->pc = 0x3015ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3015A8u;
    // 0x3015ac: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3015A8u, 0x3015B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015B0u;
label_3015b0:
    // 0x3015b0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x3015b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3015b4: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x3015b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3015b8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3015b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3015bc: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3015bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3015c0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3015c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3015c4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3015c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3015c8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x3015c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3015cc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3015ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3015d0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x3015d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3015d4: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x3015d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3015d8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x3015d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3015dc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3015dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3015e0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x3015e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3015e4: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x3015e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3015e8: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x3015e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3015ec: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x3015ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3015f0: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x3015f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3015f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3015f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3015f8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x3015f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3015fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3015fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x301600: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x301600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x301604: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x301604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301608: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x301608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30160c: 0x27aa0094  addiu       $t2, $sp, 0x94
    ctx->pc = 0x30160cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x301610: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x301610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x301614: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x301614u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x301618: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x301618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30161c: 0x8e46008c  lw          $a2, 0x8C($s2)
    ctx->pc = 0x30161cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x301620: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x301620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x301624: 0x8e470080  lw          $a3, 0x80($s2)
    ctx->pc = 0x301624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x301628: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x301628u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30162c: 0x8e490084  lw          $t1, 0x84($s2)
    ctx->pc = 0x30162cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x301630: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x301630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x301634: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x301634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x301638: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x301638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x30163c: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x30163cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x301640: 0xc07a30a  jal         func_1E8C28
    ctx->pc = 0x301640u;
    SET_GPR_U32(ctx, 31, 0x301648u);
    ctx->pc = 0x301644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301640u;
    // 0x301644: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8C28u, 0x301640u, 0x301648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301648u;
label_301648:
    // 0x301648: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x301648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30164c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x30164cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x301650: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x301650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x301654: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x301654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x301658: 0x906200a8  lbu         $v0, 0xA8($v1)
    ctx->pc = 0x301658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x30165c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30165Cu;
    {
        const bool branch_taken_0x30165c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30165c) {
            ctx->pc = 0x30169Cu;
            goto label_30169c;
        }
    }
    ctx->pc = 0x301664u;
    // 0x301664: 0xc08fde2  jal         func_23F788
    ctx->pc = 0x301664u;
    SET_GPR_U32(ctx, 31, 0x30166Cu);
    ctx->pc = 0x301668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301664u;
    // 0x301668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x301664u, 0x30166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30166Cu;
label_30166c:
    // 0x30166c: 0xc0942a0  jal         func_250A80
    ctx->pc = 0x30166Cu;
    SET_GPR_U32(ctx, 31, 0x301674u);
    ctx->pc = 0x301670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30166Cu;
    // 0x301670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250A80u, 0x30166Cu, 0x301674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301674u;
label_301674:
    // 0x301674: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x301674u;
    {
        const bool branch_taken_0x301674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301674) {
            ctx->pc = 0x30169Cu;
            goto label_30169c;
        }
    }
    ctx->pc = 0x30167Cu;
    // 0x30167c: 0xc08fde2  jal         func_23F788
    ctx->pc = 0x30167Cu;
    SET_GPR_U32(ctx, 31, 0x301684u);
    ctx->pc = 0x301680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30167Cu;
    // 0x301680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x30167Cu, 0x301684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301684u;
label_301684:
    // 0x301684: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x301684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x301688: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x301688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30168c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30168Cu;
    {
        const bool branch_taken_0x30168c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x301690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30168Cu;
        // 0x301690: 0xc680bb20  lwc1        $f0, -0x44E0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294949664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30168c) {
            ctx->pc = 0x30169Cu;
            goto label_30169c;
        }
    }
    ctx->pc = 0x301694u;
    // 0x301694: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x301694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301698: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x301698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_30169c:
    // 0x30169c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30169Cu;
    {
        const bool branch_taken_0x30169c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3016A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30169Cu;
        // 0x3016a0: 0xc7a00098  lwc1        $f0, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30169c) {
            ctx->pc = 0x3016E4u;
            goto label_3016e4;
        }
    }
    ctx->pc = 0x3016A4u;
    // 0x3016a4: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x3016A4u;
    SET_GPR_U32(ctx, 31, 0x3016ACu);
    ctx->pc = 0x3016A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016A4u;
    // 0x3016a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x3016A4u, 0x3016ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016ACu;
label_3016ac:
    // 0x3016ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3016ACu;
    {
        const bool branch_taken_0x3016ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016ACu;
        // 0x3016b0: 0x8fa60094  lw          $a2, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016ac) {
            ctx->pc = 0x3016C8u;
            goto label_3016c8;
        }
    }
    ctx->pc = 0x3016B4u;
    // 0x3016b4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3016b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x3016b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3016b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3016bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3016bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3016c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3016C0u;
    {
        const bool branch_taken_0x3016c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3016C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016C0u;
        // 0x3016c4: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016c0) {
            ctx->pc = 0x3016E0u;
            goto label_3016e0;
        }
    }
    ctx->pc = 0x3016C8u;
label_3016c8:
    // 0x3016c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3016c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016cc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3016ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3016d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3016d4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3016d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016d8: 0xc0c0678  jal         func_3019E0
    ctx->pc = 0x3016D8u;
    SET_GPR_U32(ctx, 31, 0x3016E0u);
    ctx->pc = 0x3016DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016D8u;
    // 0x3016dc: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019E0u, 0x3016D8u, 0x3016E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016E0u;
label_3016e0:
    // 0x3016e0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x3016e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3016e4:
    // 0x3016e4: 0xc682bb20  lwc1        $f2, -0x44E0($s4)
    ctx->pc = 0x3016e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294949664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3016e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3016e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3016ec: 0x0  nop
    ctx->pc = 0x3016ecu;
    // NOP
    // 0x3016f0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x3016F0u;
    {
        const bool branch_taken_0x3016f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3016f0) {
            ctx->pc = 0x3016F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3016F0u;
            // 0x3016f4: 0xe6400098  swc1        $f0, 0x98($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30170Cu;
            goto label_30170c;
        }
    }
    ctx->pc = 0x3016F8u;
    // 0x3016f8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3016f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3016fc: 0xc64102e0  lwc1        $f1, 0x2E0($s2)
    ctx->pc = 0x3016fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301700: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x301700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x301704: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x301704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x301708: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x301708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
label_30170c:
    // 0x30170c: 0x924202cb  lbu         $v0, 0x2CB($s2)
    ctx->pc = 0x30170cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 715)));
    // 0x301710: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x301710u;
    {
        const bool branch_taken_0x301710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301710u;
        // 0x301714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301710) {
            ctx->pc = 0x30173Cu;
            goto label_30173c;
        }
    }
    ctx->pc = 0x301718u;
    // 0x301718: 0xc64000a8  lwc1        $f0, 0xA8($s2)
    ctx->pc = 0x301718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30171c: 0xc6420098  lwc1        $f2, 0x98($s2)
    ctx->pc = 0x30171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301720: 0xa24202cc  sb          $v0, 0x2CC($s2)
    ctx->pc = 0x301720u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 716), (uint8_t)GPR_U32(ctx, 2));
    // 0x301724: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x301724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301728: 0x0  nop
    ctx->pc = 0x301728u;
    // NOP
    // 0x30172c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30172Cu;
    {
        const bool branch_taken_0x30172c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30172Cu;
        // 0x301730: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30172c) {
            ctx->pc = 0x301738u;
            goto label_301738;
        }
    }
    ctx->pc = 0x301734u;
    // 0x301734: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x301734u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_301738:
    // 0x301738: 0xe64100a8  swc1        $f1, 0xA8($s2)
    ctx->pc = 0x301738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
label_30173c:
    // 0x30173c: 0xc0bfeb2  jal         func_2FFAC8
    ctx->pc = 0x30173Cu;
    SET_GPR_U32(ctx, 31, 0x301744u);
    ctx->pc = 0x2FFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFAC8u, 0x30173Cu, 0x301744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301744u;
label_301744:
    // 0x301744: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x301744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301748: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x301748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30174c: 0xe680bb20  swc1        $f0, -0x44E0($s4)
    ctx->pc = 0x30174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294949664), bits); }
    // 0x301750: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x301750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x301754: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x301754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301758: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x301758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30175c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x30175cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x301760: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x301760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x301764: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x301764u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x301768: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x301768u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30176c: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x30176cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x301770: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x301770u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x301774: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x301774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x301778: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x301778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30177c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x30177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x301780: 0x3e00008  jr          $ra
    ctx->pc = 0x301780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301780u;
        // 0x301784: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301788u;
}
