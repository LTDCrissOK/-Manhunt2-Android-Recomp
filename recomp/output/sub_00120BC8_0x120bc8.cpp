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

// Function: sub_00120BC8
// Address: 0x120bc8 - 0x120c20
void sub_00120BC8_0x120bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120BC8_0x120bc8");
#endif

    switch (ctx->pc) {
        case 0x120be8u: goto label_120be8;
        default: break;
    }

    ctx->pc = 0x120bc8u;

    // 0x120bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x120bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x120bcc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x120bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120bd0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x120BD0u;
    {
        const bool branch_taken_0x120bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BD0u;
        // 0x120bd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bd0) {
            ctx->pc = 0x120C10u;
            goto label_120c10;
        }
    }
    ctx->pc = 0x120BD8u;
    // 0x120bd8: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x120BD8u;
    {
        const bool branch_taken_0x120bd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BD8u;
        // 0x120bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bd8) {
            ctx->pc = 0x120C14u;
            goto label_120c14;
        }
    }
    ctx->pc = 0x120BE0u;
    // 0x120be0: 0xc043a7c  jal         func_10E9F0
    ctx->pc = 0x120BE0u;
    SET_GPR_U32(ctx, 31, 0x120BE8u);
    ctx->pc = 0x120BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120BE0u;
    // 0x120be4: 0x8cc50010  lw          $a1, 0x10($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E9F0u, 0x120BE0u, 0x120BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120BE8u;
label_120be8:
    // 0x120be8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x120be8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x120bec: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x120becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x120bf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120bf4: 0x0  nop
    ctx->pc = 0x120bf4u;
    // NOP
    // 0x120bf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x120bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120bfc: 0x0  nop
    ctx->pc = 0x120bfcu;
    // NOP
    // 0x120c00: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x120C00u;
    {
        const bool branch_taken_0x120c00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x120C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C00u;
        // 0x120c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c00) {
            ctx->pc = 0x120C14u;
            goto label_120c14;
        }
    }
    ctx->pc = 0x120C08u;
    // 0x120c08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x120C08u;
    {
        const bool branch_taken_0x120c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C08u;
        // 0x120c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c08) {
            ctx->pc = 0x120C14u;
            goto label_120c14;
        }
    }
    ctx->pc = 0x120C10u;
label_120c10:
    // 0x120c10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x120c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120c14:
    // 0x120c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120c18: 0x3e00008  jr          $ra
    ctx->pc = 0x120C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C18u;
        // 0x120c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120C20u;
}
