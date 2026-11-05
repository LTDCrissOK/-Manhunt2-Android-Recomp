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

// Function: sub_00100168
// Address: 0x100168 - 0x1001b8
void sub_00100168_0x100168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100168_0x100168");
#endif

    switch (ctx->pc) {
        case 0x100190u: goto label_100190;
        case 0x1001a4u: goto label_1001a4;
        default: break;
    }

    ctx->pc = 0x100168u;

    // 0x100168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10016c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100170: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10017c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100180: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100180u;
    {
        const bool branch_taken_0x100180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100180u;
        // 0x100184: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100180) {
            ctx->pc = 0x100190u;
            goto label_100190;
        }
    }
    ctx->pc = 0x100188u;
    // 0x100188: 0xc040088  jal         func_100220
    ctx->pc = 0x100188u;
    SET_GPR_U32(ctx, 31, 0x100190u);
    ctx->pc = 0x100220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100220u, 0x100188u, 0x100190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100190u;
label_100190:
    // 0x100190: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x100190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x100194: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x100194u;
    {
        const bool branch_taken_0x100194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100194) {
            ctx->pc = 0x100198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100194u;
            // 0x100198: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1001A8u;
            goto label_1001a8;
        }
    }
    ctx->pc = 0x10019Cu;
    // 0x10019c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x10019Cu;
    SET_GPR_U32(ctx, 31, 0x1001A4u);
    ctx->pc = 0x1001A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10019Cu;
    // 0x1001a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x10019Cu, 0x1001A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001A4u;
label_1001a4:
    // 0x1001a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1001a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1001a8:
    // 0x1001a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1001a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1001ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1001acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1001b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1001B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1001B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1001B0u;
        // 0x1001b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1001B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1001B8u;
}
