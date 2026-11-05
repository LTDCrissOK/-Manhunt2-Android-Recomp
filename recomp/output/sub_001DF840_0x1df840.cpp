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

// Function: sub_001DF840
// Address: 0x1df840 - 0x1df9e0
void sub_001DF840_0x1df840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF840_0x1df840");
#endif

    switch (ctx->pc) {
        case 0x1df888u: goto label_1df888;
        case 0x1df8a0u: goto label_1df8a0;
        case 0x1df8e0u: goto label_1df8e0;
        case 0x1df900u: goto label_1df900;
        case 0x1df914u: goto label_1df914;
        case 0x1df9b0u: goto label_1df9b0;
        default: break;
    }

    ctx->pc = 0x1df840u;

    // 0x1df840: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1df840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1df844: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1df844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1df848: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1df848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1df84c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1df84cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df850: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1df850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1df854: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1df854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df858: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1df858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1df85c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1df85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df860: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1df860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1df864: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1df864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df868: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1df868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x1df86c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1df86cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df870: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x1df870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x1df874: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1df874u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df878: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1df878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1df87c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1df87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1df880: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DF880u;
    SET_GPR_U32(ctx, 31, 0x1DF888u);
    ctx->pc = 0x1DF884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF880u;
    // 0x1df884: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DF880u, 0x1DF888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF888u;
label_1df888:
    // 0x1df888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF888u;
    {
        const bool branch_taken_0x1df888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF888u;
        // 0x1df88c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df888) {
            ctx->pc = 0x1DF898u;
            goto label_1df898;
        }
    }
    ctx->pc = 0x1DF890u;
    // 0x1df890: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1DF890u;
    {
        const bool branch_taken_0x1df890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF890u;
        // 0x1df894: 0x8c6291c0  lw          $v0, -0x6E40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df890) {
            ctx->pc = 0x1DF9B4u;
            goto label_1df9b4;
        }
    }
    ctx->pc = 0x1DF898u;
label_1df898:
    // 0x1df898: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DF898u;
    SET_GPR_U32(ctx, 31, 0x1DF8A0u);
    ctx->pc = 0x1DF89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF898u;
    // 0x1df89c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DF898u, 0x1DF8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8A0u;
label_1df8a0:
    // 0x1df8a0: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1DF8A0u;
    {
        const bool branch_taken_0x1df8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8A0u;
        // 0x1df8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8a0) {
            ctx->pc = 0x1DF9B4u;
            goto label_1df9b4;
        }
    }
    ctx->pc = 0x1DF8A8u;
    // 0x1df8a8: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x1df8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df8ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1df8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1df8b0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1df8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1df8b4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1df8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1df8b8: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x1df8b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x1df8bc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1df8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1df8c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1df8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8c4: 0xac7191c4  sw          $s1, -0x6E3C($v1)
    ctx->pc = 0x1df8c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3F91C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C4u, _value); } while (0);
    // 0x1df8c8: 0xacd491b4  sw          $s4, -0x6E4C($a2)
    ctx->pc = 0x1df8c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x3F91B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91B4u, _value); } while (0);
    // 0x1df8cc: 0x26d191b0  addiu       $s1, $s6, -0x6E50
    ctx->pc = 0x1df8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939056));
    // 0x1df8d0: 0xe6c091b0  swc1        $f0, -0x6E50($s6)
    ctx->pc = 0x1df8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91B0u, _value); } while (0); }
    // 0x1df8d4: 0xac500100  sw          $s0, 0x100($v0)
    ctx->pc = 0x1df8d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x490100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490100u, _value); } while (0);
    // 0x1df8d8: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1DF8D8u;
    SET_GPR_U32(ctx, 31, 0x1DF8E0u);
    ctx->pc = 0x1DF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8D8u;
    // 0x1df8dc: 0xacb591c8  sw          $s5, -0x6E38($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294939080), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1DF8D8u, 0x1DF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8E0u;
