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

// Function: sub_00380228
// Address: 0x380228 - 0x380270
void sub_00380228_0x380228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380228_0x380228");
#endif

    switch (ctx->pc) {
        case 0x380250u: goto label_380250;
        case 0x38025cu: goto label_38025c;
        default: break;
    }

    ctx->pc = 0x380228u;

    // 0x380228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38022c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x380230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x380230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x380234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x380234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38023c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x38023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x380240: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x380240u;
    {
        const bool branch_taken_0x380240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380240u;
        // 0x380244: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380240) {
            ctx->pc = 0x380250u;
            goto label_380250;
        }
    }
    ctx->pc = 0x380248u;
    // 0x380248: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x380248u;
    SET_GPR_U32(ctx, 31, 0x380250u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x380248u, 0x380250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380250u;
label_380250:
    // 0x380250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x380250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380254: 0xc0ded9a  jal         func_37B668
    ctx->pc = 0x380254u;
    SET_GPR_U32(ctx, 31, 0x38025Cu);
    ctx->pc = 0x380258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380254u;
    // 0x380258: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B668u, 0x380254u, 0x38025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38025Cu;
label_38025c:
    // 0x38025c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38025cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380260: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x380260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x380264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x380264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380268: 0x3e00008  jr          $ra
    ctx->pc = 0x380268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380268u;
        // 0x38026c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380270u;
}
