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

// Function: sub_00384440
// Address: 0x384440 - 0x3845b0
void sub_00384440_0x384440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384440_0x384440");
#endif

    switch (ctx->pc) {
        case 0x3844ccu: goto label_3844cc;
        case 0x3844e0u: goto label_3844e0;
        case 0x384534u: goto label_384534;
        case 0x384550u: goto label_384550;
        case 0x384564u: goto label_384564;
        case 0x384580u: goto label_384580;
        case 0x384588u: goto label_384588;
        default: break;
    }

    ctx->pc = 0x384440u;

    // 0x384440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x384440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x384444: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384448: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x384448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x38444c: 0x2475dfe4  addiu       $s5, $v1, -0x201C
    ctx->pc = 0x38444cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959076));
    // 0x384450: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x384450u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x384454: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384458: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x384458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38445c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x384460: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x384460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x384464: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x384464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384468: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x384468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x38446c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38446cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384470: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x384470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x384474: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x384474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384478: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x384478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38447c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38447cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384480: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x384480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x384484: 0x11280041  beq         $t1, $t0, . + 4 + (0x41 << 2)
    ctx->pc = 0x384484u;
    {
        const bool branch_taken_0x384484 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x384488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384484u;
        // 0x384488: 0x3442000a  ori         $v0, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x384484) {
            ctx->pc = 0x38458Cu;
            goto label_38458c;
        }
    }
    ctx->pc = 0x38448Cu;
    // 0x38448c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x38448Cu;
    {
        const bool branch_taken_0x38448c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x384490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38448Cu;
        // 0x384490: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38448c) {
            ctx->pc = 0x3844A0u;
            goto label_3844a0;
        }
    }
    ctx->pc = 0x384494u;
    // 0x384494: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x384494u;
    {
        const bool branch_taken_0x384494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384494u;
        // 0x384498: 0x24848bc0  addiu       $a0, $a0, -0x7440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384494) {
            ctx->pc = 0x3844C4u;
            goto label_3844c4;
        }
    }
    ctx->pc = 0x38449Cu;
    // 0x38449c: 0x0  nop
    ctx->pc = 0x38449cu;
    // NOP
label_3844a0:
    // 0x3844a0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3844A0u;
    {
        const bool branch_taken_0x3844a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3844A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844A0u;
        // 0x3844a4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844a0) {
            ctx->pc = 0x3844BCu;
            goto label_3844bc;
        }
    }
    ctx->pc = 0x3844A8u;
    // 0x3844a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3844a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3844ac: 0x8c43dfd4  lw          $v1, -0x202C($v0)
    ctx->pc = 0x3844acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959060)));
    // 0x3844b0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3844b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3844b4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3844B4u;
    {
        const bool branch_taken_0x3844b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3844b4) {
            ctx->pc = 0x3844D8u;
            goto label_3844d8;
        }
    }
    ctx->pc = 0x3844BCu;
label_3844bc:
    // 0x3844bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3844bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3844c0: 0x24848be8  addiu       $a0, $a0, -0x7418
    ctx->pc = 0x3844c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937576));
label_3844c4:
    // 0x3844c4: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x3844C4u;
    SET_GPR_U32(ctx, 31, 0x3844CCu);
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x3844C4u, 0x3844CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844CCu;
label_3844cc:
    // 0x3844cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3844ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3844d0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3844D0u;
    {
        const bool branch_taken_0x3844d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3844D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844D0u;
        // 0x3844d4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844d0) {
            ctx->pc = 0x38458Cu;
            goto label_38458c;
        }
    }
    ctx->pc = 0x3844D8u;
label_3844d8:
    // 0x3844d8: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3844D8u;
    SET_GPR_U32(ctx, 31, 0x3844E0u);
    ctx->pc = 0x3844DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844D8u;
    // 0x3844dc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3844D8u, 0x3844E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844E0u;
label_3844e0:
    // 0x3844e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3844e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3844e4: 0x2472dfdc  addiu       $s2, $v1, -0x2024
    ctx->pc = 0x3844e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x3844e8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3844e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x3844ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3844ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x3844f0: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x3844f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x3844f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3844f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3844f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3844f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844fc: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x3844fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
    // 0x384500: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x384500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x384504: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384504u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x384508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38450c: 0xa0730012  sb          $s3, 0x12($v1)
    ctx->pc = 0x38450cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 19));
    // 0x384510: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x384510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x384514: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x384514u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x384518: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x384518u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x38451c: 0x254a003f  addiu       $t2, $t2, 0x3F
    ctx->pc = 0x38451cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 63));
    // 0x384520: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x384520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x384524: 0xa5103  sra         $t2, $t2, 4
    ctx->pc = 0x384524u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 4));
    // 0x384528: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x384528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38452c: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x38452Cu;
    SET_GPR_U32(ctx, 31, 0x384534u);
    ctx->pc = 0x384530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38452Cu;
    // 0x384530: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x38452Cu, 0x384534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384534u;
label_384534:
    // 0x384534: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x384534u;
    {
        const bool branch_taken_0x384534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384534u;
        // 0x384538: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384534) {
            ctx->pc = 0x384570u;
            goto label_384570;
        }
    }
    ctx->pc = 0x38453Cu;
    // 0x38453c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x384540: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x384540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x384544: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x384544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x384548: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x384548u;
    SET_GPR_U32(ctx, 31, 0x384550u);
    ctx->pc = 0x38454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384548u;
    // 0x38454c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x384548u, 0x384550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384550u;
label_384550:
    // 0x384550: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x384550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x384554: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x384554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x384558: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x384558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x38455c: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x38455Cu;
    SET_GPR_U32(ctx, 31, 0x384564u);
    ctx->pc = 0x384560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38455Cu;
    // 0x384560: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x38455Cu, 0x384564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384564u;
label_384564:
    // 0x384564: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x384564u;
    {
        const bool branch_taken_0x384564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384564u;
        // 0x384568: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384564) {
            ctx->pc = 0x38458Cu;
            goto label_38458c;
        }
    }
    ctx->pc = 0x38456Cu;
    // 0x38456c: 0x0  nop
    ctx->pc = 0x38456cu;
    // NOP
label_384570:
    // 0x384570: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x384570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x384574: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x384578: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384578u;
    SET_GPR_U32(ctx, 31, 0x384580u);
    ctx->pc = 0x38457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384578u;
    // 0x38457c: 0x24848c18  addiu       $a0, $a0, -0x73E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384578u, 0x384580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384580u;
label_384580:
    // 0x384580: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384580u;
    SET_GPR_U32(ctx, 31, 0x384588u);
    ctx->pc = 0x384584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384580u;
    // 0x384584: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384580u, 0x384588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384588u;
label_384588:
    // 0x384588: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_38458c:
    // 0x38458c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38458cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384590: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384594: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384598: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x384598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x38459c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x38459cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3845a0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3845a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3845a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3845a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3845a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3845A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3845ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3845A8u;
        // 0x3845ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3845A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3845B0u;
}
