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

// Function: sub_00119658
// Address: 0x119658 - 0x119908
void sub_00119658_0x119658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119658_0x119658");
#endif

    switch (ctx->pc) {
        case 0x119708u: goto label_119708;
        case 0x1197a8u: goto label_1197a8;
        case 0x119838u: goto label_119838;
        case 0x1198b8u: goto label_1198b8;
        default: break;
    }

    ctx->pc = 0x119658u;

    // 0x119658: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x119658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11965c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x119660: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x119660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x119664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x119664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119668: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x119668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x11966c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x11966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x119670: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119674: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x119674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x119678: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x119678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x11967c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x11967cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x119680: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x119680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x119684: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x119684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x119688: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x119688u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x11968c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x11968cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x119690: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x119690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x119694: 0x92421212  lbu         $v0, 0x1212($s2)
    ctx->pc = 0x119694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4626)));
    // 0x119698: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x119698u;
    {
        const bool branch_taken_0x119698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119698u;
        // 0x11969c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119698) {
            ctx->pc = 0x1198CCu;
            goto label_1198cc;
        }
    }
    ctx->pc = 0x1196A0u;
    // 0x1196a0: 0x24439a08  addiu       $v1, $v0, -0x65F8
    ctx->pc = 0x1196a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1196a4: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x1196a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
    // 0x1196a8: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1196A8u;
    {
        const bool branch_taken_0x1196a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196A8u;
        // 0x1196ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196a8) {
            ctx->pc = 0x1198D0u;
            goto label_1198d0;
        }
    }
    ctx->pc = 0x1196B0u;
    // 0x1196b0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1196b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1196b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1196b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1196b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1196b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1196bc: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1196bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1196c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1196C0u;
    {
        const bool branch_taken_0x1196c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1196c0) {
            ctx->pc = 0x1196C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1196C0u;
            // 0x1196c4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1196D0u;
            goto label_1196d0;
        }
    }
    ctx->pc = 0x1196C8u;
    // 0x1196c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1196C8u;
    {
        const bool branch_taken_0x1196c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196C8u;
        // 0x1196cc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196c8) {
            ctx->pc = 0x1196D8u;
            goto label_1196d8;
        }
    }
    ctx->pc = 0x1196D0u;
label_1196d0:
    // 0x1196d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1196d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1196d4: 0x24770070  addiu       $s7, $v1, 0x70
    ctx->pc = 0x1196d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1196d8:
    // 0x1196d8: 0x92421212  lbu         $v0, 0x1212($s2)
    ctx->pc = 0x1196d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4626)));
    // 0x1196dc: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1196DCu;
    {
        const bool branch_taken_0x1196dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196DCu;
        // 0x1196e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196dc) {
            ctx->pc = 0x1198CCu;
            goto label_1198cc;
        }
    }
    ctx->pc = 0x1196E4u;
    // 0x1196e4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1196e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1196e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1196e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1196ec: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1196ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1196f0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1196f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1196f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1196f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1196f8: 0x245e9b10  addiu       $fp, $v0, -0x64F0
    ctx->pc = 0x1196f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x1196fc: 0x26560004  addiu       $s6, $s2, 0x4
    ctx->pc = 0x1196fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x119700: 0x92421210  lbu         $v0, 0x1210($s2)
    ctx->pc = 0x119700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4624)));
    // 0x119704: 0x0  nop
    ctx->pc = 0x119704u;
    // NOP
