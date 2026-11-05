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

// Function: sub_00201540
// Address: 0x201540 - 0x201758
void sub_00201540_0x201540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201540_0x201540");
#endif

    switch (ctx->pc) {
        case 0x201580u: goto label_201580;
        case 0x2015a4u: goto label_2015a4;
        case 0x2015b4u: goto label_2015b4;
        case 0x2015c4u: goto label_2015c4;
        case 0x2015ecu: goto label_2015ec;
        case 0x2015f8u: goto label_2015f8;
        case 0x201600u: goto label_201600;
        case 0x201608u: goto label_201608;
        case 0x201610u: goto label_201610;
        case 0x201648u: goto label_201648;
        case 0x201684u: goto label_201684;
        case 0x201698u: goto label_201698;
        case 0x2016d0u: goto label_2016d0;
        case 0x2016e0u: goto label_2016e0;
        case 0x201718u: goto label_201718;
        case 0x201724u: goto label_201724;
        default: break;
    }

    ctx->pc = 0x201540u;

    // 0x201540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x201540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x201544: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x201544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x201548: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x201548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x20154c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x20154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x201550: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x201550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201554: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x201554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x201558: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20155c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x20155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x201560: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x201560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201564: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x201564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x201568: 0x2682027c  addiu       $v0, $s4, 0x27C
    ctx->pc = 0x201568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 636));
    // 0x20156c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x20156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x201570: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x201570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x201574: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x201574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x201578: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x201578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x20157c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x20157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_201580:
    // 0x201580: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x201580u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x201584: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x201584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x201588: 0x0  nop
    ctx->pc = 0x201588u;
    // NOP
    // 0x20158c: 0x0  nop
    ctx->pc = 0x20158cu;
    // NOP
    // 0x201590: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x201590u;
    {
        const bool branch_taken_0x201590 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x201594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201590u;
        // 0x201594: 0x2442ffec  addiu       $v0, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201590) {
            ctx->pc = 0x201580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201580;
        }
    }
    ctx->pc = 0x201598u;
    // 0x201598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20159c: 0xc0b4c9a  jal         func_2D3268
    ctx->pc = 0x20159Cu;
    SET_GPR_U32(ctx, 31, 0x2015A4u);
    ctx->pc = 0x2015A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20159Cu;
    // 0x2015a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3268u, 0x20159Cu, 0x2015A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015A4u;
label_2015a4:
    // 0x2015a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2015a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2015a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015ac: 0xc0b4ce0  jal         func_2D3380
    ctx->pc = 0x2015ACu;
    SET_GPR_U32(ctx, 31, 0x2015B4u);
    ctx->pc = 0x2015B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015ACu;
    // 0x2015b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3380u, 0x2015ACu, 0x2015B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015B4u;
label_2015b4:
    // 0x2015b4: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2015B4u;
    {
        const bool branch_taken_0x2015b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2015B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015B4u;
        // 0x2015b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015b4) {
            ctx->pc = 0x20171Cu;
            goto label_20171c;
        }
    }
    ctx->pc = 0x2015BCu;
    // 0x2015bc: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2015BCu;
    SET_GPR_U32(ctx, 31, 0x2015C4u);
    ctx->pc = 0x2015C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015BCu;
    // 0x2015c0: 0x2404083f  addiu       $a0, $zero, 0x83F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2111));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2015BCu, 0x2015C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015C4u;
label_2015c4:
    // 0x2015c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2015c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2015c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2015ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2015d0: 0x26c3003f  addiu       $v1, $s6, 0x3F
    ctx->pc = 0x2015d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 63));
    // 0x2015d4: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x2015d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x2015d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2015d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015dc: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x2015dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2015e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2015e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2015e4: 0xc0b4d14  jal         func_2D3450
    ctx->pc = 0x2015E4u;
    SET_GPR_U32(ctx, 31, 0x2015ECu);
    ctx->pc = 0x2015E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015E4u;
    // 0x2015e8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3450u, 0x2015E4u, 0x2015ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015ECu;
label_2015ec:
    // 0x2015ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2015ECu;
    {
        const bool branch_taken_0x2015ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2015ec) {
            ctx->pc = 0x201608u;
            goto label_201608;
        }
    }
    ctx->pc = 0x2015F4u;
    // 0x2015f4: 0x0  nop
    ctx->pc = 0x2015f4u;
    // NOP
