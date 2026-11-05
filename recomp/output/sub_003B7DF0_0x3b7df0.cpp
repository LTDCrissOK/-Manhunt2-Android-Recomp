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

// Function: sub_003B7DF0
// Address: 0x3b7df0 - 0x3b7ed8
void sub_003B7DF0_0x3b7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7DF0_0x3b7df0");
#endif

    switch (ctx->pc) {
        case 0x3b7e60u: goto label_3b7e60;
        case 0x3b7e78u: goto label_3b7e78;
        case 0x3b7e90u: goto label_3b7e90;
        case 0x3b7eacu: goto label_3b7eac;
        default: break;
    }

    ctx->pc = 0x3b7df0u;

    // 0x3b7df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b7df4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b7df8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3b7df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3b7dfc: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x3b7dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x3b7e00: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b7e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b7e04: 0x8e22aca8  lw          $v0, -0x5358($s1)
    ctx->pc = 0x3b7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42ACA8u));
    // 0x3b7e08: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3b7e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3b7e0c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B7E0Cu;
    {
        const bool branch_taken_0x3b7e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E0Cu;
        // 0x3b7e10: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e0c) {
            ctx->pc = 0x3B7E38u;
            goto label_3b7e38;
        }
    }
    ctx->pc = 0x3B7E14u;
    // 0x3b7e14: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3b7e14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3b7e18: 0x8e02acac  lw          $v0, -0x5354($s0)
    ctx->pc = 0x3b7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42ACACu));
    // 0x3b7e1c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B7E1Cu;
    {
        const bool branch_taken_0x3b7e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E1Cu;
        // 0x3b7e20: 0x3c120043  lui         $s2, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e1c) {
            ctx->pc = 0x3B7E3Cu;
            goto label_3b7e3c;
        }
    }
    ctx->pc = 0x3B7E24u;
    // 0x3b7e24: 0x8e42acb0  lw          $v0, -0x5350($s2)
    ctx->pc = 0x3b7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945968)));
    // 0x3b7e28: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3B7E28u;
    {
        const bool branch_taken_0x3b7e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E28u;
        // 0x3b7e2c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e28) {
            ctx->pc = 0x3B7EC0u;
            goto label_3b7ec0;
        }
    }
    ctx->pc = 0x3B7E30u;
    // 0x3b7e30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7E30u;
    {
        const bool branch_taken_0x3b7e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E30u;
        // 0x3b7e34: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e30) {
            ctx->pc = 0x3B7E44u;
            goto label_3b7e44;
        }
    }
    ctx->pc = 0x3B7E38u;
label_3b7e38:
    // 0x3b7e38: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3b7e38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
label_3b7e3c:
    // 0x3b7e3c: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x3b7e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x3b7e40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3b7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3b7e44:
    // 0x3b7e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7e48: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x3b7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x3b7e4c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3b7e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3b7e50: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b7e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b7e54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b7e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7e58: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3B7E58u;
    SET_GPR_U32(ctx, 31, 0x3B7E60u);
    ctx->pc = 0x3B7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7E58u;
    // 0x3b7e5c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3B7E58u, 0x3B7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7E60u;
label_3b7e60:
    // 0x3b7e60: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3b7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3b7e64: 0xae22aca8  sw          $v0, -0x5358($s1)
    ctx->pc = 0x3b7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945960), GPR_U32(ctx, 2));
    // 0x3b7e68: 0x246306a8  addiu       $v1, $v1, 0x6A8
    ctx->pc = 0x3b7e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1704));
    // 0x3b7e6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b7e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7e70: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3B7E70u;
    SET_GPR_U32(ctx, 31, 0x3B7E78u);
    ctx->pc = 0x3B7E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7E70u;
    // 0x3b7e74: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3B7E70u, 0x3B7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7E78u;
label_3b7e78:
    // 0x3b7e78: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3b7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3b7e7c: 0xae02acac  sw          $v0, -0x5354($s0)
    ctx->pc = 0x3b7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945964), GPR_U32(ctx, 2));
    // 0x3b7e80: 0x246306b8  addiu       $v1, $v1, 0x6B8
    ctx->pc = 0x3b7e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
    // 0x3b7e84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b7e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7e88: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3B7E88u;
    SET_GPR_U32(ctx, 31, 0x3B7E90u);
    ctx->pc = 0x3B7E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7E88u;
    // 0x3b7e8c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3B7E88u, 0x3B7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7E90u;
label_3b7e90:
    // 0x3b7e90: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3b7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3b7e94: 0xae42acb0  sw          $v0, -0x5350($s2)
    ctx->pc = 0x3b7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945968), GPR_U32(ctx, 2));
    // 0x3b7e98: 0x246306c8  addiu       $v1, $v1, 0x6C8
    ctx->pc = 0x3b7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1736));
    // 0x3b7e9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b7e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7ea0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3b7ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3b7ea4: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3B7EA4u;
    SET_GPR_U32(ctx, 31, 0x3B7EACu);
    ctx->pc = 0x3B7EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7EA4u;
    // 0x3b7ea8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3B7EA4u, 0x3B7EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7EACu;
label_3b7eac:
    // 0x3b7eac: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3b7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3b7eb0: 0xac62aca0  sw          $v0, -0x5360($v1)
    ctx->pc = 0x3b7eb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x42ACA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42ACA0u, _value); } while (0);
    // 0x3b7eb4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3b7eb8: 0xac40acb4  sw          $zero, -0x534C($v0)
    ctx->pc = 0x3b7eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x42ACB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42ACB4u, _value); } while (0);
    // 0x3b7ebc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b7ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b7ec0:
    // 0x3b7ec0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3b7ec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b7ec4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3b7ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7ec8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b7ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7ECCu;
        // 0x3b7ed0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7ED4u;
    // 0x3b7ed4: 0x0  nop
    ctx->pc = 0x3b7ed4u;
    // NOP
    ctx->pc = 0x3b7ed8u;
}
