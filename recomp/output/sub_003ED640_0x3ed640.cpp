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

// Function: sub_003ED640
// Address: 0x3ed640 - 0x3ed688
void sub_003ED640_0x3ed640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED640_0x3ed640");
#endif

    switch (ctx->pc) {
        case 0x3ed65cu: goto label_3ed65c;
        case 0x3ed674u: goto label_3ed674;
        default: break;
    }

    ctx->pc = 0x3ed640u;

    // 0x3ed640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ed640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ed644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ed644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ed648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ed648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed64c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ed64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ed650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ed650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ed654: 0xc0f6ace  jal         func_3DAB38
    ctx->pc = 0x3ED654u;
    SET_GPR_U32(ctx, 31, 0x3ED65Cu);
    ctx->pc = 0x3ED658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED654u;
    // 0x3ed658: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAB38u, 0x3ED654u, 0x3ED65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED65Cu;
label_3ed65c:
    // 0x3ed65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ed65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ed660: 0xa6110004  sh          $s1, 0x4($s0)
    ctx->pc = 0x3ed660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3ed664: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ed664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3ed668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed66c: 0xc0fb580  jal         func_3ED600
    ctx->pc = 0x3ED66Cu;
    SET_GPR_U32(ctx, 31, 0x3ED674u);
    ctx->pc = 0x3ED670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED66Cu;
    // 0x3ed670: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED600u, 0x3ED66Cu, 0x3ED674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED674u;
label_3ed674:
    // 0x3ed674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ed674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ed678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ed67c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ed67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ed680: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED680u;
        // 0x3ed684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED688u;
}
