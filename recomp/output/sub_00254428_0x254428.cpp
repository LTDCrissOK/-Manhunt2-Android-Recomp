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

// Function: sub_00254428
// Address: 0x254428 - 0x254490
void sub_00254428_0x254428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254428_0x254428");
#endif

    switch (ctx->pc) {
        case 0x254454u: goto label_254454;
        case 0x254470u: goto label_254470;
        case 0x254478u: goto label_254478;
        default: break;
    }

    ctx->pc = 0x254428u;

    // 0x254428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25442c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254430: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254438: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x254438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x25443c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x25443cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x254440: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x254440u;
    {
        const bool branch_taken_0x254440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254440) {
            ctx->pc = 0x254444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254440u;
            // 0x254444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25447Cu;
            goto label_25447c;
        }
    }
    ctx->pc = 0x254448u;
    // 0x254448: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x254448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25444c: 0xc0944da  jal         func_251368
    ctx->pc = 0x25444Cu;
    SET_GPR_U32(ctx, 31, 0x254454u);
    ctx->pc = 0x254450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25444Cu;
    // 0x254450: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x25444Cu, 0x254454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254454u;
label_254454:
    // 0x254454: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x254454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x254458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25445c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x25445cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254460: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x254460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x254464: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x254464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x254468: 0xc061b42  jal         func_186D08
    ctx->pc = 0x254468u;
    SET_GPR_U32(ctx, 31, 0x254470u);
    ctx->pc = 0x25446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254468u;
    // 0x25446c: 0x8e051004  lw          $a1, 0x1004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D08u, 0x254468u, 0x254470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254470u;
label_254470:
    // 0x254470: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x254470u;
    SET_GPR_U32(ctx, 31, 0x254478u);
    ctx->pc = 0x254474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254470u;
    // 0x254474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x254470u, 0x254478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254478u;
label_254478:
    // 0x254478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25447c:
    // 0x25447c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25447cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254484: 0x3e00008  jr          $ra
    ctx->pc = 0x254484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254484u;
        // 0x254488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25448Cu;
    // 0x25448c: 0x0  nop
    ctx->pc = 0x25448cu;
    // NOP
    ctx->pc = 0x254490u;
}
