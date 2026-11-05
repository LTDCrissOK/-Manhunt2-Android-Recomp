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

// Function: sub_0026DE28
// Address: 0x26de28 - 0x26de70
void sub_0026DE28_0x26de28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DE28_0x26de28");
#endif

    switch (ctx->pc) {
        case 0x26de54u: goto label_26de54;
        case 0x26de64u: goto label_26de64;
        default: break;
    }

    ctx->pc = 0x26de28u;

    // 0x26de28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26de2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26de30: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x26de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x26de34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DE34u;
    {
        const bool branch_taken_0x26de34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE34u;
        // 0x26de38: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de34) {
            ctx->pc = 0x26DE5Cu;
            goto label_26de5c;
        }
    }
    ctx->pc = 0x26DE3Cu;
    // 0x26de3c: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x26de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x26de40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26de40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26de44: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26DE44u;
    {
        const bool branch_taken_0x26de44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE44u;
        // 0x26de48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de44) {
            ctx->pc = 0x26DE68u;
            goto label_26de68;
        }
    }
    ctx->pc = 0x26DE4Cu;
    // 0x26de4c: 0xc083ba6  jal         func_20EE98
    ctx->pc = 0x26DE4Cu;
    SET_GPR_U32(ctx, 31, 0x26DE54u);
    ctx->pc = 0x20EE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE98u, 0x26DE4Cu, 0x26DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE54u;
label_26de54:
    // 0x26de54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26DE54u;
    {
        const bool branch_taken_0x26de54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE54u;
        // 0x26de58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de54) {
            ctx->pc = 0x26DE68u;
            goto label_26de68;
        }
    }
    ctx->pc = 0x26DE5Cu;
label_26de5c:
    // 0x26de5c: 0xc083ba6  jal         func_20EE98
    ctx->pc = 0x26DE5Cu;
    SET_GPR_U32(ctx, 31, 0x26DE64u);
    ctx->pc = 0x20EE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE98u, 0x26DE5Cu, 0x26DE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE64u;
label_26de64:
    // 0x26de64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26de64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26de68:
    // 0x26de68: 0x3e00008  jr          $ra
    ctx->pc = 0x26DE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE68u;
        // 0x26de6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DE70u;
}
