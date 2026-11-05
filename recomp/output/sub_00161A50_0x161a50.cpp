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

// Function: sub_00161A50
// Address: 0x161a50 - 0x161aa8
void sub_00161A50_0x161a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161A50_0x161a50");
#endif

    switch (ctx->pc) {
        case 0x161a90u: goto label_161a90;
        default: break;
    }

    ctx->pc = 0x161a50u;

    // 0x161a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161a54: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x161a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x161a58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x161a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x161a5c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x161a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x161a60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161a64: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x161a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x161a68: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x161a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x161a6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x161a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x161a70: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x161a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x161a74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x161a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161a78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161a7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161a80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161a84: 0x8c70020c  lw          $s0, 0x20C($v1)
    ctx->pc = 0x161a84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x161a88: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x161A88u;
    SET_GPR_U32(ctx, 31, 0x161A90u);
    ctx->pc = 0x161A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161A88u;
    // 0x161a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x161A88u, 0x161A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161A90u;
label_161a90:
    // 0x161a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161a94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x161a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161a98: 0xae0201d0  sw          $v0, 0x1D0($s0)
    ctx->pc = 0x161a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
    // 0x161a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x161AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AA0u;
        // 0x161aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161AA8u;
}