label_1df8e0:
    // 0x1df8e0: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1df8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1df8e4: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x1df8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x1df8e8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1df8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1df8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8f0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1df8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1df8f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1df8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8f8: 0xc0855ae  jal         func_2156B8
    ctx->pc = 0x1DF8F8u;
    SET_GPR_U32(ctx, 31, 0x1DF900u);
    ctx->pc = 0x1DF8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8F8u;
    // 0x1df8fc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2156B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2156B8u, 0x1DF8F8u, 0x1DF900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF900u;
label_1df900:
    // 0x1df900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1df900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df908: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1df908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df90c: 0xc07766e  jal         func_1DD9B8
    ctx->pc = 0x1DF90Cu;
    SET_GPR_U32(ctx, 31, 0x1DF914u);
    ctx->pc = 0x1DF910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF90Cu;
    // 0x1df910: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9B8u, 0x1DF90Cu, 0x1DF914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF914u;
label_1df914:
    // 0x1df914: 0x8fac002c  lw          $t4, 0x2C($sp)
    ctx->pc = 0x1df914u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1df918: 0x1180001e  beqz        $t4, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DF918u;
    {
        const bool branch_taken_0x1df918 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF918u;
        // 0x1df91c: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df918) {
            ctx->pc = 0x1DF994u;
            goto label_1df994;
        }
    }
    ctx->pc = 0x1DF920u;
    // 0x1df920: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1df920u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df924: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1df924u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1df928: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1df928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1df92c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1df92cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df930: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1df930u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1df934: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1df934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1df938: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1df938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1df93c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1df93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df940: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x1df940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1df944: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1df944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1df948: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1df948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df94c: 0x8fa8003c  lw          $t0, 0x3C($sp)
    ctx->pc = 0x1df94cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1df950: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x1df950u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df954: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x1df954u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1df958: 0x8fab0050  lw          $t3, 0x50($sp)
    ctx->pc = 0x1df958u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df95c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1df95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1df960: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1df960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x1df964: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x1df964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x1df968: 0xae440028  sw          $a0, 0x28($s2)
    ctx->pc = 0x1df968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 4));
    // 0x1df96c: 0xae4c002c  sw          $t4, 0x2C($s2)
    ctx->pc = 0x1df96cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 12));
    // 0x1df970: 0xae450030  sw          $a1, 0x30($s2)
    ctx->pc = 0x1df970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
    // 0x1df974: 0xae460034  sw          $a2, 0x34($s2)
    ctx->pc = 0x1df974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 6));
    // 0x1df978: 0xae470038  sw          $a3, 0x38($s2)
    ctx->pc = 0x1df978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 7));
    // 0x1df97c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1df97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1df980: 0xae48003c  sw          $t0, 0x3C($s2)
    ctx->pc = 0x1df980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 8));
    // 0x1df984: 0xae490040  sw          $t1, 0x40($s2)
    ctx->pc = 0x1df984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 9));
    // 0x1df988: 0xae4a0044  sw          $t2, 0x44($s2)
    ctx->pc = 0x1df988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 10));
    // 0x1df98c: 0xae4b0050  sw          $t3, 0x50($s2)
    ctx->pc = 0x1df98cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 11));
    // 0x1df990: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1df994:
    // 0x1df994: 0xc6c091b0  lwc1        $f0, -0x6E50($s6)
    ctx->pc = 0x1df994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294939056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df998: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1df998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df99c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1df99cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1df9a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF9A0u;
    {
        const bool branch_taken_0x1df9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9A0u;
        // 0x1df9a4: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9a0) {
            ctx->pc = 0x1DF9B0u;
            goto label_1df9b0;
        }
    }
    ctx->pc = 0x1DF9A8u;
    // 0x1df9a8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1DF9A8u;
    SET_GPR_U32(ctx, 31, 0x1DF9B0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1DF9A8u, 0x1DF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9B0u;
label_1df9b0:
    // 0x1df9b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df9b4:
    // 0x1df9b4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1df9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1df9b8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1df9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df9bc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1df9bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df9c0: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1df9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df9c4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1df9c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1df9c8: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1df9c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1df9cc: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1df9ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1df9d0: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x1df9d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1df9d4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1df9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1df9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9D8u;
        // 0x1df9dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF9E0u;
}
