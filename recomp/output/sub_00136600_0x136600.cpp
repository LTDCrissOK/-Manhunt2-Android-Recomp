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

// Function: sub_00136600
// Address: 0x136600 - 0x136688
void sub_00136600_0x136600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136600_0x136600");
#endif

    switch (ctx->pc) {
        case 0x136640u: goto label_136640;
        case 0x136650u: goto label_136650;
        case 0x13665cu: goto label_13665c;
        default: break;
    }

    ctx->pc = 0x136600u;

    // 0x136600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136604: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x136604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x136608: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13660c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136610: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x136610u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x136614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136618: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13661c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136620: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x136620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x136624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136628: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x136628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13662c: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x13662cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x136630: 0x2472b530  addiu       $s2, $v1, -0x4AD0
    ctx->pc = 0x136630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948144));
    // 0x136634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136638: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x136638u;
    SET_GPR_U32(ctx, 31, 0x136640u);
    ctx->pc = 0x13663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136638u;
    // 0x13663c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x136638u, 0x136640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136640u;
label_136640:
    // 0x136640: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136640u;
    {
        const bool branch_taken_0x136640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136640u;
        // 0x136644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136640) {
            ctx->pc = 0x136664u;
            goto label_136664;
        }
    }
    ctx->pc = 0x136648u;
    // 0x136648: 0xc04b2c0  jal         func_12CB00
    ctx->pc = 0x136648u;
    SET_GPR_U32(ctx, 31, 0x136650u);
    ctx->pc = 0x13664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136648u;
    // 0x13664c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB00u, 0x136648u, 0x136650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136650u;
label_136650:
    // 0x136650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136654: 0xc04d974  jal         func_1365D0
    ctx->pc = 0x136654u;
    SET_GPR_U32(ctx, 31, 0x13665Cu);
    ctx->pc = 0x136658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136654u;
    // 0x136658: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365D0u, 0x136654u, 0x13665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13665Cu;
label_13665c:
    // 0x13665c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13665Cu;
    {
        const bool branch_taken_0x13665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13665Cu;
        // 0x136660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13665c) {
            ctx->pc = 0x136668u;
            goto label_136668;
        }
    }
    ctx->pc = 0x136664u;
label_136664:
    // 0x136664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136668:
    // 0x136668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13666c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13666cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136674: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13667c: 0x3e00008  jr          $ra
    ctx->pc = 0x13667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13667Cu;
        // 0x136680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13667Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136684u;
    // 0x136684: 0x0  nop
    ctx->pc = 0x136684u;
    // NOP
    ctx->pc = 0x136688u;
}
