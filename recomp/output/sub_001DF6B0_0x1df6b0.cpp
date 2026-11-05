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

// Function: sub_001DF6B0
// Address: 0x1df6b0 - 0x1df840
void sub_001DF6B0_0x1df6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF6B0_0x1df6b0");
#endif

    switch (ctx->pc) {
        case 0x1df6e8u: goto label_1df6e8;
        case 0x1df700u: goto label_1df700;
        case 0x1df744u: goto label_1df744;
        case 0x1df764u: goto label_1df764;
        case 0x1df778u: goto label_1df778;
        case 0x1df814u: goto label_1df814;
        default: break;
    }

    ctx->pc = 0x1df6b0u;

    // 0x1df6b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1df6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1df6b4: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1df6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1df6b8: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1df6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1df6bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1df6bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df6c0: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1df6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1df6c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1df6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df6c8: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1df6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1df6cc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1df6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df6d0: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1df6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x1df6d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1df6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df6d8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1df6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1df6dc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1df6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1df6e0: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DF6E0u;
    SET_GPR_U32(ctx, 31, 0x1DF6E8u);
    ctx->pc = 0x1DF6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6E0u;
    // 0x1df6e4: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DF6E0u, 0x1DF6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF6E8u;
label_1df6e8:
    // 0x1df6e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF6E8u;
    {
        const bool branch_taken_0x1df6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6E8u;
        // 0x1df6ec: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6e8) {
            ctx->pc = 0x1DF6F8u;
            goto label_1df6f8;
        }
    }
    ctx->pc = 0x1DF6F0u;
    // 0x1df6f0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1DF6F0u;
    {
        const bool branch_taken_0x1df6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6F0u;
        // 0x1df6f4: 0x8c6291c0  lw          $v0, -0x6E40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6f0) {
            ctx->pc = 0x1DF818u;
            goto label_1df818;
        }
    }
    ctx->pc = 0x1DF6F8u;
label_1df6f8:
    // 0x1df6f8: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DF6F8u;
    SET_GPR_U32(ctx, 31, 0x1DF700u);
    ctx->pc = 0x1DF6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6F8u;
    // 0x1df6fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DF6F8u, 0x1DF700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF700u;
label_1df700:
    // 0x1df700: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1DF700u;
    {
        const bool branch_taken_0x1df700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF700u;
        // 0x1df704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df700) {
            ctx->pc = 0x1DF818u;
            goto label_1df818;
        }
    }
    ctx->pc = 0x1DF708u;
    // 0x1df708: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1df708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df70c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1df70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df710: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1df710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1df714: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1df714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1df718: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1df718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1df71c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1df71cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1df720: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1df720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1df724: 0xac700100  sw          $s0, 0x100($v1)
    ctx->pc = 0x1df724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x490100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490100u, _value); } while (0);
    // 0x1df728: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1df728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df72c: 0xace691c4  sw          $a2, -0x6E3C($a3)
    ctx->pc = 0x1df72cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3F91C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C4u, _value); } while (0);
    // 0x1df730: 0xac4691c8  sw          $a2, -0x6E38($v0)
    ctx->pc = 0x1df730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3F91C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C8u, _value); } while (0);
    // 0x1df734: 0xacb191b4  sw          $s1, -0x6E4C($a1)
    ctx->pc = 0x1df734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3F91B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91B4u, _value); } while (0);
    // 0x1df738: 0xe68091b0  swc1        $f0, -0x6E50($s4)
    ctx->pc = 0x1df738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91B0u, _value); } while (0); }
    // 0x1df73c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1DF73Cu;
    SET_GPR_U32(ctx, 31, 0x1DF744u);
    ctx->pc = 0x1DF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF73Cu;
    // 0x1df740: 0x269191b0  addiu       $s1, $s4, -0x6E50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1DF73Cu, 0x1DF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF744u;
label_1df744:
    // 0x1df744: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1df744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1df748: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x1df748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x1df74c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1df74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1df750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df754: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1df754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1df758: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1df758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df75c: 0xc0855ae  jal         func_2156B8
    ctx->pc = 0x1DF75Cu;
    SET_GPR_U32(ctx, 31, 0x1DF764u);
    ctx->pc = 0x1DF760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF75Cu;
    // 0x1df760: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2156B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2156B8u, 0x1DF75Cu, 0x1DF764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF764u;
