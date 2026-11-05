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

// Function: sub_00201030
// Address: 0x201030 - 0x201400
void sub_00201030_0x201030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201030_0x201030");
#endif

    switch (ctx->pc) {
        case 0x201068u: goto label_201068;
        case 0x201074u: goto label_201074;
        case 0x20107cu: goto label_20107c;
        case 0x201090u: goto label_201090;
        case 0x20109cu: goto label_20109c;
        case 0x2010bcu: goto label_2010bc;
        case 0x2010ccu: goto label_2010cc;
        case 0x2010dcu: goto label_2010dc;
        case 0x2010f0u: goto label_2010f0;
        case 0x20111cu: goto label_20111c;
        case 0x201130u: goto label_201130;
        case 0x201150u: goto label_201150;
        case 0x201158u: goto label_201158;
        case 0x201160u: goto label_201160;
        case 0x201168u: goto label_201168;
        case 0x201180u: goto label_201180;
        case 0x20118cu: goto label_20118c;
        case 0x201198u: goto label_201198;
        case 0x2011acu: goto label_2011ac;
        case 0x2011d0u: goto label_2011d0;
        case 0x201208u: goto label_201208;
        case 0x201214u: goto label_201214;
        case 0x201234u: goto label_201234;
        case 0x20124cu: goto label_20124c;
        case 0x20127cu: goto label_20127c;
        case 0x201290u: goto label_201290;
        case 0x20129cu: goto label_20129c;
        case 0x2012d4u: goto label_2012d4;
        case 0x20133cu: goto label_20133c;
        case 0x201348u: goto label_201348;
        case 0x20135cu: goto label_20135c;
        case 0x201370u: goto label_201370;
        case 0x20137cu: goto label_20137c;
        case 0x201388u: goto label_201388;
        case 0x2013a0u: goto label_2013a0;
        case 0x2013acu: goto label_2013ac;
        case 0x2013b8u: goto label_2013b8;
        case 0x2013c4u: goto label_2013c4;
        case 0x2013d0u: goto label_2013d0;
        default: break;
    }

    ctx->pc = 0x201030u;

    // 0x201030: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x201030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x201034: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x201034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x201038: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x201038u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20103c: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x20103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x201040: 0xffb10198  sd          $s1, 0x198($sp)
    ctx->pc = 0x201040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 17));
    // 0x201044: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x201044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x201048: 0xffb301a8  sd          $s3, 0x1A8($sp)
    ctx->pc = 0x201048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 19));
    // 0x20104c: 0xffb401b0  sd          $s4, 0x1B0($sp)
    ctx->pc = 0x20104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 20));
    // 0x201050: 0xffb501b8  sd          $s5, 0x1B8($sp)
    ctx->pc = 0x201050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 21));
    // 0x201054: 0xffb701c8  sd          $s7, 0x1C8($sp)
    ctx->pc = 0x201054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 23));
    // 0x201058: 0xffbe01d0  sd          $fp, 0x1D0($sp)
    ctx->pc = 0x201058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 30));
    // 0x20105c: 0xffbf01d8  sd          $ra, 0x1D8($sp)
    ctx->pc = 0x20105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 31));
    // 0x201060: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x201060u;
    SET_GPR_U32(ctx, 31, 0x201068u);
    ctx->pc = 0x201064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201060u;
    // 0x201064: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x201060u, 0x201068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201068u;
label_201068:
    // 0x201068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20106c: 0xc0b4c04  jal         func_2D3010
    ctx->pc = 0x20106Cu;
    SET_GPR_U32(ctx, 31, 0x201074u);
    ctx->pc = 0x201070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20106Cu;
    // 0x201070: 0x24050258  addiu       $a1, $zero, 0x258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3010u, 0x20106Cu, 0x201074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201074u;
label_201074:
    // 0x201074: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x201074u;
    SET_GPR_U32(ctx, 31, 0x20107Cu);
    ctx->pc = 0x201078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201074u;
    // 0x201078: 0xaec200fc  sw          $v0, 0xFC($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x201074u, 0x20107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20107Cu;
