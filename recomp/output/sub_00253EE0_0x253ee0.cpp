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

// Function: sub_00253EE0
// Address: 0x253ee0 - 0x253f38
void sub_00253EE0_0x253ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253EE0_0x253ee0");
#endif

    switch (ctx->pc) {
        case 0x253f18u: goto label_253f18;
        case 0x253f20u: goto label_253f20;
        default: break;
    }

    ctx->pc = 0x253ee0u;

    // 0x253ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253ee8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x253ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x253eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ef0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x253ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x253ef4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253ef8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x253EF8u;
    {
        const bool branch_taken_0x253ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253ef8) {
            ctx->pc = 0x253EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253EF8u;
            // 0x253efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253F24u;
            goto label_253f24;
        }
    }
    ctx->pc = 0x253F00u;
    // 0x253f00: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x253f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253f04: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x253f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x253f08: 0xae021060  sw          $v0, 0x1060($s0)
    ctx->pc = 0x253f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    // 0x253f0c: 0xac60035c  sw          $zero, 0x35C($v1)
    ctx->pc = 0x253f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 0));
    // 0x253f10: 0xc061d8a  jal         func_187628
    ctx->pc = 0x253F10u;
    SET_GPR_U32(ctx, 31, 0x253F18u);
    ctx->pc = 0x253F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F10u;
    // 0x253f14: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187628u, 0x253F10u, 0x253F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F18u;
label_253f18:
    // 0x253f18: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x253F18u;
    SET_GPR_U32(ctx, 31, 0x253F20u);
    ctx->pc = 0x253F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F18u;
    // 0x253f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253F18u, 0x253F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F20u;
label_253f20:
    // 0x253f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253f24:
    // 0x253f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x253f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x253F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F2Cu;
        // 0x253f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253F34u;
    // 0x253f34: 0x0  nop
    ctx->pc = 0x253f34u;
    // NOP
    ctx->pc = 0x253f38u;
}
