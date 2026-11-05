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

// Function: sub_0012C3C0
// Address: 0x12c3c0 - 0x12c400
void sub_0012C3C0_0x12c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C3C0_0x12c3c0");
#endif

    switch (ctx->pc) {
        case 0x12c3dcu: goto label_12c3dc;
        default: break;
    }

    ctx->pc = 0x12c3c0u;

    // 0x12c3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c3c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c3cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12c3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c3d4: 0xc04b100  jal         func_12C400
    ctx->pc = 0x12C3D4u;
    SET_GPR_U32(ctx, 31, 0x12C3DCu);
    ctx->pc = 0x12C3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C3D4u;
    // 0x12c3d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C400u, 0x12C3D4u, 0x12C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3DCu;
label_12c3dc:
    // 0x12c3dc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x12c3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12c3e0: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x12c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12c3e4: 0xa2020085  sb          $v0, 0x85($s0)
    ctx->pc = 0x12c3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c3ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c3f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3F4u;
        // 0x12c3f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C3FCu;
    // 0x12c3fc: 0x0  nop
    ctx->pc = 0x12c3fcu;
    // NOP
    ctx->pc = 0x12c400u;
}
