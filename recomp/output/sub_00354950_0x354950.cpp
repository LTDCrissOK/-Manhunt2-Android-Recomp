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

// Function: sub_00354950
// Address: 0x354950 - 0x3549a8
void sub_00354950_0x354950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354950_0x354950");
#endif

    ctx->pc = 0x354950u;

    // 0x354950: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x354950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x354954: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x354954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x354958: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x354958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x35495c: 0xa4442c56  sh          $a0, 0x2C56($v0)
    ctx->pc = 0x35495cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482C56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x482C56u, _value); } while (0);
    // 0x354960: 0xa4a42d08  sh          $a0, 0x2D08($a1)
    ctx->pc = 0x354960u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482D08u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x482D08u, _value); } while (0);
    // 0x354964: 0x3e00008  jr          $ra
    ctx->pc = 0x354964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354964u;
        // 0x354968: 0xa4642c54  sh          $a0, 0x2C54($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 11348), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35496Cu;
    // 0x35496c: 0x0  nop
    ctx->pc = 0x35496cu;
    // NOP
    // 0x354970: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x354974: 0x0  nop
    ctx->pc = 0x354974u;
    // NOP
    // 0x354978: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35497c: 0x0  nop
    ctx->pc = 0x35497cu;
    // NOP
    // 0x354980: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x354984: 0x0  nop
    ctx->pc = 0x354984u;
    // NOP
    // 0x354988: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35498c: 0x0  nop
    ctx->pc = 0x35498cu;
    // NOP
    // 0x354990: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x354994: 0x0  nop
    ctx->pc = 0x354994u;
    // NOP
    // 0x354998: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35499c: 0x0  nop
    ctx->pc = 0x35499cu;
    // NOP
    // 0x3549a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3549a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3549a4: 0x0  nop
    ctx->pc = 0x3549a4u;
    // NOP
    ctx->pc = 0x3549a8u;
}
