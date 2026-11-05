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

// Function: sub_00175758
// Address: 0x175758 - 0x175828
void sub_00175758_0x175758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175758_0x175758");
#endif

    switch (ctx->pc) {
        case 0x1757a0u: goto label_1757a0;
        case 0x1757a4u: goto label_1757a4;
        case 0x1757d0u: goto label_1757d0;
        case 0x1757e4u: goto label_1757e4;
        case 0x1757f4u: goto label_1757f4;
        default: break;
    }

    ctx->pc = 0x175758u;

    // 0x175758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17575c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x175764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175768: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17576c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x175770: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x175770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x175774: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x175774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x175778: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x175778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x17577c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17577Cu;
    {
        const bool branch_taken_0x17577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17577Cu;
        // 0x175780: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17577c) {
            ctx->pc = 0x17580Cu;
            goto label_17580c;
        }
    }
    ctx->pc = 0x175784u;
    // 0x175784: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x175784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x175788: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x175788u;
    {
        const bool branch_taken_0x175788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175788u;
        // 0x17578c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175788) {
            ctx->pc = 0x17580Cu;
            goto label_17580c;
        }
    }
    ctx->pc = 0x175790u;
    // 0x175790: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x175790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175794: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175794u;
    {
        const bool branch_taken_0x175794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175794u;
        // 0x175798: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175794) {
            ctx->pc = 0x1757A8u;
            goto label_1757a8;
        }
    }
    ctx->pc = 0x17579Cu;
    // 0x17579c: 0x0  nop
    ctx->pc = 0x17579cu;
    // NOP
label_1757a0:
    // 0x1757a0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1757a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1757a4:
    // 0x1757a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1757a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1757a8:
    // 0x1757a8: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x1757a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1757ac: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1757ACu;
    {
        const bool branch_taken_0x1757ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757ACu;
        // 0x1757b0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757ac) {
            ctx->pc = 0x175808u;
            goto label_175808;
        }
    }
    ctx->pc = 0x1757B4u;
    // 0x1757b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1757b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1757b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1757b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1757bc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1757bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1757c0: 0x1200fff7  beqz        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1757C0u;
    {
        const bool branch_taken_0x1757c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757C0u;
        // 0x1757c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757c0) {
            ctx->pc = 0x1757A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1757a0;
        }
    }
    ctx->pc = 0x1757C8u;
    // 0x1757c8: 0xc04f8e6  jal         func_13E398
    ctx->pc = 0x1757C8u;
    SET_GPR_U32(ctx, 31, 0x1757D0u);
    ctx->pc = 0x1757CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757C8u;
    // 0x1757cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x1757C8u, 0x1757D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757D0u;
label_1757d0:
    // 0x1757d0: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1757D0u;
    {
        const bool branch_taken_0x1757d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1757D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757D0u;
        // 0x1757d4: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757d0) {
            ctx->pc = 0x1757F8u;
            goto label_1757f8;
        }
    }
    ctx->pc = 0x1757D8u;
    // 0x1757d8: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1757d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1757dc: 0xc04ef9c  jal         func_13BE70
    ctx->pc = 0x1757DCu;
    SET_GPR_U32(ctx, 31, 0x1757E4u);
    ctx->pc = 0x1757E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757DCu;
    // 0x1757e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE70u, 0x1757DCu, 0x1757E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757E4u;
label_1757e4:
    // 0x1757e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1757e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1757e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757ec: 0xc04f8e0  jal         func_13E380
    ctx->pc = 0x1757ECu;
    SET_GPR_U32(ctx, 31, 0x1757F4u);
    ctx->pc = 0x1757F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757ECu;
    // 0x1757f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E380u, 0x1757ECu, 0x1757F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757F4u;
label_1757f4:
    // 0x1757f4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1757f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1757f8:
    // 0x1757f8: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x1757f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1757fc: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1757fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175800: 0x1663ffe8  bne         $s3, $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x175800u;
    {
        const bool branch_taken_0x175800 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x175804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175800u;
        // 0x175804: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175800) {
            ctx->pc = 0x1757A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1757a4;
        }
    }
    ctx->pc = 0x175808u;
label_175808:
    // 0x175808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17580c:
    // 0x17580c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17580cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175810: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175814: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x175814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175818: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x175818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17581c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17581cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x175820: 0x3e00008  jr          $ra
    ctx->pc = 0x175820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175820u;
        // 0x175824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175828u;
}
