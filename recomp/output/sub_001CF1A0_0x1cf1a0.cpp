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

// Function: sub_001CF1A0
// Address: 0x1cf1a0 - 0x1cf540
void sub_001CF1A0_0x1cf1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF1A0_0x1cf1a0");
#endif

    switch (ctx->pc) {
        case 0x1cf20cu: goto label_1cf20c;
        case 0x1cf2acu: goto label_1cf2ac;
        case 0x1cf2d4u: goto label_1cf2d4;
        case 0x1cf2e0u: goto label_1cf2e0;
        case 0x1cf2ecu: goto label_1cf2ec;
        case 0x1cf2fcu: goto label_1cf2fc;
        case 0x1cf324u: goto label_1cf324;
        case 0x1cf338u: goto label_1cf338;
        case 0x1cf344u: goto label_1cf344;
        case 0x1cf34cu: goto label_1cf34c;
        case 0x1cf354u: goto label_1cf354;
        case 0x1cf45cu: goto label_1cf45c;
        case 0x1cf46cu: goto label_1cf46c;
        case 0x1cf4c0u: goto label_1cf4c0;
        case 0x1cf4ccu: goto label_1cf4cc;
        case 0x1cf50cu: goto label_1cf50c;
        default: break;
    }

    ctx->pc = 0x1cf1a0u;

    // 0x1cf1a0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1cf1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1cf1a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1cf1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1cf1a8: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x1cf1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x1cf1ac: 0x24422b18  addiu       $v0, $v0, 0x2B18
    ctx->pc = 0x1cf1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11032));
    // 0x1cf1b0: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x1cf1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x1cf1b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1cf1b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1b8: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x1cf1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x1cf1bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cf1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cf1c0: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x1cf1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x1cf1c4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1cf1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cf1c8: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x1cf1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x1cf1cc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1cf1ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1d0: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1cf1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1cf1d4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1cf1d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1d8: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x1cf1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x1cf1dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cf1dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1e0: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x1cf1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x1cf1e4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cf1e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1e8: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1cf1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1cf1ec: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1cf1ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1cf1f0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1cf1f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1cf1f4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1cf1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1cf1f8: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1cf1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1cf1fc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1cf1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1cf200: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x1cf200u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cf204: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x1CF204u;
    SET_GPR_U32(ctx, 31, 0x1CF20Cu);
    ctx->pc = 0x1CF208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF204u;
    // 0x1cf208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x1CF204u, 0x1CF20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF20Cu;
label_1cf20c:
    // 0x1cf20c: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x1cf20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1cf210: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1cf210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1cf214: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1cf214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1cf218: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1cf218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf21c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1cf21cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cf220: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cf220u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf224: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1cf224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf228: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1cf228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf22c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1cf22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf230: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1cf230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf234: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1cf234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cf238: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cf238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cf23c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1cf23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cf240: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1cf240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cf244: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1cf244u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1cf248: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1cf248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf24c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1cf24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf250: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1cf250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cf254: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cf254u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cf258: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cf258u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cf25c: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x1cf25cu;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cf260: 0x46150544  c1          0x150544
    ctx->pc = 0x1cf260u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cf264: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x1cf264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x1cf268: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF268u;
    {
        const bool branch_taken_0x1cf268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF268u;
        // 0x1cf26c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf268) {
            ctx->pc = 0x1CF294u;
            goto label_1cf294;
        }
    }
    ctx->pc = 0x1CF270u;
    // 0x1cf270: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x1cf270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1cf274: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1cf274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cf278: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF278u;
    {
        const bool branch_taken_0x1cf278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF278u;
        // 0x1cf27c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf278) {
            ctx->pc = 0x1CF28Cu;
            goto label_1cf28c;
        }
    }
    ctx->pc = 0x1CF280u;
    // 0x1cf280: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1cf280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1cf284: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF284u;
    {
        const bool branch_taken_0x1cf284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF284u;
        // 0x1cf288: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf284) {
            ctx->pc = 0x1CF294u;
            goto label_1cf294;
        }
    }
    ctx->pc = 0x1CF28Cu;
