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

// Function: sub_0013F380
// Address: 0x13f380 - 0x13f3c8
void sub_0013F380_0x13f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F380_0x13f380");
#endif

    switch (ctx->pc) {
        case 0x13f3b8u: goto label_13f3b8;
        default: break;
    }

    ctx->pc = 0x13f380u;

    // 0x13f380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f384: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13f384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13f388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f38c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f390: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x13f390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x13f394: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13f398: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x13f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13f39c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13f3a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f3a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f3a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f3ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f3b0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x13F3B0u;
    SET_GPR_U32(ctx, 31, 0x13F3B8u);
    ctx->pc = 0x13F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3B0u;
    // 0x13f3b4: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x13F3B0u, 0x13F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3B8u;
label_13f3b8:
    // 0x13f3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13F3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3BCu;
        // 0x13f3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F3C4u;
    // 0x13f3c4: 0x0  nop
    ctx->pc = 0x13f3c4u;
    // NOP
    ctx->pc = 0x13f3c8u;
}
