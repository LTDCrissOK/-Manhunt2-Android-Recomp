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

// Function: sub_00393E18
// Address: 0x393e18 - 0x393ee0
void sub_00393E18_0x393e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393E18_0x393e18");
#endif

    switch (ctx->pc) {
        case 0x393e40u: goto label_393e40;
        case 0x393e8cu: goto label_393e8c;
        case 0x393ea0u: goto label_393ea0;
        case 0x393eb4u: goto label_393eb4;
        default: break;
    }

    ctx->pc = 0x393e18u;

    // 0x393e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x393e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x393e1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x393e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x393e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x393e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x393e24: 0x2463e200  addiu       $v1, $v1, -0x1E00
    ctx->pc = 0x393e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959616));
    // 0x393e28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x393e28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FE200u));
    // 0x393e2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x393e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x393e30: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x393E30u;
    {
        const bool branch_taken_0x393e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E30u;
        // 0x393e34: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393e30) {
            ctx->pc = 0x393ED0u;
            goto label_393ed0;
        }
    }
    ctx->pc = 0x393E38u;
    // 0x393e38: 0xc0e540c  jal         func_395030
    ctx->pc = 0x393E38u;
    SET_GPR_U32(ctx, 31, 0x393E40u);
    ctx->pc = 0x395030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395030u, 0x393E38u, 0x393E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E40u;
label_393e40:
    // 0x393e40: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x393e40u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
    // 0x393e44: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393e48: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x393e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x393e4c: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x393e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x393e50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x393e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x393e54: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x393e54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x393e58: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x393e58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x393e5c: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x393e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x393e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393e64: 0x2484ea50  addiu       $a0, $a0, -0x15B0
    ctx->pc = 0x393e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
    // 0x393e68: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x393e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x393e6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x393e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x393e70: 0xad8aea80  sw          $t2, -0x1580($t4)
    ctx->pc = 0x393e70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3FEA80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA80u, _value); } while (0);
    // 0x393e74: 0xad62ea7c  sw          $v0, -0x1584($t3)
    ctx->pc = 0x393e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FEA7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA7Cu, _value); } while (0);
    // 0x393e78: 0xac60ea78  sw          $zero, -0x1588($v1)
    ctx->pc = 0x393e78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FEA78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA78u, _value); } while (0);
    // 0x393e7c: 0xace0ea74  sw          $zero, -0x158C($a3)
    ctx->pc = 0x393e7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FEA74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FEA74u, _value); } while (0);
    // 0x393e80: 0xad00e948  sw          $zero, -0x16B8($t0)
    ctx->pc = 0x393e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FE948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FE948u, _value); } while (0);
    // 0x393e84: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x393E84u;
    SET_GPR_U32(ctx, 31, 0x393E8Cu);
    ctx->pc = 0x393E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E84u;
    // 0x393e88: 0xad20ea70  sw          $zero, -0x1590($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294961776), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x393E84u, 0x393E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E8Cu;
label_393e8c:
    // 0x393e8c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393e90: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x393e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x393e94: 0x2484e950  addiu       $a0, $a0, -0x16B0
    ctx->pc = 0x393e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961488));
    // 0x393e98: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x393E98u;
    SET_GPR_U32(ctx, 31, 0x393EA0u);
    ctx->pc = 0x393E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E98u;
    // 0x393e9c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x393E98u, 0x393EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EA0u;
label_393ea0:
    // 0x393ea0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393ea4: 0x2484e548  addiu       $a0, $a0, -0x1AB8
    ctx->pc = 0x393ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960456));
    // 0x393ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393eac: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x393EACu;
    SET_GPR_U32(ctx, 31, 0x393EB4u);
    ctx->pc = 0x393EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393EACu;
    // 0x393eb0: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x393EACu, 0x393EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EB4u;
label_393eb4:
    // 0x393eb4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393ebc: 0x2484e208  addiu       $a0, $a0, -0x1DF8
    ctx->pc = 0x393ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959624));
    // 0x393ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393ec4: 0x24060340  addiu       $a2, $zero, 0x340
    ctx->pc = 0x393ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
    // 0x393ec8: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x393EC8u;
    ctx->pc = 0x393ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393EC8u;
    // 0x393ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x393ED0u;
label_393ed0:
    // 0x393ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x393ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393ED4u;
        // 0x393ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393EDCu;
    // 0x393edc: 0x0  nop
    ctx->pc = 0x393edcu;
    // NOP
    ctx->pc = 0x393ee0u;
}