label_20107c:
    // 0x20107c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20107cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x201080: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201084: 0x8c669368  lw          $a2, -0x6C98($v1)
    ctx->pc = 0x201084u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F9368u));
    // 0x201088: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x201088u;
    SET_GPR_U32(ctx, 31, 0x201090u);
    ctx->pc = 0x20108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201088u;
    // 0x20108c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x201088u, 0x201090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201090u;
label_201090:
    // 0x201090: 0x8ec400fc  lw          $a0, 0xFC($s6)
    ctx->pc = 0x201090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 252)));
    // 0x201094: 0xc0b4c30  jal         func_2D30C0
    ctx->pc = 0x201094u;
    SET_GPR_U32(ctx, 31, 0x20109Cu);
    ctx->pc = 0x201098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201094u;
    // 0x201098: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30C0u, 0x201094u, 0x20109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20109Cu;
label_20109c:
    // 0x20109c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x20109Cu;
    {
        const bool branch_taken_0x20109c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2010A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20109Cu;
        // 0x2010a0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20109c) {
            ctx->pc = 0x20118Cu;
            goto label_20118c;
        }
    }
    ctx->pc = 0x2010A4u;
    // 0x2010a4: 0x8ec200fc  lw          $v0, 0xFC($s6)
    ctx->pc = 0x2010a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 252)));
    // 0x2010a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2010a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010ac: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x2010acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2010b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2010b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2010b4: 0xc0b4c9a  jal         func_2D3268
    ctx->pc = 0x2010B4u;
    SET_GPR_U32(ctx, 31, 0x2010BCu);
    ctx->pc = 0x2010B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010B4u;
    // 0x2010b8: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3268u, 0x2010B4u, 0x2010BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010BCu;
label_2010bc:
    // 0x2010bc: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x2010bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2010c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2010c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010c4: 0xc0b4ce0  jal         func_2D3380
    ctx->pc = 0x2010C4u;
    SET_GPR_U32(ctx, 31, 0x2010CCu);
    ctx->pc = 0x2010C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010C4u;
    // 0x2010c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3380u, 0x2010C4u, 0x2010CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010CCu;
label_2010cc:
    // 0x2010cc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2010CCu;
    {
        const bool branch_taken_0x2010cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2010cc) {
            ctx->pc = 0x201178u;
            goto label_201178;
        }
    }
    ctx->pc = 0x2010D4u;
    // 0x2010d4: 0xc0b4d08  jal         func_2D3420
    ctx->pc = 0x2010D4u;
    SET_GPR_U32(ctx, 31, 0x2010DCu);
    ctx->pc = 0x2010D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010D4u;
    // 0x2010d8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3420u, 0x2010D4u, 0x2010DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010DCu;
label_2010dc:
    // 0x2010dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2010dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010e0: 0x1012c0  sll         $v0, $s0, 11
    ctx->pc = 0x2010e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x2010e4: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2010e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x2010e8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2010E8u;
    SET_GPR_U32(ctx, 31, 0x2010F0u);
    ctx->pc = 0x2010ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010E8u;
    // 0x2010ec: 0x3444003f  ori         $a0, $v0, 0x3F (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2010E8u, 0x2010F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010F0u;
label_2010f0:
    // 0x2010f0: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2010f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x2010f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2010f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2010f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2010fc: 0x8fa6016c  lw          $a2, 0x16C($sp)
    ctx->pc = 0x2010fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x201100: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x201100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x201104: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x201104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x201108: 0x2483003f  addiu       $v1, $a0, 0x3F
    ctx->pc = 0x201108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x20110c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20110cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x201110: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x201110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201114: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x201114u;
    SET_GPR_U32(ctx, 31, 0x20111Cu);
    ctx->pc = 0x201118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201114u;
    // 0x201118: 0xafa30164  sw          $v1, 0x164($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x201114u, 0x20111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20111Cu;
label_20111c:
    // 0x20111c: 0x8fa70164  lw          $a3, 0x164($sp)
    ctx->pc = 0x20111cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x201120: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x201120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201124: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x201124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x201128: 0xc0b4d14  jal         func_2D3450
    ctx->pc = 0x201128u;
    SET_GPR_U32(ctx, 31, 0x201130u);
    ctx->pc = 0x20112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201128u;
    // 0x20112c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3450u, 0x201128u, 0x201130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201130u;
