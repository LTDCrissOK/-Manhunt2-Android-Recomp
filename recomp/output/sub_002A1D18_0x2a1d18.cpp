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

// Function: sub_002A1D18
// Address: 0x2a1d18 - 0x2a1d80
void sub_002A1D18_0x2a1d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1D18_0x2a1d18");
#endif

    ctx->pc = 0x2a1d18u;

    // 0x2a1d18: 0x3c013b00  lui         $at, 0x3B00
    ctx->pc = 0x2a1d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15104 << 16));
    // 0x2a1d1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a1d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1d20: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2a1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a1d24: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x2a1d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x2a1d28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a1d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a1d2c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2a1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2a1d30: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x2a1d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x2a1d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a1d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1d38: 0x3c013acc  lui         $at, 0x3ACC
    ctx->pc = 0x2a1d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15052 << 16));
    // 0x2a1d3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a1d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a1d40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a1d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a1d44: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2a1d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2a1d48: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2a1d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2a1d4c: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x2a1d4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2a1d50: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2a1d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2a1d54: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2a1d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2a1d58: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x2a1d58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2a1d5c: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x2a1d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x2a1d60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a1d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1d64: 0x8c6225cc  lw          $v0, 0x25CC($v1)
    ctx->pc = 0x2a1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C25CCu));
    // 0x2a1d68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1D68u;
    {
        const bool branch_taken_0x2a1d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1d68) {
            ctx->pc = 0x2A1D78u;
            goto label_2a1d78;
        }
    }
    ctx->pc = 0x2A1D70u;
    // 0x2a1d70: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2a1d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2a1d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a1d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1d78:
    // 0x2a1d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D78u;
        // 0x2a1d7c: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1D80u;
}
