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

// Function: sub_00126AF8
// Address: 0x126af8 - 0x126b68
void sub_00126AF8_0x126af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126AF8_0x126af8");
#endif

    switch (ctx->pc) {
        case 0x126b18u: goto label_126b18;
        default: break;
    }

    ctx->pc = 0x126af8u;

    // 0x126af8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x126af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x126afc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x126afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126b00: 0xa24018  mult        $t0, $a1, $v0
    ctx->pc = 0x126b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x126b04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x126b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b08: 0x24e60448  addiu       $a2, $a3, 0x448
    ctx->pc = 0x126b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1096));
    // 0x126b0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x126b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b10: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x126b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x126b14: 0x0  nop
    ctx->pc = 0x126b14u;
    // NOP
label_126b18:
    // 0x126b18: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x126b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x126b1c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x126b20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x126b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x126b24: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x126b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x126b28: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x126b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x126b2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126B2Cu;
    {
        const bool branch_taken_0x126b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B2Cu;
        // 0x126b30: 0xa0690000  sb          $t1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b2c) {
            ctx->pc = 0x126B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126b18;
        }
    }
    ctx->pc = 0x126B34u;
    // 0x126b34: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x126b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126b38: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x126b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x126b3c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x126b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x126b40: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x126b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x126b44: 0xac60044c  sw          $zero, 0x44C($v1)
    ctx->pc = 0x126b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1100), GPR_U32(ctx, 0));
    // 0x126b48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x126b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b4c: 0xac860450  sw          $a2, 0x450($a0)
    ctx->pc = 0x126b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1104), GPR_U32(ctx, 6));
    // 0x126b50: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x126b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b54: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x126b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b58: 0xaca00454  sw          $zero, 0x454($a1)
    ctx->pc = 0x126b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1108), GPR_U32(ctx, 0));
    // 0x126b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x126B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B5Cu;
        // 0x126b60: 0xac400458  sw          $zero, 0x458($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126B64u;
    // 0x126b64: 0x0  nop
    ctx->pc = 0x126b64u;
    // NOP
    ctx->pc = 0x126b68u;
}
