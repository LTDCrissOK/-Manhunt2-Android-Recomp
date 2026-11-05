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

// Function: sub_002CA458
// Address: 0x2ca458 - 0x2ca498
void sub_002CA458_0x2ca458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA458_0x2ca458");
#endif

    switch (ctx->pc) {
        case 0x2ca474u: goto label_2ca474;
        case 0x2ca47cu: goto label_2ca47c;
        case 0x2ca484u: goto label_2ca484;
        default: break;
    }

    ctx->pc = 0x2ca458u;

    // 0x2ca458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca45c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ca45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ca460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca464: 0x8c45b450  lw          $a1, -0x4BB0($v0)
    ctx->pc = 0x2ca464u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FB450u));
    // 0x2ca468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ca468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ca46c: 0xc0b29e4  jal         func_2CA790
    ctx->pc = 0x2CA46Cu;
    SET_GPR_U32(ctx, 31, 0x2CA474u);
    ctx->pc = 0x2CA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA46Cu;
    // 0x2ca470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA790u, 0x2CA46Cu, 0x2CA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA474u;
label_2ca474:
    // 0x2ca474: 0xc0b28e8  jal         func_2CA3A0
    ctx->pc = 0x2CA474u;
    SET_GPR_U32(ctx, 31, 0x2CA47Cu);
    ctx->pc = 0x2CA478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA474u;
    // 0x2ca478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA3A0u, 0x2CA474u, 0x2CA47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA47Cu;
label_2ca47c:
    // 0x2ca47c: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x2CA47Cu;
    SET_GPR_U32(ctx, 31, 0x2CA484u);
    ctx->pc = 0x2CA480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA47Cu;
    // 0x2ca480: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x2CA47Cu, 0x2CA484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA484u;
label_2ca484:
    // 0x2ca484: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ca484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ca488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca48c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ca48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca490: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA490u;
        // 0x2ca494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA498u;
}
