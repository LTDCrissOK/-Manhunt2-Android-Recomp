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

// Function: sub_002DB350
// Address: 0x2db350 - 0x2db838
void sub_002DB350_0x2db350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB350_0x2db350");
#endif

    switch (ctx->pc) {
        case 0x2db3d4u: goto label_2db3d4;
        case 0x2db3e0u: goto label_2db3e0;
        case 0x2db3f8u: goto label_2db3f8;
        case 0x2db404u: goto label_2db404;
        case 0x2db418u: goto label_2db418;
        case 0x2db448u: goto label_2db448;
        case 0x2db480u: goto label_2db480;
        case 0x2db5a8u: goto label_2db5a8;
        case 0x2db5f4u: goto label_2db5f4;
        case 0x2db608u: goto label_2db608;
        case 0x2db670u: goto label_2db670;
        case 0x2db698u: goto label_2db698;
        case 0x2db6c0u: goto label_2db6c0;
        case 0x2db700u: goto label_2db700;
        case 0x2db79cu: goto label_2db79c;
        case 0x2db7d8u: goto label_2db7d8;
        default: break;
    }

    ctx->pc = 0x2db350u;

    // 0x2db350: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x2db350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x2db354: 0xffb20430  sd          $s2, 0x430($sp)
    ctx->pc = 0x2db354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x2db358: 0xffb00420  sd          $s0, 0x420($sp)
    ctx->pc = 0x2db358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 16));
    // 0x2db35c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2db35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db360: 0xffb10428  sd          $s1, 0x428($sp)
    ctx->pc = 0x2db360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 17));
    // 0x2db364: 0xffb30438  sd          $s3, 0x438($sp)
    ctx->pc = 0x2db364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 19));
    // 0x2db368: 0xffb40440  sd          $s4, 0x440($sp)
    ctx->pc = 0x2db368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 20));
    // 0x2db36c: 0xffb50448  sd          $s5, 0x448($sp)
    ctx->pc = 0x2db36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 21));
    // 0x2db370: 0xffb60450  sd          $s6, 0x450($sp)
    ctx->pc = 0x2db370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 22));
    // 0x2db374: 0xffb70458  sd          $s7, 0x458($sp)
    ctx->pc = 0x2db374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 23));
    // 0x2db378: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x2db378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
    // 0x2db37c: 0xe7b80490  swc1        $f24, 0x490($sp)
    ctx->pc = 0x2db37cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
    // 0x2db380: 0xe7b70488  swc1        $f23, 0x488($sp)
    ctx->pc = 0x2db380u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
    // 0x2db384: 0xe7b60480  swc1        $f22, 0x480($sp)
    ctx->pc = 0x2db384u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
    // 0x2db388: 0xe7b50478  swc1        $f21, 0x478($sp)
    ctx->pc = 0x2db388u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1144), bits); }
    // 0x2db38c: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x2db38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
    // 0x2db390: 0x8e426394  lw          $v0, 0x6394($s2)
    ctx->pc = 0x2db390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25492)));
    // 0x2db394: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2DB394u;
    {
        const bool branch_taken_0x2db394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB394u;
        // 0x2db398: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db394) {
            ctx->pc = 0x2DB7F4u;
            goto label_2db7f4;
        }
    }
    ctx->pc = 0x2DB39Cu;
    // 0x2db39c: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x2db39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x2db3a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB3A0u;
    {
        const bool branch_taken_0x2db3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3A0u;
        // 0x2db3a4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3a0) {
            ctx->pc = 0x2DB3C0u;
            goto label_2db3c0;
        }
    }
    ctx->pc = 0x2DB3A8u;
    // 0x2db3a8: 0x9043b820  lbu         $v1, -0x47E0($v0)
    ctx->pc = 0x2db3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948896)));
    // 0x2db3ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB3ACu;
    {
        const bool branch_taken_0x2db3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3ACu;
        // 0x2db3b0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3ac) {
            ctx->pc = 0x2DB3C0u;
            goto label_2db3c0;
        }
    }
    ctx->pc = 0x2DB3B4u;
    // 0x2db3b4: 0x8c434d00  lw          $v1, 0x4D00($v0)
    ctx->pc = 0x2db3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19712)));
    // 0x2db3b8: 0x1060010f  beqz        $v1, . + 4 + (0x10F << 2)
    ctx->pc = 0x2DB3B8u;
    {
        const bool branch_taken_0x2db3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3B8u;
        // 0x2db3bc: 0xdfb00420  ld          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3b8) {
            ctx->pc = 0x2DB7F8u;
            goto label_2db7f8;
        }
    }
    ctx->pc = 0x2DB3C0u;
