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

// Function: sub_002D4CC8
// Address: 0x2d4cc8 - 0x2d4d18
void sub_002D4CC8_0x2d4cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4CC8_0x2d4cc8");
#endif

    switch (ctx->pc) {
        case 0x2d4ce8u: goto label_2d4ce8;
        default: break;
    }

    ctx->pc = 0x2d4cc8u;

    // 0x2d4cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4ccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4cd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d4cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d4cd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d4cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4cd8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2d4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d4cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ce0: 0xc0b1ae0  jal         func_2C6B80
    ctx->pc = 0x2D4CE0u;
    SET_GPR_U32(ctx, 31, 0x2D4CE8u);
    ctx->pc = 0x2D4CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4CE0u;
    // 0x2d4ce4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B80u, 0x2D4CE0u, 0x2D4CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4CE8u;
label_2d4ce8:
    // 0x2d4ce8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2d4ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4cec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2d4cecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d4cf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d4cf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4cf4: 0x0  nop
    ctx->pc = 0x2d4cf4u;
    // NOP
    // 0x2d4cf8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4CF8u;
    {
        const bool branch_taken_0x2d4cf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CF8u;
        // 0x2d4cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4cf8) {
            ctx->pc = 0x2D4D04u;
            goto label_2d4d04;
        }
    }
    ctx->pc = 0x2D4D00u;
    // 0x2d4d00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4d04:
    // 0x2d4d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d4d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4D0Cu;
        // 0x2d4d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4D14u;
    // 0x2d4d14: 0x0  nop
    ctx->pc = 0x2d4d14u;
    // NOP
    ctx->pc = 0x2d4d18u;
}
