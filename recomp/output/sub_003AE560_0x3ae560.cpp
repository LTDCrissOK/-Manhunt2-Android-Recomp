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

// Function: sub_003AE560
// Address: 0x3ae560 - 0x3ae670
void sub_003AE560_0x3ae560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE560_0x3ae560");
#endif

    switch (ctx->pc) {
        case 0x3ae570u: goto label_3ae570;
        case 0x3ae5a8u: goto label_3ae5a8;
        case 0x3ae5c0u: goto label_3ae5c0;
        case 0x3ae604u: goto label_3ae604;
        case 0x3ae618u: goto label_3ae618;
        case 0x3ae658u: goto label_3ae658;
        default: break;
    }

    ctx->pc = 0x3ae560u;

    // 0x3ae560: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE560u;
        // 0x3ae564: 0x8c820090  lw          $v0, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE568u;
    // 0x3ae568: 0xac8500fc  sw          $a1, 0xFC($a0)
    ctx->pc = 0x3ae568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 5));
    // 0x3ae56c: 0x0  nop
    ctx->pc = 0x3ae56cu;
    // NOP
label_3ae570:
    // 0x3ae570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae574: 0x24820048  addiu       $v0, $a0, 0x48
    ctx->pc = 0x3ae574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x3ae578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ae578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ae57c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3ae57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ae580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ae584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ae584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae588: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x3ae588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3ae58c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x3ae58cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ae590: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3ae590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3ae594: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3ae594u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3ae598: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3ae598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ae59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5a0: 0xc0ec418  jal         func_3B1060
    ctx->pc = 0x3AE5A0u;
    SET_GPR_U32(ctx, 31, 0x3AE5A8u);
    ctx->pc = 0x3AE5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE5A0u;
    // 0x3ae5a4: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1060u, 0x3AE5A0u, 0x3AE5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE5A8u;
label_3ae5a8:
    // 0x3ae5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ae5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae5b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae5b4: 0x80ec43c  j           func_3B10F0
    ctx->pc = 0x3AE5B4u;
    ctx->pc = 0x3AE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE5B4u;
    // 0x3ae5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B10F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B10F0u, 0x3AE5B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE5BCu;
    // 0x3ae5bc: 0x0  nop
    ctx->pc = 0x3ae5bcu;
    // NOP
label_3ae5c0:
    // 0x3ae5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae5c4: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x3ae5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x3ae5c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ae5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ae5cc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3ae5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3ae5d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ae5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ae5d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3ae5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3ae5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3ae5dc: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x3ae5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3ae5e0: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x3ae5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3ae5e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ae5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ae5e8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x3ae5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ae5ec: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3ae5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3ae5f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3ae5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ae5f4: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3ae5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3ae5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5fc: 0xc0ec424  jal         func_3B1090
    ctx->pc = 0x3AE5FCu;
    SET_GPR_U32(ctx, 31, 0x3AE604u);
    ctx->pc = 0x3AE600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE5FCu;
    // 0x3ae600: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1090u, 0x3AE5FCu, 0x3AE604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE604u;
label_3ae604:
    // 0x3ae604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ae608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae610: 0x80ec43c  j           func_3B10F0
    ctx->pc = 0x3AE610u;
    ctx->pc = 0x3AE614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE610u;
    // 0x3ae614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B10F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B10F0u, 0x3AE610u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE618u;
label_3ae618:
    // 0x3ae618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae61c: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x3ae61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x3ae620: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ae620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ae624: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3ae624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ae628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ae62c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3ae62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3ae630: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x3ae630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3ae634: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x3ae634u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3ae638: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ae638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ae63c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x3ae63cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ae640: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3ae640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3ae644: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3ae644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ae648: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3ae648u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3ae64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae650: 0xc0ec430  jal         func_3B10C0
    ctx->pc = 0x3AE650u;
    SET_GPR_U32(ctx, 31, 0x3AE658u);
    ctx->pc = 0x3AE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE650u;
    // 0x3ae654: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B10C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B10C0u, 0x3AE650u, 0x3AE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE658u;
label_3ae658:
    // 0x3ae658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae65c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ae65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae664: 0x80ec43c  j           func_3B10F0
    ctx->pc = 0x3AE664u;
    ctx->pc = 0x3AE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE664u;
    // 0x3ae668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B10F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B10F0u, 0x3AE664u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE66Cu;
    // 0x3ae66c: 0x0  nop
    ctx->pc = 0x3ae66cu;
    // NOP
    ctx->pc = 0x3ae670u;
}