label_1df764:
    // 0x1df764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1df764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df768: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df76c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1df76cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df770: 0xc07766e  jal         func_1DD9B8
    ctx->pc = 0x1DF770u;
    SET_GPR_U32(ctx, 31, 0x1DF778u);
    ctx->pc = 0x1DF774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF770u;
    // 0x1df774: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9B8u, 0x1DF770u, 0x1DF778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF778u;
label_1df778:
    // 0x1df778: 0x8fac002c  lw          $t4, 0x2C($sp)
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1df77c: 0x1180001e  beqz        $t4, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DF77Cu;
    {
        const bool branch_taken_0x1df77c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF77Cu;
        // 0x1df780: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df77c) {
            ctx->pc = 0x1DF7F8u;
            goto label_1df7f8;
        }
    }
    ctx->pc = 0x1DF784u;
    // 0x1df784: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1df784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df788: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1df788u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1df78c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1df78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1df790: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1df790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df794: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1df794u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1df798: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1df798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1df79c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1df79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1df7a0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1df7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df7a4: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x1df7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1df7a8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1df7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1df7ac: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1df7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df7b0: 0x8fa8003c  lw          $t0, 0x3C($sp)
    ctx->pc = 0x1df7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1df7b4: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x1df7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df7b8: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x1df7b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1df7bc: 0x8fab0050  lw          $t3, 0x50($sp)
    ctx->pc = 0x1df7bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df7c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1df7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1df7c4: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1df7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x1df7c8: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x1df7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x1df7cc: 0xae440028  sw          $a0, 0x28($s2)
    ctx->pc = 0x1df7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 4));
    // 0x1df7d0: 0xae4c002c  sw          $t4, 0x2C($s2)
    ctx->pc = 0x1df7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 12));
    // 0x1df7d4: 0xae450030  sw          $a1, 0x30($s2)
    ctx->pc = 0x1df7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
    // 0x1df7d8: 0xae460034  sw          $a2, 0x34($s2)
    ctx->pc = 0x1df7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 6));
    // 0x1df7dc: 0xae470038  sw          $a3, 0x38($s2)
    ctx->pc = 0x1df7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 7));
    // 0x1df7e0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1df7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1df7e4: 0xae48003c  sw          $t0, 0x3C($s2)
    ctx->pc = 0x1df7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 8));
    // 0x1df7e8: 0xae490040  sw          $t1, 0x40($s2)
    ctx->pc = 0x1df7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 9));
    // 0x1df7ec: 0xae4a0044  sw          $t2, 0x44($s2)
    ctx->pc = 0x1df7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 10));
    // 0x1df7f0: 0xae4b0050  sw          $t3, 0x50($s2)
    ctx->pc = 0x1df7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 11));
    // 0x1df7f4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1df7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1df7f8:
    // 0x1df7f8: 0xc68091b0  lwc1        $f0, -0x6E50($s4)
    ctx->pc = 0x1df7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294939056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df7fc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1df7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df800: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1df800u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1df804: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF804u;
    {
        const bool branch_taken_0x1df804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF804u;
        // 0x1df808: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df804) {
            ctx->pc = 0x1DF814u;
            goto label_1df814;
        }
    }
    ctx->pc = 0x1DF80Cu;
    // 0x1df80c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1DF80Cu;
    SET_GPR_U32(ctx, 31, 0x1DF814u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1DF80Cu, 0x1DF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF814u;
label_1df814:
    // 0x1df814: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df818:
    // 0x1df818: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1df818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1df81c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1df81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df820: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1df820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df824: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1df824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df828: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1df828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1df82c: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1df82cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1df830: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1df830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1df834: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF834u;
        // 0x1df838: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF83Cu;
    // 0x1df83c: 0x0  nop
    ctx->pc = 0x1df83cu;
    // NOP
    ctx->pc = 0x1df840u;
}
