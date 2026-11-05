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

// Function: sub_001E9FA8
// Address: 0x1e9fa8 - 0x1e9ff0
void sub_001E9FA8_0x1e9fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9FA8_0x1e9fa8");
#endif

    switch (ctx->pc) {
        case 0x1e9fe4u: goto label_1e9fe4;
        default: break;
    }

    ctx->pc = 0x1e9fa8u;

    // 0x1e9fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9fac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e9facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e9fb0: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E9FB0u;
    {
        const bool branch_taken_0x1e9fb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FB0u;
        // 0x1e9fb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9fb0) {
            ctx->pc = 0x1E9FE4u;
            goto label_1e9fe4;
        }
    }
    ctx->pc = 0x1E9FB8u;
    // 0x1e9fb8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E9FB8u;
    {
        const bool branch_taken_0x1e9fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FB8u;
        // 0x1e9fbc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9fb8) {
            ctx->pc = 0x1E9FE4u;
            goto label_1e9fe4;
        }
    }
    ctx->pc = 0x1E9FC0u;
    // 0x1e9fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e9fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9fc4: 0x246202f0  addiu       $v0, $v1, 0x2F0
    ctx->pc = 0x1e9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x1e9fc8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1e9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1e9fcc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e9fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e9fd0: 0x24840300  addiu       $a0, $a0, 0x300
    ctx->pc = 0x1e9fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    // 0x1e9fd4: 0xe46002f0  swc1        $f0, 0x2F0($v1)
    ctx->pc = 0x1e9fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 752), bits); }
    // 0x1e9fd8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e9fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e9fdc: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x1E9FDCu;
    SET_GPR_U32(ctx, 31, 0x1E9FE4u);
    ctx->pc = 0x1E9FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9FDCu;
    // 0x1e9fe0: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x1E9FDCu, 0x1E9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FE4u;
label_1e9fe4:
    // 0x1e9fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FE8u;
        // 0x1e9fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9FF0u;
}
