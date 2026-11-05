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

// Function: sub_0028FAD8
// Address: 0x28fad8 - 0x28fb30
void sub_0028FAD8_0x28fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FAD8_0x28fad8");
#endif

    switch (ctx->pc) {
        case 0x28fb10u: goto label_28fb10;
        default: break;
    }

    ctx->pc = 0x28fad8u;

    // 0x28fad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fadc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28fadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28fae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fae4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x28fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28fae8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28fae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x28faec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28faecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28faf0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28faf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x28faf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28faf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28faf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28fafc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28fafcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28fb00: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x28fb00u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28fb04: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28fb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28fb08: 0xc0a526c  jal         func_2949B0
    ctx->pc = 0x28FB08u;
    SET_GPR_U32(ctx, 31, 0x28FB10u);
    ctx->pc = 0x28FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB08u;
    // 0x28fb0c: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2949B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949B0u, 0x28FB08u, 0x28FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB10u;
label_28fb10:
    // 0x28fb10: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x28fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x28fb14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28fb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb18: 0x24632da8  addiu       $v1, $v1, 0x2DA8
    ctx->pc = 0x28fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11688));
    // 0x28fb1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28fb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28fb20: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x28fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x28fb24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fb28: 0x3e00008  jr          $ra
    ctx->pc = 0x28FB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB28u;
        // 0x28fb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FB30u;
}
