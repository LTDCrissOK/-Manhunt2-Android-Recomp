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

// Function: sub_00291D60
// Address: 0x291d60 - 0x291dd8
void sub_00291D60_0x291d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291D60_0x291d60");
#endif

    switch (ctx->pc) {
        case 0x291d88u: goto label_291d88;
        case 0x291d9cu: goto label_291d9c;
        case 0x291dbcu: goto label_291dbc;
        default: break;
    }

    ctx->pc = 0x291d60u;

    // 0x291d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291d64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x291d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x291d68: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x291d68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x291d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291d70: 0x8e2211dc  lw          $v0, 0x11DC($s1)
    ctx->pc = 0x291d70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C11DCu));
    // 0x291d74: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x291d74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x291d78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291D78u;
    {
        const bool branch_taken_0x291d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D78u;
        // 0x291d7c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d78) {
            ctx->pc = 0x291D9Cu;
            goto label_291d9c;
        }
    }
    ctx->pc = 0x291D80u;
    // 0x291d80: 0xc0a4716  jal         func_291C58
    ctx->pc = 0x291D80u;
    SET_GPR_U32(ctx, 31, 0x291D88u);
    ctx->pc = 0x291D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D80u;
    // 0x291d84: 0x26041178  addiu       $a0, $s0, 0x1178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291C58u, 0x291D80u, 0x291D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D88u;
label_291d88:
    // 0x291d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291d8c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x291d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x291d90: 0xae2211dc  sw          $v0, 0x11DC($s1)
    ctx->pc = 0x291d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4572), GPR_U32(ctx, 2));
    // 0x291d94: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x291D94u;
    SET_GPR_U32(ctx, 31, 0x291D9Cu);
    ctx->pc = 0x291D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D94u;
    // 0x291d98: 0x24841d38  addiu       $a0, $a0, 0x1D38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x291D94u, 0x291D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D9Cu;
label_291d9c:
    // 0x291d9c: 0x26101178  addiu       $s0, $s0, 0x1178
    ctx->pc = 0x291d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4472));
    // 0x291da0: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x291da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x291da4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x291DA4u;
    {
        const bool branch_taken_0x291da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DA4u;
        // 0x291da8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291da4) {
            ctx->pc = 0x291DC0u;
            goto label_291dc0;
        }
    }
    ctx->pc = 0x291DACu;
    // 0x291dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291db4: 0xc0a4776  jal         func_291DD8
    ctx->pc = 0x291DB4u;
    SET_GPR_U32(ctx, 31, 0x291DBCu);
    ctx->pc = 0x291DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291DB4u;
    // 0x291db8: 0xa2020060  sb          $v0, 0x60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291DD8u, 0x291DB4u, 0x291DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DBCu;
label_291dbc:
    // 0x291dbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x291dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291dc0:
    // 0x291dc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x291dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x291DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DCCu;
        // 0x291dd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291DD4u;
    // 0x291dd4: 0x0  nop
    ctx->pc = 0x291dd4u;
    // NOP
    ctx->pc = 0x291dd8u;
}
