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

// Function: sub_002D3150
// Address: 0x2d3150 - 0x2d31a0
void sub_002D3150_0x2d3150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3150_0x2d3150");
#endif

    switch (ctx->pc) {
        case 0x2d3178u: goto label_2d3178;
        case 0x2d3188u: goto label_2d3188;
        default: break;
    }

    ctx->pc = 0x2d3150u;

    // 0x2d3150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d3154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d315c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d3160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3164: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d3164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d3168: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3168u;
    {
        const bool branch_taken_0x2d3168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3168u;
        // 0x2d316c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3168) {
            ctx->pc = 0x2D318Cu;
            goto label_2d318c;
        }
    }
    ctx->pc = 0x2D3170u;
    // 0x2d3170: 0xc0e5022  jal         func_394088
    ctx->pc = 0x2D3170u;
    SET_GPR_U32(ctx, 31, 0x2D3178u);
    ctx->pc = 0x2D3174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3170u;
    // 0x2d3174: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394088u, 0x2D3170u, 0x2D3178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3178u;
label_2d3178:
    // 0x2d3178: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3178u;
    {
        const bool branch_taken_0x2d3178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3178u;
        // 0x2d317c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3178) {
            ctx->pc = 0x2D318Cu;
            goto label_2d318c;
        }
    }
    ctx->pc = 0x2D3180u;
    // 0x2d3180: 0xc0b4c68  jal         func_2D31A0
    ctx->pc = 0x2D3180u;
    SET_GPR_U32(ctx, 31, 0x2D3188u);
    ctx->pc = 0x2D3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3180u;
    // 0x2d3184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D31A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D31A0u, 0x2D3180u, 0x2D3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3188u;
label_2d3188:
    // 0x2d3188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d318c:
    // 0x2d318c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d318cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d3190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3194: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3194u;
        // 0x2d3198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D319Cu;
    // 0x2d319c: 0x0  nop
    ctx->pc = 0x2d319cu;
    // NOP
    ctx->pc = 0x2d31a0u;
}
