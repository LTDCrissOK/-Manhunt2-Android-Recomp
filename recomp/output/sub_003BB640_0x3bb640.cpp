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

// Function: sub_003BB640
// Address: 0x3bb640 - 0x3bb698
void sub_003BB640_0x3bb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB640_0x3bb640");
#endif

    switch (ctx->pc) {
        case 0x3bb650u: goto label_3bb650;
        case 0x3bb668u: goto label_3bb668;
        default: break;
    }

    ctx->pc = 0x3bb640u;

    // 0x3bb640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb648: 0xc0eed54  jal         func_3BB550
    ctx->pc = 0x3BB648u;
    SET_GPR_U32(ctx, 31, 0x3BB650u);
    ctx->pc = 0x3BB550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB550u, 0x3BB648u, 0x3BB650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB650u;
label_3bb650:
    // 0x3bb650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB650u;
    {
        const bool branch_taken_0x3bb650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB650u;
        // 0x3bb654: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb650) {
            ctx->pc = 0x3BB660u;
            goto label_3bb660;
        }
    }
    ctx->pc = 0x3BB658u;
    // 0x3bb658: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB658u;
    {
        const bool branch_taken_0x3bb658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB658u;
        // 0x3bb65c: 0x8442c900  lh          $v0, -0x3700($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb658) {
            ctx->pc = 0x3BB680u;
            goto label_3bb680;
        }
    }
    ctx->pc = 0x3BB660u;
label_3bb660:
    // 0x3bb660: 0xc0f2694  jal         func_3C9A50
    ctx->pc = 0x3BB660u;
    SET_GPR_U32(ctx, 31, 0x3BB668u);
    ctx->pc = 0x3BB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB660u;
    // 0x3bb664: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A50u, 0x3BB660u, 0x3BB668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB668u;
label_3bb668:
    // 0x3bb668: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3bb668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb66c: 0x2404021c  addiu       $a0, $zero, 0x21C
    ctx->pc = 0x3bb66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x3bb670: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x3bb670u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x3bb674: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x3bb674u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x3bb678: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3bb678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3bb67c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3bb67cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_3bb680:
    // 0x3bb680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb684: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB684u;
        // 0x3bb688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB68Cu;
    // 0x3bb68c: 0x0  nop
    ctx->pc = 0x3bb68cu;
    // NOP
    // 0x3bb690: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3bb690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3bb694: 0x0  nop
    ctx->pc = 0x3bb694u;
    // NOP
    ctx->pc = 0x3bb698u;
}
