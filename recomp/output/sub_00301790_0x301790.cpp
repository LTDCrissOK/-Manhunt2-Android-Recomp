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

// Function: sub_00301790
// Address: 0x301790 - 0x3019e0
void sub_00301790_0x301790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301790_0x301790");
#endif

    switch (ctx->pc) {
        case 0x3017d8u: goto label_3017d8;
        case 0x3017e0u: goto label_3017e0;
        case 0x301808u: goto label_301808;
        case 0x30182cu: goto label_30182c;
        case 0x301834u: goto label_301834;
        case 0x30183cu: goto label_30183c;
        case 0x301848u: goto label_301848;
        case 0x301858u: goto label_301858;
        case 0x3018a4u: goto label_3018a4;
        case 0x3019b4u: goto label_3019b4;
        default: break;
    }

    ctx->pc = 0x301790u;

    // 0x301790: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x301790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x301794: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x301794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x301798: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x301798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x30179c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x30179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x3017a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3017a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017a4: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x3017a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x3017a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3017a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017ac: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x3017acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x3017b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3017b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017b4: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x3017b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x3017b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3017b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017bc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x3017bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x3017c0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3017c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017c4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3017c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x3017c8: 0x24565870  addiu       $s6, $v0, 0x5870
    ctx->pc = 0x3017c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x3017cc: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x3017ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x3017d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3017D0u;
    SET_GPR_U32(ctx, 31, 0x3017D8u);
    ctx->pc = 0x3017D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017D0u;
    // 0x3017d4: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3017D0u, 0x3017D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017D8u;
label_3017d8:
    // 0x3017d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3017D8u;
    SET_GPR_U32(ctx, 31, 0x3017E0u);
    ctx->pc = 0x3017DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017D8u;
    // 0x3017dc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3017D8u, 0x3017E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017E0u;
label_3017e0:
    // 0x3017e0: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x3017e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3017e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3017e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3017e8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3017e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3017ec: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3017ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3017f0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x3017f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3017f4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3017f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3017f8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3017f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3017fc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x3017fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x301800: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x301800u;
    SET_GPR_U32(ctx, 31, 0x301808u);
    ctx->pc = 0x301804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301800u;
    // 0x301804: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x301800u, 0x301808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301808u;
label_301808:
    // 0x301808: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x301808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30180c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x30180cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x301810: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x301810u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301814: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x301814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301818: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x301818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30181c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x30181cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301820: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x301820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301824: 0xc0c029c  jal         func_300A70
    ctx->pc = 0x301824u;
    SET_GPR_U32(ctx, 31, 0x30182Cu);
    ctx->pc = 0x301828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301824u;
    // 0x301828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300A70u, 0x301824u, 0x30182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30182Cu;
label_30182c:
    // 0x30182c: 0xc0c043c  jal         func_3010F0
    ctx->pc = 0x30182Cu;
    SET_GPR_U32(ctx, 31, 0x301834u);
    ctx->pc = 0x301830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30182Cu;
    // 0x301830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3010F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3010F0u, 0x30182Cu, 0x301834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301834u;
label_301834:
    // 0x301834: 0xc0c03b4  jal         func_300ED0
    ctx->pc = 0x301834u;
    SET_GPR_U32(ctx, 31, 0x30183Cu);
    ctx->pc = 0x301838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301834u;
    // 0x301838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300ED0u, 0x301834u, 0x30183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30183Cu;
label_30183c:
    // 0x30183c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30183cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301840: 0xc0c05e2  jal         func_301788
    ctx->pc = 0x301840u;
    SET_GPR_U32(ctx, 31, 0x301848u);
    ctx->pc = 0x301844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301840u;
    // 0x301844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301788u, 0x301840u, 0x301848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301848u;
label_301848:
    // 0x301848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30184c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30184cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301850: 0xc0c048e  jal         func_301238
    ctx->pc = 0x301850u;
    SET_GPR_U32(ctx, 31, 0x301858u);
    ctx->pc = 0x301854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301850u;
    // 0x301854: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301238u, 0x301850u, 0x301858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301858u;
