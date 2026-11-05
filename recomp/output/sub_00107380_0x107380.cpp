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

// Function: sub_00107380
// Address: 0x107380 - 0x1073c0
void sub_00107380_0x107380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107380_0x107380");
#endif

    switch (ctx->pc) {
        case 0x1073a4u: goto label_1073a4;
        case 0x1073acu: goto label_1073ac;
        default: break;
    }

    ctx->pc = 0x107380u;

    // 0x107380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107388: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x107388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10738c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10738cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107390: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x107390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107394: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x107394u;
    {
        const bool branch_taken_0x107394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107394) {
            ctx->pc = 0x107398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107394u;
            // 0x107398: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1073B4u;
            goto label_1073b4;
        }
    }
    ctx->pc = 0x10739Cu;
    // 0x10739c: 0xc041cf4  jal         func_1073D0
    ctx->pc = 0x10739Cu;
    SET_GPR_U32(ctx, 31, 0x1073A4u);
    ctx->pc = 0x1073D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073D0u, 0x10739Cu, 0x1073A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073A4u;
label_1073a4:
    // 0x1073a4: 0xc0ab434  jal         func_2AD0D0
    ctx->pc = 0x1073A4u;
    SET_GPR_U32(ctx, 31, 0x1073ACu);
    ctx->pc = 0x1073A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073A4u;
    // 0x1073a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD0D0u, 0x1073A4u, 0x1073ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073ACu;
label_1073ac:
    // 0x1073ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1073acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1073b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1073b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1073b4:
    // 0x1073b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1073b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1073b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1073B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1073BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073B8u;
        // 0x1073bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1073C0u;
}
