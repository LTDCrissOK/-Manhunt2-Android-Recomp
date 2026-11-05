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

// Function: sub_0038E630
// Address: 0x38e630 - 0x38e6d0
void sub_0038E630_0x38e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E630_0x38e630");
#endif

    switch (ctx->pc) {
        case 0x38e660u: goto label_38e660;
        case 0x38e66cu: goto label_38e66c;
        case 0x38e678u: goto label_38e678;
        case 0x38e684u: goto label_38e684;
        case 0x38e690u: goto label_38e690;
        case 0x38e69cu: goto label_38e69c;
        case 0x38e6a8u: goto label_38e6a8;
        case 0x38e6b8u: goto label_38e6b8;
        default: break;
    }

    ctx->pc = 0x38e630u;

    // 0x38e630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38e634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38e63c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e648: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x38e648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x38e64c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x38e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
    // 0x38e650: 0xae030864  sw          $v1, 0x864($s0)
    ctx->pc = 0x38e650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 3));
    // 0x38e654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38e658: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E658u;
    SET_GPR_U32(ctx, 31, 0x38E660u);
    ctx->pc = 0x38E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E658u;
    // 0x38e65c: 0xae02085c  sw          $v0, 0x85C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E658u, 0x38E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E660u;
label_38e660:
    // 0x38e660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e664: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E664u;
    SET_GPR_U32(ctx, 31, 0x38E66Cu);
    ctx->pc = 0x38E668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E664u;
    // 0x38e668: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E664u, 0x38E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E66Cu;
label_38e66c:
    // 0x38e66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e670: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E670u;
    SET_GPR_U32(ctx, 31, 0x38E678u);
    ctx->pc = 0x38E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E670u;
    // 0x38e674: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E670u, 0x38E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E678u;
label_38e678:
    // 0x38e678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e67c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E67Cu;
    SET_GPR_U32(ctx, 31, 0x38E684u);
    ctx->pc = 0x38E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E67Cu;
    // 0x38e680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E67Cu, 0x38E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E684u;
label_38e684:
    // 0x38e684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e688: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E688u;
    SET_GPR_U32(ctx, 31, 0x38E690u);
    ctx->pc = 0x38E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E688u;
    // 0x38e68c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E688u, 0x38E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E690u;
label_38e690:
    // 0x38e690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e694: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E694u;
    SET_GPR_U32(ctx, 31, 0x38E69Cu);
    ctx->pc = 0x38E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E694u;
    // 0x38e698: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E694u, 0x38E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E69Cu;
label_38e69c:
    // 0x38e69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e6a0: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E6A0u;
    SET_GPR_U32(ctx, 31, 0x38E6A8u);
    ctx->pc = 0x38E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E6A0u;
    // 0x38e6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E6A0u, 0x38E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E6A8u;
label_38e6a8:
    // 0x38e6a8: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x38e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x38e6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e6b0: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E6B0u;
    SET_GPR_U32(ctx, 31, 0x38E6B8u);
    ctx->pc = 0x38E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E6B0u;
    // 0x38e6b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E6B0u, 0x38E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E6B8u;
label_38e6b8:
    // 0x38e6b8: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x38e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x38e6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e6c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e6c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38e6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e6c8: 0x80e3b1a  j           func_38EC68
    ctx->pc = 0x38E6C8u;
    ctx->pc = 0x38E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E6C8u;
    // 0x38e6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC68u;
    sub_0038EC68_0x38ec68(rdram, ctx, runtime); return;
    ctx->pc = 0x38E6D0u;
}
