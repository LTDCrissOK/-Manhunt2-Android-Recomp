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

// Function: sub_00338158
// Address: 0x338158 - 0x3381a0
void sub_00338158_0x338158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338158_0x338158");
#endif

    switch (ctx->pc) {
        case 0x338174u: goto label_338174;
        case 0x338188u: goto label_338188;
        default: break;
    }

    ctx->pc = 0x338158u;

    // 0x338158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33815c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x338164: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x338164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33816c: 0xc0ce068  jal         func_3381A0
    ctx->pc = 0x33816Cu;
    SET_GPR_U32(ctx, 31, 0x338174u);
    ctx->pc = 0x338170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33816Cu;
    // 0x338170: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3381A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3381A0u, 0x33816Cu, 0x338174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338174u;
label_338174:
    // 0x338174: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338174u;
    {
        const bool branch_taken_0x338174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338174u;
        // 0x338178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338174) {
            ctx->pc = 0x338188u;
            goto label_338188;
        }
    }
    ctx->pc = 0x33817Cu;
    // 0x33817c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33817cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338180: 0xc0ce02e  jal         func_3380B8
    ctx->pc = 0x338180u;
    SET_GPR_U32(ctx, 31, 0x338188u);
    ctx->pc = 0x338184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338180u;
    // 0x338184: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3380B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3380B8u, 0x338180u, 0x338188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338188u;
label_338188:
    // 0x338188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33818c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33818cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338194: 0x3e00008  jr          $ra
    ctx->pc = 0x338194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338194u;
        // 0x338198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33819Cu;
    // 0x33819c: 0x0  nop
    ctx->pc = 0x33819cu;
    // NOP
    ctx->pc = 0x3381a0u;
}
