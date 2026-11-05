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

// Function: sub_00299670
// Address: 0x299670 - 0x299780
void sub_00299670_0x299670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299670_0x299670");
#endif

    switch (ctx->pc) {
        case 0x299670u: goto label_299670;
        case 0x299674u: goto label_299674;
        case 0x299678u: goto label_299678;
        case 0x29967cu: goto label_29967c;
        case 0x299680u: goto label_299680;
        case 0x299684u: goto label_299684;
        case 0x299688u: goto label_299688;
        case 0x29968cu: goto label_29968c;
        case 0x299690u: goto label_299690;
        case 0x299694u: goto label_299694;
        case 0x299698u: goto label_299698;
        case 0x29969cu: goto label_29969c;
        case 0x2996a0u: goto label_2996a0;
        case 0x2996a4u: goto label_2996a4;
        case 0x2996a8u: goto label_2996a8;
        case 0x2996acu: goto label_2996ac;
        case 0x2996b0u: goto label_2996b0;
        case 0x2996b4u: goto label_2996b4;
        case 0x2996b8u: goto label_2996b8;
        case 0x2996bcu: goto label_2996bc;
        case 0x2996c0u: goto label_2996c0;
        case 0x2996c4u: goto label_2996c4;
        case 0x2996c8u: goto label_2996c8;
        case 0x2996ccu: goto label_2996cc;
        case 0x2996d0u: goto label_2996d0;
        case 0x2996d4u: goto label_2996d4;
        case 0x2996d8u: goto label_2996d8;
        case 0x2996dcu: goto label_2996dc;
        case 0x2996e0u: goto label_2996e0;
        case 0x2996e4u: goto label_2996e4;
        case 0x2996e8u: goto label_2996e8;
        case 0x2996ecu: goto label_2996ec;
        case 0x2996f0u: goto label_2996f0;
        case 0x2996f4u: goto label_2996f4;
        case 0x2996f8u: goto label_2996f8;
        case 0x2996fcu: goto label_2996fc;
        case 0x299700u: goto label_299700;
        case 0x299704u: goto label_299704;
        case 0x299708u: goto label_299708;
        case 0x29970cu: goto label_29970c;
        case 0x299710u: goto label_299710;
        case 0x299714u: goto label_299714;
        case 0x299718u: goto label_299718;
        case 0x29971cu: goto label_29971c;
        case 0x299720u: goto label_299720;
        case 0x299724u: goto label_299724;
        case 0x299728u: goto label_299728;
        case 0x29972cu: goto label_29972c;
        case 0x299730u: goto label_299730;
        case 0x299734u: goto label_299734;
        case 0x299738u: goto label_299738;
        case 0x29973cu: goto label_29973c;
        case 0x299740u: goto label_299740;
        case 0x299744u: goto label_299744;
        case 0x299748u: goto label_299748;
        case 0x29974cu: goto label_29974c;
        case 0x299750u: goto label_299750;
        case 0x299754u: goto label_299754;
        case 0x299758u: goto label_299758;
        case 0x29975cu: goto label_29975c;
        case 0x299760u: goto label_299760;
        case 0x299764u: goto label_299764;
        case 0x299768u: goto label_299768;
        case 0x29976cu: goto label_29976c;
        case 0x299770u: goto label_299770;
        case 0x299774u: goto label_299774;
        case 0x299778u: goto label_299778;
        case 0x29977cu: goto label_29977c;
        default: break;
    }

    ctx->pc = 0x299670u;

label_299670:
    // 0x299670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_299674:
    // 0x299674: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x299674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_299678:
    // 0x299678: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x299678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_29967c:
    // 0x29967c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29967cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299680:
    // 0x299680: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x299680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_299684:
    // 0x299684: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x299684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_299688:
    // 0x299688: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x299688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_29968c:
    // 0x29968c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29968cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_299690:
    // 0x299690: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x299690u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_299694:
    // 0x299694: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x299694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_299698:
    // 0x299698: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x299698u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_29969c:
    // 0x29969c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x29969cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_2996a0:
    // 0x2996a0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2996a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2996a4:
    // 0x2996a4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2996a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_2996a8:
    // 0x2996a8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2996a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2996ac:
    // 0x2996ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2996acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2996b0:
    // 0x2996b0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2996b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2996b4:
    // 0x2996b4: 0xc0f5240  jal         func_3D4900
label_2996b8:
    if (ctx->pc == 0x2996B8u) {
        ctx->pc = 0x2996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996B4u;
        // 0x2996b8: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2996BCu;
        goto label_2996bc;
    }
    ctx->pc = 0x2996B4u;
    SET_GPR_U32(ctx, 31, 0x2996BCu);
    ctx->pc = 0x2996B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2996B4u;
    // 0x2996b8: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2996B4u, 0x2996BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2996BCu;
label_2996bc:
    // 0x2996bc: 0xc0a6468  jal         func_2991A0
label_2996c0:
    if (ctx->pc == 0x2996C0u) {
        ctx->pc = 0x2996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996BCu;
        // 0x2996c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2996C4u;
        goto label_2996c4;
    }
    ctx->pc = 0x2996BCu;
    SET_GPR_U32(ctx, 31, 0x2996C4u);
    ctx->pc = 0x2996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2996BCu;
    // 0x2996c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2991A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2991A0u, 0x2996BCu, 0x2996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2996C4u;
