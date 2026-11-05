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

// Function: sub_003AF820
// Address: 0x3af820 - 0x3af888
void sub_003AF820_0x3af820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF820_0x3af820");
#endif

    switch (ctx->pc) {
        case 0x3af840u: goto label_3af840;
        case 0x3af85cu: goto label_3af85c;
        default: break;
    }

    ctx->pc = 0x3af820u;

    // 0x3af820: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3af820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3af824: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3af824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3af828: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3af828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3af82c: 0x24a5fdd8  addiu       $a1, $a1, -0x228
    ctx->pc = 0x3af82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966744));
    // 0x3af830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3af830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3af834: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3af834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3af838: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3AF838u;
    SET_GPR_U32(ctx, 31, 0x3AF840u);
    ctx->pc = 0x3AF83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF838u;
    // 0x3af83c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3AF838u, 0x3AF840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF840u;
label_3af840:
    // 0x3af840: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3af840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3af844: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3af844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3af848: 0x24a5fde0  addiu       $a1, $a1, -0x220
    ctx->pc = 0x3af848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966752));
    // 0x3af84c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF84Cu;
    {
        const bool branch_taken_0x3af84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF84Cu;
        // 0x3af850: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af84c) {
            ctx->pc = 0x3AF870u;
            goto label_3af870;
        }
    }
    ctx->pc = 0x3AF854u;
    // 0x3af854: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3AF854u;
    SET_GPR_U32(ctx, 31, 0x3AF85Cu);
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3AF854u, 0x3AF85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF85Cu;
label_3af85c:
    // 0x3af85c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AF85Cu;
    {
        const bool branch_taken_0x3af85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af85c) {
            ctx->pc = 0x3AF860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF85Cu;
            // 0x3af860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF874u;
            goto label_3af874;
        }
    }
    ctx->pc = 0x3AF864u;
    // 0x3af864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF864u;
    {
        const bool branch_taken_0x3af864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF864u;
        // 0x3af868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af864) {
            ctx->pc = 0x3AF874u;
            goto label_3af874;
        }
    }
    ctx->pc = 0x3AF86Cu;
    // 0x3af86c: 0x0  nop
    ctx->pc = 0x3af86cu;
    // NOP
label_3af870:
    // 0x3af870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3af870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af874:
    // 0x3af874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3af874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af878: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3af878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3af87c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF87Cu;
        // 0x3af880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF884u;
    // 0x3af884: 0x0  nop
    ctx->pc = 0x3af884u;
    // NOP
    ctx->pc = 0x3af888u;
}