label_2db3c0:
    // 0x2db3c0: 0x8e450404  lw          $a1, 0x404($s2)
    ctx->pc = 0x2db3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1028)));
    // 0x2db3c4: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB3C4u;
    {
        const bool branch_taken_0x2db3c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db3c4) {
            ctx->pc = 0x2DB3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB3C4u;
            // 0x2db3c8: 0x8e450400  lw          $a1, 0x400($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB3E8u;
            goto label_2db3e8;
        }
    }
    ctx->pc = 0x2DB3CCu;
    // 0x2db3cc: 0xc0b6ea4  jal         func_2DBA90
    ctx->pc = 0x2DB3CCu;
    SET_GPR_U32(ctx, 31, 0x2DB3D4u);
    ctx->pc = 0x2DB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3CCu;
    // 0x2db3d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBA90u, 0x2DB3CCu, 0x2DB3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3D4u;
label_2db3d4:
    // 0x2db3d4: 0x8e4563b4  lw          $a1, 0x63B4($s2)
    ctx->pc = 0x2db3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25524)));
    // 0x2db3d8: 0xc0b6e7a  jal         func_2DB9E8
    ctx->pc = 0x2DB3D8u;
    SET_GPR_U32(ctx, 31, 0x2DB3E0u);
    ctx->pc = 0x2DB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3D8u;
    // 0x2db3dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB9E8u, 0x2DB3D8u, 0x2DB3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3E0u;
label_2db3e0:
    // 0x2db3e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB3E0u;
    {
        const bool branch_taken_0x2db3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3E0u;
        // 0x2db3e4: 0x27a40410  addiu       $a0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3e0) {
            ctx->pc = 0x2DB408u;
            goto label_2db408;
        }
    }
    ctx->pc = 0x2DB3E8u;
label_2db3e8:
    // 0x2db3e8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB3E8u;
    {
        const bool branch_taken_0x2db3e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB3E8u;
        // 0x2db3ec: 0x27a40410  addiu       $a0, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db3e8) {
            ctx->pc = 0x2DB408u;
            goto label_2db408;
        }
    }
    ctx->pc = 0x2DB3F0u;
    // 0x2db3f0: 0xc0b6f10  jal         func_2DBC40
    ctx->pc = 0x2DB3F0u;
    SET_GPR_U32(ctx, 31, 0x2DB3F8u);
    ctx->pc = 0x2DB3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3F0u;
    // 0x2db3f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBC40u, 0x2DB3F0u, 0x2DB3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB3F8u;
label_2db3f8:
    // 0x2db3f8: 0x8e4563b4  lw          $a1, 0x63B4($s2)
    ctx->pc = 0x2db3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25524)));
    // 0x2db3fc: 0xc0b6e7a  jal         func_2DB9E8
    ctx->pc = 0x2DB3FCu;
    SET_GPR_U32(ctx, 31, 0x2DB404u);
    ctx->pc = 0x2DB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB3FCu;
    // 0x2db400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB9E8u, 0x2DB3FCu, 0x2DB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB404u;
label_2db404:
    // 0x2db404: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x2db404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_2db408:
    // 0x2db408: 0x27a50414  addiu       $a1, $sp, 0x414
    ctx->pc = 0x2db408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1044));
    // 0x2db40c: 0x27a60418  addiu       $a2, $sp, 0x418
    ctx->pc = 0x2db40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1048));
    // 0x2db410: 0xc0a1808  jal         func_286020
    ctx->pc = 0x2DB410u;
    SET_GPR_U32(ctx, 31, 0x2DB418u);
    ctx->pc = 0x2DB414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB410u;
    // 0x2db414: 0x27a7041c  addiu       $a3, $sp, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286020u, 0x2DB410u, 0x2DB418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB418u;