label_2996c4:
    // 0x2996c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2996c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2996c8:
    // 0x2996c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2996c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2996cc:
    // 0x2996cc: 0xc0d745c  jal         func_35D170
label_2996d0:
    if (ctx->pc == 0x2996D0u) {
        ctx->pc = 0x2996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996CCu;
        // 0x2996d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2996D4u;
        goto label_2996d4;
    }
    ctx->pc = 0x2996CCu;
    SET_GPR_U32(ctx, 31, 0x2996D4u);
    ctx->pc = 0x2996D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2996CCu;
    // 0x2996d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2996CCu, 0x2996D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2996D4u;
label_2996d4:
    // 0x2996d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2996d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2996d8:
    // 0x2996d8: 0xc0d745c  jal         func_35D170
label_2996dc:
    if (ctx->pc == 0x2996DCu) {
        ctx->pc = 0x2996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996D8u;
        // 0x2996dc: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2996E0u;
        goto label_2996e0;
    }
    ctx->pc = 0x2996D8u;
    SET_GPR_U32(ctx, 31, 0x2996E0u);
    ctx->pc = 0x2996DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2996D8u;
    // 0x2996dc: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2996D8u, 0x2996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2996E0u;
label_2996e0:
    // 0x2996e0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2996e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2996e4:
    // 0x2996e4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2996e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2996e8:
    // 0x2996e8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2996e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2996ec:
    // 0x2996ec: 0xe6140078  swc1        $f20, 0x78($s0)
    ctx->pc = 0x2996ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_2996f0:
    // 0x2996f0: 0xe6150084  swc1        $f21, 0x84($s0)
    ctx->pc = 0x2996f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_2996f4:
    // 0x2996f4: 0xe616007c  swc1        $f22, 0x7C($s0)
    ctx->pc = 0x2996f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_2996f8:
    // 0x2996f8: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x2996f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2996fc:
    // 0x2996fc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2996fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299700:
    // 0x299700: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x299700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_299704:
    // 0x299704: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x299704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299708:
    // 0x299708: 0xc0a57e2  jal         func_295F88
label_29970c:
    if (ctx->pc == 0x29970Cu) {
        ctx->pc = 0x29970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299708u;
        // 0x29970c: 0xe601008c  swc1        $f1, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x299710u;
        goto label_299710;
    }
    ctx->pc = 0x299708u;
    SET_GPR_U32(ctx, 31, 0x299710u);
    ctx->pc = 0x29970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299708u;
    // 0x29970c: 0xe601008c  swc1        $f1, 0x8C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x299708u, 0x299710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299710u;
label_299710:
    // 0x299710: 0x2363a  dsrl        $a2, $v0, 24
    ctx->pc = 0x299710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 24);
label_299714:
    // 0x299714: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x299714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_299718:
    // 0x299718: 0x22c3a  dsrl        $a1, $v0, 16
    ctx->pc = 0x299718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 16);
label_29971c:
    // 0x29971c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x29971cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_299720:
    // 0x299720: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x299720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
label_299724:
    // 0x299724: 0xa3a60003  sb          $a2, 0x3($sp)
    ctx->pc = 0x299724u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
label_299728:
    // 0x299728: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x299728u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_29972c:
    // 0x29972c: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x29972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_299730:
    // 0x299730: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x299730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_299734:
    // 0x299734: 0xaa020017  swl         $v0, 0x17($s0)
    ctx->pc = 0x299734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_299738:
    // 0x299738: 0xba020014  swr         $v0, 0x14($s0)
    ctx->pc = 0x299738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_29973c:
    // 0x29973c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x29973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_299740:
    // 0x299740: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x299740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_299744:
    // 0x299744: 0x60f809  jalr        $v1
label_299748:
    if (ctx->pc == 0x299748u) {
        ctx->pc = 0x299748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299744u;
        // 0x299748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29974Cu;
        goto label_29974c;
    }
    ctx->pc = 0x299744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29974Cu);
        ctx->pc = 0x299748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299744u;
        // 0x299748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299744u, 0x29974Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29974Cu;
label_29974c:
    // 0x29974c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29974cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299750:
    // 0x299750: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x299750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_299754:
    // 0x299754: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x299754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_299758:
    // 0x299758: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29975c:
    // 0x29975c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29975cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_299760:
    // 0x299760: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x299760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_299764:
    // 0x299764: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x299764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_299768:
    // 0x299768: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x299768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_29976c:
    // 0x29976c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x29976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_299770:
    // 0x299770: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x299770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_299774:
    // 0x299774: 0x3e00008  jr          $ra
label_299778:
    if (ctx->pc == 0x299778u) {
        ctx->pc = 0x299778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299774u;
        // 0x299778: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29977Cu;
        goto label_29977c;
    }
    ctx->pc = 0x299774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299774u;
        // 0x299778: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29977Cu;
label_29977c:
    // 0x29977c: 0x0  nop
    ctx->pc = 0x29977cu;
    // NOP
    ctx->pc = 0x299780u;
}
