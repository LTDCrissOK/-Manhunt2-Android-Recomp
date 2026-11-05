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

// Function: sub_00285CF8
// Address: 0x285cf8 - 0x285d90
void sub_00285CF8_0x285cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285CF8_0x285cf8");
#endif

    switch (ctx->pc) {
        case 0x285d20u: goto label_285d20;
        case 0x285d68u: goto label_285d68;
        default: break;
    }

    ctx->pc = 0x285cf8u;

    // 0x285cf8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x285cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x285cfc: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x285cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x285d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x285d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d04: 0xac402bdc  sw          $zero, 0x2BDC($v0)
    ctx->pc = 0x285d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482BDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BDCu, _value); } while (0);
    // 0x285d08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x285d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d0c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x285d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d10: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x285d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x285d14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x285d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285d18: 0x8d222bc8  lw          $v0, 0x2BC8($t1)
    ctx->pc = 0x285d18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482BC8u));
    // 0x285d1c: 0x0  nop
    ctx->pc = 0x285d1cu;
    // NOP
label_285d20:
    // 0x285d20: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x285d20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285d24: 0x50680006  beql        $v1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285D24u;
    {
        const bool branch_taken_0x285d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x285d24) {
            ctx->pc = 0x285D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D24u;
            // 0x285d28: 0xac872bdc  sw          $a3, 0x2BDC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 11228), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D40u;
            goto label_285d40;
        }
    }
    ctx->pc = 0x285D2Cu;
    // 0x285d2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285D2Cu;
    {
        const bool branch_taken_0x285d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D2Cu;
        // 0x285d30: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d2c) {
            ctx->pc = 0x285D3Cu;
            goto label_285d3c;
        }
    }
    ctx->pc = 0x285D34u;
    // 0x285d34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285D34u;
    {
        const bool branch_taken_0x285d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D34u;
        // 0x285d38: 0xacc22bc8  sw          $v0, 0x2BC8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 11208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d34) {
            ctx->pc = 0x285D40u;
            goto label_285d40;
        }
    }
    ctx->pc = 0x285D3Cu;
label_285d3c:
    // 0x285d3c: 0xac872bdc  sw          $a3, 0x2BDC($a0)
    ctx->pc = 0x285d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11228), GPR_U32(ctx, 7));
label_285d40:
    // 0x285d40: 0x8c822bdc  lw          $v0, 0x2BDC($a0)
    ctx->pc = 0x285d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11228)));
    // 0x285d44: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x285D44u;
    {
        const bool branch_taken_0x285d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D44u;
        // 0x285d48: 0x8d222bc8  lw          $v0, 0x2BC8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d44) {
            ctx->pc = 0x285D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285d20;
        }
    }
    ctx->pc = 0x285D4Cu;
    // 0x285d4c: 0x8ca22bdc  lw          $v0, 0x2BDC($a1)
    ctx->pc = 0x285d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11228)));
    // 0x285d50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x285D50u;
    {
        const bool branch_taken_0x285d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D50u;
        // 0x285d54: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d50) {
            ctx->pc = 0x285D88u;
            goto label_285d88;
        }
    }
    ctx->pc = 0x285D58u;
    // 0x285d58: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x285d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x285d5c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x285d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x285d60: 0x8ce32bc8  lw          $v1, 0x2BC8($a3)
    ctx->pc = 0x285d60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482BC8u));
    // 0x285d64: 0x0  nop
    ctx->pc = 0x285d64u;
    // NOP
label_285d68:
    // 0x285d68: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x285d68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x285d6c: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285D6Cu;
    {
        const bool branch_taken_0x285d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x285d6c) {
            ctx->pc = 0x285D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D6Cu;
            // 0x285d70: 0xac802bdc  sw          $zero, 0x2BDC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 11228), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D7Cu;
            goto label_285d7c;
        }
    }
    ctx->pc = 0x285D74u;
    // 0x285d74: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x285d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285d78: 0xacc22bc8  sw          $v0, 0x2BC8($a2)
    ctx->pc = 0x285d78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11208), GPR_U32(ctx, 2));
label_285d7c:
    // 0x285d7c: 0x8c822bdc  lw          $v0, 0x2BDC($a0)
    ctx->pc = 0x285d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11228)));
    // 0x285d80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x285D80u;
    {
        const bool branch_taken_0x285d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D80u;
        // 0x285d84: 0x8ce32bc8  lw          $v1, 0x2BC8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d80) {
            ctx->pc = 0x285D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285d68;
        }
    }
    ctx->pc = 0x285D88u;
label_285d88:
    // 0x285d88: 0x3e00008  jr          $ra
    ctx->pc = 0x285D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285D90u;
}