label_2015f8:
    // 0x2015f8: 0xc081710  jal         func_205C40
    ctx->pc = 0x2015F8u;
    SET_GPR_U32(ctx, 31, 0x201600u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x2015F8u, 0x201600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201600u;
label_201600:
    // 0x201600: 0xc0817c0  jal         func_205F00
    ctx->pc = 0x201600u;
    SET_GPR_U32(ctx, 31, 0x201608u);
    ctx->pc = 0x201604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201600u;
    // 0x201604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F00u, 0x201600u, 0x201608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201608u;
label_201608:
    // 0x201608: 0xc0b4d40  jal         func_2D3500
    ctx->pc = 0x201608u;
    SET_GPR_U32(ctx, 31, 0x201610u);
    ctx->pc = 0x20160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201608u;
    // 0x20160c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3500u, 0x201608u, 0x201610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201610u;
label_201610:
    // 0x201610: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x201610u;
    {
        const bool branch_taken_0x201610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201610) {
            ctx->pc = 0x2015F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2015f8;
        }
    }
    ctx->pc = 0x201618u;
    // 0x201618: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x201618u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20161c: 0x1a60003a  blez        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x20161Cu;
    {
        const bool branch_taken_0x20161c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x201620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20161Cu;
        // 0x201620: 0x2a630021  slti        $v1, $s3, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20161c) {
            ctx->pc = 0x201708u;
            goto label_201708;
        }
    }
    ctx->pc = 0x201624u;
    // 0x201624: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x201624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x201628: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x201628u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x20162c: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x20162Cu;
    {
        const bool branch_taken_0x20162c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x201630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20162Cu;
        // 0x201630: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20162c) {
            ctx->pc = 0x2016C0u;
            goto label_2016c0;
        }
    }
    ctx->pc = 0x201634u;
    // 0x201634: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x201634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201638: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x201638u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20163c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x20163cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x201640: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x201640u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201644: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x201644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_201648:
    // 0x201648: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x201648u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20164c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20164cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201650: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x201650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x201654: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x201654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x201658: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x201658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x20165c: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x20165cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x201660: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201664: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x201664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x201668: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x201668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20166c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20166cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x201670: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x201670u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x201674: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x201674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x201678: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x201678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20167c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x20167Cu;
    SET_GPR_U32(ctx, 31, 0x201684u);
    ctx->pc = 0x201680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20167Cu;
    // 0x201680: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x20167Cu, 0x201684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201684u;
label_201684:
    // 0x201684: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x201684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x201688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x201688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20168c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x20168cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x201690: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x201690u;
    SET_GPR_U32(ctx, 31, 0x201698u);
    ctx->pc = 0x201694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201690u;
    // 0x201694: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x201690u, 0x201698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201698u;
label_201698:
    // 0x201698: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x201698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20169c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20169cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2016a0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2016a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2016a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2016a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2016a8: 0xa2570010  sb          $s7, 0x10($s2)
    ctx->pc = 0x2016a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 23));
    // 0x2016ac: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2016acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2016b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2016b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2016b4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2016b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x2016b8: 0x1680ffe3  bnez        $s4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2016B8u;
    {
        const bool branch_taken_0x2016b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2016BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016B8u;
        // 0x2016bc: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016b8) {
            ctx->pc = 0x201648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201648;
        }
    }
    ctx->pc = 0x2016C0u;
label_2016c0:
    // 0x2016c0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2016c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016c4: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2016C4u;
    {
        const bool branch_taken_0x2016c4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2016C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016C4u;
        // 0x2016c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016c4) {
            ctx->pc = 0x201708u;
            goto label_201708;
        }
    }
    ctx->pc = 0x2016CCu;
    // 0x2016cc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2016ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2016d0:
    // 0x2016d0: 0x1a600009  blez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2016D0u;
    {
        const bool branch_taken_0x2016d0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2016D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016D0u;
        // 0x2016d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016d0) {
            ctx->pc = 0x2016F8u;
            goto label_2016f8;
        }
    }
    ctx->pc = 0x2016D8u;
    // 0x2016d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2016d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2016dc: 0x0  nop
    ctx->pc = 0x2016dcu;
    // NOP
label_2016e0:
    // 0x2016e0: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x2016e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2016e4: 0x0  nop
    ctx->pc = 0x2016e4u;
    // NOP
    // 0x2016e8: 0x0  nop
    ctx->pc = 0x2016e8u;
    // NOP
    // 0x2016ec: 0x0  nop
    ctx->pc = 0x2016ecu;
    // NOP
    // 0x2016f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2016F0u;
    {
        const bool branch_taken_0x2016f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2016F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016F0u;
        // 0x2016f4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016f0) {
            ctx->pc = 0x2016E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2016e0;
        }
    }
    ctx->pc = 0x2016F8u;
label_2016f8:
    // 0x2016f8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2016f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016fc: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x2016fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x201700: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x201700u;
    {
        const bool branch_taken_0x201700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201700u;
        // 0x201704: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201700) {
            ctx->pc = 0x2016D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2016d0;
        }
    }
    ctx->pc = 0x201708u;
label_201708:
    // 0x201708: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x201708u;
    {
        const bool branch_taken_0x201708 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201708u;
        // 0x20170c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201708) {
            ctx->pc = 0x20171Cu;
            goto label_20171c;
        }
    }
    ctx->pc = 0x201710u;
    // 0x201710: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x201710u;
    SET_GPR_U32(ctx, 31, 0x201718u);
    ctx->pc = 0x201714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201710u;
    // 0x201714: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x201710u, 0x201718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201718u;
label_201718:
    // 0x201718: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20171c:
    // 0x20171c: 0xc0b4cac  jal         func_2D32B0
    ctx->pc = 0x20171Cu;
    SET_GPR_U32(ctx, 31, 0x201724u);
    ctx->pc = 0x201720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20171Cu;
    // 0x201720: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D32B0u, 0x20171Cu, 0x201724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201724u;
label_201724:
    // 0x201724: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x201724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201728: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x201728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20172c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x20172cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x201730: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x201730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201734: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x201734u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x201738: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x201738u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20173c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x20173cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x201740: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x201740u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201744: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x201744u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x201748: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x201748u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20174c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x20174cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201750: 0x3e00008  jr          $ra
    ctx->pc = 0x201750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201750u;
        // 0x201754: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201758u;
}
