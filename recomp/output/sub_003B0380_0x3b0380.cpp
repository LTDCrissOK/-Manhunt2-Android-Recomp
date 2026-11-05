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

// Function: sub_003B0380
// Address: 0x3b0380 - 0x3b03b8
void sub_003B0380_0x3b0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0380_0x3b0380");
#endif

    switch (ctx->pc) {
        case 0x3b039cu: goto label_3b039c;
        default: break;
    }

    ctx->pc = 0x3b0380u;

    // 0x3b0380: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3b0380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3b0384: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b0388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b038c: 0x24844780  addiu       $a0, $a0, 0x4780
    ctx->pc = 0x3b038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18304));
    // 0x3b0390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b0394: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B0394u;
    SET_GPR_U32(ctx, 31, 0x3B039Cu);
    ctx->pc = 0x3B0398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0394u;
    // 0x3b0398: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B0394u, 0x3B039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B039Cu;
label_3b039c:
    // 0x3b039c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b039cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3b03a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b03a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b03a4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b03a8: 0xac604778  sw          $zero, 0x4778($v1)
    ctx->pc = 0x3b03a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x424778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x424778u, _value); } while (0);
    // 0x3b03ac: 0xac40477c  sw          $zero, 0x477C($v0)
    ctx->pc = 0x3b03acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x42477Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42477Cu, _value); } while (0);
    // 0x3b03b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B03B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B03B0u;
        // 0x3b03b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B03B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B03B8u;
}