label_301858:
    // 0x301858: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x301858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30185c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x30185cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x301860: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x301860u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x301864: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x301864u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x301868: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x301868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30186c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30186cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301870: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x301870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301874: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x301874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
    // 0x301878: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x301878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30187c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x30187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301880: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x301880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x301884: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x301884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301888: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x301888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30188c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x30188cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x301890: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x301890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x301894: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x301894u;
    {
        const bool branch_taken_0x301894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301894u;
        // 0x301898: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301894) {
            ctx->pc = 0x30191Cu;
            goto label_30191c;
        }
    }
    ctx->pc = 0x30189Cu;
    // 0x30189c: 0xc08dada  jal         func_236B68
    ctx->pc = 0x30189Cu;
    SET_GPR_U32(ctx, 31, 0x3018A4u);
    ctx->pc = 0x3018A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30189Cu;
    // 0x3018a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x30189Cu, 0x3018A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3018A4u;
label_3018a4:
    // 0x3018a4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3018A4u;
    {
        const bool branch_taken_0x3018a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3018A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018A4u;
        // 0x3018a8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018a4) {
            ctx->pc = 0x30191Cu;
            goto label_30191c;
        }
    }
    ctx->pc = 0x3018ACu;
    // 0x3018ac: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x3018acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3018b0: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x3018b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3018b4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3018b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3018b8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x3018b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3018bc: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x3018bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3018c0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3018c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x3018c4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3018c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3018c8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3018c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3018cc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3018ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3018d0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3018d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3018d4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3018d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3018d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3018d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3018dc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3018dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3018e0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3018e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3018e4: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x3018e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3018e8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3018e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x3018ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3018ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3018f0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3018f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3018f4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3018f4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3018f8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3018f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3018fc: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x3018fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301900: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x301900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x301904: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x301904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301908: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x301908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x30190c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x30190cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x301910: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x301910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x301914: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x301914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x301918: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x301918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_30191c:
    // 0x30191c: 0xc6c00098  lwc1        $f0, 0x98($s6)
    ctx->pc = 0x30191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301920: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x301920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x301924: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x301924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301928: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x301928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30192c: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x30192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301930: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x301930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x301934: 0xc7a4004c  lwc1        $f4, 0x4C($sp)
    ctx->pc = 0x301934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x301938: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x301938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30193c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x30193cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x301940: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x301940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x301944: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x301944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x301948: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x301948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30194c: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x30194cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x301950: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x301950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x301954: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x301954u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x301958: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x301958u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30195c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30195cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x301960: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x301960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x301964: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x301964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301968: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x301968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30196c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x30196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301970: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x301970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301974: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x301974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x301978: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x301978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x30197c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x30197cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x301980: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x301980u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x301984: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x301984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x301988: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x301988u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30198c: 0xc6c10078  lwc1        $f1, 0x78($s6)
    ctx->pc = 0x30198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301994: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x301994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301998: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x301998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30199c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30199cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019a0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3019a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3019a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3019a8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3019a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019ac: 0xc0bff3a  jal         func_2FFCE8
    ctx->pc = 0x3019ACu;
    SET_GPR_U32(ctx, 31, 0x3019B4u);
    ctx->pc = 0x3019B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019ACu;
    // 0x3019b0: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFCE8u, 0x3019ACu, 0x3019B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019B4u;
label_3019b4:
    // 0x3019b4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x3019b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3019b8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x3019b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3019bc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x3019bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3019c0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x3019c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3019c4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x3019c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3019c8: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x3019c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3019cc: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x3019ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3019d0: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x3019d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3019d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3019D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3019D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019D4u;
        // 0x3019d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3019D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3019DCu;
    // 0x3019dc: 0x0  nop
    ctx->pc = 0x3019dcu;
    // NOP
    ctx->pc = 0x3019e0u;
}
