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

// Function: sub_001363F8
// Address: 0x1363f8 - 0x136450
void sub_001363F8_0x1363f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001363F8_0x1363f8");
#endif

    ctx->pc = 0x1363f8u;

    // 0x1363f8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1363f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363fc: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1363FCu;
    {
        const bool branch_taken_0x1363fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x136400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363FCu;
        // 0x136400: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363fc) {
            ctx->pc = 0x136424u;
            goto label_136424;
        }
    }
    ctx->pc = 0x136404u;
    // 0x136404: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x136404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x136408: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x136408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13640c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x136410: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x136410u;
    {
        const bool branch_taken_0x136410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136410u;
        // 0x136414: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136410) {
            ctx->pc = 0x136444u;
            goto label_136444;
        }
    }
    ctx->pc = 0x136418u;
    // 0x136418: 0x90e204bc  lbu         $v0, 0x4BC($a3)
    ctx->pc = 0x136418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1212)));
    // 0x13641c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13641Cu;
    {
        const bool branch_taken_0x13641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13641Cu;
        // 0x136420: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13641c) {
            ctx->pc = 0x136440u;
            goto label_136440;
        }
    }
    ctx->pc = 0x136424u;
label_136424:
    // 0x136424: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x136424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x136428: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x136428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13642c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x136430: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136430u;
    {
        const bool branch_taken_0x136430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x136434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136430u;
        // 0x136434: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136430) {
            ctx->pc = 0x136444u;
            goto label_136444;
        }
    }
    ctx->pc = 0x136438u;
    // 0x136438: 0x90e204bc  lbu         $v0, 0x4BC($a3)
    ctx->pc = 0x136438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1212)));
    // 0x13643c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_136440:
    // 0x136440: 0xa0e204bc  sb          $v0, 0x4BC($a3)
    ctx->pc = 0x136440u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1212), (uint8_t)GPR_U32(ctx, 2));
label_136444:
    // 0x136444: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x136444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x136448: 0x3e00008  jr          $ra
    ctx->pc = 0x136448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136448u;
        // 0x13644c: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136450u;
}
