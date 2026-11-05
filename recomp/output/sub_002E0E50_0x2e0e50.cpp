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

// Function: sub_002E0E50
// Address: 0x2e0e50 - 0x2e0ed8
void sub_002E0E50_0x2e0e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0E50_0x2e0e50");
#endif

    switch (ctx->pc) {
        case 0x2e0ea0u: goto label_2e0ea0;
        default: break;
    }

    ctx->pc = 0x2e0e50u;

    // 0x2e0e50: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e0e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e0e58: 0x90c20094  lbu         $v0, 0x94($a2)
    ctx->pc = 0x2e0e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x2e0e5c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0E5Cu;
    {
        const bool branch_taken_0x2e0e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0e5c) {
            ctx->pc = 0x2E0E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0E5Cu;
            // 0x2e0e60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0E64u;
            goto label_2e0e64;
        }
    }
    ctx->pc = 0x2E0E64u;
label_2e0e64:
    // 0x2e0e64: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x2e0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x2e0e68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e0e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0e70: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e0e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e74: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2e0e74u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e0e78: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2e0e78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0e7c: 0x2810  mfhi        $a1
    ctx->pc = 0x2e0e7cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2e0e80: 0xa0c50094  sb          $a1, 0x94($a2)
    ctx->pc = 0x2e0e80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 148), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e0e84: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2e0e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e0e88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e0e8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e0e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e0e90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e0e94: 0xacc00098  sw          $zero, 0x98($a2)
    ctx->pc = 0x2e0e94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 0));
    // 0x2e0e98: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e0e9c: 0x0  nop
    ctx->pc = 0x2e0e9cu;
    // NOP
label_2e0ea0:
    // 0x2e0ea0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2e0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2e0ea4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0ea8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0EA8u;
    {
        const bool branch_taken_0x2e0ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EA8u;
        // 0x2e0eac: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ea8) {
            ctx->pc = 0x2E0EB8u;
            goto label_2e0eb8;
        }
    }
    ctx->pc = 0x2E0EB0u;
    // 0x2e0eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EB0u;
        // 0x2e0eb4: 0xacc90098  sw          $t1, 0x98($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0EB8u;
label_2e0eb8:
    // 0x2e0eb8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2e0eb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0ebc: 0x2ce30005  sltiu       $v1, $a3, 0x5
    ctx->pc = 0x2e0ebcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e0ec0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E0EC0u;
    {
        const bool branch_taken_0x2e0ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EC0u;
        // 0x2e0ec4: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ec0) {
            ctx->pc = 0x2E0EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0ea0;
        }
    }
    ctx->pc = 0x2E0EC8u;
    // 0x2e0ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EC8u;
        // 0x2e0ecc: 0xacc000c4  sw          $zero, 0xC4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0ED0u;
    // 0x2e0ed0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e0ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e0ed4: 0x0  nop
    ctx->pc = 0x2e0ed4u;
    // NOP
    ctx->pc = 0x2e0ed8u;
}