label_1cf28c:
    // 0x1cf28c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cf294:
    // 0x1cf294: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x1cf294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
    // 0x1cf298: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cf298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf29c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF29Cu;
    {
        const bool branch_taken_0x1cf29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF29Cu;
        // 0x1cf2a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf29c) {
            ctx->pc = 0x1CF2B4u;
            goto label_1cf2b4;
        }
    }
    ctx->pc = 0x1CF2A4u;
    // 0x1cf2a4: 0xc092432  jal         func_2490C8
    ctx->pc = 0x1CF2A4u;
    SET_GPR_U32(ctx, 31, 0x1CF2ACu);
    ctx->pc = 0x1CF2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2A4u;
    // 0x1cf2a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x1CF2A4u, 0x1CF2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2ACu;
label_1cf2ac:
    // 0x1cf2ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF2ACu;
    {
        const bool branch_taken_0x1cf2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf2ac) {
            ctx->pc = 0x1CF2B8u;
            goto label_1cf2b8;
        }
    }
    ctx->pc = 0x1CF2B4u;
label_1cf2b4:
    // 0x1cf2b4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cf2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf2b8:
    // 0x1cf2b8: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF2B8u;
    {
        const bool branch_taken_0x1cf2b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf2b8) {
            ctx->pc = 0x1CF2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF2B8u;
            // 0x1cf2bc: 0x24100415  addiu       $s0, $zero, 0x415 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF2CCu;
            goto label_1cf2cc;
        }
    }
    ctx->pc = 0x1CF2C0u;
    // 0x1cf2c0: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF2C0u;
    {
        const bool branch_taken_0x1cf2c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2C0u;
        // 0x1cf2c4: 0x24100415  addiu       $s0, $zero, 0x415 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2c0) {
            ctx->pc = 0x1CF2CCu;
            goto label_1cf2cc;
        }
    }
    ctx->pc = 0x1CF2C8u;
    // 0x1cf2c8: 0x241003e9  addiu       $s0, $zero, 0x3E9
    ctx->pc = 0x1cf2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_1cf2cc:
    // 0x1cf2cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CF2CCu;
    SET_GPR_U32(ctx, 31, 0x1CF2D4u);
    ctx->pc = 0x1CF2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2CCu;
    // 0x1cf2d0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CF2CCu, 0x1CF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2D4u;
label_1cf2d4:
    // 0x1cf2d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2d8: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1CF2D8u;
    SET_GPR_U32(ctx, 31, 0x1CF2E0u);
    ctx->pc = 0x1CF2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2D8u;
    // 0x1cf2dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1CF2D8u, 0x1CF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2E0u;
label_1cf2e0:
    // 0x1cf2e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cf2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2e4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1CF2E4u;
    SET_GPR_U32(ctx, 31, 0x1CF2ECu);
    ctx->pc = 0x1CF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2E4u;
    // 0x1cf2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1CF2E4u, 0x1CF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2ECu;
label_1cf2ec:
    // 0x1cf2ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF2ECu;
    {
        const bool branch_taken_0x1cf2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf2ec) {
            ctx->pc = 0x1CF2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF2ECu;
            // 0x1cf2f0: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF300u;
            goto label_1cf300;
        }
    }
    ctx->pc = 0x1CF2F4u;
    // 0x1cf2f4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1CF2F4u;
    SET_GPR_U32(ctx, 31, 0x1CF2FCu);
    ctx->pc = 0x1CF2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2F4u;
    // 0x1cf2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1CF2F4u, 0x1CF2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2FCu;
label_1cf2fc:
    // 0x1cf2fc: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x1cf2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf300:
    // 0x1cf300: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1cf300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1cf304: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x1cf304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1cf308: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cf308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cf30c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1cf30cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1cf310: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cf310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf314: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1cf314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cf318: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1cf318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf31c: 0xc07720a  jal         func_1DC828
    ctx->pc = 0x1CF31Cu;
    SET_GPR_U32(ctx, 31, 0x1CF324u);
    ctx->pc = 0x1CF320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF31Cu;
    // 0x1cf320: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC828u, 0x1CF31Cu, 0x1CF324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF324u;