label_119708:
    // 0x119708: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x119708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x11970c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11970cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x119710: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x119714: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x119714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x119718: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x119718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11971c: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x11971cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x119720: 0x12600065  beqz        $s3, . + 4 + (0x65 << 2)
    ctx->pc = 0x119720u;
    {
        const bool branch_taken_0x119720 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x119724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119720u;
        // 0x119724: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119720) {
            ctx->pc = 0x1198B8u;
            goto label_1198b8;
        }
    }
    ctx->pc = 0x119728u;
    // 0x119728: 0x12620063  beq         $s3, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x119728u;
    {
        const bool branch_taken_0x119728 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119728u;
        // 0x11972c: 0x2415001e  addiu       $s5, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119728) {
            ctx->pc = 0x1198B8u;
            goto label_1198b8;
        }
    }
    ctx->pc = 0x119730u;
    // 0x119730: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x119730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119734: 0x10950060  beq         $a0, $s5, . + 4 + (0x60 << 2)
    ctx->pc = 0x119734u;
    {
        const bool branch_taken_0x119734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x119738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119734u;
        // 0x119738: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119734) {
            ctx->pc = 0x1198B8u;
            goto label_1198b8;
        }
    }
    ctx->pc = 0x11973Cu;
    // 0x11973c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x11973cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119740: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x119740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x119744: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x119744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x119748: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x119748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11974c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x119750: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x119750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119754: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x119754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x119758: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x119758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11975c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x11975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119760: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x119760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x119764: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x119764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x119768: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x119768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x11976c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11976cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x119770: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x119770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x119774: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x119774u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x119778: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x119778u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11977c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x11977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119780: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x119780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119784: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x119784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x119788: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x119788u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x11978c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x11978cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x119790: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x119790u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x119794: 0x46140504  c1          0x140504
    ctx->pc = 0x119794u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x119798: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x119798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11979c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197a0: 0xc046dac  jal         func_11B6B0
    ctx->pc = 0x1197A0u;
    SET_GPR_U32(ctx, 31, 0x1197A8u);
    ctx->pc = 0x1197A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1197A0u;
    // 0x1197a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B6B0u, 0x1197A0u, 0x1197A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197A8u;
label_1197a8:
    // 0x1197a8: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1197a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1197ac: 0x0  nop
    ctx->pc = 0x1197acu;
    // NOP
    // 0x1197b0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1197B0u;
    {
        const bool branch_taken_0x1197b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1197B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197B0u;
        // 0x1197b4: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197b0) {
            ctx->pc = 0x1197ECu;
            goto label_1197ec;
        }
    }
    ctx->pc = 0x1197B8u;
    // 0x1197b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1197b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1197bc: 0x10550002  beq         $v0, $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1197BCu;
    {
        const bool branch_taken_0x1197bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1197C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197BCu;
        // 0x1197c0: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197bc) {
            ctx->pc = 0x1197C8u;
            goto label_1197c8;
        }
    }
    ctx->pc = 0x1197C4u;
    // 0x1197c4: 0x4615a041  sub.s       $f1, $f20, $f21
    ctx->pc = 0x1197c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1197c8:
    // 0x1197c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1197c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1197cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1197ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1197d0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1197d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1197d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1197d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1197d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1197d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1197dc: 0x0  nop
    ctx->pc = 0x1197dcu;
    // NOP
    // 0x1197e0: 0x45030036  bc1tl       . + 4 + (0x36 << 2)
    ctx->pc = 0x1197E0u;
    {
        const bool branch_taken_0x1197e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1197e0) {
            ctx->pc = 0x1197E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1197E0u;
            // 0x1197e4: 0x92421212  lbu         $v0, 0x1212($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4626)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1198BCu;
            goto label_1198bc;
        }
    }
    ctx->pc = 0x1197E8u;
    // 0x1197e8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1197e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1197ec:
    // 0x1197ec: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1197ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1197f0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1197f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1197f4: 0x52600031  beql        $s3, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1197F4u;
    {
        const bool branch_taken_0x1197f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1197f4) {
            ctx->pc = 0x1197F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1197F4u;
            // 0x1197f8: 0x92421212  lbu         $v0, 0x1212($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4626)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1198BCu;
            goto label_1198bc;
        }
    }
    ctx->pc = 0x1197FCu;
    // 0x1197fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1197fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119800: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119804: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x119804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x119808: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x119808u;
    {
        const bool branch_taken_0x119808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119808u;
        // 0x11980c: 0x24100064  addiu       $s0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119808) {
            ctx->pc = 0x1198ACu;
            goto label_1198ac;
        }
    }
    ctx->pc = 0x119810u;
    // 0x119810: 0x4615a301  sub.s       $f12, $f20, $f21
    ctx->pc = 0x119810u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x119814: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x119814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119818: 0x0  nop
    ctx->pc = 0x119818u;
    // NOP
    // 0x11981c: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x11981cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119820: 0x0  nop
    ctx->pc = 0x119820u;
    // NOP
    // 0x119824: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x119824u;
    {
        const bool branch_taken_0x119824 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x119824) {
            ctx->pc = 0x119828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119824u;
            // 0x119828: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11982Cu;
            goto label_11982c;
        }
    }
    ctx->pc = 0x11982Cu;
