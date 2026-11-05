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

// Function: sub_001485B8
// Address: 0x1485b8 - 0x148630
void sub_001485B8_0x1485b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001485B8_0x1485b8");
#endif

    switch (ctx->pc) {
        case 0x1485ccu: goto label_1485cc;
        case 0x1485dcu: goto label_1485dc;
        case 0x1485ecu: goto label_1485ec;
        case 0x1485fcu: goto label_1485fc;
        case 0x14860cu: goto label_14860c;
        case 0x14861cu: goto label_14861c;
        default: break;
    }

    ctx->pc = 0x1485b8u;

    // 0x1485b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1485b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1485bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1485bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1485c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1485c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1485c4: 0xc05218c  jal         func_148630
    ctx->pc = 0x1485C4u;
    SET_GPR_U32(ctx, 31, 0x1485CCu);
    ctx->pc = 0x1485C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1485C4u;
    // 0x1485c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148630u, 0x1485C4u, 0x1485CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485CCu;
label_1485cc:
    // 0x1485cc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1485CCu;
    {
        const bool branch_taken_0x1485cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1485cc) {
            ctx->pc = 0x1485D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1485CCu;
            // 0x1485d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x1485D4u;
    // 0x1485d4: 0xc04e1da  jal         func_138768
    ctx->pc = 0x1485D4u;
    SET_GPR_U32(ctx, 31, 0x1485DCu);
    ctx->pc = 0x1485D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1485D4u;
    // 0x1485d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138768u, 0x1485D4u, 0x1485DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485DCu;
label_1485dc:
    // 0x1485dc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1485DCu;
    {
        const bool branch_taken_0x1485dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1485dc) {
            ctx->pc = 0x1485E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1485DCu;
            // 0x1485e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x1485E4u;
    // 0x1485e4: 0xc052194  jal         func_148650
    ctx->pc = 0x1485E4u;
    SET_GPR_U32(ctx, 31, 0x1485ECu);
    ctx->pc = 0x1485E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1485E4u;
    // 0x1485e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148650u, 0x1485E4u, 0x1485ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485ECu;
label_1485ec:
    // 0x1485ec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1485ECu;
    {
        const bool branch_taken_0x1485ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1485ec) {
            ctx->pc = 0x1485F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1485ECu;
            // 0x1485f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x1485F4u;
    // 0x1485f4: 0xc0521b2  jal         func_1486C8
    ctx->pc = 0x1485F4u;
    SET_GPR_U32(ctx, 31, 0x1485FCu);
    ctx->pc = 0x1485F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1485F4u;
    // 0x1485f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1486C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1486C8u, 0x1485F4u, 0x1485FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485FCu;
label_1485fc:
    // 0x1485fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1485FCu;
    {
        const bool branch_taken_0x1485fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1485fc) {
            ctx->pc = 0x148600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1485FCu;
            // 0x148600: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x148604u;
    // 0x148604: 0xc052206  jal         func_148818
    ctx->pc = 0x148604u;
    SET_GPR_U32(ctx, 31, 0x14860Cu);
    ctx->pc = 0x148608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148604u;
    // 0x148608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148818u, 0x148604u, 0x14860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14860Cu;
label_14860c:
    // 0x14860c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14860Cu;
    {
        const bool branch_taken_0x14860c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14860c) {
            ctx->pc = 0x148610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14860Cu;
            // 0x148610: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x148614u;
    // 0x148614: 0xc05221c  jal         func_148870
    ctx->pc = 0x148614u;
    SET_GPR_U32(ctx, 31, 0x14861Cu);
    ctx->pc = 0x148618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148614u;
    // 0x148618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148870u, 0x148614u, 0x14861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14861Cu;
label_14861c:
    // 0x14861c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14861cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148620:
    // 0x148620: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x148620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148624: 0x3e00008  jr          $ra
    ctx->pc = 0x148624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148624u;
        // 0x148628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14862Cu;
    // 0x14862c: 0x0  nop
    ctx->pc = 0x14862cu;
    // NOP
    ctx->pc = 0x148630u;
}