label_2db418:
    // 0x2db418: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x2db418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2db41c: 0x924263e5  lbu         $v0, 0x63E5($s2)
    ctx->pc = 0x2db41cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25573)));
    // 0x2db420: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DB420u;
    {
        const bool branch_taken_0x2db420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB420u;
        // 0x2db424: 0x3c17006c  lui         $s7, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db420) {
            ctx->pc = 0x2DB4A4u;
            goto label_2db4a4;
        }
    }
    ctx->pc = 0x2DB428u;
    // 0x2db428: 0x8e4263ac  lw          $v0, 0x63AC($s2)
    ctx->pc = 0x2db428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25516)));
    // 0x2db42c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2db42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2db430: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2db430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2db434: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB434u;
    {
        const bool branch_taken_0x2db434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB434u;
        // 0x2db438: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db434) {
            ctx->pc = 0x2DB46Cu;
            goto label_2db46c;
        }
    }
    ctx->pc = 0x2DB43Cu;
    // 0x2db43c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db440: 0x26440490  addiu       $a0, $s2, 0x490
    ctx->pc = 0x2db440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x2db444: 0x0  nop
    ctx->pc = 0x2db444u;
    // NOP
label_2db448:
    // 0x2db448: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2db448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2db44c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB44Cu;
    {
        const bool branch_taken_0x2db44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB44Cu;
        // 0x2db450: 0x101027  nor         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db44c) {
            ctx->pc = 0x2DB45Cu;
            goto label_2db45c;
        }
    }
    ctx->pc = 0x2DB454u;
    // 0x2db454: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2db454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db458: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2db458u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2db45c:
    // 0x2db45c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2db45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db460: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2db460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2db464: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DB464u;
    {
        const bool branch_taken_0x2db464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB464u;
        // 0x2db468: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db464) {
            ctx->pc = 0x2DB448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db448;
        }
    }
    ctx->pc = 0x2DB46Cu;
label_2db46c:
    // 0x2db46c: 0x602000e  bltzl       $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DB46Cu;
    {
        const bool branch_taken_0x2db46c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2db46c) {
            ctx->pc = 0x2DB470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB46Cu;
            // 0x2db470: 0x8e42639c  lw          $v0, 0x639C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB4A8u;
            goto label_2db4a8;
        }
    }
    ctx->pc = 0x2DB474u;
    // 0x2db474: 0x8e4463c4  lw          $a0, 0x63C4($s2)
    ctx->pc = 0x2db474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25540)));
    // 0x2db478: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x2DB478u;
    SET_GPR_U32(ctx, 31, 0x2DB480u);
    ctx->pc = 0x2DB47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB478u;
    // 0x2db47c: 0xc64c63cc  lwc1        $f12, 0x63CC($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x2DB478u, 0x2DB480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB480u;
label_2db480:
    // 0x2db480: 0x26420444  addiu       $v0, $s2, 0x444
    ctx->pc = 0x2db480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1092));
    // 0x2db484: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2db484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2db488: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2db488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db48c: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x2db48cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2db490: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2db490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2db494: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2db494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2db498: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2db498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db49c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2db49cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2db4a0: 0x46000e00  add.s       $f24, $f1, $f0
    ctx->pc = 0x2db4a0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2db4a4:
    // 0x2db4a4: 0x8e42639c  lw          $v0, 0x639C($s2)
    ctx->pc = 0x2db4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25500)));