label_11982c:
    // 0x11982c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x11982cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x119830: 0xc046dac  jal         func_11B6B0
    ctx->pc = 0x119830u;
    SET_GPR_U32(ctx, 31, 0x119838u);
    ctx->pc = 0x119834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119830u;
    // 0x119834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B6B0u, 0x119830u, 0x119838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119838u;
label_119838:
    // 0x119838: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x119838u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x11983c: 0x46160832  c.eq.s      $f1, $f22
    ctx->pc = 0x11983cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119840: 0x0  nop
    ctx->pc = 0x119840u;
    // NOP
    // 0x119844: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x119844u;
    {
        const bool branch_taken_0x119844 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x119844) {
            ctx->pc = 0x119848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119844u;
            // 0x119848: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1198ACu;
            goto label_1198ac;
        }
    }
    ctx->pc = 0x11984Cu;
    // 0x11984c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x11984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x119850: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119854: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x119854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x119858: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x119858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11985c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11985cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119860: 0x0  nop
    ctx->pc = 0x119860u;
    // NOP
    // 0x119864: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x119864u;
    {
        const bool branch_taken_0x119864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119864u;
        // 0x119868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119864) {
            ctx->pc = 0x1198B0u;
            goto label_1198b0;
        }
    }
    ctx->pc = 0x11986Cu;
    // 0x11986c: 0x0  nop
    ctx->pc = 0x11986cu;
    // NOP
    // 0x119870: 0x0  nop
    ctx->pc = 0x119870u;
    // NOP
    // 0x119874: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x119874u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x119878: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x119878u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11987c: 0x0  nop
    ctx->pc = 0x11987cu;
    // NOP
    // 0x119880: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x119880u;
    {
        const bool branch_taken_0x119880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x119880) {
            ctx->pc = 0x119890u;
            goto label_119890;
        }
    }
    ctx->pc = 0x119888u;
    // 0x119888: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x119888u;
    {
        const bool branch_taken_0x119888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119888u;
        // 0x11988c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119888) {
            ctx->pc = 0x1198B0u;
            goto label_1198b0;
        }
    }
    ctx->pc = 0x119890u;
label_119890:
    // 0x119890: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x119890u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119894: 0x0  nop
    ctx->pc = 0x119894u;
    // NOP
    // 0x119898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11989c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11989cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1198a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1198a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1198a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1198a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1198a8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1198a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1198ac:
    // 0x1198ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1198acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1198b0:
    // 0x1198b0: 0xc095514  jal         func_255450
    ctx->pc = 0x1198B0u;
    SET_GPR_U32(ctx, 31, 0x1198B8u);
    ctx->pc = 0x1198B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1198B0u;
    // 0x1198b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255450u, 0x1198B0u, 0x1198B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1198B8u;
label_1198b8:
    // 0x1198b8: 0x92421212  lbu         $v0, 0x1212($s2)
    ctx->pc = 0x1198b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4626)));
label_1198bc:
    // 0x1198bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1198bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1198c0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1198c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1198c4: 0x5440ff90  bnel        $v0, $zero, . + 4 + (-0x70 << 2)
    ctx->pc = 0x1198C4u;
    {
        const bool branch_taken_0x1198c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1198c4) {
            ctx->pc = 0x1198C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1198C4u;
            // 0x1198c8: 0x92421210  lbu         $v0, 0x1210($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119708;
        }
    }
    ctx->pc = 0x1198CCu;
label_1198cc:
    // 0x1198cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1198ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1198d0:
    // 0x1198d0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1198d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1198d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1198d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1198d8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1198d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1198dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1198dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1198e0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1198e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1198e4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1198e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1198e8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1198e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1198ec: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1198ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1198f0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1198f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1198f4: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1198f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1198f8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1198f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1198fc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1198fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119900: 0x3e00008  jr          $ra
    ctx->pc = 0x119900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119900u;
        // 0x119904: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119908u;
}
