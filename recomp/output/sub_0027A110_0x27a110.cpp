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

// Function: sub_0027A110
// Address: 0x27a110 - 0x27a198
void sub_0027A110_0x27a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A110_0x27a110");
#endif

    switch (ctx->pc) {
        case 0x27a170u: goto label_27a170;
        default: break;
    }

    ctx->pc = 0x27a110u;

    // 0x27a110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27a110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27a114: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x27a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x27a118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a11c: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x27a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x27a120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a124: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27a124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27a128: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x27a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x27a12c: 0x3c080027  lui         $t0, 0x27
    ctx->pc = 0x27a12cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)39 << 16));
    // 0x27a130: 0xae061008  sw          $a2, 0x1008($s0)
    ctx->pc = 0x27a130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4104), GPR_U32(ctx, 6));
    // 0x27a134: 0x246374b0  addiu       $v1, $v1, 0x74B0
    ctx->pc = 0x27a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29872));
    // 0x27a138: 0x250874d0  addiu       $t0, $t0, 0x74D0
    ctx->pc = 0x27a138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29904));
    // 0x27a13c: 0x24422c28  addiu       $v0, $v0, 0x2C28
    ctx->pc = 0x27a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11304));
    // 0x27a140: 0xae001010  sw          $zero, 0x1010($s0)
    ctx->pc = 0x27a140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4112), GPR_U32(ctx, 0));
    // 0x27a144: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27a144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27a148: 0xae001014  sw          $zero, 0x1014($s0)
    ctx->pc = 0x27a148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4116), GPR_U32(ctx, 0));
    // 0x27a14c: 0x26041020  addiu       $a0, $s0, 0x1020
    ctx->pc = 0x27a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4128));
    // 0x27a150: 0xae001050  sw          $zero, 0x1050($s0)
    ctx->pc = 0x27a150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4176), GPR_U32(ctx, 0));
    // 0x27a154: 0x24a582a0  addiu       $a1, $a1, -0x7D60
    ctx->pc = 0x27a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935200));
    // 0x27a158: 0xae07100c  sw          $a3, 0x100C($s0)
    ctx->pc = 0x27a158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4108), GPR_U32(ctx, 7));
    // 0x27a15c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x27a15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x27a160: 0xae031048  sw          $v1, 0x1048($s0)
    ctx->pc = 0x27a160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 3));
    // 0x27a164: 0xae08104c  sw          $t0, 0x104C($s0)
    ctx->pc = 0x27a164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4172), GPR_U32(ctx, 8));
    // 0x27a168: 0xc0e052c  jal         func_3814B0
    ctx->pc = 0x27A168u;
    SET_GPR_U32(ctx, 31, 0x27A170u);
    ctx->pc = 0x27A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A168u;
    // 0x27a16c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3814B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3814B0u, 0x27A168u, 0x27A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A170u;
label_27a170:
    // 0x27a170: 0x8e041008  lw          $a0, 0x1008($s0)
    ctx->pc = 0x27a170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4104)));
    // 0x27a174: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27a174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a178: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x27a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27a17c: 0xae041024  sw          $a0, 0x1024($s0)
    ctx->pc = 0x27a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4132), GPR_U32(ctx, 4));
    // 0x27a180: 0xae031020  sw          $v1, 0x1020($s0)
    ctx->pc = 0x27a180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4128), GPR_U32(ctx, 3));
    // 0x27a184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a188: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27a188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27a18c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A18Cu;
        // 0x27a190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A194u;
    // 0x27a194: 0x0  nop
    ctx->pc = 0x27a194u;
    // NOP
    ctx->pc = 0x27a198u;
}
