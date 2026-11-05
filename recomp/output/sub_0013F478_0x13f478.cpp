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

// Function: sub_0013F478
// Address: 0x13f478 - 0x13f4b8
void sub_0013F478_0x13f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F478_0x13f478");
#endif

    switch (ctx->pc) {
        case 0x13f490u: goto label_13f490;
        case 0x13f4a4u: goto label_13f4a4;
        default: break;
    }

    ctx->pc = 0x13f478u;

    // 0x13f478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f480: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13f480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13f484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f488: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x13F488u;
    SET_GPR_U32(ctx, 31, 0x13F490u);
    ctx->pc = 0x13F48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F488u;
    // 0x13f48c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x13F488u, 0x13F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F490u;
label_13f490:
    // 0x13f490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f494: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F494u;
    {
        const bool branch_taken_0x13f494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F494u;
        // 0x13f498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f494) {
            ctx->pc = 0x13F4A8u;
            goto label_13f4a8;
        }
    }
    ctx->pc = 0x13F49Cu;
    // 0x13f49c: 0xc050038  jal         func_1400E0
    ctx->pc = 0x13F49Cu;
    SET_GPR_U32(ctx, 31, 0x13F4A4u);
    ctx->pc = 0x13F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F49Cu;
    // 0x13f4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1400E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1400E0u, 0x13F49Cu, 0x13F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4A4u;
label_13f4a4:
    // 0x13f4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f4a8:
    // 0x13f4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f4ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13f4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4B0u;
        // 0x13f4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F4B8u;
}
