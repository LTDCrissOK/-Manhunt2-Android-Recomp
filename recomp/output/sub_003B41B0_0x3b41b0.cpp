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

// Function: sub_003B41B0
// Address: 0x3b41b0 - 0x3b4218
void sub_003B41B0_0x3b41b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B41B0_0x3b41b0");
#endif

    switch (ctx->pc) {
        case 0x3b41d0u: goto label_3b41d0;
        case 0x3b41ecu: goto label_3b41ec;
        default: break;
    }

    ctx->pc = 0x3b41b0u;

    // 0x3b41b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3b41b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3b41b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b41b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b41b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3b41b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b41bc: 0x24a505f8  addiu       $a1, $a1, 0x5F8
    ctx->pc = 0x3b41bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
    // 0x3b41c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b41c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b41c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b41c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3b41c8: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3B41C8u;
    SET_GPR_U32(ctx, 31, 0x3B41D0u);
    ctx->pc = 0x3B41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B41C8u;
    // 0x3b41cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3B41C8u, 0x3B41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B41D0u;
label_3b41d0:
    // 0x3b41d0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3b41d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3b41d4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3b41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3b41d8: 0x24a50600  addiu       $a1, $a1, 0x600
    ctx->pc = 0x3b41d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1536));
    // 0x3b41dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B41DCu;
    {
        const bool branch_taken_0x3b41dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41DCu;
        // 0x3b41e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b41dc) {
            ctx->pc = 0x3B4200u;
            goto label_3b4200;
        }
    }
    ctx->pc = 0x3B41E4u;
    // 0x3b41e4: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3B41E4u;
    SET_GPR_U32(ctx, 31, 0x3B41ECu);
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3B41E4u, 0x3B41ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B41ECu;
label_3b41ec:
    // 0x3b41ec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B41ECu;
    {
        const bool branch_taken_0x3b41ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b41ec) {
            ctx->pc = 0x3B41F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B41ECu;
            // 0x3b41f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4204u;
            goto label_3b4204;
        }
    }
    ctx->pc = 0x3B41F4u;
    // 0x3b41f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B41F4u;
    {
        const bool branch_taken_0x3b41f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41F4u;
        // 0x3b41f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b41f4) {
            ctx->pc = 0x3B4204u;
            goto label_3b4204;
        }
    }
    ctx->pc = 0x3B41FCu;
    // 0x3b41fc: 0x0  nop
    ctx->pc = 0x3b41fcu;
    // NOP
label_3b4200:
    // 0x3b4200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4204:
    // 0x3b4204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b4204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4208: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b4208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b420c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B420Cu;
        // 0x3b4210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4214u;
    // 0x3b4214: 0x0  nop
    ctx->pc = 0x3b4214u;
    // NOP
    ctx->pc = 0x3b4218u;
}
