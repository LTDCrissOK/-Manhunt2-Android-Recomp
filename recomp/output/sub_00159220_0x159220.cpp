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

// Function: sub_00159220
// Address: 0x159220 - 0x159298
void sub_00159220_0x159220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159220_0x159220");
#endif

    switch (ctx->pc) {
        case 0x15926cu: goto label_15926c;
        case 0x15927cu: goto label_15927c;
        case 0x15928cu: goto label_15928c;
        default: break;
    }

    ctx->pc = 0x159220u;

    // 0x159220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159224: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x159224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x159228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15922c: 0x8c8302e0  lw          $v1, 0x2E0($a0)
    ctx->pc = 0x15922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x159230: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x159230u;
    {
        const bool branch_taken_0x159230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159230u;
        // 0x159234: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159230) {
            ctx->pc = 0x159284u;
            goto label_159284;
        }
    }
    ctx->pc = 0x159238u;
    // 0x159238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159238u;
    {
        const bool branch_taken_0x159238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159238u;
        // 0x15923c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159238) {
            ctx->pc = 0x159250u;
            goto label_159250;
        }
    }
    ctx->pc = 0x159240u;
    // 0x159240: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x159240u;
    {
        const bool branch_taken_0x159240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159240u;
        // 0x159244: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159240) {
            ctx->pc = 0x159264u;
            goto label_159264;
        }
    }
    ctx->pc = 0x159248u;
    // 0x159248: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159248u;
    {
        const bool branch_taken_0x159248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159248) {
            ctx->pc = 0x159290u;
            goto label_159290;
        }
    }
    ctx->pc = 0x159250u;
label_159250:
    // 0x159250: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x159250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x159254: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159254u;
    {
        const bool branch_taken_0x159254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159254u;
        // 0x159258: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159254) {
            ctx->pc = 0x159274u;
            goto label_159274;
        }
    }
    ctx->pc = 0x15925Cu;
    // 0x15925c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15925Cu;
    {
        const bool branch_taken_0x15925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15925c) {
            ctx->pc = 0x159290u;
            goto label_159290;
        }
    }
    ctx->pc = 0x159264u;
label_159264:
    // 0x159264: 0xc05652c  jal         func_1594B0
    ctx->pc = 0x159264u;
    SET_GPR_U32(ctx, 31, 0x15926Cu);
    ctx->pc = 0x1594B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1594B0u, 0x159264u, 0x15926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15926Cu;
label_15926c:
    // 0x15926c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15926Cu;
    {
        const bool branch_taken_0x15926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15926Cu;
        // 0x159270: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15926c) {
            ctx->pc = 0x159290u;
            goto label_159290;
        }
    }
    ctx->pc = 0x159274u;
label_159274:
    // 0x159274: 0xc056540  jal         func_159500
    ctx->pc = 0x159274u;
    SET_GPR_U32(ctx, 31, 0x15927Cu);
    ctx->pc = 0x159500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159500u, 0x159274u, 0x15927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15927Cu;
label_15927c:
    // 0x15927c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15927Cu;
    {
        const bool branch_taken_0x15927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15927Cu;
        // 0x159280: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15927c) {
            ctx->pc = 0x159290u;
            goto label_159290;
        }
    }
    ctx->pc = 0x159284u;
label_159284:
    // 0x159284: 0xc056554  jal         func_159550
    ctx->pc = 0x159284u;
    SET_GPR_U32(ctx, 31, 0x15928Cu);
    ctx->pc = 0x159550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159550u, 0x159284u, 0x15928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15928Cu;
label_15928c:
    // 0x15928c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15928cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159290:
    // 0x159290: 0x3e00008  jr          $ra
    ctx->pc = 0x159290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159290u;
        // 0x159294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159298u;
}
