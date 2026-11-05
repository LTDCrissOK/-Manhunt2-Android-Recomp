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

// Function: sub_0029B018
// Address: 0x29b018 - 0x29b078
void sub_0029B018_0x29b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B018_0x29b018");
#endif

    ctx->pc = 0x29b018u;

    // 0x29b018: 0x240300aa  addiu       $v1, $zero, 0xAA
    ctx->pc = 0x29b018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x29b01c: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x29b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x29b020: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x29b020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x29b024: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x29b024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x29b028: 0x240800d2  addiu       $t0, $zero, 0xD2
    ctx->pc = 0x29b028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x29b02c: 0x240900af  addiu       $t1, $zero, 0xAF
    ctx->pc = 0x29b02cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x29b030: 0xa0870008  sb          $a3, 0x8($a0)
    ctx->pc = 0x29b030u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x29b034: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29b034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b038: 0xa0880009  sb          $t0, 0x9($a0)
    ctx->pc = 0x29b038u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 8));
    // 0x29b03c: 0xa089000a  sb          $t1, 0xA($a0)
    ctx->pc = 0x29b03cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 9));
    // 0x29b040: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x29b040u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x29b044: 0xa086000d  sb          $a2, 0xD($a0)
    ctx->pc = 0x29b044u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x29b048: 0xa083000f  sb          $v1, 0xF($a0)
    ctx->pc = 0x29b048u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x29b04c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x29b04cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x29b050: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x29b050u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x29b054: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x29b054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b058: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x29b058u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x29b05c: 0xa0870004  sb          $a3, 0x4($a0)
    ctx->pc = 0x29b05cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x29b060: 0xa0880005  sb          $t0, 0x5($a0)
    ctx->pc = 0x29b060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x29b064: 0xa0890006  sb          $t1, 0x6($a0)
    ctx->pc = 0x29b064u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 9));
    // 0x29b068: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x29b068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x29b06c: 0xa083000b  sb          $v1, 0xB($a0)
    ctx->pc = 0x29b06cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x29b070: 0x3e00008  jr          $ra
    ctx->pc = 0x29B070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B070u;
        // 0x29b074: 0xa080000e  sb          $zero, 0xE($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B078u;
}
