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

// Function: sub_001AB5A8
// Address: 0x1ab5a8 - 0x1ab620
void sub_001AB5A8_0x1ab5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB5A8_0x1ab5a8");
#endif

    switch (ctx->pc) {
        case 0x1ab5e4u: goto label_1ab5e4;
        case 0x1ab610u: goto label_1ab610;
        default: break;
    }

    ctx->pc = 0x1ab5a8u;

    // 0x1ab5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab5ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ab5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab5b4: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x1ab5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1ab5b8: 0x8ca20158  lw          $v0, 0x158($a1)
    ctx->pc = 0x1ab5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x1ab5bc: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AB5BCu;
    {
        const bool branch_taken_0x1ab5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab5bc) {
            ctx->pc = 0x1AB5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB5BCu;
            // 0x1ab5c0: 0x8ca201e4  lw          $v0, 0x1E4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB5ECu;
            goto label_1ab5ec;
        }
    }
    ctx->pc = 0x1AB5C4u;
    // 0x1ab5c4: 0x8ca300a8  lw          $v1, 0xA8($a1)
    ctx->pc = 0x1ab5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x1ab5c8: 0x24020577  addiu       $v0, $zero, 0x577
    ctx->pc = 0x1ab5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
    // 0x1ab5cc: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB5CCu;
    {
        const bool branch_taken_0x1ab5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab5cc) {
            ctx->pc = 0x1AB5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB5CCu;
            // 0x1ab5d0: 0x8ca201e4  lw          $v0, 0x1E4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB5ECu;
            goto label_1ab5ec;
        }
    }
    ctx->pc = 0x1AB5D4u;
    // 0x1ab5d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab5d8: 0xaca20160  sw          $v0, 0x160($a1)
    ctx->pc = 0x1ab5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 352), GPR_U32(ctx, 2));
    // 0x1ab5dc: 0xc069b96  jal         func_1A6E58
    ctx->pc = 0x1AB5DCu;
    SET_GPR_U32(ctx, 31, 0x1AB5E4u);
    ctx->pc = 0x1AB5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5DCu;
    // 0x1ab5e0: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E58u, 0x1AB5DCu, 0x1AB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5E4u;
label_1ab5e4:
    // 0x1ab5e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AB5E4u;
    {
        const bool branch_taken_0x1ab5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5E4u;
        // 0x1ab5e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5e4) {
            ctx->pc = 0x1AB614u;
            goto label_1ab614;
        }
    }
    ctx->pc = 0x1AB5ECu;
label_1ab5ec:
    // 0x1ab5ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB5ECu;
    {
        const bool branch_taken_0x1ab5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5ECu;
        // 0x1ab5f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5ec) {
            ctx->pc = 0x1AB604u;
            goto label_1ab604;
        }
    }
    ctx->pc = 0x1AB5F4u;
    // 0x1ab5f4: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x1ab5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x1ab5f8: 0xaca001e8  sw          $zero, 0x1E8($a1)
    ctx->pc = 0x1ab5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 488), GPR_U32(ctx, 0));
    // 0x1ab5fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB5FCu;
    {
        const bool branch_taken_0x1ab5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5FCu;
        // 0x1ab600: 0xaca201e4  sw          $v0, 0x1E4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5fc) {
            ctx->pc = 0x1AB610u;
            goto label_1ab610;
        }
    }
    ctx->pc = 0x1AB604u;
label_1ab604:
    // 0x1ab604: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab608: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB608u;
    SET_GPR_U32(ctx, 31, 0x1AB610u);
    ctx->pc = 0x1AB60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB608u;
    // 0x1ab60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB608u, 0x1AB610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB610u;
label_1ab610:
    // 0x1ab610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab614:
    // 0x1ab614: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB614u;
        // 0x1ab618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB61Cu;
    // 0x1ab61c: 0x0  nop
    ctx->pc = 0x1ab61cu;
    // NOP
    ctx->pc = 0x1ab620u;
}
