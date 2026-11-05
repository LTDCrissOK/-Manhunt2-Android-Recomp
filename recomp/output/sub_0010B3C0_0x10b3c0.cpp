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

// Function: sub_0010B3C0
// Address: 0x10b3c0 - 0x10b410
void sub_0010B3C0_0x10b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B3C0_0x10b3c0");
#endif

    switch (ctx->pc) {
        case 0x10b3dcu: goto label_10b3dc;
        default: break;
    }

    ctx->pc = 0x10b3c0u;

    // 0x10b3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b3c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b3cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b3d4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B3D4u;
    SET_GPR_U32(ctx, 31, 0x10B3DCu);
    ctx->pc = 0x10B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3D4u;
    // 0x10b3d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B3D4u, 0x10B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3DCu;
label_10b3dc:
    // 0x10b3dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b3dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3e0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b3e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B3E4u;
    {
        const bool branch_taken_0x10b3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3E4u;
        // 0x10b3e8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3e4) {
            ctx->pc = 0x10B3FCu;
            goto label_10b3fc;
        }
    }
    ctx->pc = 0x10B3ECu;
    // 0x10b3ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b3f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b3f4: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b3f8: 0xac9100f0  sw          $s1, 0xF0($a0)
    ctx->pc = 0x10b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 17));
label_10b3fc:
    // 0x10b3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b408: 0x3e00008  jr          $ra
    ctx->pc = 0x10B408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B408u;
        // 0x10b40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B410u;
}
