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

// Function: sub_002CB250
// Address: 0x2cb250 - 0x2cb2f8
void sub_002CB250_0x2cb250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB250_0x2cb250");
#endif

    ctx->pc = 0x2cb250u;

    // 0x2cb250: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2cb250u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb254: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2cb254u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb258: 0x8d430048  lw          $v1, 0x48($t2)
    ctx->pc = 0x2cb258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x2cb25c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2cb25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb260: 0x8d4b004c  lw          $t3, 0x4C($t2)
    ctx->pc = 0x2cb260u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x2cb264: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x2cb264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2cb268: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CB268u;
    {
        const bool branch_taken_0x2cb268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb268) {
            ctx->pc = 0x2CB26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB268u;
            // 0x2cb26c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB270u;
            goto label_2cb270;
        }
    }
    ctx->pc = 0x2CB270u;
label_2cb270:
    // 0x2cb270: 0x12b4823  subu        $t1, $t1, $t3
    ctx->pc = 0x2cb270u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2cb274: 0x6b2023  subu        $a0, $v1, $t3
    ctx->pc = 0x2cb274u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2cb278: 0x2529fc00  addiu       $t1, $t1, -0x400
    ctx->pc = 0x2cb278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966272));
    // 0x2cb27c: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x2cb27cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cb280: 0x1010  mfhi        $v0
    ctx->pc = 0x2cb280u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cb284: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2cb284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb288: 0x109402a  slt         $t0, $t0, $t1
    ctx->pc = 0x2cb288u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2cb28c: 0x252203ff  addiu       $v0, $t1, 0x3FF
    ctx->pc = 0x2cb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1023));
    // 0x2cb290: 0x128100b  movn        $v0, $t1, $t0
    ctx->pc = 0x2cb290u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x2cb294: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x2cb294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x2cb298: 0x24a80  sll         $t1, $v0, 10
    ctx->pc = 0x2cb298u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2cb29c: 0x89202a  slt         $a0, $a0, $t1
    ctx->pc = 0x2cb29cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2cb2a0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB2A0u;
    {
        const bool branch_taken_0x2cb2a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2A0u;
        // 0x2cb2a4: 0x8d420044  lw          $v0, 0x44($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2a0) {
            ctx->pc = 0x2CB2C0u;
            goto label_2cb2c0;
        }
    }
    ctx->pc = 0x2CB2A8u;
    // 0x2cb2a8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2cb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2cb2ac: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2cb2acu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2cb2b0: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x2cb2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x2cb2b4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2cb2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2cb2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2B8u;
        // 0x2cb2bc: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB2C0u;
label_2cb2c0:
    // 0x2cb2c0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2cb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2cb2c4: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2cb2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2cb2c8: 0x8d42004c  lw          $v0, 0x4C($t2)
    ctx->pc = 0x2cb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x2cb2cc: 0x8d430048  lw          $v1, 0x48($t2)
    ctx->pc = 0x2cb2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x2cb2d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cb2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cb2d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2cb2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2cb2d8: 0x8d420044  lw          $v0, 0x44($t2)
    ctx->pc = 0x2cb2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 68)));
    // 0x2cb2dc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2cb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2cb2e0: 0x8d43004c  lw          $v1, 0x4C($t2)
    ctx->pc = 0x2cb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x2cb2e4: 0x8d420048  lw          $v0, 0x48($t2)
    ctx->pc = 0x2cb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x2cb2e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2cb2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb2ec: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x2cb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2cb2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2F0u;
        // 0x2cb2f4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB2F8u;
}