label_2db4a8:
    // 0x2db4a8: 0xc6570424  lwc1        $f23, 0x424($s2)
    ctx->pc = 0x2db4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2db4ac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB4ACu;
    {
        const bool branch_taken_0x2db4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4ACu;
        // 0x2db4b0: 0xc6540428  lwc1        $f20, 0x428($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4ac) {
            ctx->pc = 0x2DB50Cu;
            goto label_2db50c;
        }
    }
    ctx->pc = 0x2DB4B4u;
    // 0x2db4b4: 0x8e426398  lw          $v0, 0x6398($s2)
    ctx->pc = 0x2db4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25496)));
    // 0x2db4b8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB4B8u;
    {
        const bool branch_taken_0x2db4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db4b8) {
            ctx->pc = 0x2DB4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB4B8u;
            // 0x2db4bc: 0xc6420440  lwc1        $f2, 0x440($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB510u;
            goto label_2db510;
        }
    }
    ctx->pc = 0x2DB4C0u;
    // 0x2db4c0: 0x8e4263a4  lw          $v0, 0x63A4($s2)
    ctx->pc = 0x2db4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25508)));
    // 0x2db4c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2db4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2db4c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB4C8u;
    {
        const bool branch_taken_0x2db4c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2DB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4C8u;
        // 0x2db4cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4c8) {
            ctx->pc = 0x2DB4E4u;
            goto label_2db4e4;
        }
    }
    ctx->pc = 0x2DB4D0u;
    // 0x2db4d0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2db4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2db4d4: 0x0  nop
    ctx->pc = 0x2db4d4u;
    // NOP
    // 0x2db4d8: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x2db4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x2db4dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB4DCu;
    {
        const bool branch_taken_0x2db4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4DCu;
        // 0x2db4e0: 0xc6406390  lwc1        $f0, 0x6390($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db4dc) {
            ctx->pc = 0x2DB500u;
            goto label_2db500;
        }
    }
    ctx->pc = 0x2DB4E4u;
label_2db4e4:
    // 0x2db4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2db4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2db4e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2db4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2db4ec: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2db4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2db4f0: 0x0  nop
    ctx->pc = 0x2db4f0u;
    // NOP
    // 0x2db4f4: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x2db4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x2db4f8: 0x460f7bc0  add.s       $f15, $f15, $f15
    ctx->pc = 0x2db4f8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
    // 0x2db4fc: 0xc6406390  lwc1        $f0, 0x6390($s2)
    ctx->pc = 0x2db4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2db500:
    // 0x2db500: 0xc64163f4  lwc1        $f1, 0x63F4($s2)
    ctx->pc = 0x2db500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db504: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2db504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2db508: 0x46007d02  mul.s       $f20, $f15, $f0
    ctx->pc = 0x2db508u;
    ctx->f[20] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
