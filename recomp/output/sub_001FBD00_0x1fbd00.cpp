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

// Function: sub_001FBD00
// Address: 0x1fbd00 - 0x1fbd38
void sub_001FBD00_0x1fbd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBD00_0x1fbd00");
#endif

    ctx->pc = 0x1fbd00u;

    // 0x1fbd00: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fbd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fbd04: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1fbd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1fbd08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fbd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbd0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fbd10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fbd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbd14: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x1fbd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x1fbd18: 0xe4800118  swc1        $f0, 0x118($a0)
    ctx->pc = 0x1fbd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 280), bits); }
    // 0x1fbd1c: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x1fbd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x1fbd20: 0xac850140  sw          $a1, 0x140($a0)
    ctx->pc = 0x1fbd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 5));
    // 0x1fbd24: 0xa0800148  sb          $zero, 0x148($a0)
    ctx->pc = 0x1fbd24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fbd28: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x1fbd28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x1fbd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD2Cu;
        // 0x1fbd30: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD34u;
    // 0x1fbd34: 0x0  nop
    ctx->pc = 0x1fbd34u;
    // NOP
    ctx->pc = 0x1fbd38u;
}
