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

// Function: sub_003DC0A0
// Address: 0x3dc0a0 - 0x3dc0e8
void sub_003DC0A0_0x3dc0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC0A0_0x3dc0a0");
#endif

    switch (ctx->pc) {
        case 0x3dc0bcu: goto label_3dc0bc;
        case 0x3dc0d4u: goto label_3dc0d4;
        default: break;
    }

    ctx->pc = 0x3dc0a0u;

    // 0x3dc0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dc0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dc0a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc0a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc0ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dc0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dc0b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dc0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dc0b4: 0xc0f7008  jal         func_3DC020
    ctx->pc = 0x3DC0B4u;
    SET_GPR_U32(ctx, 31, 0x3DC0BCu);
    ctx->pc = 0x3DC0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC0B4u;
    // 0x3dc0b8: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC020u, 0x3DC0B4u, 0x3DC0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC0BCu;
label_3dc0bc:
    // 0x3dc0bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dc0c0: 0xa6110004  sh          $s1, 0x4($s0)
    ctx->pc = 0x3dc0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3dc0c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3dc0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3dc0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc0cc: 0xc0f701a  jal         func_3DC068
    ctx->pc = 0x3DC0CCu;
    SET_GPR_U32(ctx, 31, 0x3DC0D4u);
    ctx->pc = 0x3DC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC0CCu;
    // 0x3dc0d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC068u, 0x3DC0CCu, 0x3DC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC0D4u;
label_3dc0d4:
    // 0x3dc0d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc0d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dc0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc0dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dc0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0E0u;
        // 0x3dc0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC0E8u;
}
