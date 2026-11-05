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

// Function: sub_00319CC0
// Address: 0x319cc0 - 0x319cf0
void sub_00319CC0_0x319cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319CC0_0x319cc0");
#endif

    ctx->pc = 0x319cc0u;

    // 0x319cc0: 0x3c05005b  lui         $a1, 0x5B
    ctx->pc = 0x319cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)91 << 16));
    // 0x319cc4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x319cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x319cc8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x319cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x319ccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319cd0: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x319cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x319cd4: 0x24a222a8  addiu       $v0, $a1, 0x22A8
    ctx->pc = 0x319cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8872));
    // 0x319cd8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x319cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B22ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B22ACu, _value); } while (0); }
    // 0x319cdc: 0x246422a0  addiu       $a0, $v1, 0x22A0
    ctx->pc = 0x319cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8864));
    // 0x319ce0: 0xac6022a0  sw          $zero, 0x22A0($v1)
    ctx->pc = 0x319ce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B22A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B22A0u, _value); } while (0);
    // 0x319ce4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x319ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B22A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B22A4u, _value); } while (0);
    // 0x319ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x319CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CE8u;
        // 0x319cec: 0xe4a022a8  swc1        $f0, 0x22A8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8872), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319CF0u;
}
