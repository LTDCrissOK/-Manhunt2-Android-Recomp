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

// Function: sub_00304C88
// Address: 0x304c88 - 0x304d18
void sub_00304C88_0x304c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304C88_0x304c88");
#endif

    switch (ctx->pc) {
        case 0x304cacu: goto label_304cac;
        case 0x304cb8u: goto label_304cb8;
        case 0x304cc4u: goto label_304cc4;
        case 0x304cd0u: goto label_304cd0;
        case 0x304cdcu: goto label_304cdc;
        case 0x304ce8u: goto label_304ce8;
        case 0x304cf4u: goto label_304cf4;
        case 0x304d08u: goto label_304d08;
        default: break;
    }

    ctx->pc = 0x304c88u;

    // 0x304c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304c8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x304c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x304c90: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x304c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x304c94: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304c9c: 0x24846560  addiu       $a0, $a0, 0x6560
    ctx->pc = 0x304c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25952));
    // 0x304ca0: 0xac402c4c  sw          $zero, 0x2C4C($v0)
    ctx->pc = 0x304ca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C4Cu, _value); } while (0);
    // 0x304ca4: 0xc0c1278  jal         func_3049E0
    ctx->pc = 0x304CA4u;
    SET_GPR_U32(ctx, 31, 0x304CACu);
    ctx->pc = 0x304CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CA4u;
    // 0x304ca8: 0xac602c20  sw          $zero, 0x2C20($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 11296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049E0u, 0x304CA4u, 0x304CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CACu;
label_304cac:
    // 0x304cac: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304cb0: 0xc0c1278  jal         func_3049E0
    ctx->pc = 0x304CB0u;
    SET_GPR_U32(ctx, 31, 0x304CB8u);
    ctx->pc = 0x304CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CB0u;
    // 0x304cb4: 0x24846580  addiu       $a0, $a0, 0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049E0u, 0x304CB0u, 0x304CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CB8u;
label_304cb8:
    // 0x304cb8: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304cbc: 0xc0c1278  jal         func_3049E0
    ctx->pc = 0x304CBCu;
    SET_GPR_U32(ctx, 31, 0x304CC4u);
    ctx->pc = 0x304CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CBCu;
    // 0x304cc0: 0x248465a0  addiu       $a0, $a0, 0x65A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049E0u, 0x304CBCu, 0x304CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CC4u;
label_304cc4:
    // 0x304cc4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304cc8: 0xc0c1278  jal         func_3049E0
    ctx->pc = 0x304CC8u;
    SET_GPR_U32(ctx, 31, 0x304CD0u);
    ctx->pc = 0x304CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CC8u;
    // 0x304ccc: 0x24846620  addiu       $a0, $a0, 0x6620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049E0u, 0x304CC8u, 0x304CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CD0u;
label_304cd0:
    // 0x304cd0: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304cd4: 0xc0c1278  jal         func_3049E0
    ctx->pc = 0x304CD4u;
    SET_GPR_U32(ctx, 31, 0x304CDCu);
    ctx->pc = 0x304CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CD4u;
    // 0x304cd8: 0x248465c0  addiu       $a0, $a0, 0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049E0u, 0x304CD4u, 0x304CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CDCu;
label_304cdc:
    // 0x304cdc: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304ce0: 0xc0c1278  jal         func_3049E0
    ctx->pc = 0x304CE0u;
    SET_GPR_U32(ctx, 31, 0x304CE8u);
    ctx->pc = 0x304CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CE0u;
    // 0x304ce4: 0x248465e0  addiu       $a0, $a0, 0x65E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049E0u, 0x304CE0u, 0x304CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CE8u;
label_304ce8:
    // 0x304ce8: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304cec: 0xc0c1278  jal         func_3049E0
    ctx->pc = 0x304CECu;
    SET_GPR_U32(ctx, 31, 0x304CF4u);
    ctx->pc = 0x304CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CECu;
    // 0x304cf0: 0x24846600  addiu       $a0, $a0, 0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049E0u, 0x304CECu, 0x304CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CF4u;
label_304cf4:
    // 0x304cf4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x304cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x304cf8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x304cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x304cfc: 0xac40bb48  sw          $zero, -0x44B8($v0)
    ctx->pc = 0x304cfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBB48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB48u, _value); } while (0);
    // 0x304d00: 0xc0c1418  jal         func_305060
    ctx->pc = 0x304D00u;
    SET_GPR_U32(ctx, 31, 0x304D08u);
    ctx->pc = 0x304D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D00u;
    // 0x304d04: 0xac60bb4c  sw          $zero, -0x44B4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949708), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305060u, 0x304D00u, 0x304D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D08u;
label_304d08:
    // 0x304d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x304D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D0Cu;
        // 0x304d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304D14u;
    // 0x304d14: 0x0  nop
    ctx->pc = 0x304d14u;
    // NOP
    ctx->pc = 0x304d18u;
}
