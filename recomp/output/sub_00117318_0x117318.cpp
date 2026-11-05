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

// Function: sub_00117318
// Address: 0x117318 - 0x117510
void sub_00117318_0x117318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117318_0x117318");
#endif

    switch (ctx->pc) {
        case 0x117338u: goto label_117338;
        case 0x117378u: goto label_117378;
        case 0x117380u: goto label_117380;
        case 0x1174c8u: goto label_1174c8;
        case 0x1174f4u: goto label_1174f4;
        default: break;
    }

    ctx->pc = 0x117318u;

    // 0x117318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11731c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117324: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x117324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x117328: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x117328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11732c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117330: 0xc0c1574  jal         func_3055D0
    ctx->pc = 0x117330u;
    SET_GPR_U32(ctx, 31, 0x117338u);
    ctx->pc = 0x117334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117330u;
    // 0x117334: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3055D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3055D0u, 0x117330u, 0x117338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117338u;
label_117338:
    // 0x117338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11733c: 0x1200006d  beqz        $s0, . + 4 + (0x6D << 2)
    ctx->pc = 0x11733Cu;
    {
        const bool branch_taken_0x11733c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11733Cu;
        // 0x117340: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11733c) {
            ctx->pc = 0x1174F4u;
            goto label_1174f4;
        }
    }
    ctx->pc = 0x117344u;
    // 0x117344: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x117344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x117348: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x117348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11734c: 0x5460006a  bnel        $v1, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x11734Cu;
    {
        const bool branch_taken_0x11734c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11734c) {
            ctx->pc = 0x117350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11734Cu;
            // 0x117350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1174F8u;
            goto label_1174f8;
        }
    }
    ctx->pc = 0x117354u;
    // 0x117354: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x117354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117358: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x117358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x11735c: 0xac530040  sw          $s3, 0x40($v0)
    ctx->pc = 0x11735cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 19));
    // 0x117360: 0x24729b10  addiu       $s2, $v1, -0x64F0
    ctx->pc = 0x117360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x117364: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x117364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x499B1Cu));
    // 0x117368: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x117368u;
    {
        const bool branch_taken_0x117368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117368) {
            ctx->pc = 0x11736Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117368u;
            // 0x11736c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1174F8u;
            goto label_1174f8;
        }
    }
    ctx->pc = 0x117370u;
    // 0x117370: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x117370u;
    SET_GPR_U32(ctx, 31, 0x117378u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x117370u, 0x117378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117378u;
label_117378:
    // 0x117378: 0xc0821da  jal         func_208768
    ctx->pc = 0x117378u;
    SET_GPR_U32(ctx, 31, 0x117380u);
    ctx->pc = 0x11737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117378u;
    // 0x11737c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208768u, 0x117378u, 0x117380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117380u;
label_117380:
    // 0x117380: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117384: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x117384u;
    {
        const bool branch_taken_0x117384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117384u;
        // 0x117388: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117384) {
            ctx->pc = 0x1173ECu;
            goto label_1173ec;
        }
    }
    ctx->pc = 0x11738Cu;
    // 0x11738c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11738Cu;
    {
        const bool branch_taken_0x11738c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11738Cu;
        // 0x117390: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11738c) {
            ctx->pc = 0x1173CCu;
            goto label_1173cc;
        }
    }
    ctx->pc = 0x117394u;
    // 0x117394: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x117394u;
    {
        const bool branch_taken_0x117394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117394) {
            ctx->pc = 0x117398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117394u;
            // 0x117398: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1173ACu;
            goto label_1173ac;
        }
    }
    ctx->pc = 0x11739Cu;
    // 0x11739c: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x11739Cu;
    {
        const bool branch_taken_0x11739c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x1173A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11739Cu;
        // 0x1173a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11739c) {
            ctx->pc = 0x1173BCu;
            goto label_1173bc;
        }
    }
    ctx->pc = 0x1173A4u;
    // 0x1173a4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1173A4u;
    {
        const bool branch_taken_0x1173a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173A4u;
        // 0x1173a8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173a4) {
            ctx->pc = 0x1174FCu;
            goto label_1174fc;
        }
    }
    ctx->pc = 0x1173ACu;
