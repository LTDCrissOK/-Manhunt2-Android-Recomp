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

// Function: sub_0013E478
// Address: 0x13e478 - 0x13e4b0
void sub_0013E478_0x13e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E478_0x13e478");
#endif

    switch (ctx->pc) {
        case 0x13e490u: goto label_13e490;
        case 0x13e49cu: goto label_13e49c;
        default: break;
    }

    ctx->pc = 0x13e478u;

    // 0x13e478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e47c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13e480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e484: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13e488: 0xc041d26  jal         func_107498
    ctx->pc = 0x13E488u;
    SET_GPR_U32(ctx, 31, 0x13E490u);
    ctx->pc = 0x13E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E488u;
    // 0x13e48c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107498u, 0x13E488u, 0x13E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E490u;
label_13e490:
    // 0x13e490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e494: 0xc0455f2  jal         func_1157C8
    ctx->pc = 0x13E494u;
    SET_GPR_U32(ctx, 31, 0x13E49Cu);
    ctx->pc = 0x13E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E494u;
    // 0x13e498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1157C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157C8u, 0x13E494u, 0x13E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E49Cu;
label_13e49c:
    // 0x13e49c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e4a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13e4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e4a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4A8u;
        // 0x13e4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E4B0u;
}