label_201130:
    // 0x201130: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x201130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x201134: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x201134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x201138: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x201138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x20113c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x20113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x201140: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x201140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x201144: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x201144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x201148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x201148u;
    {
        const bool branch_taken_0x201148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201148u;
        // 0x20114c: 0xafa4017c  sw          $a0, 0x17C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201148) {
            ctx->pc = 0x201160u;
            goto label_201160;
        }
    }
    ctx->pc = 0x201150u;
label_201150:
    // 0x201150: 0xc081710  jal         func_205C40
    ctx->pc = 0x201150u;
    SET_GPR_U32(ctx, 31, 0x201158u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x201150u, 0x201158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201158u;
label_201158:
    // 0x201158: 0xc0817c0  jal         func_205F00
    ctx->pc = 0x201158u;
    SET_GPR_U32(ctx, 31, 0x201160u);
    ctx->pc = 0x20115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201158u;
    // 0x20115c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F00u, 0x201158u, 0x201160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201160u;
label_201160:
    // 0x201160: 0xc0b4d40  jal         func_2D3500
    ctx->pc = 0x201160u;
    SET_GPR_U32(ctx, 31, 0x201168u);
    ctx->pc = 0x201164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201160u;
    // 0x201164: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3500u, 0x201160u, 0x201168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201168u;
label_201168:
    // 0x201168: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x201168u;
    {
        const bool branch_taken_0x201168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201168u;
        // 0x20116c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201168) {
            ctx->pc = 0x201150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201150;
        }
    }
    ctx->pc = 0x201170u;
    // 0x201170: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x201170u;
    {
        const bool branch_taken_0x201170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201170u;
        // 0x201174: 0xafa00170  sw          $zero, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201170) {
            ctx->pc = 0x2011A0u;
            goto label_2011a0;
        }
    }
    ctx->pc = 0x201178u;
label_201178:
    // 0x201178: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x201178u;
    SET_GPR_U32(ctx, 31, 0x201180u);
    ctx->pc = 0x20117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201178u;
    // 0x20117c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x201178u, 0x201180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201180u;
label_201180:
    // 0x201180: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x201180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x201184: 0xc0b4cac  jal         func_2D32B0
    ctx->pc = 0x201184u;
    SET_GPR_U32(ctx, 31, 0x20118Cu);
    ctx->pc = 0x201188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201184u;
    // 0x201188: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D32B0u, 0x201184u, 0x20118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20118Cu;
label_20118c:
    // 0x20118c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201190: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x201190u;
    SET_GPR_U32(ctx, 31, 0x201198u);
    ctx->pc = 0x201194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201190u;
    // 0x201194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x201190u, 0x201198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201198u;
label_201198:
    // 0x201198: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x201198u;
    {
        const bool branch_taken_0x201198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201198u;
        // 0x20119c: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201198) {
            ctx->pc = 0x2013D4u;
            goto label_2013d4;
        }
    }
    ctx->pc = 0x2011A0u;
label_2011a0:
    // 0x2011a0: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x2011a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2011a4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2011A4u;
    SET_GPR_U32(ctx, 31, 0x2011ACu);
    ctx->pc = 0x2011A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011A4u;
    // 0x2011a8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2011A4u, 0x2011ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011ACu;
label_2011ac:
    // 0x2011ac: 0xaed10108  sw          $s1, 0x108($s6)
    ctx->pc = 0x2011acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 264), GPR_U32(ctx, 17));
    // 0x2011b0: 0xaec20104  sw          $v0, 0x104($s6)
    ctx->pc = 0x2011b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 260), GPR_U32(ctx, 2));
    // 0x2011b4: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2011b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x2011b8: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2011B8u;
    {
        const bool branch_taken_0x2011b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2011BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011B8u;
        // 0x2011bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011b8) {
            ctx->pc = 0x20132Cu;
            goto label_20132c;
        }
    }
    ctx->pc = 0x2011C0u;
    // 0x2011c0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2011c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2011c4: 0x8fb40164  lw          $s4, 0x164($sp)
    ctx->pc = 0x2011c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2011c8: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x2011c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x2011cc: 0x0  nop
    ctx->pc = 0x2011ccu;
    // NOP