label_1cf324:
    // 0x1cf324: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1CF324u;
    {
        const bool branch_taken_0x1cf324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF324u;
        // 0x1cf328: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf324) {
            ctx->pc = 0x1CF50Cu;
            goto label_1cf50c;
        }
    }
    ctx->pc = 0x1CF32Cu;
    // 0x1cf32c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf330: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1CF330u;
    SET_GPR_U32(ctx, 31, 0x1CF338u);
    ctx->pc = 0x1CF334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF330u;
    // 0x1cf334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1CF330u, 0x1CF338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF338u;
label_1cf338:
    // 0x1cf338: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cf338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf33c: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1CF33Cu;
    SET_GPR_U32(ctx, 31, 0x1CF344u);
    ctx->pc = 0x1CF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF33Cu;
    // 0x1cf340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1CF33Cu, 0x1CF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF344u;
label_1cf344:
    // 0x1cf344: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CF344u;
    SET_GPR_U32(ctx, 31, 0x1CF34Cu);
    ctx->pc = 0x1CF348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF344u;
    // 0x1cf348: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CF344u, 0x1CF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF34Cu;
label_1cf34c:
    // 0x1cf34c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CF34Cu;
    SET_GPR_U32(ctx, 31, 0x1CF354u);
    ctx->pc = 0x1CF350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF34Cu;
    // 0x1cf350: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CF34Cu, 0x1CF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF354u;
label_1cf354:
    // 0x1cf354: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cf354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cf358: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cf35c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1cf35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1cf360: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1cf360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1cf364: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1cf364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1cf368: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1cf368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf36c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cf36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cf370: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1cf370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1cf374: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1cf374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1cf378: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1cf378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1cf37c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1cf37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1cf380: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1cf380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1cf384: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1cf384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cf388: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1cf388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf38c: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x1cf38cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cf390: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cf390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cf394: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1cf394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1cf398: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1cf398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1cf39c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1cf39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1cf3a0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1cf3a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cf3a4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cf3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf3a8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1cf3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1cf3ac: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1cf3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cf3b0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1cf3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1cf3b4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cf3b8: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x1cf3b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf3bc: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x1cf3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1cf3c0: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x1cf3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1cf3c4: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x1cf3c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1cf3c8: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x1cf3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x1cf3cc: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1cf3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x1cf3d0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1cf3d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf3d4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1cf3d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cf3d8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cf3d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf3dc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cf3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf3e0: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x1cf3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf3e4: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x1cf3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf3e8: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x1cf3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cf3ec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cf3ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cf3f0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cf3f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cf3f4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1cf3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cf3f8: 0x0  nop
    ctx->pc = 0x1cf3f8u;
    // NOP
    // 0x1cf3fc: 0x0  nop
    ctx->pc = 0x1cf3fcu;
    // NOP
    // 0x1cf400: 0x46000044  c1          0x44
    ctx->pc = 0x1cf400u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cf404: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1cf404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf408: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cf408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cf40c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cf40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1cf410: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1cf410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf414: 0x0  nop
    ctx->pc = 0x1cf414u;
    // NOP
    // 0x1cf418: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CF418u;
    {
        const bool branch_taken_0x1cf418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF418u;
        // 0x1cf41c: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf418) {
            ctx->pc = 0x1CF444u;
            goto label_1cf444;
        }
    }
    ctx->pc = 0x1CF420u;
    // 0x1cf420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf428: 0x0  nop
    ctx->pc = 0x1cf428u;
    // NOP
    // 0x1cf42c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cf42cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cf430: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cf430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1cf434: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1cf434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cf438: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cf438u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cf43c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cf43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf440: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1cf440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_1cf444:
    // 0x1cf444: 0x3c05104a  lui         $a1, 0x104A
    ctx->pc = 0x1cf444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4170 << 16));
    // 0x1cf448: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cf44c: 0x34a51210  ori         $a1, $a1, 0x1210
    ctx->pc = 0x1cf44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4624);
    // 0x1cf450: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf454: 0xc07789e  jal         func_1DE278
    ctx->pc = 0x1CF454u;
    SET_GPR_U32(ctx, 31, 0x1CF45Cu);
    ctx->pc = 0x1CF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF454u;
    // 0x1cf458: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE278u, 0x1CF454u, 0x1CF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF45Cu;
