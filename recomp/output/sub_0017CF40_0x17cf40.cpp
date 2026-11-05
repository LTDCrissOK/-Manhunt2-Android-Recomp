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

// Function: sub_0017CF40
// Address: 0x17cf40 - 0x17cf98
void sub_0017CF40_0x17cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CF40_0x17cf40");
#endif

    switch (ctx->pc) {
        case 0x17cf70u: goto label_17cf70;
        case 0x17cf80u: goto label_17cf80;
        case 0x17cf88u: goto label_17cf88;
        default: break;
    }

    ctx->pc = 0x17cf40u;

    // 0x17cf40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cf44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17cf48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cf4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17cf50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf54: 0x8c44a9d4  lw          $a0, -0x562C($v0)
    ctx->pc = 0x17cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x17cf58: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x17cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x17cf5c: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x17CF5Cu;
    {
        const bool branch_taken_0x17cf5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17cf5c) {
            ctx->pc = 0x17CF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CF5Cu;
            // 0x17cf60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CF8Cu;
            goto label_17cf8c;
        }
    }
    ctx->pc = 0x17CF64u;
    // 0x17cf64: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x17cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x17cf68: 0xc05f1a6  jal         func_17C698
    ctx->pc = 0x17CF68u;
    SET_GPR_U32(ctx, 31, 0x17CF70u);
    ctx->pc = 0x17CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF68u;
    // 0x17cf6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C698u, 0x17CF68u, 0x17CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF70u;
label_17cf70:
    // 0x17cf70: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x17cf74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf78: 0xc05f178  jal         func_17C5E0
    ctx->pc = 0x17CF78u;
    SET_GPR_U32(ctx, 31, 0x17CF80u);
    ctx->pc = 0x17CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF78u;
    // 0x17cf7c: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C5E0u, 0x17CF78u, 0x17CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF80u;
label_17cf80:
    // 0x17cf80: 0xc05f3ca  jal         func_17CF28
    ctx->pc = 0x17CF80u;
    SET_GPR_U32(ctx, 31, 0x17CF88u);
    ctx->pc = 0x17CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF80u;
    // 0x17cf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF28u, 0x17CF80u, 0x17CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF88u;
label_17cf88:
    // 0x17cf88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cf88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17cf8c:
    // 0x17cf8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17cf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cf90: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF90u;
        // 0x17cf94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CF98u;
}
