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

// Function: sub_001580B0
// Address: 0x1580b0 - 0x158140
void sub_001580B0_0x1580b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001580B0_0x1580b0");
#endif

    switch (ctx->pc) {
        case 0x1580d4u: goto label_1580d4;
        default: break;
    }

    ctx->pc = 0x1580b0u;

    // 0x1580b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1580b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1580b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1580b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1580b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1580b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1580bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1580bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580c0: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1580c4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1580C4u;
    {
        const bool branch_taken_0x1580c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1580c4) {
            ctx->pc = 0x1580C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1580C4u;
            // 0x1580c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158130u;
            goto label_158130;
        }
    }
    ctx->pc = 0x1580CCu;
    // 0x1580cc: 0xc04f03a  jal         func_13C0E8
    ctx->pc = 0x1580CCu;
    SET_GPR_U32(ctx, 31, 0x1580D4u);
    ctx->pc = 0x13C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0E8u, 0x1580CCu, 0x1580D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580D4u;
label_1580d4:
    // 0x1580d4: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1580d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1580d8: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x1580d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x1580dc: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x1580dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x1580e0: 0x7e0002f0  sq          $zero, 0x2F0($s0)
    ctx->pc = 0x1580e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 0));
    // 0x1580e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1580e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1580e8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1580e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1580ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1580ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1580f0: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1580f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
    // 0x1580f4: 0xae030324  sw          $v1, 0x324($s0)
    ctx->pc = 0x1580f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 3));
    // 0x1580f8: 0xae040328  sw          $a0, 0x328($s0)
    ctx->pc = 0x1580f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 4));
    // 0x1580fc: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x1580fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x158100: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x158100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x158104: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x158104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
    // 0x158108: 0xae000308  sw          $zero, 0x308($s0)
    ctx->pc = 0x158108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 0));
    // 0x15810c: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x15810cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
    // 0x158110: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x158110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x158114: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x158114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
    // 0x158118: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x158118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
    // 0x15811c: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x15811cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x158120: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x158120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x158124: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x158124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x158128: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x158128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x15812c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15812cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158130:
    // 0x158130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x158130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158134: 0x3e00008  jr          $ra
    ctx->pc = 0x158134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158134u;
        // 0x158138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15813Cu;
    // 0x15813c: 0x0  nop
    ctx->pc = 0x15813cu;
    // NOP
    ctx->pc = 0x158140u;
}
