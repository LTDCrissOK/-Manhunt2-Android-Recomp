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

// Function: sub_001A9308
// Address: 0x1a9308 - 0x1a9478
void sub_001A9308_0x1a9308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9308_0x1a9308");
#endif

    switch (ctx->pc) {
        case 0x1a933cu: goto label_1a933c;
        case 0x1a936cu: goto label_1a936c;
        case 0x1a9380u: goto label_1a9380;
        case 0x1a93dcu: goto label_1a93dc;
        case 0x1a93f4u: goto label_1a93f4;
        case 0x1a9400u: goto label_1a9400;
        case 0x1a942cu: goto label_1a942c;
        default: break;
    }

    ctx->pc = 0x1a9308u;

    // 0x1a9308: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a930c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9310: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9318: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a9318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a931c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a931cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9324: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a9324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a932c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1a932cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a9330: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1a9330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a9334: 0xc06a4c0  jal         func_1A9300
    ctx->pc = 0x1A9334u;
    SET_GPR_U32(ctx, 31, 0x1A933Cu);
    ctx->pc = 0x1A9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9334u;
    // 0x1a9338: 0x8c510110  lw          $s1, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9300u, 0x1A9334u, 0x1A933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A933Cu;
label_1a933c:
    // 0x1a933c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1a933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1a9340: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1A9340u;
    {
        const bool branch_taken_0x1a9340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9340) {
            ctx->pc = 0x1A9344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9340u;
            // 0x1a9344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A945Cu;
            goto label_1a945c;
        }
    }
    ctx->pc = 0x1A9348u;
    // 0x1a9348: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x1a9348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1a934c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1a934cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1a9350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a9350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a9354: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A9354u;
    {
        const bool branch_taken_0x1a9354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9354) {
            ctx->pc = 0x1A9400u;
            goto label_1a9400;
        }
    }
    ctx->pc = 0x1A935Cu;
    // 0x1a935c: 0x5240000a  beql        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A935Cu;
    {
        const bool branch_taken_0x1a935c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a935c) {
            ctx->pc = 0x1A9360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A935Cu;
            // 0x1a9360: 0x8e050150  lw          $a1, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9388u;
            goto label_1a9388;
        }
    }
    ctx->pc = 0x1A9364u;
    // 0x1a9364: 0xc075774  jal         func_1D5DD0
    ctx->pc = 0x1A9364u;
    SET_GPR_U32(ctx, 31, 0x1A936Cu);
    ctx->pc = 0x1A9368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9364u;
    // 0x1a9368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DD0u, 0x1A9364u, 0x1A936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A936Cu;
label_1a936c:
    // 0x1a936c: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x1a936cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1a9370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a9374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9378: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1A9378u;
    SET_GPR_U32(ctx, 31, 0x1A9380u);
    ctx->pc = 0x1A937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9378u;
    // 0x1a937c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1A9378u, 0x1A9380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9380u;
label_1a9380:
    // 0x1a9380: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A9380u;
    {
        const bool branch_taken_0x1a9380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9380) {
            ctx->pc = 0x1A9400u;
            goto label_1a9400;
        }
    }
    ctx->pc = 0x1A9388u;
label_1a9388:
    // 0x1a9388: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1a9388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a938c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a9390: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a9390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a9394: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a9394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a9398: 0x24426a00  addiu       $v0, $v0, 0x6A00
    ctx->pc = 0x1a9398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
    // 0x1a939c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a93a0: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A93A0u;
    {
        const bool branch_taken_0x1a93a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93A0u;
        // 0x1a93a4: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93a0) {
            ctx->pc = 0x1A93BCu;
            goto label_1a93bc;
        }
    }
    ctx->pc = 0x1A93A8u;
    // 0x1a93a8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1a93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a93ac: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A93ACu;
    {
        const bool branch_taken_0x1a93ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93ACu;
        // 0x1a93b0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93ac) {
            ctx->pc = 0x1A93C8u;
            goto label_1a93c8;
        }
    }
    ctx->pc = 0x1A93B4u;
    // 0x1a93b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A93B4u;
    {
        const bool branch_taken_0x1a93b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93B4u;
        // 0x1a93b8: 0x8e0501e4  lw          $a1, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93b4) {
            ctx->pc = 0x1A93D0u;
            goto label_1a93d0;
        }
    }
    ctx->pc = 0x1A93BCu;
