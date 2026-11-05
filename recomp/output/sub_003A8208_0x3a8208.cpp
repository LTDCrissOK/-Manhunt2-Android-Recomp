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

// Function: sub_003A8208
// Address: 0x3a8208 - 0x3a8288
void sub_003A8208_0x3a8208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8208_0x3a8208");
#endif

    ctx->pc = 0x3a8208u;

    // 0x3a8208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a8208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a820c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a820cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8210: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8210u;
    {
        const bool branch_taken_0x3a8210 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8210u;
        // 0x3a8214: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8210) {
            ctx->pc = 0x3A8230u;
            goto label_3a8230;
        }
    }
    ctx->pc = 0x3A8218u;
    // 0x3a8218: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a8218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a821c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a821cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8220: 0x24a5e658  addiu       $a1, $a1, -0x19A8
    ctx->pc = 0x3a8220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960728));
    // 0x3a8224: 0x80e9ebe  j           func_3A7AF8
    ctx->pc = 0x3A8224u;
    ctx->pc = 0x3A8228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8224u;
    // 0x3a8228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AF8u;
    sub_003A7AF8_0x3a7af8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A822Cu;
    // 0x3a822c: 0x0  nop
    ctx->pc = 0x3a822cu;
    // NOP
label_3a8230:
    // 0x3a8230: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3a8230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3a8234: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x3a8234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3a8238: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3a8238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a823c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x3a823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3a8240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a8240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a8244: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3a8244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x3a8248: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x3a8248u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3a824c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A824Cu;
    {
        const bool branch_taken_0x3a824c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a824c) {
            ctx->pc = 0x3A8250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A824Cu;
            // 0x3a8250: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8254u;
            goto label_3a8254;
        }
    }
    ctx->pc = 0x3A8254u;
label_3a8254:
    // 0x3a8254: 0x1012  mflo        $v0
    ctx->pc = 0x3a8254u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3a8258: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3a8258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a825c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x3a825cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x3a8260: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x3a8260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3a8264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a8264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8268: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x3a8268u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3a826c: 0x1812  mflo        $v1
    ctx->pc = 0x3a826cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3a8270: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3a8270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a8274: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x3a8274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x3a8278: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x3a8278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x3a827c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A827Cu;
        // 0x3a8280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8284u;
    // 0x3a8284: 0x0  nop
    ctx->pc = 0x3a8284u;
    // NOP
    ctx->pc = 0x3a8288u;
}
