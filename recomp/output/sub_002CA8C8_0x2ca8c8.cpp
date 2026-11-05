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

// Function: sub_002CA8C8
// Address: 0x2ca8c8 - 0x2ca928
void sub_002CA8C8_0x2ca8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA8C8_0x2ca8c8");
#endif

    switch (ctx->pc) {
        case 0x2ca8e8u: goto label_2ca8e8;
        default: break;
    }

    ctx->pc = 0x2ca8c8u;

    // 0x2ca8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca8cc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ca8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ca8d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ca8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ca8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ca8dc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ca8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2ca8e0: 0xc0b28aa  jal         func_2CA2A8
    ctx->pc = 0x2CA8E0u;
    SET_GPR_U32(ctx, 31, 0x2CA8E8u);
    ctx->pc = 0x2CA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8E0u;
    // 0x2ca8e4: 0xac62b464  sw          $v0, -0x4B9C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947940), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x2CA8E0u, 0x2CA8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8E8u;
label_2ca8e8:
    // 0x2ca8e8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2ca8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2ca8ec: 0x8c431868  lw          $v1, 0x1868($v0)
    ctx->pc = 0x2ca8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6248)));
    // 0x2ca8f0: 0x8c85a5dc  lw          $a1, -0x5A24($a0)
    ctx->pc = 0x2ca8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x57A5DCu));
    // 0x2ca8f4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ca8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ca8f8: 0x90c7b44c  lbu         $a3, -0x4BB4($a2)
    ctx->pc = 0x2ca8f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x3FB44Cu));
    // 0x2ca8fc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2ca8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2ca900: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ca900u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ca904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca908: 0xae03b458  sw          $v1, -0x4BA8($s0)
    ctx->pc = 0x2ca908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947928), GPR_U32(ctx, 3));
    // 0x2ca90c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca910: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ca910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca914: 0xa0878d50  sb          $a3, -0x72B0($a0)
    ctx->pc = 0x2ca914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294937936), (uint8_t)GPR_U32(ctx, 7));
    // 0x2ca918: 0xa0c2b44c  sb          $v0, -0x4BB4($a2)
    ctx->pc = 0x2ca918u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca91c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA91Cu;
        // 0x2ca920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA924u;
    // 0x2ca924: 0x0  nop
    ctx->pc = 0x2ca924u;
    // NOP
    ctx->pc = 0x2ca928u;
}