label_1a93bc:
    // 0x1a93bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a93c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A93C0u;
    {
        const bool branch_taken_0x1a93c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A93C0u;
        // 0x1a93c4: 0xc454094c  lwc1        $f20, 0x94C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93c0) {
            ctx->pc = 0x1A93CCu;
            goto label_1a93cc;
        }
    }
    ctx->pc = 0x1A93C8u;
label_1a93c8:
    // 0x1a93c8: 0xc4540950  lwc1        $f20, 0x950($v0)
    ctx->pc = 0x1a93c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a93cc:
    // 0x1a93cc: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x1a93ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1a93d0:
    // 0x1a93d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a93d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a93d4: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1A93D4u;
    SET_GPR_U32(ctx, 31, 0x1A93DCu);
    ctx->pc = 0x1A93D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93D4u;
    // 0x1a93d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1A93D4u, 0x1A93DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A93DCu;
label_1a93dc:
    // 0x1a93dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a93dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a93e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a93e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a93e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a93e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a93e8: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x1a93e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1a93ec: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1A93ECu;
    SET_GPR_U32(ctx, 31, 0x1A93F4u);
    ctx->pc = 0x1A93F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93ECu;
    // 0x1a93f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1A93ECu, 0x1A93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A93F4u;
label_1a93f4:
    // 0x1a93f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a93f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a93f8: 0xc06a48c  jal         func_1A9230
    ctx->pc = 0x1A93F8u;
    SET_GPR_U32(ctx, 31, 0x1A9400u);
    ctx->pc = 0x1A93FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A93F8u;
    // 0x1a93fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9230u, 0x1A93F8u, 0x1A9400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9400u;
label_1a9400:
    // 0x1a9400: 0x5260000c  beql        $s3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9400u;
    {
        const bool branch_taken_0x1a9400 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9400) {
            ctx->pc = 0x1A9404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9400u;
            // 0x1a9404: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9434u;
            goto label_1a9434;
        }
    }
    ctx->pc = 0x1A9408u;
    // 0x1a9408: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1a9408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1a940c: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1a940cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1a9410: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a9410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a9414: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A9414u;
    {
        const bool branch_taken_0x1a9414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9414) {
            ctx->pc = 0x1A9418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9414u;
            // 0x1a9418: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A945Cu;
            goto label_1a945c;
        }
    }
    ctx->pc = 0x1A941Cu;
    // 0x1a941c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a941cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9420: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a9420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9424: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A9424u;
    SET_GPR_U32(ctx, 31, 0x1A942Cu);
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A9424u, 0x1A942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A942Cu;
label_1a942c:
    // 0x1a942c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A942Cu;
    {
        const bool branch_taken_0x1a942c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A942Cu;
        // 0x1a9430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a942c) {
            ctx->pc = 0x1A9454u;
            goto label_1a9454;
        }
    }
    ctx->pc = 0x1A9434u;
label_1a9434:
    // 0x1a9434: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1a9434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1a9438: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1a9438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1a943c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a943cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9440: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1a9440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9444: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9448: 0x0  nop
    ctx->pc = 0x1a9448u;
    // NOP
    // 0x1a944c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A944Cu;
    {
        const bool branch_taken_0x1a944c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A944Cu;
        // 0x1a9450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a944c) {
            ctx->pc = 0x1A9458u;
            goto label_1a9458;
        }
    }
    ctx->pc = 0x1A9454u;
label_1a9454:
    // 0x1a9454: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1a9454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_1a9458:
    // 0x1a9458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a945c:
    // 0x1a945c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a945cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9464: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a946c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1a946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a9470: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9470u;
        // 0x1a9474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9478u;
}