label_2db50c:
    // 0x2db50c: 0xc6420440  lwc1        $f2, 0x440($s2)
    ctx->pc = 0x2db50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2db510:
    // 0x2db510: 0xc7a00414  lwc1        $f0, 0x414($sp)
    ctx->pc = 0x2db510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db514: 0xc6430444  lwc1        $f3, 0x444($s2)
    ctx->pc = 0x2db514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2db518: 0xc7a1041c  lwc1        $f1, 0x41C($sp)
    ctx->pc = 0x2db518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db51c: 0x46001580  add.s       $f22, $f2, $f0
    ctx->pc = 0x2db51cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2db520: 0x8e4263dc  lw          $v0, 0x63DC($s2)
    ctx->pc = 0x2db520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25564)));
    // 0x2db524: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DB524u;
    {
        const bool branch_taken_0x2db524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB524u;
        // 0x2db528: 0x46011d40  add.s       $f21, $f3, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db524) {
            ctx->pc = 0x2DB5A8u;
            goto label_2db5a8;
        }
    }
    ctx->pc = 0x2DB52Cu;
    // 0x2db52c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2db52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2db530: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x2db530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x2db534: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2db534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2db538: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2db538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2db53c: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x2db53cu;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2db540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db544: 0x924263d3  lbu         $v0, 0x63D3($s2)
    ctx->pc = 0x2db544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25555)));
    // 0x2db548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2db548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db54c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x2db54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2db550: 0xc64c0434  lwc1        $f12, 0x434($s2)
    ctx->pc = 0x2db550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db558: 0x0  nop
    ctx->pc = 0x2db558u;
    // NOP
    // 0x2db55c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2db55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2db560: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2db560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2db564: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2db564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db568: 0x460d6342  mul.s       $f13, $f12, $f13
    ctx->pc = 0x2db568u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x2db56c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2db56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db570: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2db570u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2db574: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2db574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db578: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2db578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2db57c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2db57cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db580: 0x460d6bc0  add.s       $f15, $f13, $f13
    ctx->pc = 0x2db580u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2db584: 0x460c6380  add.s       $f14, $f12, $f12
    ctx->pc = 0x2db584u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2db588: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2db588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2db58c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2db58cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2db590: 0x460cb301  sub.s       $f12, $f22, $f12
    ctx->pc = 0x2db590u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    // 0x2db594: 0x460dab41  sub.s       $f13, $f21, $f13
    ctx->pc = 0x2db594u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[13]);
    // 0x2db598: 0x460ebb80  add.s       $f14, $f23, $f14
    ctx->pc = 0x2db598u;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[14]);
    // 0x2db59c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2db59cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2db5a0: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2DB5A0u;
    SET_GPR_U32(ctx, 31, 0x2DB5A8u);
    ctx->pc = 0x2DB5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB5A0u;
    // 0x2db5a4: 0x460fa3c0  add.s       $f15, $f20, $f15 (Delay Slot)
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2DB5A0u, 0x2DB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB5A8u;
label_2db5a8:
    // 0x2db5a8: 0x9242043c  lbu         $v0, 0x43C($s2)
    ctx->pc = 0x2db5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1084)));
    // 0x2db5ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DB5ACu;
    {
        const bool branch_taken_0x2db5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5ACu;
        // 0x2db5b0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5ac) {
            ctx->pc = 0x2DB5F4u;
            goto label_2db5f4;
        }
    }
    ctx->pc = 0x2DB5B4u;
    // 0x2db5b4: 0xc64d0434  lwc1        $f13, 0x434($s2)
    ctx->pc = 0x2db5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2db5b8: 0xc44cac6c  lwc1        $f12, -0x5394($v0)
    ctx->pc = 0x2db5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db5bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2db5bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5c0: 0x460d6bc0  add.s       $f15, $f13, $f13
    ctx->pc = 0x2db5c0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2db5c4: 0x924463d0  lbu         $a0, 0x63D0($s2)
    ctx->pc = 0x2db5c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25552)));
    // 0x2db5c8: 0x460c6b02  mul.s       $f12, $f13, $f12
    ctx->pc = 0x2db5c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x2db5cc: 0x924563d1  lbu         $a1, 0x63D1($s2)
    ctx->pc = 0x2db5ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25553)));
    // 0x2db5d0: 0x460dab41  sub.s       $f13, $f21, $f13
    ctx->pc = 0x2db5d0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[13]);
    // 0x2db5d4: 0x924663d2  lbu         $a2, 0x63D2($s2)
    ctx->pc = 0x2db5d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25554)));
    // 0x2db5d8: 0x460fa3c0  add.s       $f15, $f20, $f15
    ctx->pc = 0x2db5d8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[15]);
    // 0x2db5dc: 0x924763d3  lbu         $a3, 0x63D3($s2)
    ctx->pc = 0x2db5dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25555)));
    // 0x2db5e0: 0x460c6380  add.s       $f14, $f12, $f12
    ctx->pc = 0x2db5e0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2db5e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2db5e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5e8: 0x460cb301  sub.s       $f12, $f22, $f12
    ctx->pc = 0x2db5e8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    // 0x2db5ec: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2DB5ECu;
    SET_GPR_U32(ctx, 31, 0x2DB5F4u);
    ctx->pc = 0x2DB5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB5ECu;
    // 0x2db5f0: 0x460ebb80  add.s       $f14, $f23, $f14 (Delay Slot)
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2DB5ECu, 0x2DB5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB5F4u;
label_2db5f4:
    // 0x2db5f4: 0x924463d4  lbu         $a0, 0x63D4($s2)
    ctx->pc = 0x2db5f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25556)));
    // 0x2db5f8: 0x924563d5  lbu         $a1, 0x63D5($s2)
    ctx->pc = 0x2db5f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25557)));
    // 0x2db5fc: 0x924663d6  lbu         $a2, 0x63D6($s2)
    ctx->pc = 0x2db5fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25558)));
    // 0x2db600: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x2DB600u;
    SET_GPR_U32(ctx, 31, 0x2DB608u);
    ctx->pc = 0x2DB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB600u;
    // 0x2db604: 0x924763d7  lbu         $a3, 0x63D7($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25559)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x2DB600u, 0x2DB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB608u;