label_2011d0:
    // 0x2011d0: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x2011d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2011d4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2011d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2011d8: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2011D8u;
    {
        const bool branch_taken_0x2011d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2011DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011D8u;
        // 0x2011dc: 0x8fa3016c  lw          $v1, 0x16C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011d8) {
            ctx->pc = 0x20131Cu;
            goto label_20131c;
        }
    }
    ctx->pc = 0x2011E0u;
    // 0x2011e0: 0x82830001  lb          $v1, 0x1($s4)
    ctx->pc = 0x2011e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x2011e4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2011e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2011e8: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2011E8u;
    {
        const bool branch_taken_0x2011e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2011ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011E8u;
        // 0x2011ec: 0x8fa3016c  lw          $v1, 0x16C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011e8) {
            ctx->pc = 0x20131Cu;
            goto label_20131c;
        }
    }
    ctx->pc = 0x2011F0u;
    // 0x2011f0: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x2011f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2011f4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2011f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2011f8: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2011f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2011fc: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2011fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201200: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x201200u;
    SET_GPR_U32(ctx, 31, 0x201208u);
    ctx->pc = 0x201204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201200u;
    // 0x201204: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x201200u, 0x201208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201208u;
label_201208:
    // 0x201208: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x201208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x20120c: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x20120Cu;
    SET_GPR_U32(ctx, 31, 0x201214u);
    ctx->pc = 0x201210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20120Cu;
    // 0x201210: 0xa3a0012f  sb          $zero, 0x12F($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x20120Cu, 0x201214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201214u;
label_201214:
    // 0x201214: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x201214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x201218: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x201218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20121c: 0x648818  mult        $s1, $v1, $a0
    ctx->pc = 0x20121cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x201220: 0x8ec30104  lw          $v1, 0x104($s6)
    ctx->pc = 0x201220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x201224: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x201224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x201228: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x201228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x20122c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x20122Cu;
    SET_GPR_U32(ctx, 31, 0x201234u);
    ctx->pc = 0x201230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20122Cu;
    // 0x201230: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x20122Cu, 0x201234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201234u;
label_201234:
    // 0x201234: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x201234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x201238: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x201238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20123c: 0x24850748  addiu       $a1, $a0, 0x748
    ctx->pc = 0x20123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1864));
    // 0x201240: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x201240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201244: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x201244u;
    SET_GPR_U32(ctx, 31, 0x20124Cu);
    ctx->pc = 0x201248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201244u;
    // 0x201248: 0x2444fffd  addiu       $a0, $v0, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x201244u, 0x20124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20124Cu;
label_20124c:
    // 0x20124c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x20124Cu;
    {
        const bool branch_taken_0x20124c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20124c) {
            ctx->pc = 0x201250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20124Cu;
            // 0x201250: 0x8ec30104  lw          $v1, 0x104($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2012E4u;
            goto label_2012e4;
        }
    }
    ctx->pc = 0x201254u;
    // 0x201254: 0x8ec20104  lw          $v0, 0x104($s6)
    ctx->pc = 0x201254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x201258: 0x24040290  addiu       $a0, $zero, 0x290
    ctx->pc = 0x201258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    // 0x20125c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x20125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x201260: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x201260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x201264: 0x222b821  addu        $s7, $s1, $v0
    ctx->pc = 0x201264u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x201268: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x201268u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20126c: 0x26a20002  addiu       $v0, $s5, 0x2
    ctx->pc = 0x20126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x201270: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x201270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x201274: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x201274u;
    SET_GPR_U32(ctx, 31, 0x20127Cu);
    ctx->pc = 0x201278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201274u;
    // 0x201278: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x201274u, 0x20127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20127Cu;
label_20127c:
    // 0x20127c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x20127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x201280: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x201280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201284: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x201284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x201288: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x201288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20128c: 0x0  nop
    ctx->pc = 0x20128cu;
    // NOP
