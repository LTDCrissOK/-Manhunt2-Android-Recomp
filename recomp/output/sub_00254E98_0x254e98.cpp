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

// Function: sub_00254E98
// Address: 0x254e98 - 0x254f00
void sub_00254E98_0x254e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254E98_0x254e98");
#endif

    switch (ctx->pc) {
        case 0x254edcu: goto label_254edc;
        case 0x254eecu: goto label_254eec;
        default: break;
    }

    ctx->pc = 0x254e98u;

    // 0x254e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254e9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x254e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254ea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254ea4: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x254ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
    // 0x254ea8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x254ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x254eac: 0x630b8  dsll        $a2, $a2, 2
    ctx->pc = 0x254eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 2);
    // 0x254eb0: 0x34c60003  ori         $a2, $a2, 0x3
    ctx->pc = 0x254eb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
    // 0x254eb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254eb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ebc: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x254ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x254ec0: 0xac4504c0  sw          $a1, 0x4C0($v0)
    ctx->pc = 0x254ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1216), GPR_U32(ctx, 5));
    // 0x254ec4: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x254ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x254ec8: 0xac6004b4  sw          $zero, 0x4B4($v1)
    ctx->pc = 0x254ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1204), GPR_U32(ctx, 0));
    // 0x254ecc: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x254eccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x254ed0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x254ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x254ed4: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x254ED4u;
    SET_GPR_U32(ctx, 31, 0x254EDCu);
    ctx->pc = 0x254ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254ED4u;
    // 0x254ed8: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x254ED4u, 0x254EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EDCu;
label_254edc:
    // 0x254edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ee0: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x254ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x254ee4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x254EE4u;
    SET_GPR_U32(ctx, 31, 0x254EECu);
    ctx->pc = 0x254EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EE4u;
    // 0x254ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x254EE4u, 0x254EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EECu;
label_254eec:
    // 0x254eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254ef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x254EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EF4u;
        // 0x254ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254EFCu;
    // 0x254efc: 0x0  nop
    ctx->pc = 0x254efcu;
    // NOP
    ctx->pc = 0x254f00u;
}
