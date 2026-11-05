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

// Function: sub_0017F348
// Address: 0x17f348 - 0x17f388
void sub_0017F348_0x17f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F348_0x17f348");
#endif

    switch (ctx->pc) {
        case 0x17f364u: goto label_17f364;
        case 0x17f374u: goto label_17f374;
        default: break;
    }

    ctx->pc = 0x17f348u;

    // 0x17f348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f354: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17f358: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17f358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17f35c: 0xc041e14  jal         func_107850
    ctx->pc = 0x17F35Cu;
    SET_GPR_U32(ctx, 31, 0x17F364u);
    ctx->pc = 0x17F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F35Cu;
    // 0x17f360: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107850u, 0x17F35Cu, 0x17F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F364u;
label_17f364:
    // 0x17f364: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x17f364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f36c: 0xc05ef9a  jal         func_17BE68
    ctx->pc = 0x17F36Cu;
    SET_GPR_U32(ctx, 31, 0x17F374u);
    ctx->pc = 0x17F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F36Cu;
    // 0x17f370: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BE68u, 0x17F36Cu, 0x17F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F374u;
label_17f374:
    // 0x17f374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17f378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f37c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F37Cu;
        // 0x17f380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F384u;
    // 0x17f384: 0x0  nop
    ctx->pc = 0x17f384u;
    // NOP
    ctx->pc = 0x17f388u;
}
