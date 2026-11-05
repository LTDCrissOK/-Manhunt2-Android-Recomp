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

// Function: sub_003672D8
// Address: 0x3672d8 - 0x367308
void sub_003672D8_0x3672d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003672D8_0x3672d8");
#endif

    switch (ctx->pc) {
        case 0x3672f8u: goto label_3672f8;
        default: break;
    }

    ctx->pc = 0x3672d8u;

    // 0x3672d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3672d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3672dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3672dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3672e0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3672e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x3672e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3672e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3672e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3672e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3672ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3672ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3672f0: 0xc0d9d04  jal         func_367410
    ctx->pc = 0x3672F0u;
    SET_GPR_U32(ctx, 31, 0x3672F8u);
    ctx->pc = 0x3672F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3672F0u;
    // 0x3672f4: 0xac44cb70  sw          $a0, -0x3490($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953840), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367410u, 0x3672F0u, 0x3672F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3672F8u;
label_3672f8:
    // 0x3672f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3672f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3672fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3672FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3672FCu;
        // 0x367300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3672FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367304u;
    // 0x367304: 0x0  nop
    ctx->pc = 0x367304u;
    // NOP
    ctx->pc = 0x367308u;
}
