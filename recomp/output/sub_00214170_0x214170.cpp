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

// Function: sub_00214170
// Address: 0x214170 - 0x2141b0
void sub_00214170_0x214170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214170_0x214170");
#endif

    switch (ctx->pc) {
        case 0x214184u: goto label_214184;
        default: break;
    }

    ctx->pc = 0x214170u;

    // 0x214170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214178: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21417c: 0xc08506c  jal         func_2141B0
    ctx->pc = 0x21417Cu;
    SET_GPR_U32(ctx, 31, 0x214184u);
    ctx->pc = 0x214180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21417Cu;
    // 0x214180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2141B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2141B0u, 0x21417Cu, 0x214184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214184u;
label_214184:
    // 0x214184: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x214184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x214188: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x214188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x21418c: 0xac6294c0  sw          $v0, -0x6B40($v1)
    ctx->pc = 0x21418cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F94C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F94C0u, _value); } while (0);
    // 0x214190: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x214190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x214194: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214198: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x214198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x21419c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21419cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2141a0: 0xac8294c4  sw          $v0, -0x6B3C($a0)
    ctx->pc = 0x2141a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F94C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F94C4u, _value); } while (0);
    // 0x2141a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2141A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2141A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141A4u;
        // 0x2141a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2141A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2141ACu;
    // 0x2141ac: 0x0  nop
    ctx->pc = 0x2141acu;
    // NOP
    ctx->pc = 0x2141b0u;
}
