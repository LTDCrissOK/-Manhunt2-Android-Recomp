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

// Function: sub_002CD800
// Address: 0x2cd800 - 0x2cd958
void sub_002CD800_0x2cd800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD800_0x2cd800");
#endif

    switch (ctx->pc) {
        case 0x2cd82cu: goto label_2cd82c;
        case 0x2cd840u: goto label_2cd840;
        case 0x2cd850u: goto label_2cd850;
        case 0x2cd860u: goto label_2cd860;
        case 0x2cd870u: goto label_2cd870;
        case 0x2cd880u: goto label_2cd880;
        case 0x2cd888u: goto label_2cd888;
        case 0x2cd89cu: goto label_2cd89c;
        case 0x2cd8a4u: goto label_2cd8a4;
        case 0x2cd8b8u: goto label_2cd8b8;
        case 0x2cd8c8u: goto label_2cd8c8;
        case 0x2cd8f4u: goto label_2cd8f4;
        case 0x2cd8fcu: goto label_2cd8fc;
        case 0x2cd910u: goto label_2cd910;
        case 0x2cd924u: goto label_2cd924;
        case 0x2cd938u: goto label_2cd938;
        case 0x2cd940u: goto label_2cd940;
        default: break;
    }

    ctx->pc = 0x2cd800u;

    // 0x2cd800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cd800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cd804: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2cd804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2cd808: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cd808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cd80c: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x2cd80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x2cd810: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2cd810u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2cd814: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cd814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cd818: 0x8e22b4a8  lw          $v0, -0x4B58($s1)
    ctx->pc = 0x2cd818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cd81c: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x2cd81cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x2cd820: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cd820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cd824: 0xc0b37a0  jal         func_2CDE80
    ctx->pc = 0x2CD824u;
    SET_GPR_U32(ctx, 31, 0x2CD82Cu);
    ctx->pc = 0x2CD828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD824u;
    // 0x2cd828: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDE80u, 0x2CD824u, 0x2CD82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD82Cu;
label_2cd82c:
    // 0x2cd82c: 0x8e22b4a8  lw          $v0, -0x4B58($s1)
    ctx->pc = 0x2cd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd830: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd834: 0x34843094  ori         $a0, $a0, 0x3094
    ctx->pc = 0x2cd834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12436);
    // 0x2cd838: 0xc0b410c  jal         func_2D0430
    ctx->pc = 0x2CD838u;
    SET_GPR_U32(ctx, 31, 0x2CD840u);
    ctx->pc = 0x2CD83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD838u;
    // 0x2cd83c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0430u, 0x2CD838u, 0x2CD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD840u;
label_2cd840:
    // 0x2cd840: 0x8e22b4a8  lw          $v0, -0x4B58($s1)
    ctx->pc = 0x2cd840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd844: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cd844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cd848: 0xc0f25fc  jal         func_3C97F0
    ctx->pc = 0x2CD848u;
    SET_GPR_U32(ctx, 31, 0x2CD850u);
    ctx->pc = 0x2CD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD848u;
    // 0x2cd84c: 0x8c442f40  lw          $a0, 0x2F40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97F0u, 0x2CD848u, 0x2CD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD850u;
label_2cd850:
    // 0x2cd850: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cd850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd854: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cd854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cd858: 0xc0f25ec  jal         func_3C97B0
    ctx->pc = 0x2CD858u;
    SET_GPR_U32(ctx, 31, 0x2CD860u);
    ctx->pc = 0x2CD85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD858u;
    // 0x2cd85c: 0x8c642f40  lw          $a0, 0x2F40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97B0u, 0x2CD858u, 0x2CD860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD860u;
label_2cd860:
    // 0x2cd860: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cd860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd864: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cd864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cd868: 0xc0f25fc  jal         func_3C97F0
    ctx->pc = 0x2CD868u;
    SET_GPR_U32(ctx, 31, 0x2CD870u);
    ctx->pc = 0x2CD86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD868u;
    // 0x2cd86c: 0x8c642f44  lw          $a0, 0x2F44($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97F0u, 0x2CD868u, 0x2CD870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD870u;
label_2cd870:
    // 0x2cd870: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cd870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd874: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cd874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cd878: 0xc0f25ec  jal         func_3C97B0
    ctx->pc = 0x2CD878u;
    SET_GPR_U32(ctx, 31, 0x2CD880u);
    ctx->pc = 0x2CD87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD878u;
    // 0x2cd87c: 0x8c642f44  lw          $a0, 0x2F44($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97B0u, 0x2CD878u, 0x2CD880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD880u;
label_2cd880:
    // 0x2cd880: 0xc0f291e  jal         func_3CA478
    ctx->pc = 0x2CD880u;
    SET_GPR_U32(ctx, 31, 0x2CD888u);
    ctx->pc = 0x2CD884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD880u;
    // 0x2cd884: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA478u, 0x2CD880u, 0x2CD888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD888u;
label_2cd888:
    // 0x2cd888: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cd888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd88c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd890: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cd890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cd894: 0xc0f25b4  jal         func_3C96D0
    ctx->pc = 0x2CD894u;
    SET_GPR_U32(ctx, 31, 0x2CD89Cu);
    ctx->pc = 0x2CD898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD894u;
    // 0x2cd898: 0x8c653030  lw          $a1, 0x3030($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96D0u, 0x2CD894u, 0x2CD89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD89Cu;
