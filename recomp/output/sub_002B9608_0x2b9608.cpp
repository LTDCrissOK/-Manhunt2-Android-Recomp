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

// Function: sub_002B9608
// Address: 0x2b9608 - 0x2b9668
void sub_002B9608_0x2b9608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9608_0x2b9608");
#endif

    switch (ctx->pc) {
        case 0x2b962cu: goto label_2b962c;
        case 0x2b963cu: goto label_2b963c;
        case 0x2b9658u: goto label_2b9658;
        default: break;
    }

    ctx->pc = 0x2b9608u;

    // 0x2b9608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b960c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b960cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b9610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9614: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x2b9614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x2b9618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b961c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B961Cu;
    {
        const bool branch_taken_0x2b961c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B961Cu;
        // 0x2b9620: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b961c) {
            ctx->pc = 0x2B9658u;
            goto label_2b9658;
        }
    }
    ctx->pc = 0x2B9624u;
    // 0x2b9624: 0xc0ae59a  jal         func_2B9668
    ctx->pc = 0x2B9624u;
    SET_GPR_U32(ctx, 31, 0x2B962Cu);
    ctx->pc = 0x2B9668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9668u, 0x2B9624u, 0x2B962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B962Cu;
label_2b962c:
    // 0x2b962c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B962Cu;
    {
        const bool branch_taken_0x2b962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b962c) {
            ctx->pc = 0x2B9630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B962Cu;
            // 0x2b9630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B965Cu;
            goto label_2b965c;
        }
    }
    ctx->pc = 0x2B9634u;
    // 0x2b9634: 0xc0ee37a  jal         func_3B8DE8
    ctx->pc = 0x2B9634u;
    SET_GPR_U32(ctx, 31, 0x2B963Cu);
    ctx->pc = 0x3B8DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8DE8u, 0x2B9634u, 0x2B963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B963Cu;
label_2b963c:
    // 0x2b963c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9640: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9640u;
    {
        const bool branch_taken_0x2b9640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9640) {
            ctx->pc = 0x2B9644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9640u;
            // 0x2b9644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B965Cu;
            goto label_2b965c;
        }
    }
    ctx->pc = 0x2B9648u;
    // 0x2b9648: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b9648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b964c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b964cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9650: 0xc0ae458  jal         func_2B9160
    ctx->pc = 0x2B9650u;
    SET_GPR_U32(ctx, 31, 0x2B9658u);
    ctx->pc = 0x2B9654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9650u;
    // 0x2b9654: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9160u, 0x2B9650u, 0x2B9658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9658u;
label_2b9658:
    // 0x2b9658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b965c:
    // 0x2b965c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b965cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9660: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9660u;
        // 0x2b9664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9668u;
}
