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

// Function: sub_00146330
// Address: 0x146330 - 0x1463e8
void sub_00146330_0x146330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146330_0x146330");
#endif

    switch (ctx->pc) {
        case 0x146348u: goto label_146348;
        case 0x14636cu: goto label_14636c;
        case 0x14637cu: goto label_14637c;
        case 0x1463a4u: goto label_1463a4;
        case 0x1463c0u: goto label_1463c0;
        case 0x1463d0u: goto label_1463d0;
        default: break;
    }

    ctx->pc = 0x146330u;

    // 0x146330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146338: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x146338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14633c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14633cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146340: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x146340u;
    SET_GPR_U32(ctx, 31, 0x146348u);
    ctx->pc = 0x146344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146340u;
    // 0x146344: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x146340u, 0x146348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146348u;
label_146348:
    // 0x146348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14634c: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x14634Cu;
    {
        const bool branch_taken_0x14634c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x146350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14634Cu;
        // 0x146350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14634c) {
            ctx->pc = 0x1463D4u;
            goto label_1463d4;
        }
    }
    ctx->pc = 0x146354u;
    // 0x146354: 0x8e020570  lw          $v0, 0x570($s0)
    ctx->pc = 0x146354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
    // 0x146358: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x146358u;
    {
        const bool branch_taken_0x146358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146358u;
        // 0x14635c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146358) {
            ctx->pc = 0x1463D4u;
            goto label_1463d4;
        }
    }
    ctx->pc = 0x146360u;
    // 0x146360: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x146360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x146364: 0xc051b7a  jal         func_146DE8
    ctx->pc = 0x146364u;
    SET_GPR_U32(ctx, 31, 0x14636Cu);
    ctx->pc = 0x146368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146364u;
    // 0x146368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DE8u, 0x146364u, 0x14636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14636Cu;
label_14636c:
    // 0x14636c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14636Cu;
    {
        const bool branch_taken_0x14636c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14636Cu;
        // 0x146370: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14636c) {
            ctx->pc = 0x146384u;
            goto label_146384;
        }
    }
    ctx->pc = 0x146374u;
    // 0x146374: 0xc051cdc  jal         func_147370
    ctx->pc = 0x146374u;
    SET_GPR_U32(ctx, 31, 0x14637Cu);
    ctx->pc = 0x146378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146374u;
    // 0x146378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147370u, 0x146374u, 0x14637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14637Cu;
label_14637c:
    // 0x14637c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14637Cu;
    {
        const bool branch_taken_0x14637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14637Cu;
        // 0x146380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14637c) {
            ctx->pc = 0x1463D4u;
            goto label_1463d4;
        }
    }
    ctx->pc = 0x146384u;
label_146384:
    // 0x146384: 0x8c430790  lw          $v1, 0x790($v0)
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
    // 0x146388: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146388u;
    {
        const bool branch_taken_0x146388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146388u;
        // 0x14638c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146388) {
            ctx->pc = 0x1463ACu;
            goto label_1463ac;
        }
    }
    ctx->pc = 0x146390u;
    // 0x146390: 0x8c430794  lw          $v1, 0x794($v0)
    ctx->pc = 0x146390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1940)));
    // 0x146394: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x146394u;
    {
        const bool branch_taken_0x146394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146394) {
            ctx->pc = 0x1463C8u;
            goto label_1463c8;
        }
    }
    ctx->pc = 0x14639Cu;
    // 0x14639c: 0xc051d24  jal         func_147490
    ctx->pc = 0x14639Cu;
    SET_GPR_U32(ctx, 31, 0x1463A4u);
    ctx->pc = 0x1463A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14639Cu;
    // 0x1463a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147490u, 0x14639Cu, 0x1463A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1463A4u;
label_1463a4:
    // 0x1463a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1463A4u;
    {
        const bool branch_taken_0x1463a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1463A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463A4u;
        // 0x1463a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463a4) {
            ctx->pc = 0x1463D4u;
            goto label_1463d4;
        }
    }
    ctx->pc = 0x1463ACu;
label_1463ac:
    // 0x1463ac: 0x8c430794  lw          $v1, 0x794($v0)
    ctx->pc = 0x1463acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1940)));
    // 0x1463b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1463B0u;
    {
        const bool branch_taken_0x1463b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1463b0) {
            ctx->pc = 0x1463C8u;
            goto label_1463c8;
        }
    }
    ctx->pc = 0x1463B8u;
    // 0x1463b8: 0xc051d6c  jal         func_1475B0
    ctx->pc = 0x1463B8u;
    SET_GPR_U32(ctx, 31, 0x1463C0u);
    ctx->pc = 0x1463BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1463B8u;
    // 0x1463bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1475B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1475B0u, 0x1463B8u, 0x1463C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1463C0u;
label_1463c0:
    // 0x1463c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1463C0u;
    {
        const bool branch_taken_0x1463c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1463C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463C0u;
        // 0x1463c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463c0) {
            ctx->pc = 0x1463D4u;
            goto label_1463d4;
        }
    }
    ctx->pc = 0x1463C8u;
label_1463c8:
    // 0x1463c8: 0xc051dbe  jal         func_1476F8
    ctx->pc = 0x1463C8u;
    SET_GPR_U32(ctx, 31, 0x1463D0u);
    ctx->pc = 0x1463CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1463C8u;
    // 0x1463cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476F8u, 0x1463C8u, 0x1463D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1463D0u;
label_1463d0:
    // 0x1463d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1463d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1463d4:
    // 0x1463d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1463d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1463d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1463d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1463dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1463DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1463E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463DCu;
        // 0x1463e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1463DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1463E4u;
    // 0x1463e4: 0x0  nop
    ctx->pc = 0x1463e4u;
    // NOP
    ctx->pc = 0x1463e8u;
}