label_1173ac:
    // 0x1173ac: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1173ACu;
    {
        const bool branch_taken_0x1173ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1173B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173ACu;
        // 0x1173b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173ac) {
            ctx->pc = 0x1173DCu;
            goto label_1173dc;
        }
    }
    ctx->pc = 0x1173B4u;
    // 0x1173b4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1173B4u;
    {
        const bool branch_taken_0x1173b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173B4u;
        // 0x1173b8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173b4) {
            ctx->pc = 0x1174FCu;
            goto label_1174fc;
        }
    }
    ctx->pc = 0x1173BCu;
label_1173bc:
    // 0x1173bc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1173bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1173c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1173c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173c4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1173C4u;
    {
        const bool branch_taken_0x1173c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173C4u;
        // 0x1173c8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173c4) {
            ctx->pc = 0x1174B0u;
            goto label_1174b0;
        }
    }
    ctx->pc = 0x1173CCu;
label_1173cc:
    // 0x1173cc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1173ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1173d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1173d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173d4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1173D4u;
    {
        const bool branch_taken_0x1173d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173D4u;
        // 0x1173d8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173d4) {
            ctx->pc = 0x1174B0u;
            goto label_1174b0;
        }
    }
    ctx->pc = 0x1173DCu;
label_1173dc:
    // 0x1173dc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1173dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1173e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1173e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173e4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1173E4u;
    {
        const bool branch_taken_0x1173e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173E4u;
        // 0x1173e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173e4) {
            ctx->pc = 0x1174B0u;
            goto label_1174b0;
        }
    }
    ctx->pc = 0x1173ECu;
label_1173ec:
    // 0x1173ec: 0x1473001a  bne         $v1, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1173ECu;
    {
        const bool branch_taken_0x1173ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1173F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173ECu;
        // 0x1173f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173ec) {
            ctx->pc = 0x117458u;
            goto label_117458;
        }
    }
    ctx->pc = 0x1173F4u;
    // 0x1173f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1173f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1173f8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1173F8u;
    {
        const bool branch_taken_0x1173f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1173FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173F8u;
        // 0x1173fc: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173f8) {
            ctx->pc = 0x117438u;
            goto label_117438;
        }
    }
    ctx->pc = 0x117400u;
    // 0x117400: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x117400u;
    {
        const bool branch_taken_0x117400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117400) {
            ctx->pc = 0x117404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117400u;
            // 0x117404: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117418u;
            goto label_117418;
        }
    }
    ctx->pc = 0x117408u;
    // 0x117408: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x117408u;
    {
        const bool branch_taken_0x117408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x11740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117408u;
        // 0x11740c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117408) {
            ctx->pc = 0x117428u;
            goto label_117428;
        }
    }
    ctx->pc = 0x117410u;
    // 0x117410: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x117410u;
    {
        const bool branch_taken_0x117410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117410u;
        // 0x117414: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117410) {
            ctx->pc = 0x1174FCu;
            goto label_1174fc;
        }
    }
    ctx->pc = 0x117418u;
label_117418:
    // 0x117418: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x117418u;
    {
        const bool branch_taken_0x117418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117418u;
        // 0x11741c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117418) {
            ctx->pc = 0x117448u;
            goto label_117448;
        }
    }
    ctx->pc = 0x117420u;
    // 0x117420: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x117420u;
    {
        const bool branch_taken_0x117420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117420u;
        // 0x117424: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117420) {
            ctx->pc = 0x1174FCu;
            goto label_1174fc;
        }
    }
    ctx->pc = 0x117428u;
label_117428:
    // 0x117428: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11742c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11742cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117430: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x117430u;
    {
        const bool branch_taken_0x117430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117430u;
        // 0x117434: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117430) {
            ctx->pc = 0x1174B0u;
            goto label_1174b0;
        }
    }
    ctx->pc = 0x117438u;
label_117438:
    // 0x117438: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11743c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117440: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x117440u;
    {
        const bool branch_taken_0x117440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117440u;
        // 0x117444: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117440) {
            ctx->pc = 0x1174B0u;
            goto label_1174b0;
        }
    }
    ctx->pc = 0x117448u;
