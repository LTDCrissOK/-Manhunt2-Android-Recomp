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

// Function: sub_00254F00
// Address: 0x254f00 - 0x254f50
void sub_00254F00_0x254f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254F00_0x254f00");
#endif

    ctx->pc = 0x254f00u;

    // 0x254f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254f04: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x254f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x254f08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x254f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x254f0c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x254f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x254f10: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x254f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x254f14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x254f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x254f18: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x254f18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
    // 0x254f1c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x254f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254f20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x254f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x254f24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x254f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x254f28: 0xe4800528  swc1        $f0, 0x528($a0)
    ctx->pc = 0x254f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1320), bits); }
    // 0x254f2c: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x254f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x254f30: 0xe48004fc  swc1        $f0, 0x4FC($a0)
    ctx->pc = 0x254f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1276), bits); }
    // 0x254f34: 0xe4800500  swc1        $f0, 0x500($a0)
    ctx->pc = 0x254f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1280), bits); }
    // 0x254f38: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x254f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x254f3c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x254f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x254f40: 0xe4800524  swc1        $f0, 0x524($a0)
    ctx->pc = 0x254f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1316), bits); }
    // 0x254f44: 0x3e00008  jr          $ra
    ctx->pc = 0x254F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F44u;
        // 0x254f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254F4Cu;
    // 0x254f4c: 0x0  nop
    ctx->pc = 0x254f4cu;
    // NOP
    ctx->pc = 0x254f50u;
}
