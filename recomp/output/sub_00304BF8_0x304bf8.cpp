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

// Function: sub_00304BF8
// Address: 0x304bf8 - 0x304c88
void sub_00304BF8_0x304bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304BF8_0x304bf8");
#endif

    switch (ctx->pc) {
        case 0x304c1cu: goto label_304c1c;
        case 0x304c28u: goto label_304c28;
        case 0x304c34u: goto label_304c34;
        case 0x304c40u: goto label_304c40;
        case 0x304c4cu: goto label_304c4c;
        case 0x304c58u: goto label_304c58;
        case 0x304c64u: goto label_304c64;
        case 0x304c78u: goto label_304c78;
        default: break;
    }

    ctx->pc = 0x304bf8u;

    // 0x304bf8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x304bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x304bfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304c00: 0x8c622c4c  lw          $v0, 0x2C4C($v1)
    ctx->pc = 0x304c00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482C4Cu));
    // 0x304c04: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304c0c: 0x24846560  addiu       $a0, $a0, 0x6560
    ctx->pc = 0x304c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25952));
    // 0x304c10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304c14: 0xc0c128c  jal         func_304A30
    ctx->pc = 0x304C14u;
    SET_GPR_U32(ctx, 31, 0x304C1Cu);
    ctx->pc = 0x304C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C14u;
    // 0x304c18: 0xac622c4c  sw          $v0, 0x2C4C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 11340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A30u, 0x304C14u, 0x304C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C1Cu;
label_304c1c:
    // 0x304c1c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304c20: 0xc0c128c  jal         func_304A30
    ctx->pc = 0x304C20u;
    SET_GPR_U32(ctx, 31, 0x304C28u);
    ctx->pc = 0x304C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C20u;
    // 0x304c24: 0x24846580  addiu       $a0, $a0, 0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A30u, 0x304C20u, 0x304C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C28u;
label_304c28:
    // 0x304c28: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304c2c: 0xc0c128c  jal         func_304A30
    ctx->pc = 0x304C2Cu;
    SET_GPR_U32(ctx, 31, 0x304C34u);
    ctx->pc = 0x304C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C2Cu;
    // 0x304c30: 0x248465a0  addiu       $a0, $a0, 0x65A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A30u, 0x304C2Cu, 0x304C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C34u;
label_304c34:
    // 0x304c34: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304c38: 0xc0c128c  jal         func_304A30
    ctx->pc = 0x304C38u;
    SET_GPR_U32(ctx, 31, 0x304C40u);
    ctx->pc = 0x304C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C38u;
    // 0x304c3c: 0x24846620  addiu       $a0, $a0, 0x6620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A30u, 0x304C38u, 0x304C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C40u;
label_304c40:
    // 0x304c40: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304c44: 0xc0c128c  jal         func_304A30
    ctx->pc = 0x304C44u;
    SET_GPR_U32(ctx, 31, 0x304C4Cu);
    ctx->pc = 0x304C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C44u;
    // 0x304c48: 0x248465c0  addiu       $a0, $a0, 0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A30u, 0x304C44u, 0x304C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C4Cu;
label_304c4c:
    // 0x304c4c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304c50: 0xc0c128c  jal         func_304A30
    ctx->pc = 0x304C50u;
    SET_GPR_U32(ctx, 31, 0x304C58u);
    ctx->pc = 0x304C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C50u;
    // 0x304c54: 0x248465e0  addiu       $a0, $a0, 0x65E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A30u, 0x304C50u, 0x304C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C58u;
label_304c58:
    // 0x304c58: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304c5c: 0xc0c128c  jal         func_304A30
    ctx->pc = 0x304C5Cu;
    SET_GPR_U32(ctx, 31, 0x304C64u);
    ctx->pc = 0x304C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C5Cu;
    // 0x304c60: 0x24846600  addiu       $a0, $a0, 0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A30u, 0x304C5Cu, 0x304C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C64u;
label_304c64:
    // 0x304c64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x304c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x304c68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x304c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x304c6c: 0xac40bb48  sw          $zero, -0x44B8($v0)
    ctx->pc = 0x304c6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBB48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB48u, _value); } while (0);
    // 0x304c70: 0xc0c1418  jal         func_305060
    ctx->pc = 0x304C70u;
    SET_GPR_U32(ctx, 31, 0x304C78u);
    ctx->pc = 0x304C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C70u;
    // 0x304c74: 0xac60bb4c  sw          $zero, -0x44B4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949708), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305060u, 0x304C70u, 0x304C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C78u;
label_304c78:
    // 0x304c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x304C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C7Cu;
        // 0x304c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304C84u;
    // 0x304c84: 0x0  nop
    ctx->pc = 0x304c84u;
    // NOP
    ctx->pc = 0x304c88u;
}
