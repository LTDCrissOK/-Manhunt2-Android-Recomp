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

// Function: sub_0016B630
// Address: 0x16b630 - 0x16b690
void sub_0016B630_0x16b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B630_0x16b630");
#endif

    switch (ctx->pc) {
        case 0x16b650u: goto label_16b650;
        case 0x16b664u: goto label_16b664;
        case 0x16b670u: goto label_16b670;
        default: break;
    }

    ctx->pc = 0x16b630u;

    // 0x16b630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b638: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b63c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16b63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b644: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16b648: 0xc05ad86  jal         func_16B618
    ctx->pc = 0x16B648u;
    SET_GPR_U32(ctx, 31, 0x16B650u);
    ctx->pc = 0x16B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B648u;
    // 0x16b64c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B618u, 0x16B648u, 0x16B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B650u;
label_16b650:
    // 0x16b650: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B650u;
    {
        const bool branch_taken_0x16b650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B650u;
        // 0x16b654: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b650) {
            ctx->pc = 0x16B674u;
            goto label_16b674;
        }
    }
    ctx->pc = 0x16B658u;
    // 0x16b658: 0xae510150  sw          $s1, 0x150($s2)
    ctx->pc = 0x16b658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 17));
    // 0x16b65c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x16B65Cu;
    SET_GPR_U32(ctx, 31, 0x16B664u);
    ctx->pc = 0x16B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B65Cu;
    // 0x16b660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x16B65Cu, 0x16B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B664u;
label_16b664:
    // 0x16b664: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x16b664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x16b668: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x16B668u;
    SET_GPR_U32(ctx, 31, 0x16B670u);
    ctx->pc = 0x16B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B668u;
    // 0x16b66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x16B668u, 0x16B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B670u;
label_16b670:
    // 0x16b670: 0xae420144  sw          $v0, 0x144($s2)
    ctx->pc = 0x16b670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 2));
label_16b674:
    // 0x16b674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b67c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16b67cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b680: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16b680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b684: 0x3e00008  jr          $ra
    ctx->pc = 0x16B684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B684u;
        // 0x16b688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B68Cu;
    // 0x16b68c: 0x0  nop
    ctx->pc = 0x16b68cu;
    // NOP
    ctx->pc = 0x16b690u;
}
