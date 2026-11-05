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

// Function: sub_0036E5D0
// Address: 0x36e5d0 - 0x36e658
void sub_0036E5D0_0x36e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E5D0_0x36e5d0");
#endif

    switch (ctx->pc) {
        case 0x36e610u: goto label_36e610;
        default: break;
    }

    ctx->pc = 0x36e5d0u;

    // 0x36e5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e5d4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x36e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36e5d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e5dc: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x36e5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x36e5e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36e5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36e5e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x36E5E4u;
    {
        const bool branch_taken_0x36e5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E5E4u;
        // 0x36e5e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e5e4) {
            ctx->pc = 0x36E658u;
            return;
        }
    }
    ctx->pc = 0x36E5ECu;
    // 0x36e5ec: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x36e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x36e5f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36e5f4: 0x24427d90  addiu       $v0, $v0, 0x7D90
    ctx->pc = 0x36e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32144));
    // 0x36e5f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x36e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36e5fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36e600: 0x800008  jr          $a0
    ctx->pc = 0x36E600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x36E608u: goto label_36e608;
            case 0x36E61Cu: goto label_36e61c;
            case 0x36E630u: goto label_36e630;
            case 0x36E644u: goto label_36e644;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x36E608u;
label_36e608:
    // 0x36e608: 0xc0dbad4  jal         func_36EB50
    ctx->pc = 0x36E608u;
    SET_GPR_U32(ctx, 31, 0x36E610u);
    ctx->pc = 0x36EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EB50u, 0x36E608u, 0x36E610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E610u;
label_36e610:
    // 0x36e610: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36e610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x36e614: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x36E614u;
    {
        const bool branch_taken_0x36e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E614u;
        // 0x36e618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e614) {
            ctx->pc = 0x36E65Cu;
            return;
        }
    }
    ctx->pc = 0x36E61Cu;
label_36e61c:
    // 0x36e61c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x36e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x36e620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e624: 0x9083cc18  lbu         $v1, -0x33E8($a0)
    ctx->pc = 0x36e624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCC18u));
    // 0x36e628: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36E628u;
    {
        const bool branch_taken_0x36e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E628u;
        // 0x36e62c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e628) {
            ctx->pc = 0x36E65Cu;
            return;
        }
    }
    ctx->pc = 0x36E630u;
label_36e630:
    // 0x36e630: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x36e630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x36e634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e638: 0x8c83cc1c  lw          $v1, -0x33E4($a0)
    ctx->pc = 0x36e638u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCC1Cu));
    // 0x36e63c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36E63Cu;
    {
        const bool branch_taken_0x36e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E63Cu;
        // 0x36e640: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e63c) {
            ctx->pc = 0x36E65Cu;
            return;
        }
    }
    ctx->pc = 0x36E644u;
label_36e644:
    // 0x36e644: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x36e644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x36e648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e64c: 0x8c83cc20  lw          $v1, -0x33E0($a0)
    ctx->pc = 0x36e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCC20u));
    // 0x36e650: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36E650u;
    {
        const bool branch_taken_0x36e650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E650u;
        // 0x36e654: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e650) {
            ctx->pc = 0x36E65Cu;
            return;
        }
    }
    ctx->pc = 0x36E658u;
}
