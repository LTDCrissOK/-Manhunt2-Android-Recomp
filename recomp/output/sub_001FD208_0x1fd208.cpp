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

// Function: sub_001FD208
// Address: 0x1fd208 - 0x1fd250
void sub_001FD208_0x1fd208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD208_0x1fd208");
#endif

    switch (ctx->pc) {
        case 0x1fd228u: goto label_1fd228;
        case 0x1fd230u: goto label_1fd230;
        case 0x1fd23cu: goto label_1fd23c;
        default: break;
    }

    ctx->pc = 0x1fd208u;

    // 0x1fd208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd20c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd210: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fd210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fd214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd218: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fd218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1fd21c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd220: 0xc07d994  jal         func_1F6650
    ctx->pc = 0x1FD220u;
    SET_GPR_U32(ctx, 31, 0x1FD228u);
    ctx->pc = 0x1FD224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD220u;
    // 0x1fd224: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6650u, 0x1FD220u, 0x1FD228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD228u;
label_1fd228:
    // 0x1fd228: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1FD228u;
    SET_GPR_U32(ctx, 31, 0x1FD230u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1FD228u, 0x1FD230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD230u;
label_1fd230:
    // 0x1fd230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd234: 0xc081e84  jal         func_207A10
    ctx->pc = 0x1FD234u;
    SET_GPR_U32(ctx, 31, 0x1FD23Cu);
    ctx->pc = 0x1FD238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD234u;
    // 0x1fd238: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A10u, 0x1FD234u, 0x1FD23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD23Cu;
label_1fd23c:
    // 0x1fd23c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1fd23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1fd240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fd244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd248: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD248u;
        // 0x1fd24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD250u;
}