label_201290:
    // 0x201290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201294: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x201294u;
    SET_GPR_U32(ctx, 31, 0x20129Cu);
    ctx->pc = 0x201298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201294u;
    // 0x201298: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x201294u, 0x20129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20129Cu;
label_20129c:
    // 0x20129c: 0x0  nop
    ctx->pc = 0x20129cu;
    // NOP
    // 0x2012a0: 0x165efffb  bne         $s2, $fp, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2012A0u;
    {
        const bool branch_taken_0x2012a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 30));
        ctx->pc = 0x2012A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012A0u;
        // 0x2012a4: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012a0) {
            ctx->pc = 0x201290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201290;
        }
    }
    ctx->pc = 0x2012A8u;
    // 0x2012a8: 0xaef10004  sw          $s1, 0x4($s7)
    ctx->pc = 0x2012a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 17));
    // 0x2012ac: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2012acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2012b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2012b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012b4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2012b8: 0x8ec20104  lw          $v0, 0x104($s6)
    ctx->pc = 0x2012b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x2012bc: 0x648018  mult        $s0, $v1, $a0
    ctx->pc = 0x2012bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2012c0: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x2012c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2012c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2012c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2012c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2012cc: 0xc080550  jal         func_201540
    ctx->pc = 0x2012CCu;
    SET_GPR_U32(ctx, 31, 0x2012D4u);
    ctx->pc = 0x2012D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2012CCu;
    // 0x2012d0: 0x8c470004  lw          $a3, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201540u, 0x2012CCu, 0x2012D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2012D4u;
label_2012d4:
    // 0x2012d4: 0x8ec30104  lw          $v1, 0x104($s6)
    ctx->pc = 0x2012d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x2012d8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2012d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2012dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2012DCu;
    {
        const bool branch_taken_0x2012dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012DCu;
        // 0x2012e0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012dc) {
            ctx->pc = 0x201308u;
            goto label_201308;
        }
    }
    ctx->pc = 0x2012E4u;
label_2012e4:
    // 0x2012e4: 0x26a40002  addiu       $a0, $s5, 0x2
    ctx->pc = 0x2012e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x2012e8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2012e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2012ec: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x2012ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x2012f0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2012f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2012f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2012f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2012f8: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2012fc: 0x8ec20104  lw          $v0, 0x104($s6)
    ctx->pc = 0x2012fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x201300: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x201304: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x201304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_201308:
    // 0x201308: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x201308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x20130c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20130cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x201310: 0xafb30170  sw          $s3, 0x170($sp)
    ctx->pc = 0x201310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 19));
    // 0x201314: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x201314u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x201318: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x201318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_20131c:
    // 0x20131c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20131cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x201320: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x201320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x201324: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x201324u;
    {
        const bool branch_taken_0x201324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201324u;
        // 0x201328: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201324) {
            ctx->pc = 0x2011D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2011d0;
        }
    }
    ctx->pc = 0x20132Cu;
label_20132c:
    // 0x20132c: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x201330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201334: 0xc075e16  jal         func_1D7858
    ctx->pc = 0x201334u;
    SET_GPR_U32(ctx, 31, 0x20133Cu);
    ctx->pc = 0x201338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201334u;
    // 0x201338: 0xa2c20100  sb          $v0, 0x100($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 256), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7858u, 0x201334u, 0x20133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20133Cu;
label_20133c:
    // 0x20133c: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x20133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x201340: 0xc0d75d0  jal         func_35D740
    ctx->pc = 0x201340u;
    SET_GPR_U32(ctx, 31, 0x201348u);
    ctx->pc = 0x201344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201340u;
    // 0x201344: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x201340u, 0x201348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201348u;
label_201348:
    // 0x201348: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x201348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20134c: 0x8fa60184  lw          $a2, 0x184($sp)
    ctx->pc = 0x20134cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x201350: 0x248506b0  addiu       $a1, $a0, 0x6B0
    ctx->pc = 0x201350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1712));
    // 0x201354: 0xc0d74e8  jal         func_35D3A0
    ctx->pc = 0x201354u;
    SET_GPR_U32(ctx, 31, 0x20135Cu);
    ctx->pc = 0x201358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201354u;
    // 0x201358: 0x8fa4017c  lw          $a0, 0x17C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x201354u, 0x20135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20135Cu;
