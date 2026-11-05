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

// Function: sub_001372E8
// Address: 0x1372e8 - 0x137410
void sub_001372E8_0x1372e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001372E8_0x1372e8");
#endif

    switch (ctx->pc) {
        case 0x1373a8u: goto label_1373a8;
        case 0x1373f0u: goto label_1373f0;
        default: break;
    }

    ctx->pc = 0x1372e8u;

    // 0x1372e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1372e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1372ec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1372ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1372f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1372f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1372f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1372f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1372f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1372fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1372fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x137300: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
    ctx->pc = 0x137300u;
    {
        const bool branch_taken_0x137300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x137304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137300u;
        // 0x137304: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137300) {
            ctx->pc = 0x1373F0u;
            goto label_1373f0;
        }
    }
    ctx->pc = 0x137308u;
    // 0x137308: 0x10c00039  beqz        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x137308u;
    {
        const bool branch_taken_0x137308 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137308u;
        // 0x13730c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137308) {
            ctx->pc = 0x1373F0u;
            goto label_1373f0;
        }
    }
    ctx->pc = 0x137310u;
    // 0x137310: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x137310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x137314: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x137314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137318: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x137318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13731c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137320: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x137320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x137324: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x137324u;
    {
        const bool branch_taken_0x137324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x137328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137324u;
        // 0x137328: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137324) {
            ctx->pc = 0x1373F4u;
            goto label_1373f4;
        }
    }
    ctx->pc = 0x13732Cu;
    // 0x13732c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x137330: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137334: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x137334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137338: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x137338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13733c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13733Cu;
    {
        const bool branch_taken_0x13733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13733c) {
            ctx->pc = 0x137340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13733Cu;
            // 0x137340: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13734Cu;
            goto label_13734c;
        }
    }
    ctx->pc = 0x137344u;
    // 0x137344: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137344u;
    {
        const bool branch_taken_0x137344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137344u;
        // 0x137348: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137344) {
            ctx->pc = 0x137354u;
            goto label_137354;
        }
    }
    ctx->pc = 0x13734Cu;
label_13734c:
    // 0x13734c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137350: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x137350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_137354:
    // 0x137354: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x137354u;
    {
        const bool branch_taken_0x137354 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x137358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137354u;
        // 0x137358: 0x24839a08  addiu       $v1, $a0, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137354) {
            ctx->pc = 0x1373F0u;
            goto label_1373f0;
        }
    }
    ctx->pc = 0x13735Cu;
    // 0x13735c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13735cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x137360: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137364: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x137364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x137368: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x137368u;
    {
        const bool branch_taken_0x137368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137368u;
        // 0x13736c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137368) {
            ctx->pc = 0x1373F4u;
            goto label_1373f4;
        }
    }
    ctx->pc = 0x137370u;
    // 0x137370: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x137374: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137378: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x137378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13737c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x13737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x137380: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x137380u;
    {
        const bool branch_taken_0x137380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137380) {
            ctx->pc = 0x137384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137380u;
            // 0x137384: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137390u;
            goto label_137390;
        }
    }
    ctx->pc = 0x137388u;
    // 0x137388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137388u;
    {
        const bool branch_taken_0x137388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137388u;
        // 0x13738c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137388) {
            ctx->pc = 0x137398u;
            goto label_137398;
        }
    }
    ctx->pc = 0x137390u;
label_137390:
    // 0x137390: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x137390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137394: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x137394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_137398:
    // 0x137398: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x137398u;
    {
        const bool branch_taken_0x137398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137398) {
            ctx->pc = 0x13739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137398u;
            // 0x13739c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1373F4u;
            goto label_1373f4;
        }
    }
    ctx->pc = 0x1373A0u;
    // 0x1373a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1373A0u;
    SET_GPR_U32(ctx, 31, 0x1373A8u);
    ctx->pc = 0x1373A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373A0u;
    // 0x1373a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1373A0u, 0x1373A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373A8u;
label_1373a8:
    // 0x1373a8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1373a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1373ac: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1373acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1373b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1373b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1373b4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1373b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1373b8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1373B8u;
    {
        const bool branch_taken_0x1373b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1373BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373B8u;
        // 0x1373bc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373b8) {
            ctx->pc = 0x1373E0u;
            goto label_1373e0;
        }
    }
    ctx->pc = 0x1373C0u;
    // 0x1373c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1373c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1373c4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1373c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1373c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1373c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1373cc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1373ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1373d0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1373d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1373d4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1373d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1373d8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1373d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1373dc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1373dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1373e0:
    // 0x1373e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1373e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1373e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373e8: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x1373E8u;
    SET_GPR_U32(ctx, 31, 0x1373F0u);
    ctx->pc = 0x1373ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373E8u;
    // 0x1373ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x1373E8u, 0x1373F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373F0u;
label_1373f0:
    // 0x1373f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1373f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1373f4:
    // 0x1373f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1373f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1373f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1373f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1373fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1373fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137400: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x137400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137404: 0x3e00008  jr          $ra
    ctx->pc = 0x137404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137404u;
        // 0x137408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13740Cu;
    // 0x13740c: 0x0  nop
    ctx->pc = 0x13740cu;
    // NOP
    ctx->pc = 0x137410u;
}
