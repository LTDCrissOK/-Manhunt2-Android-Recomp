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

// Function: sub_0028FCA8
// Address: 0x28fca8 - 0x28fd00
void sub_0028FCA8_0x28fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FCA8_0x28fca8");
#endif

    switch (ctx->pc) {
        case 0x28fce0u: goto label_28fce0;
        default: break;
    }

    ctx->pc = 0x28fca8u;

    // 0x28fca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fcac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28fcacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28fcb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fcb4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x28fcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28fcb8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28fcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x28fcbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28fcbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28fcc0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28fcc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x28fcc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28fcc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28fccc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28fcccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28fcd0: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x28fcd0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28fcd4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28fcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28fcd8: 0xc0a526c  jal         func_2949B0
    ctx->pc = 0x28FCD8u;
    SET_GPR_U32(ctx, 31, 0x28FCE0u);
    ctx->pc = 0x28FCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCD8u;
    // 0x28fcdc: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2949B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949B0u, 0x28FCD8u, 0x28FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCE0u;
label_28fce0:
    // 0x28fce0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x28fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x28fce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28fce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fce8: 0x24632d90  addiu       $v1, $v1, 0x2D90
    ctx->pc = 0x28fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11664));
    // 0x28fcec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28fcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28fcf0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x28fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x28fcf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fcf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x28FCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCF8u;
        // 0x28fcfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FD00u;
}