label_20135c:
    // 0x20135c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x201360: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x201360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x201364: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x201364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x201368: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x201368u;
    SET_GPR_U32(ctx, 31, 0x201370u);
    ctx->pc = 0x20136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201368u;
    // 0x20136c: 0x244606f0  addiu       $a2, $v0, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x201368u, 0x201370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201370u;
label_201370:
    // 0x201370: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x201370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x201374: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x201374u;
    SET_GPR_U32(ctx, 31, 0x20137Cu);
    ctx->pc = 0x201378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201374u;
    // 0x201378: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x201374u, 0x20137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20137Cu;
label_20137c:
    // 0x20137c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x20137cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x201380: 0xc0805d6  jal         func_201758
    ctx->pc = 0x201380u;
    SET_GPR_U32(ctx, 31, 0x201388u);
    ctx->pc = 0x201384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201380u;
    // 0x201384: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201758u, 0x201380u, 0x201388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201388u;
label_201388:
    // 0x201388: 0xaec2010c  sw          $v0, 0x10C($s6)
    ctx->pc = 0x201388u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 268), GPR_U32(ctx, 2));
    // 0x20138c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x20138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x201390: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201390u;
    {
        const bool branch_taken_0x201390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201390u;
        // 0x201394: 0x8fa40178  lw          $a0, 0x178($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201390) {
            ctx->pc = 0x2013A4u;
            goto label_2013a4;
        }
    }
    ctx->pc = 0x201398u;
    // 0x201398: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x201398u;
    SET_GPR_U32(ctx, 31, 0x2013A0u);
    ctx->pc = 0x20139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201398u;
    // 0x20139c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x201398u, 0x2013A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013A0u;
label_2013a0:
    // 0x2013a0: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2013a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_2013a4:
    // 0x2013a4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2013A4u;
    SET_GPR_U32(ctx, 31, 0x2013ACu);
    ctx->pc = 0x2013A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013A4u;
    // 0x2013a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2013A4u, 0x2013ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013ACu;
label_2013ac:
    // 0x2013ac: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x2013acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x2013b0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2013B0u;
    SET_GPR_U32(ctx, 31, 0x2013B8u);
    ctx->pc = 0x2013B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013B0u;
    // 0x2013b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2013B0u, 0x2013B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013B8u;
label_2013b8:
    // 0x2013b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2013b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2013bc: 0xc0b4cac  jal         func_2D32B0
    ctx->pc = 0x2013BCu;
    SET_GPR_U32(ctx, 31, 0x2013C4u);
    ctx->pc = 0x2013C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013BCu;
    // 0x2013c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D32B0u, 0x2013BCu, 0x2013C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013C4u;
label_2013c4:
    // 0x2013c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2013c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013c8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2013C8u;
    SET_GPR_U32(ctx, 31, 0x2013D0u);
    ctx->pc = 0x2013CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013C8u;
    // 0x2013cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2013C8u, 0x2013D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013D0u;
label_2013d0:
    // 0x2013d0: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x2013d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_2013d4:
    // 0x2013d4: 0xdfb10198  ld          $s1, 0x198($sp)
    ctx->pc = 0x2013d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2013d8: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x2013d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2013dc: 0xdfb301a8  ld          $s3, 0x1A8($sp)
    ctx->pc = 0x2013dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2013e0: 0xdfb401b0  ld          $s4, 0x1B0($sp)
    ctx->pc = 0x2013e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2013e4: 0xdfb501b8  ld          $s5, 0x1B8($sp)
    ctx->pc = 0x2013e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2013e8: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x2013e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2013ec: 0xdfb701c8  ld          $s7, 0x1C8($sp)
    ctx->pc = 0x2013ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2013f0: 0xdfbe01d0  ld          $fp, 0x1D0($sp)
    ctx->pc = 0x2013f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2013f4: 0xdfbf01d8  ld          $ra, 0x1D8($sp)
    ctx->pc = 0x2013f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2013f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2013F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2013FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013F8u;
        // 0x2013fc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2013F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201400u;
}