label_1cf45c:
    // 0x1cf45c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF45Cu;
    {
        const bool branch_taken_0x1cf45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF45Cu;
        // 0x1cf460: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf45c) {
            ctx->pc = 0x1CF474u;
            goto label_1cf474;
        }
    }
    ctx->pc = 0x1CF464u;
    // 0x1cf464: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1CF464u;
    SET_GPR_U32(ctx, 31, 0x1CF46Cu);
    ctx->pc = 0x1CF468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF464u;
    // 0x1cf468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1CF464u, 0x1CF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF46Cu;
label_1cf46c:
    // 0x1cf46c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CF46Cu;
    {
        const bool branch_taken_0x1cf46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF46Cu;
        // 0x1cf470: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf46c) {
            ctx->pc = 0x1CF510u;
            goto label_1cf510;
        }
    }
    ctx->pc = 0x1CF474u;
label_1cf474:
    // 0x1cf474: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x1cf474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf47c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf480: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x1cf480u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1cf484: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cf484u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cf488: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1cf488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf48c: 0x0  nop
    ctx->pc = 0x1cf48cu;
    // NOP
    // 0x1cf490: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF490u;
    {
        const bool branch_taken_0x1cf490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF490u;
        // 0x1cf494: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf490) {
            ctx->pc = 0x1CF49Cu;
            goto label_1cf49c;
        }
    }
    ctx->pc = 0x1CF498u;
    // 0x1cf498: 0xe6940000  swc1        $f20, 0x0($s4)
    ctx->pc = 0x1cf498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1cf49c:
    // 0x1cf49c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf4a0: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x1cf4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x1cf4a4: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x1cf4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf4a8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1cf4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf4ac: 0x0  nop
    ctx->pc = 0x1cf4acu;
    // NOP
    // 0x1cf4b0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1CF4B0u;
    {
        const bool branch_taken_0x1cf4b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4B0u;
        // 0x1cf4b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4b0) {
            ctx->pc = 0x1CF504u;
            goto label_1cf504;
        }
    }
    ctx->pc = 0x1CF4B8u;
    // 0x1cf4b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CF4B8u;
    SET_GPR_U32(ctx, 31, 0x1CF4C0u);
    ctx->pc = 0x1CF4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF4B8u;
    // 0x1cf4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CF4B8u, 0x1CF4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4C0u;
label_1cf4c0:
    // 0x1cf4c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cf4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4c4: 0xc089ef8  jal         func_227BE0
    ctx->pc = 0x1CF4C4u;
    SET_GPR_U32(ctx, 31, 0x1CF4CCu);
    ctx->pc = 0x1CF4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF4C4u;
    // 0x1cf4c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227BE0u, 0x1CF4C4u, 0x1CF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4CCu;
label_1cf4cc:
    // 0x1cf4cc: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1cf4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf4d0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1cf4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf4d4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1cf4d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cf4d8: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1cf4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf4dc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1cf4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf4e0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cf4e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cf4e4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1cf4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf4e8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1cf4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf4ec: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1cf4ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cf4f0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1cf4f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf4f4: 0x0  nop
    ctx->pc = 0x1cf4f4u;
    // NOP
    // 0x1cf4f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF4F8u;
    {
        const bool branch_taken_0x1cf4f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf4f8) {
            ctx->pc = 0x1CF4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF4F8u;
            // 0x1cf4fc: 0xaef00000  sw          $s0, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF500u;
            goto label_1cf500;
        }
    }
    ctx->pc = 0x1CF500u;
label_1cf500:
    // 0x1cf500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cf504:
    // 0x1cf504: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1CF504u;
    SET_GPR_U32(ctx, 31, 0x1CF50Cu);
    ctx->pc = 0x1CF508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF504u;
    // 0x1cf508: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1CF504u, 0x1CF50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF50Cu;
label_1cf50c:
    // 0x1cf50c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1cf50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1cf510:
    // 0x1cf510: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x1cf510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1cf514: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x1cf514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cf518: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x1cf518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1cf51c: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x1cf51cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cf520: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x1cf520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1cf524: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x1cf524u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cf528: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x1cf528u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1cf52c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1cf52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cf530: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1cf530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cf534: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1cf534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf538: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF538u;
        // 0x1cf53c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF540u;
}
