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

// Function: sub_003B7ED8
// Address: 0x3b7ed8 - 0x3b7f78
void sub_003B7ED8_0x3b7ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7ED8_0x3b7ed8");
#endif

    switch (ctx->pc) {
        case 0x3b7f08u: goto label_3b7f08;
        case 0x3b7f20u: goto label_3b7f20;
        case 0x3b7f2cu: goto label_3b7f2c;
        case 0x3b7f38u: goto label_3b7f38;
        case 0x3b7f40u: goto label_3b7f40;
        case 0x3b7f48u: goto label_3b7f48;
        case 0x3b7f58u: goto label_3b7f58;
        default: break;
    }

    ctx->pc = 0x3b7ed8u;

    // 0x3b7ed8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3b7edc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b7ee0: 0x8c43ac94  lw          $v1, -0x536C($v0)
    ctx->pc = 0x3b7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42AC94u));
    // 0x3b7ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b7ee8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B7EE8u;
    {
        const bool branch_taken_0x3b7ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7EE8u;
        // 0x3b7eec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7ee8) {
            ctx->pc = 0x3B7F10u;
            goto label_3b7f10;
        }
    }
    ctx->pc = 0x3B7EF0u;
    // 0x3b7ef0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3b7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3b7ef4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b7ef8: 0xac62ace0  sw          $v0, -0x5320($v1)
    ctx->pc = 0x3b7ef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x42ACE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42ACE0u, _value); } while (0);
    // 0x3b7efc: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3b7efcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3b7f00: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3B7F00u;
    SET_GPR_U32(ctx, 31, 0x3B7F08u);
    ctx->pc = 0x3B7F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F00u;
    // 0x3b7f04: 0x8e04aca0  lw          $a0, -0x5360($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3B7F00u, 0x3B7F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F08u;
label_3b7f08:
    // 0x3b7f08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7F08u;
    {
        const bool branch_taken_0x3b7f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F08u;
        // 0x3b7f0c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f08) {
            ctx->pc = 0x3B7F18u;
            goto label_3b7f18;
        }
    }
    ctx->pc = 0x3B7F10u;
label_3b7f10:
    // 0x3b7f10: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3b7f10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3b7f14: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3b7f18:
    // 0x3b7f18: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3B7F18u;
    SET_GPR_U32(ctx, 31, 0x3B7F20u);
    ctx->pc = 0x3B7F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F18u;
    // 0x3b7f1c: 0x8c44aca8  lw          $a0, -0x5358($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945960)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3B7F18u, 0x3B7F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F20u;
label_3b7f20:
    // 0x3b7f20: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3b7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3b7f24: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3B7F24u;
    SET_GPR_U32(ctx, 31, 0x3B7F2Cu);
    ctx->pc = 0x3B7F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F24u;
    // 0x3b7f28: 0x8c64acac  lw          $a0, -0x5354($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3B7F24u, 0x3B7F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F2Cu;
label_3b7f2c:
    // 0x3b7f2c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3b7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3b7f30: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3B7F30u;
    SET_GPR_U32(ctx, 31, 0x3B7F38u);
    ctx->pc = 0x3B7F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F30u;
    // 0x3b7f34: 0x8c64acb0  lw          $a0, -0x5350($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3B7F30u, 0x3B7F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F38u;
label_3b7f38:
    // 0x3b7f38: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3B7F38u;
    SET_GPR_U32(ctx, 31, 0x3B7F40u);
    ctx->pc = 0x3B7F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F38u;
    // 0x3b7f3c: 0x8e04aca0  lw          $a0, -0x5360($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3B7F38u, 0x3B7F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F40u;
label_3b7f40:
    // 0x3b7f40: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3B7F40u;
    SET_GPR_U32(ctx, 31, 0x3B7F48u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3B7F40u, 0x3B7F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F48u;
label_3b7f48:
    // 0x3b7f48: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b7f4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7f50: 0xc0f3172  jal         func_3CC5C8
    ctx->pc = 0x3B7F50u;
    SET_GPR_U32(ctx, 31, 0x3B7F58u);
    ctx->pc = 0x3B7F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F50u;
    // 0x3b7f54: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC5C8u, 0x3B7F50u, 0x3B7F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7F58u;
label_3b7f58:
    // 0x3b7f58: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7F58u;
    {
        const bool branch_taken_0x3b7f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F58u;
        // 0x3b7f5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7f58) {
            ctx->pc = 0x3B7F6Cu;
            goto label_3b7f6c;
        }
    }
    ctx->pc = 0x3B7F60u;
    // 0x3b7f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7f64: 0x80f401a  j           func_3D0068
    ctx->pc = 0x3B7F64u;
    ctx->pc = 0x3B7F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7F64u;
    // 0x3b7f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0068u;
    sub_003D0068_0x3d0068(rdram, ctx, runtime); return;
    ctx->pc = 0x3B7F6Cu;
label_3b7f6c:
    // 0x3b7f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7f70: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7F70u;
        // 0x3b7f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7F78u;
}
