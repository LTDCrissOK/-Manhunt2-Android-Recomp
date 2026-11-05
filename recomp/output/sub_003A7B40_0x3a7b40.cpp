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

// Function: sub_003A7B40
// Address: 0x3a7b40 - 0x3a7bc0
void sub_003A7B40_0x3a7b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7B40_0x3a7b40");
#endif

    switch (ctx->pc) {
        case 0x3a7b50u: goto label_3a7b50;
        default: break;
    }

    ctx->pc = 0x3a7b40u;

    // 0x3a7b40: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a7b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7b44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7B44u;
    {
        const bool branch_taken_0x3a7b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B44u;
        // 0x3a7b48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7b44) {
            ctx->pc = 0x3A7B5Cu;
            goto label_3a7b5c;
        }
    }
    ctx->pc = 0x3A7B4Cu;
    // 0x3a7b4c: 0x0  nop
    ctx->pc = 0x3a7b4cu;
    // NOP
label_3a7b50:
    // 0x3a7b50: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x3a7b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a7b54: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a7b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a7b58: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x3a7b58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a7b5c:
    // 0x3a7b5c: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x3a7b5cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a7b60: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x3a7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x3a7b64: 0x24e3ffd0  addiu       $v1, $a3, -0x30
    ctx->pc = 0x3a7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x3a7b68: 0x24e4ff9f  addiu       $a0, $a3, -0x61
    ctx->pc = 0x3a7b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
    // 0x3a7b6c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a7b6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a7b70: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x3a7b70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a7b74: 0x2c840006  sltiu       $a0, $a0, 0x6
    ctx->pc = 0x3a7b74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a7b78: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A7B78u;
    {
        const bool branch_taken_0x3a7b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B78u;
        // 0x3a7b7c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7b78) {
            ctx->pc = 0x3A7B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7b50;
        }
    }
    ctx->pc = 0x3A7B80u;
    // 0x3a7b80: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7B80u;
    {
        const bool branch_taken_0x3a7b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7b80) {
            ctx->pc = 0x3A7B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7B80u;
            // 0x3a7b84: 0x24e2ffbf  addiu       $v0, $a3, -0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967231));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7B98u;
            goto label_3a7b98;
        }
    }
    ctx->pc = 0x3A7B88u;
    // 0x3a7b88: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x3a7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x3a7b8c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a7b8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a7b90: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3A7B90u;
    {
        const bool branch_taken_0x3a7b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B90u;
        // 0x3a7b94: 0x2442ffa9  addiu       $v0, $v0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7b90) {
            ctx->pc = 0x3A7B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7b50;
        }
    }
    ctx->pc = 0x3A7B98u;
label_3a7b98:
    // 0x3a7b98: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3a7b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a7b9c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A7B9Cu;
    {
        const bool branch_taken_0x3a7b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7b9c) {
            ctx->pc = 0x3A7BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7B9Cu;
            // 0x3a7ba0: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7BB8u;
            goto label_3a7bb8;
        }
    }
    ctx->pc = 0x3A7BA4u;
    // 0x3a7ba4: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x3a7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x3a7ba8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a7ba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a7bac: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3A7BACu;
    {
        const bool branch_taken_0x3a7bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7BACu;
        // 0x3a7bb0: 0x2442ffc9  addiu       $v0, $v0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7bac) {
            ctx->pc = 0x3A7B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7b50;
        }
    }
    ctx->pc = 0x3A7BB4u;
    // 0x3a7bb4: 0x0  nop
    ctx->pc = 0x3a7bb4u;
    // NOP
label_3a7bb8:
    // 0x3a7bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7BB8u;
        // 0x3a7bbc: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7BC0u;
}