label_2db608:
    // 0x2db608: 0x8e4363f0  lw          $v1, 0x63F0($s2)
    ctx->pc = 0x2db608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25584)));
    // 0x2db60c: 0x26e2aff0  addiu       $v0, $s7, -0x5010
    ctx->pc = 0x2db60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946800));
    // 0x2db610: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x2db610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x2db614: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x2db614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x2db618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db61c: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x2db61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x2db620: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2db620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2db624: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2db624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2db628: 0x924363e5  lbu         $v1, 0x63E5($s2)
    ctx->pc = 0x2db628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25573)));
    // 0x2db62c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB62Cu;
    {
        const bool branch_taken_0x2db62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB62Cu;
        // 0x2db630: 0xc7a1041c  lwc1        $f1, 0x41C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db62c) {
            ctx->pc = 0x2DB650u;
            goto label_2db650;
        }
    }
    ctx->pc = 0x2DB634u;
    // 0x2db634: 0xc6400428  lwc1        $f0, 0x428($s2)
    ctx->pc = 0x2db634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db638: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2db638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2db63c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2db63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db640: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x2db640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x2db644: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2db644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2db648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB648u;
    {
        const bool branch_taken_0x2db648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB648u;
        // 0x2db64c: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db648) {
            ctx->pc = 0x2DB654u;
            goto label_2db654;
        }
    }
    ctx->pc = 0x2DB650u;
label_2db650:
    // 0x2db650: 0xc7b5041c  lwc1        $f21, 0x41C($sp)
    ctx->pc = 0x2db650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2db654:
    // 0x2db654: 0x8e4263ac  lw          $v0, 0x63AC($s2)
    ctx->pc = 0x2db654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25516)));
    // 0x2db658: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2DB658u;
    {
        const bool branch_taken_0x2db658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB658u;
        // 0x2db65c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db658) {
            ctx->pc = 0x2DB7ECu;
            goto label_2db7ec;
        }
    }
    ctx->pc = 0x2DB660u;
    // 0x2db660: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2db660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2db664: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2db664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2db668: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2db668u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2db66c: 0x8e4263e0  lw          $v0, 0x63E0($s2)
    ctx->pc = 0x2db66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25568)));
label_2db670:
    // 0x2db670: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2DB670u;
    {
        const bool branch_taken_0x2db670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB670u;
        // 0x2db674: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db670) {
            ctx->pc = 0x2DB750u;
            goto label_2db750;
        }
    }
    ctx->pc = 0x2DB678u;
    // 0x2db678: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2db678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db67c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2db67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2db680: 0x68430447  ldl         $v1, 0x447($v0)
    ctx->pc = 0x2db680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1095); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2db684: 0x6c430440  ldr         $v1, 0x440($v0)
    ctx->pc = 0x2db684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1088); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2db688: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2db688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db68c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2db68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db690: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2DB690u;
    {
        const bool branch_taken_0x2db690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB690u;
        // 0x2db694: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db690) {
            ctx->pc = 0x2DB700u;
            goto label_2db700;
        }
    }
    ctx->pc = 0x2DB698u;
label_2db698:
    // 0x2db698: 0x132a80  sll         $a1, $s3, 10
    ctx->pc = 0x2db698u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
    // 0x2db69c: 0x24a50490  addiu       $a1, $a1, 0x490
    ctx->pc = 0x2db69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    // 0x2db6a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2db6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2db6a4: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2db6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2db6a8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2db6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2db6ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2db6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2db6b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2db6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6b8: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x2DB6B8u;
    SET_GPR_U32(ctx, 31, 0x2DB6C0u);
    ctx->pc = 0x2DB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6B8u;
    // 0x2db6bc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x2DB6B8u, 0x2DB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6C0u;
label_2db6c0:
    // 0x2db6c0: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2db6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2db6c4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2db6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db6c8: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x2db6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2db6cc: 0xc64e63c8  lwc1        $f14, 0x63C8($s2)
    ctx->pc = 0x2db6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2db6d0: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x2db6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db6d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6d8: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2db6d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2db6dc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2db6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db6e0: 0xc7a00414  lwc1        $f0, 0x414($sp)
    ctx->pc = 0x2db6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db6e4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x2db6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2db6e8: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2db6e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2db6ec: 0xc64f63cc  lwc1        $f15, 0x63CC($s2)
    ctx->pc = 0x2db6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2db6f0: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x2db6f0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
    // 0x2db6f4: 0x8e4563c4  lw          $a1, 0x63C4($s2)
    ctx->pc = 0x2db6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25540)));
    // 0x2db6f8: 0xc09f662  jal         func_27D988
    ctx->pc = 0x2DB6F8u;
    SET_GPR_U32(ctx, 31, 0x2DB700u);
    ctx->pc = 0x2DB6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6F8u;
    // 0x2db6fc: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x2DB6F8u, 0x2DB700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB700u;
