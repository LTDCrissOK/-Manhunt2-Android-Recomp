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

// Function: sub_002019D8
// Address: 0x2019d8 - 0x201a28
void sub_002019D8_0x2019d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002019D8_0x2019d8");
#endif

    switch (ctx->pc) {
        case 0x2019f0u: goto label_2019f0;
        default: break;
    }

    ctx->pc = 0x2019d8u;

    // 0x2019d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2019d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2019dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2019dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2019e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2019e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2019e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2019e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2019e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2019ec: 0x0  nop
    ctx->pc = 0x2019ecu;
    // NOP
label_2019f0:
    // 0x2019f0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2019f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2019f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2019f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2019f8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2019f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2019fc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2019fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x201a00: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x201A00u;
    {
        const bool branch_taken_0x201a00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x201A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A00u;
        // 0x201a04: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a00) {
            ctx->pc = 0x2019F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2019f0;
        }
    }
    ctx->pc = 0x201A08u;
    // 0x201a08: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x201a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x201a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x201a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201a10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x201a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201a14: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x201a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x201a18: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x201a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x201a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x201A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A1Cu;
        // 0x201a20: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201A24u;
    // 0x201a24: 0x0  nop
    ctx->pc = 0x201a24u;
    // NOP
    ctx->pc = 0x201a28u;
}
