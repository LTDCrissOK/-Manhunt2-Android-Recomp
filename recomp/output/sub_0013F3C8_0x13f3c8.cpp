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

// Function: sub_0013F3C8
// Address: 0x13f3c8 - 0x13f410
void sub_0013F3C8_0x13f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F3C8_0x13f3c8");
#endif

    switch (ctx->pc) {
        case 0x13f400u: goto label_13f400;
        default: break;
    }

    ctx->pc = 0x13f3c8u;

    // 0x13f3c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f3cc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13f3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13f3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f3d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13f3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f3d8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x13f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x13f3dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13f3e0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x13f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13f3e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13f3e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f3ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13f3f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f3f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f3f8: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x13F3F8u;
    SET_GPR_U32(ctx, 31, 0x13F400u);
    ctx->pc = 0x13F3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3F8u;
    // 0x13f3fc: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x13F3F8u, 0x13F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F400u;
label_13f400:
    // 0x13f400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f404: 0x3e00008  jr          $ra
    ctx->pc = 0x13F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F404u;
        // 0x13f408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F40Cu;
    // 0x13f40c: 0x0  nop
    ctx->pc = 0x13f40cu;
    // NOP
    ctx->pc = 0x13f410u;
}
