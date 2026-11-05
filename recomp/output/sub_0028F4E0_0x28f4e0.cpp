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

// Function: sub_0028F4E0
// Address: 0x28f4e0 - 0x28f528
void sub_0028F4E0_0x28f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F4E0_0x28f4e0");
#endif

    switch (ctx->pc) {
        case 0x28f4f4u: goto label_28f4f4;
        default: break;
    }

    ctx->pc = 0x28f4e0u;

    // 0x28f4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f4e4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x28f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x28f4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f4ec: 0xc0494ea  jal         func_1253A8
    ctx->pc = 0x28F4ECu;
    SET_GPR_U32(ctx, 31, 0x28F4F4u);
    ctx->pc = 0x28F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F4ECu;
    // 0x28f4f0: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253A8u, 0x28F4ECu, 0x28F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4F4u;
label_28f4f4:
    // 0x28f4f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28F4F4u;
    {
        const bool branch_taken_0x28f4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4F4u;
        // 0x28f4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4f4) {
            ctx->pc = 0x28F51Cu;
            goto label_28f51c;
        }
    }
    ctx->pc = 0x28F4FCu;
    // 0x28f4fc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28f500: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x28f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x28f504: 0x8c430268  lw          $v1, 0x268($v0)
    ctx->pc = 0x28f504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66CD90u));
    // 0x28f508: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F508u;
    {
        const bool branch_taken_0x28f508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f508) {
            ctx->pc = 0x28F50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F508u;
            // 0x28f50c: 0xac400268  sw          $zero, 0x268($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 616), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F518u;
            goto label_28f518;
        }
    }
    ctx->pc = 0x28F510u;
    // 0x28f510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F510u;
    {
        const bool branch_taken_0x28f510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F510u;
        // 0x28f514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f510) {
            ctx->pc = 0x28F51Cu;
            goto label_28f51c;
        }
    }
    ctx->pc = 0x28F518u;
label_28f518:
    // 0x28f518: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28f51c:
    // 0x28f51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f520: 0x3e00008  jr          $ra
    ctx->pc = 0x28F520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F520u;
        // 0x28f524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F528u;
}
