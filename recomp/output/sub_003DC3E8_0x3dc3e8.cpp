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

// Function: sub_003DC3E8
// Address: 0x3dc3e8 - 0x3dc420
void sub_003DC3E8_0x3dc3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC3E8_0x3dc3e8");
#endif

    switch (ctx->pc) {
        case 0x3dc40cu: goto label_3dc40c;
        default: break;
    }

    ctx->pc = 0x3dc3e8u;

    // 0x3dc3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc3f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3dc3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3dc3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc3f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3dc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3dc3fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC3FCu;
    {
        const bool branch_taken_0x3dc3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3FCu;
        // 0x3dc400: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc3fc) {
            ctx->pc = 0x3DC410u;
            goto label_3dc410;
        }
    }
    ctx->pc = 0x3DC404u;
    // 0x3dc404: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3DC404u;
    SET_GPR_U32(ctx, 31, 0x3DC40Cu);
    ctx->pc = 0x3DC408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC404u;
    // 0x3dc408: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3DC404u, 0x3DC40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC40Cu;
label_3dc40c:
    // 0x3dc40c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3dc40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3dc410:
    // 0x3dc410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc414: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3dc414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc418: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC418u;
        // 0x3dc41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC420u;
}
