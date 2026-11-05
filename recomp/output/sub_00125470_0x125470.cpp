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

// Function: sub_00125470
// Address: 0x125470 - 0x1254b0
void sub_00125470_0x125470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125470_0x125470");
#endif

    switch (ctx->pc) {
        case 0x12548cu: goto label_12548c;
        case 0x125494u: goto label_125494;
        default: break;
    }

    ctx->pc = 0x125470u;

    // 0x125470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12547c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125484: 0xc0a4758  jal         func_291D60
    ctx->pc = 0x125484u;
    SET_GPR_U32(ctx, 31, 0x12548Cu);
    ctx->pc = 0x125488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125484u;
    // 0x125488: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x125484u, 0x12548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12548Cu;
label_12548c:
    // 0x12548c: 0xc0bf25e  jal         func_2FC978
    ctx->pc = 0x12548Cu;
    SET_GPR_U32(ctx, 31, 0x125494u);
    ctx->pc = 0x125490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12548Cu;
    // 0x125490: 0xa0500061  sb          $s0, 0x61($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC978u, 0x12548Cu, 0x125494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125494u;
label_125494:
    // 0x125494: 0xae300438  sw          $s0, 0x438($s1)
    ctx->pc = 0x125494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1080), GPR_U32(ctx, 16));
    // 0x125498: 0xae200444  sw          $zero, 0x444($s1)
    ctx->pc = 0x125498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1092), GPR_U32(ctx, 0));
    // 0x12549c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12549cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1254a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1254a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1254a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1254a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1254a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1254A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1254ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254A8u;
        // 0x1254ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1254A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1254B0u;
}