label_2db700:
    // 0x2db700: 0x2a820020  slti        $v0, $s4, 0x20
    ctx->pc = 0x2db700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2db704: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2DB704u;
    {
        const bool branch_taken_0x2db704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB704u;
        // 0x2db708: 0x24020180  addiu       $v0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db704) {
            ctx->pc = 0x2DB7D8u;
            goto label_2db7d8;
        }
    }
    ctx->pc = 0x2DB70Cu;
    // 0x2db70c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2db70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2db710: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x2db710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2db714: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x2db714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2db718: 0x24425490  addiu       $v0, $v0, 0x5490
    ctx->pc = 0x2db718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21648));
    // 0x2db71c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2db71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2db720: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2db720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db724: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2db724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2db728: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB728u;
    {
        const bool branch_taken_0x2db728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB728u;
        // 0x2db72c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db728) {
            ctx->pc = 0x2DB73Cu;
            goto label_2db73c;
        }
    }
    ctx->pc = 0x2DB730u;
    // 0x2db730: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2db730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2db734: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2db734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2db738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db73c:
    // 0x2db73c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2db73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2db740: 0x5040ffd5  beql        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2DB740u;
    {
        const bool branch_taken_0x2db740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db740) {
            ctx->pc = 0x2DB744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB740u;
            // 0x2db744: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db698;
        }
    }
    ctx->pc = 0x2DB748u;
    // 0x2db748: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DB748u;
    {
        const bool branch_taken_0x2db748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB748u;
        // 0x2db74c: 0x8e4263ac  lw          $v0, 0x63AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db748) {
            ctx->pc = 0x2DB7DCu;
            goto label_2db7dc;
        }
    }
    ctx->pc = 0x2DB750u;
label_2db750:
    // 0x2db750: 0x132280  sll         $a0, $s3, 10
    ctx->pc = 0x2db750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
    // 0x2db754: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x2db754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2db758: 0x94432c90  lhu         $v1, 0x2C90($v0)
    ctx->pc = 0x2db758u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 11408)));
    // 0x2db75c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB75Cu;
    {
        const bool branch_taken_0x2db75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB75Cu;
        // 0x2db760: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db75c) {
            ctx->pc = 0x2DB7ECu;
            goto label_2db7ec;
        }
    }
    ctx->pc = 0x2DB764u;
    // 0x2db764: 0x924363e4  lbu         $v1, 0x63E4($s2)
    ctx->pc = 0x2db764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25572)));
    // 0x2db768: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2db768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2db76c: 0x24902c90  addiu       $s0, $a0, 0x2C90
    ctx->pc = 0x2db76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 11408));
    // 0x2db770: 0x68440447  ldl         $a0, 0x447($v0)
    ctx->pc = 0x2db770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1095); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2db774: 0x6c440440  ldr         $a0, 0x440($v0)
    ctx->pc = 0x2db774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1088); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2db778: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x2db778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db77c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x2db77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db780: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x2db780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db784: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB784u;
    {
        const bool branch_taken_0x2db784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB784u;
        // 0x2db788: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db784) {
            ctx->pc = 0x2DB7A4u;
            goto label_2db7a4;
        }
    }
    ctx->pc = 0x2DB78Cu;
    // 0x2db78c: 0xc64c63c8  lwc1        $f12, 0x63C8($s2)
    ctx->pc = 0x2db78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db790: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2db790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2db794: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2DB794u;
    SET_GPR_U32(ctx, 31, 0x2DB79Cu);
    ctx->pc = 0x2DB798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB794u;
    // 0x2db798: 0x8e4563c4  lw          $a1, 0x63C4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2DB794u, 0x2DB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB79Cu;
