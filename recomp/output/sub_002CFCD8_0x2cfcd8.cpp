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

// Function: sub_002CFCD8
// Address: 0x2cfcd8 - 0x2cfd20
void sub_002CFCD8_0x2cfcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFCD8_0x2cfcd8");
#endif

    switch (ctx->pc) {
        case 0x2cfd14u: goto label_2cfd14;
        default: break;
    }

    ctx->pc = 0x2cfcd8u;

    // 0x2cfcd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cfcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cfcdc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cfcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cfce0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2cfce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2cfce4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2cfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2cfce8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cfce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cfcec: 0x34422fc8  ori         $v0, $v0, 0x2FC8
    ctx->pc = 0x2cfcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12232);
    // 0x2cfcf0: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x2cfcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x2cfcf4: 0x8c65b4a8  lw          $a1, -0x4B58($v1)
    ctx->pc = 0x2cfcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cfcf8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2cfcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2cfcfc: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2cfcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cfd00: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x2cfd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x2cfd04: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x2cfd04u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2cfd08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cfd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfd0c: 0xc0b3e16  jal         func_2CF858
    ctx->pc = 0x2CFD0Cu;
    SET_GPR_U32(ctx, 31, 0x2CFD14u);
    ctx->pc = 0x2CFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD0Cu;
    // 0x2cfd10: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF858u, 0x2CFD0Cu, 0x2CFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD14u;
label_2cfd14:
    // 0x2cfd14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cfd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfd18: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD18u;
        // 0x2cfd1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD20u;
}
