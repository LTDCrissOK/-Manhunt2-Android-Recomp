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

// Function: sub_00168600
// Address: 0x168600 - 0x168680
void sub_00168600_0x168600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168600_0x168600");
#endif

    switch (ctx->pc) {
        case 0x168634u: goto label_168634;
        case 0x168640u: goto label_168640;
        case 0x168654u: goto label_168654;
        case 0x168664u: goto label_168664;
        default: break;
    }

    ctx->pc = 0x168600u;

    // 0x168600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168604: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x168604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x168608: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x168608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16860c: 0x248402e0  addiu       $a0, $a0, 0x2E0
    ctx->pc = 0x16860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x168610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168614: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x168614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x168618: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x168618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16861c: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x16861cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x168620: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x168620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168624: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x168624u;
    {
        const bool branch_taken_0x168624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168624u;
        // 0x168628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168624) {
            ctx->pc = 0x168668u;
            goto label_168668;
        }
    }
    ctx->pc = 0x16862Cu;
    // 0x16862c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16862Cu;
    SET_GPR_U32(ctx, 31, 0x168634u);
    ctx->pc = 0x168630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16862Cu;
    // 0x168630: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16862Cu, 0x168634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168634u;
label_168634:
    // 0x168634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168638: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x168638u;
    SET_GPR_U32(ctx, 31, 0x168640u);
    ctx->pc = 0x16863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168638u;
    // 0x16863c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x168638u, 0x168640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168640u;
label_168640:
    // 0x168640: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168640u;
    {
        const bool branch_taken_0x168640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168640u;
        // 0x168644: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168640) {
            ctx->pc = 0x16865Cu;
            goto label_16865c;
        }
    }
    ctx->pc = 0x168648u;
    // 0x168648: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x168648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x16864c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16864Cu;
    SET_GPR_U32(ctx, 31, 0x168654u);
    ctx->pc = 0x168650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16864Cu;
    // 0x168650: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16864Cu, 0x168654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168654u;
label_168654:
    // 0x168654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168654u;
    {
        const bool branch_taken_0x168654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168654u;
        // 0x168658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168654) {
            ctx->pc = 0x168668u;
            goto label_168668;
        }
    }
    ctx->pc = 0x16865Cu;
label_16865c:
    // 0x16865c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16865Cu;
    SET_GPR_U32(ctx, 31, 0x168664u);
    ctx->pc = 0x168660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16865Cu;
    // 0x168660: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16865Cu, 0x168664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168664u;
label_168664:
    // 0x168664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x168664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168668:
    // 0x168668: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x168668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16866c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16866cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168670: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168674: 0x3e00008  jr          $ra
    ctx->pc = 0x168674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168674u;
        // 0x168678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16867Cu;
    // 0x16867c: 0x0  nop
    ctx->pc = 0x16867cu;
    // NOP
    ctx->pc = 0x168680u;
}
