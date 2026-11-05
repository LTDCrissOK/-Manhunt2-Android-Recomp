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

// Function: sub_0016B690
// Address: 0x16b690 - 0x16b6f0
void sub_0016B690_0x16b690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B690_0x16b690");
#endif

    switch (ctx->pc) {
        case 0x16b6c0u: goto label_16b6c0;
        case 0x16b6d4u: goto label_16b6d4;
        case 0x16b6dcu: goto label_16b6dc;
        default: break;
    }

    ctx->pc = 0x16b690u;

    // 0x16b690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b698: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b69c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6a0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x16b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x16b6a4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16B6A4u;
    {
        const bool branch_taken_0x16b6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b6a4) {
            ctx->pc = 0x16B6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B6A4u;
            // 0x16b6a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B6E0u;
            goto label_16b6e0;
        }
    }
    ctx->pc = 0x16B6ACu;
    // 0x16b6ac: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x16b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x16b6b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B6B0u;
    {
        const bool branch_taken_0x16b6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b6b0) {
            ctx->pc = 0x16B6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B6B0u;
            // 0x16b6b4: 0x8e040144  lw          $a0, 0x144($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B6C4u;
            goto label_16b6c4;
        }
    }
    ctx->pc = 0x16B6B8u;
    // 0x16b6b8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x16B6B8u;
    SET_GPR_U32(ctx, 31, 0x16B6C0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x16B6B8u, 0x16B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B6C0u;
label_16b6c0:
    // 0x16b6c0: 0x8e040144  lw          $a0, 0x144($s0)
    ctx->pc = 0x16b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_16b6c4:
    // 0x16b6c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B6C4u;
    {
        const bool branch_taken_0x16b6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b6c4) {
            ctx->pc = 0x16B6D4u;
            goto label_16b6d4;
        }
    }
    ctx->pc = 0x16B6CCu;
    // 0x16b6cc: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x16B6CCu;
    SET_GPR_U32(ctx, 31, 0x16B6D4u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x16B6CCu, 0x16B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B6D4u;
label_16b6d4:
    // 0x16b6d4: 0xc05ad86  jal         func_16B618
    ctx->pc = 0x16B6D4u;
    SET_GPR_U32(ctx, 31, 0x16B6DCu);
    ctx->pc = 0x16B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B6D4u;
    // 0x16b6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B618u, 0x16B6D4u, 0x16B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B6DCu;
label_16b6dc:
    // 0x16b6dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b6e0:
    // 0x16b6e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6E4u;
        // 0x16b6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B6ECu;
    // 0x16b6ec: 0x0  nop
    ctx->pc = 0x16b6ecu;
    // NOP
    ctx->pc = 0x16b6f0u;
}
