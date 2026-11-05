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

// Function: sub_003715D0
// Address: 0x3715d0 - 0x371660
void sub_003715D0_0x3715d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003715D0_0x3715d0");
#endif

    ctx->pc = 0x3715d0u;

    // 0x3715d0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x3715d0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x3715d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3715d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3715d8: 0x8440034  j           func_11000D0
    ctx->pc = 0x3715D8u;
    ctx->pc = 0x3715DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715D8u;
    // 0x3715dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x3715D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3715E0u;
    // 0x3715e0: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x3715e0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x3715e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3715e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3715e8: 0x9020033  j           func_40800CC
    ctx->pc = 0x3715E8u;
    ctx->pc = 0x3715ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715E8u;
    // 0x3715ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x3715E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3715F0u;
    // 0x3715f0: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x3715f0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x3715f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3715f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3715f8: 0x8230033  j           func_8C00CC
    ctx->pc = 0x3715F8u;
    ctx->pc = 0x3715FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715F8u;
    // 0x3715fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8C00CCu, 0x3715F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x371600u;
    // 0x371600: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x371600u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x371604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x371604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x371608: 0x8240034  j           func_9000D0
    ctx->pc = 0x371608u;
    ctx->pc = 0x37160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371608u;
    // 0x37160c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x371608u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x371610u;
    // 0x371610: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x371610u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x371614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x371614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x371618: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x371618u;
    {
        const bool branch_taken_0x371618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371618u;
        // 0x37161c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371618) {
            ctx->pc = 0x379620u;
            return;
        }
    }
    ctx->pc = 0x371620u;
    // 0x371620: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x371620u;
    ctx->pc = 0x371624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371620u;
    // 0x371624: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x371620u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x371628u;
    // 0x371628: 0x80030870  lb          $v1, 0x870($zero)
    ctx->pc = 0x371628u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x870u));
    // 0x37162c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37162cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x371630: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x371630u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x371634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x371634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x371638: 0x3e41801  .word       0x03E41801                   # INVALID     $ra, $a0, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x371638u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x371638 raw=0x03E41801");
    // 0x37163c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37163cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x371640: 0x52011ffd  beql        $s0, $at, . + 4 + (0x1FFD << 2)
    ctx->pc = 0x371640u;
    {
        const bool branch_taken_0x371640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x371640) {
            ctx->pc = 0x371644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371640u;
            // 0x371644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379638u;
            return;
        }
    }
    ctx->pc = 0x371648u;
    // 0x371648: 0x800420f2  lb          $a0, 0x20F2($zero)
    ctx->pc = 0x371648u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x20F2u));
    // 0x37164c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37164cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x371650: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x371650u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x371650 raw=0x48007800");
    // 0x371654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x371654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x371658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x371658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37165c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37165cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x371660u;
}
