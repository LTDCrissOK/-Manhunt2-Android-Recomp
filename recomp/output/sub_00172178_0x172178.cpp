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

// Function: sub_00172178
// Address: 0x172178 - 0x1721a8
void sub_00172178_0x172178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172178_0x172178");
#endif

    switch (ctx->pc) {
        case 0x17218cu: goto label_17218c;
        case 0x172194u: goto label_172194;
        default: break;
    }

    ctx->pc = 0x172178u;

    // 0x172178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17217c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x172180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x172184: 0xc04f820  jal         func_13E080
    ctx->pc = 0x172184u;
    SET_GPR_U32(ctx, 31, 0x17218Cu);
    ctx->pc = 0x172188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172184u;
    // 0x172188: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x172184u, 0x17218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17218Cu;
label_17218c:
    // 0x17218c: 0xc05cd68  jal         func_1735A0
    ctx->pc = 0x17218Cu;
    SET_GPR_U32(ctx, 31, 0x172194u);
    ctx->pc = 0x172190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17218Cu;
    // 0x172190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1735A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735A0u, 0x17218Cu, 0x172194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172194u;
label_172194:
    // 0x172194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172198: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x172198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17219c: 0x3e00008  jr          $ra
    ctx->pc = 0x17219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17219Cu;
        // 0x1721a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1721A4u;
    // 0x1721a4: 0x0  nop
    ctx->pc = 0x1721a4u;
    // NOP
    ctx->pc = 0x1721a8u;
}
