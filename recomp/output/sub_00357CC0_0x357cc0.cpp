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

// Function: sub_00357CC0
// Address: 0x357cc0 - 0x357d48
void sub_00357CC0_0x357cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357CC0_0x357cc0");
#endif

    ctx->pc = 0x357cc0u;

    // 0x357cc0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x357cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x357cc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x357cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x357cc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x357cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357ccc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x357cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x357cd0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x357cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x357cd4: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x357cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x357cd8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x357cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x357cdc: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x357cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x357ce0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x357ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x357ce4: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x357ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x357ce8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x357ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x357cec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x357cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x357cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x357cf4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x357cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x357cf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x357cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x357cfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x357cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357d00: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x357d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x357d04: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x357d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x357d08: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x357d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x357d0c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x357d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x357d10: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x357d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x357d14: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x357d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x357d18: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x357d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x357d1c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x357d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x357d20: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x357d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x357d24: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x357d24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x357d28: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x357d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x357d2c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x357d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x357d30: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x357d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x357d34: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x357d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x357d38: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x357d38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x357d3c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x357d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x357d40: 0x3e00008  jr          $ra
    ctx->pc = 0x357D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D40u;
        // 0x357d44: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357D48u;
}
