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

// Function: sub_002523D8
// Address: 0x2523d8 - 0x252430
void sub_002523D8_0x2523d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002523D8_0x2523d8");
#endif

    switch (ctx->pc) {
        case 0x2523d8u: goto label_2523d8;
        case 0x2523dcu: goto label_2523dc;
        case 0x2523e0u: goto label_2523e0;
        case 0x2523e4u: goto label_2523e4;
        case 0x2523e8u: goto label_2523e8;
        case 0x2523ecu: goto label_2523ec;
        case 0x2523f0u: goto label_2523f0;
        case 0x2523f4u: goto label_2523f4;
        case 0x2523f8u: goto label_2523f8;
        case 0x2523fcu: goto label_2523fc;
        case 0x252400u: goto label_252400;
        case 0x252404u: goto label_252404;
        case 0x252408u: goto label_252408;
        case 0x25240cu: goto label_25240c;
        case 0x252410u: goto label_252410;
        case 0x252414u: goto label_252414;
        case 0x252418u: goto label_252418;
        case 0x25241cu: goto label_25241c;
        case 0x252420u: goto label_252420;
        case 0x252424u: goto label_252424;
        case 0x252428u: goto label_252428;
        case 0x25242cu: goto label_25242c;
        default: break;
    }

    ctx->pc = 0x2523d8u;

label_2523d8:
    // 0x2523d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2523d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2523dc:
    // 0x2523dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2523dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2523e0:
    // 0x2523e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2523e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2523e4:
    // 0x2523e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2523e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2523e8:
    // 0x2523e8: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x2523e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_2523ec:
    // 0x2523ec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2523f0:
    if (ctx->pc == 0x2523F0u) {
        ctx->pc = 0x2523F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523ECu;
        // 0x2523f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2523F4u;
        goto label_2523f4;
    }
    ctx->pc = 0x2523ECu;
    {
        const bool branch_taken_0x2523ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523ECu;
        // 0x2523f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523ec) {
            ctx->pc = 0x25243Cu;
            return;
        }
    }
    ctx->pc = 0x2523F4u;
label_2523f4:
    // 0x2523f4: 0xc09550a  jal         func_255428
label_2523f8:
    if (ctx->pc == 0x2523F8u) {
        ctx->pc = 0x2523FCu;
        goto label_2523fc;
    }
    ctx->pc = 0x2523F4u;
    SET_GPR_U32(ctx, 31, 0x2523FCu);
    ctx->pc = 0x255428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255428u, 0x2523F4u, 0x2523FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523FCu;
label_2523fc:
    // 0x2523fc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_252400:
    if (ctx->pc == 0x252400u) {
        ctx->pc = 0x252400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523FCu;
        // 0x252400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252404u;
        goto label_252404;
    }
    ctx->pc = 0x2523FCu;
    {
        const bool branch_taken_0x2523fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523FCu;
        // 0x252400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523fc) {
            ctx->pc = 0x25243Cu;
            return;
        }
    }
    ctx->pc = 0x252404u;
label_252404:
    // 0x252404: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x252404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
label_252408:
    // 0x252408: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x252408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_25240c:
    // 0x25240c: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x25240cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_252410:
    // 0x252410: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_252414:
    if (ctx->pc == 0x252414u) {
        ctx->pc = 0x252414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252410u;
        // 0x252414: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252418u;
        goto label_252418;
    }
    ctx->pc = 0x252410u;
    {
        const bool branch_taken_0x252410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252410u;
        // 0x252414: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252410) {
            ctx->pc = 0x252438u;
            return;
        }
    }
    ctx->pc = 0x252418u;
label_252418:
    // 0x252418: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x252418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25241c:
    // 0x25241c: 0x24425390  addiu       $v0, $v0, 0x5390
    ctx->pc = 0x25241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21392));
label_252420:
    // 0x252420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_252424:
    // 0x252424: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_252428:
    // 0x252428: 0x800008  jr          $a0
label_25242c:
    if (ctx->pc == 0x25242Cu) {
        ctx->pc = 0x252430u;
        goto label_fallthrough_0x252428;
    }
    ctx->pc = 0x252428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252428u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x252428:
    ctx->pc = 0x252430u;
}
