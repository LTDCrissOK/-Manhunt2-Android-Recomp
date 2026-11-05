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

// Function: sub_00174540
// Address: 0x174540 - 0x174598
void sub_00174540_0x174540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174540_0x174540");
#endif

    switch (ctx->pc) {
        case 0x174550u: goto label_174550;
        default: break;
    }

    ctx->pc = 0x174540u;

    // 0x174540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174548: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x174548u;
    SET_GPR_U32(ctx, 31, 0x174550u);
    ctx->pc = 0x17454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174548u;
    // 0x17454c: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x174548u, 0x174550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174550u;
label_174550:
    // 0x174550: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x174550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174554: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x174554u;
    {
        const bool branch_taken_0x174554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174554u;
        // 0x174558: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174554) {
            ctx->pc = 0x17458Cu;
            goto label_17458c;
        }
    }
    ctx->pc = 0x17455Cu;
    // 0x17455c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x174560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x174560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174564: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x174564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x174568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17456c: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x17456cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x174570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174570u;
    {
        const bool branch_taken_0x174570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174570u;
        // 0x174574: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174570) {
            ctx->pc = 0x174588u;
            goto label_174588;
        }
    }
    ctx->pc = 0x174578u;
    // 0x174578: 0x8c44010c  lw          $a0, 0x10C($v0)
    ctx->pc = 0x174578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x17457c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174580u;
    {
        const bool branch_taken_0x174580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174580u;
        // 0x174584: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174580) {
            ctx->pc = 0x17458Cu;
            goto label_17458c;
        }
    }
    ctx->pc = 0x174588u;
label_174588:
    // 0x174588: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17458c:
    // 0x17458c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17458cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174590: 0x3e00008  jr          $ra
    ctx->pc = 0x174590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174590u;
        // 0x174594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174598u;
}
