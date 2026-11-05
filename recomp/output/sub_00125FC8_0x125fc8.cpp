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

// Function: sub_00125FC8
// Address: 0x125fc8 - 0x126020
void sub_00125FC8_0x125fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125FC8_0x125fc8");
#endif

    switch (ctx->pc) {
        case 0x125fdcu: goto label_125fdc;
        case 0x126008u: goto label_126008;
        default: break;
    }

    ctx->pc = 0x125fc8u;

    // 0x125fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x125fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125fd4: 0xc049f1a  jal         func_127C68
    ctx->pc = 0x125FD4u;
    SET_GPR_U32(ctx, 31, 0x125FDCu);
    ctx->pc = 0x125FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FD4u;
    // 0x125fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C68u, 0x125FD4u, 0x125FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FDCu;
label_125fdc:
    // 0x125fdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fe0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x125fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125fe4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x125FE4u;
    {
        const bool branch_taken_0x125fe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x125FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FE4u;
        // 0x125fe8: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fe4) {
            ctx->pc = 0x126008u;
            goto label_126008;
        }
    }
    ctx->pc = 0x125FECu;
    // 0x125fec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x125ff0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x125ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x125ff4: 0x8c430878  lw          $v1, 0x878($v0)
    ctx->pc = 0x125ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2168)));
    // 0x125ff8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125FF8u;
    {
        const bool branch_taken_0x125ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x125FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FF8u;
        // 0x125ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ff8) {
            ctx->pc = 0x12600Cu;
            goto label_12600c;
        }
    }
    ctx->pc = 0x126000u;
    // 0x126000: 0xc049f32  jal         func_127CC8
    ctx->pc = 0x126000u;
    SET_GPR_U32(ctx, 31, 0x126008u);
    ctx->pc = 0x126004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126000u;
    // 0x126004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CC8u, 0x126000u, 0x126008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126008u;
label_126008:
    // 0x126008: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12600c:
    // 0x12600c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12600cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x126010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126014: 0x3e00008  jr          $ra
    ctx->pc = 0x126014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126014u;
        // 0x126018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12601Cu;
    // 0x12601c: 0x0  nop
    ctx->pc = 0x12601cu;
    // NOP
    ctx->pc = 0x126020u;
}
