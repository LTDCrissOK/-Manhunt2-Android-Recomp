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

// Function: sub_0010B820
// Address: 0x10b820 - 0x10b888
void sub_0010B820_0x10b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B820_0x10b820");
#endif

    switch (ctx->pc) {
        case 0x10b83cu: goto label_10b83c;
        case 0x10b868u: goto label_10b868;
        default: break;
    }

    ctx->pc = 0x10b820u;

    // 0x10b820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b828: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b834: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B834u;
    SET_GPR_U32(ctx, 31, 0x10B83Cu);
    ctx->pc = 0x10B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B834u;
    // 0x10b838: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B834u, 0x10B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B83Cu;
label_10b83c:
    // 0x10b83c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b83cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b840: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b844: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B844u;
    {
        const bool branch_taken_0x10b844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B844u;
        // 0x10b848: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b844) {
            ctx->pc = 0x10B870u;
            goto label_10b870;
        }
    }
    ctx->pc = 0x10B84Cu;
    // 0x10b84c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b850: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b854: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b858: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B858u;
    {
        const bool branch_taken_0x10b858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B858u;
        // 0x10b85c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b858) {
            ctx->pc = 0x10B874u;
            goto label_10b874;
        }
    }
    ctx->pc = 0x10B860u;
    // 0x10b860: 0xc043e94  jal         func_10FA50
    ctx->pc = 0x10B860u;
    SET_GPR_U32(ctx, 31, 0x10B868u);
    ctx->pc = 0x10B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B860u;
    // 0x10b864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x10B860u, 0x10B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B868u;
label_10b868:
    // 0x10b868: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B868u;
    {
        const bool branch_taken_0x10b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B868u;
        // 0x10b86c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b868) {
            ctx->pc = 0x10B874u;
            goto label_10b874;
        }
    }
    ctx->pc = 0x10B870u;
label_10b870:
    // 0x10b870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b874:
    // 0x10b874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b87c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b880: 0x3e00008  jr          $ra
    ctx->pc = 0x10B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B880u;
        // 0x10b884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B888u;
}
