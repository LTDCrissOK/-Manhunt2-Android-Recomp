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

// Function: sub_00282138
// Address: 0x282138 - 0x282190
void sub_00282138_0x282138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282138_0x282138");
#endif

    switch (ctx->pc) {
        case 0x282170u: goto label_282170;
        default: break;
    }

    ctx->pc = 0x282138u;

    // 0x282138: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x282138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28213c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x28213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x282140: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x282140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x282144: 0xdc620020  ld          $v0, 0x20($v1)
    ctx->pc = 0x282144u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x282148: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x282148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x28214c: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x28214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x282150: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x282150u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x282154: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x282154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x282158: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x282158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28215c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x28215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282160: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x282160u;
    {
        const bool branch_taken_0x282160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x282164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282160u;
        // 0x282164: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282160) {
            ctx->pc = 0x282188u;
            goto label_282188;
        }
    }
    ctx->pc = 0x282168u;
    // 0x282168: 0x2446f620  addiu       $a2, $v0, -0x9E0
    ctx->pc = 0x282168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964768));
    // 0x28216c: 0x0  nop
    ctx->pc = 0x28216cu;
    // NOP
label_282170:
    // 0x282170: 0x94a30020  lhu         $v1, 0x20($a1)
    ctx->pc = 0x282170u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x282174: 0x8cc200b8  lw          $v0, 0xB8($a2)
    ctx->pc = 0x282174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x282178: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x282178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x28217c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282180: 0x14a4fffb  bne         $a1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x282180u;
    {
        const bool branch_taken_0x282180 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x282184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282180u;
        // 0x282184: 0xacc200b8  sw          $v0, 0xB8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282180) {
            ctx->pc = 0x282170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282170;
        }
    }
    ctx->pc = 0x282188u;
label_282188:
    // 0x282188: 0x3e00008  jr          $ra
    ctx->pc = 0x282188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282188u;
        // 0x28218c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282190u;
}
