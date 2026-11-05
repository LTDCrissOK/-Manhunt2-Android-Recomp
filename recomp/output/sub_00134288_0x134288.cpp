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

// Function: sub_00134288
// Address: 0x134288 - 0x1342d0
void sub_00134288_0x134288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134288_0x134288");
#endif

    switch (ctx->pc) {
        case 0x1342acu: goto label_1342ac;
        case 0x1342bcu: goto label_1342bc;
        default: break;
    }

    ctx->pc = 0x134288u;

    // 0x134288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13428c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134290: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x134294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134298: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x134298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x13429c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13429Cu;
    {
        const bool branch_taken_0x13429c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13429c) {
            ctx->pc = 0x1342A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13429Cu;
            // 0x1342a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1342C4u;
            goto label_1342c4;
        }
    }
    ctx->pc = 0x1342A4u;
    // 0x1342a4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1342A4u;
    SET_GPR_U32(ctx, 31, 0x1342ACu);
    ctx->pc = 0x1344A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344A0u, 0x1342A4u, 0x1342ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342ACu;
label_1342ac:
    // 0x1342ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1342acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1342b0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1342b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1342b4: 0xc042112  jal         func_108448
    ctx->pc = 0x1342B4u;
    SET_GPR_U32(ctx, 31, 0x1342BCu);
    ctx->pc = 0x1342B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342B4u;
    // 0x1342b8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108448u, 0x1342B4u, 0x1342BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342BCu;
label_1342bc:
    // 0x1342bc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1342bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1342c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1342c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1342c4:
    // 0x1342c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1342c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1342c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1342C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1342CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342C8u;
        // 0x1342cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1342C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1342D0u;
}
