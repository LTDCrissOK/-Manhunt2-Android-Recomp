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

// Function: sub_001534C8
// Address: 0x1534c8 - 0x153528
void sub_001534C8_0x1534c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001534C8_0x1534c8");
#endif

    switch (ctx->pc) {
        case 0x15350cu: goto label_15350c;
        case 0x153518u: goto label_153518;
        default: break;
    }

    ctx->pc = 0x1534c8u;

    // 0x1534c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1534c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1534cc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1534ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1534d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1534d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1534d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1534d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1534d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1534d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1534dc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1534dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1534e0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1534e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1534e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1534e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1534e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1534e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1534ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1534ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1534f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1534f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1534f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1534f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1534f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1534fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1534fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153500: 0x8c70020c  lw          $s0, 0x20C($v1)
    ctx->pc = 0x153500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x153504: 0xc04547e  jal         func_1151F8
    ctx->pc = 0x153504u;
    SET_GPR_U32(ctx, 31, 0x15350Cu);
    ctx->pc = 0x153508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153504u;
    // 0x153508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151F8u, 0x153504u, 0x15350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15350Cu;
label_15350c:
    // 0x15350c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153510: 0xc044084  jal         func_110210
    ctx->pc = 0x153510u;
    SET_GPR_U32(ctx, 31, 0x153518u);
    ctx->pc = 0x153514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153510u;
    // 0x153514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110210u, 0x153510u, 0x153518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153518u;
label_153518:
    // 0x153518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x153518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15351c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15351cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x153520: 0x3e00008  jr          $ra
    ctx->pc = 0x153520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153520u;
        // 0x153524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153528u;
}