label_2db79c:
    // 0x2db79c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2db79cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2db7a0: 0x4600b041  sub.s       $f1, $f22, $f0
    ctx->pc = 0x2db7a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_2db7a4:
    // 0x2db7a4: 0xc64d0434  lwc1        $f13, 0x434($s2)
    ctx->pc = 0x2db7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2db7a8: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x2db7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2db7ac: 0xc7ac0414  lwc1        $f12, 0x414($sp)
    ctx->pc = 0x2db7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db7b0: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2db7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2db7b4: 0x46166b42  mul.s       $f13, $f13, $f22
    ctx->pc = 0x2db7b4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x2db7b8: 0xc64e63c8  lwc1        $f14, 0x63C8($s2)
    ctx->pc = 0x2db7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2db7bc: 0x460c0b00  add.s       $f12, $f1, $f12
    ctx->pc = 0x2db7bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2db7c0: 0xc64f63cc  lwc1        $f15, 0x63CC($s2)
    ctx->pc = 0x2db7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2db7c4: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2db7c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2db7c8: 0x460d0341  sub.s       $f13, $f0, $f13
    ctx->pc = 0x2db7c8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2db7cc: 0x8e4563c4  lw          $a1, 0x63C4($s2)
    ctx->pc = 0x2db7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25540)));
    // 0x2db7d0: 0xc09f662  jal         func_27D988
    ctx->pc = 0x2DB7D0u;
    SET_GPR_U32(ctx, 31, 0x2DB7D8u);
    ctx->pc = 0x2DB7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB7D0u;
    // 0x2db7d4: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x2DB7D0u, 0x2DB7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB7D8u;
label_2db7d8:
    // 0x2db7d8: 0x8e4263ac  lw          $v0, 0x63AC($s2)
    ctx->pc = 0x2db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25516)));
label_2db7dc:
    // 0x2db7dc: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2db7dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7e0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2db7e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2db7e4: 0x5440ffa2  bnel        $v0, $zero, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2DB7E4u;
    {
        const bool branch_taken_0x2db7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db7e4) {
            ctx->pc = 0x2DB7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB7E4u;
            // 0x2db7e8: 0x8e4263e0  lw          $v0, 0x63E0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db670;
        }
    }
    ctx->pc = 0x2DB7ECu;
label_2db7ec:
    // 0x2db7ec: 0x26e2aff0  addiu       $v0, $s7, -0x5010
    ctx->pc = 0x2db7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946800));
    // 0x2db7f0: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x2db7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_2db7f4:
    // 0x2db7f4: 0xdfb00420  ld          $s0, 0x420($sp)
    ctx->pc = 0x2db7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_2db7f8:
    // 0x2db7f8: 0xdfb10428  ld          $s1, 0x428($sp)
    ctx->pc = 0x2db7f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x2db7fc: 0xdfb20430  ld          $s2, 0x430($sp)
    ctx->pc = 0x2db7fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2db800: 0xdfb30438  ld          $s3, 0x438($sp)
    ctx->pc = 0x2db800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x2db804: 0xdfb40440  ld          $s4, 0x440($sp)
    ctx->pc = 0x2db804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2db808: 0xdfb50448  ld          $s5, 0x448($sp)
    ctx->pc = 0x2db808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x2db80c: 0xdfb60450  ld          $s6, 0x450($sp)
    ctx->pc = 0x2db80cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2db810: 0xdfb70458  ld          $s7, 0x458($sp)
    ctx->pc = 0x2db810u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x2db814: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x2db814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2db818: 0xc7b80490  lwc1        $f24, 0x490($sp)
    ctx->pc = 0x2db818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2db81c: 0xc7b70488  lwc1        $f23, 0x488($sp)
    ctx->pc = 0x2db81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2db820: 0xc7b60480  lwc1        $f22, 0x480($sp)
    ctx->pc = 0x2db820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2db824: 0xc7b50478  lwc1        $f21, 0x478($sp)
    ctx->pc = 0x2db824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2db828: 0xc7b40470  lwc1        $f20, 0x470($sp)
    ctx->pc = 0x2db828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db82c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB82Cu;
        // 0x2db830: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB834u;
    // 0x2db834: 0x0  nop
    ctx->pc = 0x2db834u;
    // NOP
    ctx->pc = 0x2db838u;
}
