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

// Function: sub_001244E8
// Address: 0x1244e8 - 0x124520
void sub_001244E8_0x1244e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001244E8_0x1244e8");
#endif

    switch (ctx->pc) {
        case 0x124514u: goto label_124514;
        default: break;
    }

    ctx->pc = 0x1244e8u;

    // 0x1244e8: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x1244e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
    // 0x1244ec: 0x3421ff5c  ori         $at, $at, 0xFF5C
    ctx->pc = 0x1244ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65372);
    // 0x1244f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1244f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1244f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1244f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1244f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1244f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1244fc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x1244fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124500: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x124500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x124504: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x124504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x124508: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x124508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x12450c: 0xc049148  jal         func_124520
    ctx->pc = 0x12450Cu;
    SET_GPR_U32(ctx, 31, 0x124514u);
    ctx->pc = 0x124510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12450Cu;
    // 0x124510: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124520u, 0x12450Cu, 0x124514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124514u;
label_124514:
    // 0x124514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124518: 0x3e00008  jr          $ra
    ctx->pc = 0x124518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124518u;
        // 0x12451c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124520u;
}
