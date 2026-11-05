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

// Function: sub_002D4148
// Address: 0x2d4148 - 0x2d4198
void sub_002D4148_0x2d4148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4148_0x2d4148");
#endif

    switch (ctx->pc) {
        case 0x2d4164u: goto label_2d4164;
        case 0x2d4174u: goto label_2d4174;
        case 0x2d4184u: goto label_2d4184;
        default: break;
    }

    ctx->pc = 0x2d4148u;

    // 0x2d4148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d414c: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2d414cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x2d4150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4154: 0x24a53510  addiu       $a1, $a1, 0x3510
    ctx->pc = 0x2d4154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13584));
    // 0x2d4158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d4158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d415c: 0xc0b5026  jal         func_2D4098
    ctx->pc = 0x2D415Cu;
    SET_GPR_U32(ctx, 31, 0x2D4164u);
    ctx->pc = 0x2D4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D415Cu;
    // 0x2d4160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4098u, 0x2D415Cu, 0x2D4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4164u;
label_2d4164:
    // 0x2d4164: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2d4164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x2d4168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d416c: 0xc0b5026  jal         func_2D4098
    ctx->pc = 0x2D416Cu;
    SET_GPR_U32(ctx, 31, 0x2D4174u);
    ctx->pc = 0x2D4170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D416Cu;
    // 0x2d4170: 0x24a53500  addiu       $a1, $a1, 0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4098u, 0x2D416Cu, 0x2D4174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4174u;
label_2d4174:
    // 0x2d4174: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2d4174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x2d4178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d417c: 0xc0b5026  jal         func_2D4098
    ctx->pc = 0x2D417Cu;
    SET_GPR_U32(ctx, 31, 0x2D4184u);
    ctx->pc = 0x2D4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D417Cu;
    // 0x2d4180: 0x24a53530  addiu       $a1, $a1, 0x3530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4098u, 0x2D417Cu, 0x2D4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4184u;
label_2d4184:
    // 0x2d4184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4188: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d4188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d418c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D418Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D418Cu;
        // 0x2d4190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D418Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4194u;
    // 0x2d4194: 0x0  nop
    ctx->pc = 0x2d4194u;
    // NOP
    ctx->pc = 0x2d4198u;
}
