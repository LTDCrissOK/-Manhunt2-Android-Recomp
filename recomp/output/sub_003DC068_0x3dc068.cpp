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

// Function: sub_003DC068
// Address: 0x3dc068 - 0x3dc0a0
void sub_003DC068_0x3dc068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC068_0x3dc068");
#endif

    switch (ctx->pc) {
        case 0x3dc08cu: goto label_3dc08c;
        default: break;
    }

    ctx->pc = 0x3dc068u;

    // 0x3dc068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc070: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3dc070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3dc074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc078: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3dc078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dc07c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC07Cu;
    {
        const bool branch_taken_0x3dc07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC07Cu;
        // 0x3dc080: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc07c) {
            ctx->pc = 0x3DC090u;
            goto label_3dc090;
        }
    }
    ctx->pc = 0x3DC084u;
    // 0x3dc084: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3DC084u;
    SET_GPR_U32(ctx, 31, 0x3DC08Cu);
    ctx->pc = 0x3DC088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC084u;
    // 0x3dc088: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3DC084u, 0x3DC08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC08Cu;
label_3dc08c:
    // 0x3dc08c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3dc08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3dc090:
    // 0x3dc090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3dc094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc098: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC098u;
        // 0x3dc09c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC0A0u;
}