label_2cd89c:
    // 0x2cd89c: 0xc0f28ea  jal         func_3CA3A8
    ctx->pc = 0x2CD89Cu;
    SET_GPR_U32(ctx, 31, 0x2CD8A4u);
    ctx->pc = 0x2CD8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD89Cu;
    // 0x2cd8a0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA3A8u, 0x2CD89Cu, 0x2CD8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8A4u;
label_2cd8a4:
    // 0x2cd8a4: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd8a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd8ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cd8b0: 0xc0f25a8  jal         func_3C96A0
    ctx->pc = 0x2CD8B0u;
    SET_GPR_U32(ctx, 31, 0x2CD8B8u);
    ctx->pc = 0x2CD8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8B0u;
    // 0x2cd8b4: 0x8c653034  lw          $a1, 0x3034($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96A0u, 0x2CD8B0u, 0x2CD8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8B8u;
label_2cd8b8:
    // 0x2cd8b8: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x2cd8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x2cd8bc: 0x2610f910  addiu       $s0, $s0, -0x6F0
    ctx->pc = 0x2cd8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x2cd8c0: 0xc0dc4fa  jal         func_3713E8
    ctx->pc = 0x2CD8C0u;
    SET_GPR_U32(ctx, 31, 0x2CD8C8u);
    ctx->pc = 0x2CD8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8C0u;
    // 0x2cd8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3713E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3713E8u, 0x2CD8C0u, 0x2CD8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8C8u;
label_2cd8c8:
    // 0x2cd8c8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2cd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2cd8cc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2cd8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2cd8d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2cd8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2cd8d4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2cd8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2cd8d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cd8d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8dc: 0x24090280  addiu       $t1, $zero, 0x280
    ctx->pc = 0x2cd8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2cd8e0: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x2cd8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2cd8e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2cd8e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cd8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd8ec: 0xc0dca7c  jal         func_3729F0
    ctx->pc = 0x2CD8ECu;
    SET_GPR_U32(ctx, 31, 0x2CD8F4u);
    ctx->pc = 0x2CD8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8ECu;
    // 0x2cd8f0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3729F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3729F0u, 0x2CD8ECu, 0x2CD8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8F4u;
label_2cd8f4:
    // 0x2cd8f4: 0xc0dc4fa  jal         func_3713E8
    ctx->pc = 0x2CD8F4u;
    SET_GPR_U32(ctx, 31, 0x2CD8FCu);
    ctx->pc = 0x2CD8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8F4u;
    // 0x2cd8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3713E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3713E8u, 0x2CD8F4u, 0x2CD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8FCu;
label_2cd8fc:
    // 0x2cd8fc: 0x8e22b4a8  lw          $v0, -0x4B58($s1)
    ctx->pc = 0x2cd8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd900: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd904: 0x34842f80  ori         $a0, $a0, 0x2F80
    ctx->pc = 0x2cd904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12160);
    // 0x2cd908: 0xc0b3f20  jal         func_2CFC80
    ctx->pc = 0x2CD908u;
    SET_GPR_U32(ctx, 31, 0x2CD910u);
    ctx->pc = 0x2CD90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD908u;
    // 0x2cd90c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC80u, 0x2CD908u, 0x2CD910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD910u;
label_2cd910:
    // 0x2cd910: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cd910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd914: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd918: 0x34843038  ori         $a0, $a0, 0x3038
    ctx->pc = 0x2cd918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12344);
    // 0x2cd91c: 0xc0b2b54  jal         func_2CAD50
    ctx->pc = 0x2CD91Cu;
    SET_GPR_U32(ctx, 31, 0x2CD924u);
    ctx->pc = 0x2CD920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD91Cu;
    // 0x2cd920: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD50u, 0x2CD91Cu, 0x2CD924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD924u;
label_2cd924:
    // 0x2cd924: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cd924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cd928: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd92c: 0x34842f48  ori         $a0, $a0, 0x2F48
    ctx->pc = 0x2cd92cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12104);
    // 0x2cd930: 0xc0b37fa  jal         func_2CDFE8
    ctx->pc = 0x2CD930u;
    SET_GPR_U32(ctx, 31, 0x2CD938u);
    ctx->pc = 0x2CD934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD930u;
    // 0x2cd934: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDFE8u, 0x2CD930u, 0x2CD938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD938u;
label_2cd938:
    // 0x2cd938: 0xc0b38c4  jal         func_2CE310
    ctx->pc = 0x2CD938u;
    SET_GPR_U32(ctx, 31, 0x2CD940u);
    ctx->pc = 0x2CE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE310u, 0x2CD938u, 0x2CD940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD940u;
label_2cd940:
    // 0x2cd940: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cd940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd944: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cd944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cd948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd94c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD94Cu;
        // 0x2cd950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD954u;
    // 0x2cd954: 0x0  nop
    ctx->pc = 0x2cd954u;
    // NOP
    ctx->pc = 0x2cd958u;
}
