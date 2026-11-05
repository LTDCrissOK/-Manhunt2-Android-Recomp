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

// Function: sub_002AC610
// Address: 0x2ac610 - 0x2ac6b0
void sub_002AC610_0x2ac610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC610_0x2ac610");
#endif

    switch (ctx->pc) {
        case 0x2ac638u: goto label_2ac638;
        case 0x2ac658u: goto label_2ac658;
        case 0x2ac690u: goto label_2ac690;
        default: break;
    }

    ctx->pc = 0x2ac610u;

    // 0x2ac610: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2ac610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2ac614: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2ac614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2ac618: 0x24472508  addiu       $a3, $v0, 0x2508
    ctx->pc = 0x2ac618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2ac61c: 0x9066dc68  lbu         $a2, -0x2398($v1)
    ctx->pc = 0x2ac61cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x46DC68u));
    // 0x2ac620: 0x24ea010c  addiu       $t2, $a3, 0x10C
    ctx->pc = 0x2ac620u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 268));
    // 0x2ac624: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ac624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac628: 0x240900b0  addiu       $t1, $zero, 0xB0
    ctx->pc = 0x2ac628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2ac62c: 0x240800b0  addiu       $t0, $zero, 0xB0
    ctx->pc = 0x2ac62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2ac630: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x2ac630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ac634: 0x0  nop
    ctx->pc = 0x2ac634u;
    // NOP
label_2ac638:
    // 0x2ac638: 0x882818  mult        $a1, $a0, $t0
    ctx->pc = 0x2ac638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ac63c: 0x244200ec  addiu       $v0, $v0, 0xEC
    ctx->pc = 0x2ac63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 236));
    // 0x2ac640: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x2ac640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2ac644: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2ac644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ac648: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2ac648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ac64c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ac64cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ac650: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ac650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ac654: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2ac654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2ac658:
    // 0x2ac658: 0xa066ffe8  sb          $a2, -0x18($v1)
    ctx->pc = 0x2ac658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967272), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ac65c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ac65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ac660: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ac660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ac664: 0x0  nop
    ctx->pc = 0x2ac664u;
    // NOP
    // 0x2ac668: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AC668u;
    {
        const bool branch_taken_0x2ac668 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2AC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC668u;
        // 0x2ac66c: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac668) {
            ctx->pc = 0x2AC658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac658;
        }
    }
    ctx->pc = 0x2AC670u;
    // 0x2ac670: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ac670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac674: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x2ac674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ac678: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2AC678u;
    {
        const bool branch_taken_0x2ac678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC678u;
        // 0x2ac67c: 0x891018  mult        $v0, $a0, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac678) {
            ctx->pc = 0x2AC638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac638;
        }
    }
    ctx->pc = 0x2AC680u;
    // 0x2ac680: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2ac680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2ac684: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ac684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ac688: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x2ac688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2ac68c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2ac68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ac690:
    // 0x2ac690: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ac690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ac694: 0x0  nop
    ctx->pc = 0x2ac694u;
    // NOP
    // 0x2ac698: 0x0  nop
    ctx->pc = 0x2ac698u;
    // NOP
    // 0x2ac69c: 0x0  nop
    ctx->pc = 0x2ac69cu;
    // NOP
    // 0x2ac6a0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AC6A0u;
    {
        const bool branch_taken_0x2ac6a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2AC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6A0u;
        // 0x2ac6a4: 0xac440094  sw          $a0, 0x94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6a0) {
            ctx->pc = 0x2AC690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac690;
        }
    }
    ctx->pc = 0x2AC6A8u;
    // 0x2ac6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC6B0u;
}
