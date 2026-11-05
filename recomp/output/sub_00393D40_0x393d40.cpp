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

// Function: sub_00393D40
// Address: 0x393d40 - 0x393e18
void sub_00393D40_0x393d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393D40_0x393d40");
#endif

    switch (ctx->pc) {
        case 0x393d88u: goto label_393d88;
        case 0x393d9cu: goto label_393d9c;
        case 0x393db0u: goto label_393db0;
        case 0x393dc4u: goto label_393dc4;
        default: break;
    }

    ctx->pc = 0x393d40u;

    // 0x393d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x393d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x393d44: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393d48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x393d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x393d4c: 0x2490e200  addiu       $s0, $a0, -0x1E00
    ctx->pc = 0x393d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959616));
    // 0x393d50: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x393d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x393d54: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x393d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x393d58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x393d58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FE200u));
    // 0x393d5c: 0x24636500  addiu       $v1, $v1, 0x6500
    ctx->pc = 0x393d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25856));
    // 0x393d60: 0x2442a4c0  addiu       $v0, $v0, -0x5B40
    ctx->pc = 0x393d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943936));
    // 0x393d64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x393d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x393d68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x393d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x656500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656500u, _value); } while (0);
    // 0x393d6c: 0x54800025  bnel        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x393D6Cu;
    {
        const bool branch_taken_0x393d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x393d6c) {
            ctx->pc = 0x393D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393D6Cu;
            // 0x393d70: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393E04u;
            goto label_393e04;
        }
    }
    ctx->pc = 0x393D74u;
    // 0x393d74: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393d7c: 0x2484e208  addiu       $a0, $a0, -0x1DF8
    ctx->pc = 0x393d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959624));
    // 0x393d80: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x393D80u;
    SET_GPR_U32(ctx, 31, 0x393D88u);
    ctx->pc = 0x393D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393D80u;
    // 0x393d84: 0x24060340  addiu       $a2, $zero, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x393D80u, 0x393D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393D88u;
label_393d88:
    // 0x393d88: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393d8c: 0x2484e548  addiu       $a0, $a0, -0x1AB8
    ctx->pc = 0x393d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960456));
    // 0x393d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393d94: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x393D94u;
    SET_GPR_U32(ctx, 31, 0x393D9Cu);
    ctx->pc = 0x393D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393D94u;
    // 0x393d98: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x393D94u, 0x393D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393D9Cu;
label_393d9c:
    // 0x393d9c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393da0: 0x2484e950  addiu       $a0, $a0, -0x16B0
    ctx->pc = 0x393da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961488));
    // 0x393da4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x393da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x393da8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x393DA8u;
    SET_GPR_U32(ctx, 31, 0x393DB0u);
    ctx->pc = 0x393DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393DA8u;
    // 0x393dac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x393DA8u, 0x393DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393DB0u;
label_393db0:
    // 0x393db0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393db4: 0x2484ea50  addiu       $a0, $a0, -0x15B0
    ctx->pc = 0x393db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
    // 0x393db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393dbc: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x393DBCu;
    SET_GPR_U32(ctx, 31, 0x393DC4u);
    ctx->pc = 0x393DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393DBCu;
    // 0x393dc0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x393DBCu, 0x393DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393DC4u;
label_393dc4:
    // 0x393dc4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x393dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x393dc8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393dcc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x393dccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x393dd0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x393dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x393dd4: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x393dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x393dd8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x393dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x393ddc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x393ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x393de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x393de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x393de4: 0xaca3ea7c  sw          $v1, -0x1584($a1)
    ctx->pc = 0x393de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FEA7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA7Cu, _value); } while (0);
    // 0x393de8: 0xac82ea80  sw          $v0, -0x1580($a0)
    ctx->pc = 0x393de8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FEA80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA80u, _value); } while (0);
    // 0x393dec: 0xacc0ea70  sw          $zero, -0x1590($a2)
    ctx->pc = 0x393decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FEA70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA70u, _value); } while (0);
    // 0x393df0: 0xace0e948  sw          $zero, -0x16B8($a3)
    ctx->pc = 0x393df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FE948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FE948u, _value); } while (0);
    // 0x393df4: 0xad00ea74  sw          $zero, -0x158C($t0)
    ctx->pc = 0x393df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FEA74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA74u, _value); } while (0);
    // 0x393df8: 0xad20ea78  sw          $zero, -0x1588($t1)
    ctx->pc = 0x393df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FEA78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA78u, _value); } while (0);
    // 0x393dfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x393dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x393e00: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x393e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_393e04:
    // 0x393e04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x393e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x393e08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x393e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x393e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x393e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393e10: 0x3e00008  jr          $ra
    ctx->pc = 0x393E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E10u;
        // 0x393e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393E18u;
}