label_117448:
    // 0x117448: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11744c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11744cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117450: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x117450u;
    {
        const bool branch_taken_0x117450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117450u;
        // 0x117454: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117450) {
            ctx->pc = 0x1174B0u;
            goto label_1174b0;
        }
    }
    ctx->pc = 0x117458u;
label_117458:
    // 0x117458: 0x54620027  bnel        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x117458u;
    {
        const bool branch_taken_0x117458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x117458) {
            ctx->pc = 0x11745Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117458u;
            // 0x11745c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1174F8u;
            goto label_1174f8;
        }
    }
    ctx->pc = 0x117460u;
    // 0x117460: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x117460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117464: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x117464u;
    {
        const bool branch_taken_0x117464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117464u;
        // 0x117468: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117464) {
            ctx->pc = 0x1174A4u;
            goto label_1174a4;
        }
    }
    ctx->pc = 0x11746Cu;
    // 0x11746c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11746Cu;
    {
        const bool branch_taken_0x11746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11746c) {
            ctx->pc = 0x117470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11746Cu;
            // 0x117470: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117484u;
            goto label_117484;
        }
    }
    ctx->pc = 0x117474u;
    // 0x117474: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x117474u;
    {
        const bool branch_taken_0x117474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x117478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117474u;
        // 0x117478: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117474) {
            ctx->pc = 0x117494u;
            goto label_117494;
        }
    }
    ctx->pc = 0x11747Cu;
    // 0x11747c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11747Cu;
    {
        const bool branch_taken_0x11747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11747Cu;
        // 0x117480: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11747c) {
            ctx->pc = 0x1174FCu;
            goto label_1174fc;
        }
    }
    ctx->pc = 0x117484u;
label_117484:
    // 0x117484: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x117484u;
    {
        const bool branch_taken_0x117484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117484u;
        // 0x117488: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117484) {
            ctx->pc = 0x1174D0u;
            goto label_1174d0;
        }
    }
    ctx->pc = 0x11748Cu;
    // 0x11748c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x11748Cu;
    {
        const bool branch_taken_0x11748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11748Cu;
        // 0x117490: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11748c) {
            ctx->pc = 0x1174FCu;
            goto label_1174fc;
        }
    }
    ctx->pc = 0x117494u;
label_117494:
    // 0x117494: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11749c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11749Cu;
    {
        const bool branch_taken_0x11749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11749Cu;
        // 0x1174a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11749c) {
            ctx->pc = 0x1174B0u;
            goto label_1174b0;
        }
    }
    ctx->pc = 0x1174A4u;
label_1174a4:
    // 0x1174a4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1174a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1174a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1174a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174ac: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1174acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1174b0:
    // 0x1174b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1174b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1174b4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1174b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1174b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1174b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1174bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1174bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1174c0: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x1174C0u;
    SET_GPR_U32(ctx, 31, 0x1174C8u);
    ctx->pc = 0x1174C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174C0u;
    // 0x1174c4: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x1174C0u, 0x1174C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174C8u;
label_1174c8:
    // 0x1174c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1174C8u;
    {
        const bool branch_taken_0x1174c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174C8u;
        // 0x1174cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174c8) {
            ctx->pc = 0x1174F8u;
            goto label_1174f8;
        }
    }
    ctx->pc = 0x1174D0u;
label_1174d0:
    // 0x1174d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1174d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1174d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1174d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174d8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1174d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1174dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1174dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1174e0: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1174e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1174e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1174e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1174e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1174e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1174ec: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x1174ECu;
    SET_GPR_U32(ctx, 31, 0x1174F4u);
    ctx->pc = 0x1174F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174ECu;
    // 0x1174f0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x1174ECu, 0x1174F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174F4u;
label_1174f4:
    // 0x1174f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1174f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1174f8:
    // 0x1174f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1174f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1174fc:
    // 0x1174fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1174fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x117500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x117504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117508: 0x3e00008  jr          $ra
    ctx->pc = 0x117508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117508u;
        // 0x11750c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117510u;
}
