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

// Function: sub_0020D5F0
// Address: 0x20d5f0 - 0x20d658
void sub_0020D5F0_0x20d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D5F0_0x20d5f0");
#endif

    switch (ctx->pc) {
        case 0x20d618u: goto label_20d618;
        case 0x20d628u: goto label_20d628;
        case 0x20d63cu: goto label_20d63c;
        default: break;
    }

    ctx->pc = 0x20d5f0u;

    // 0x20d5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d5f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20d5f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20d5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20d5fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20d604: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20d604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d608: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x20D608u;
    {
        const bool branch_taken_0x20d608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D608u;
        // 0x20d60c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d608) {
            ctx->pc = 0x20D63Cu;
            goto label_20d63c;
        }
    }
    ctx->pc = 0x20D610u;
    // 0x20d610: 0xc085d2a  jal         func_2174A8
    ctx->pc = 0x20D610u;
    SET_GPR_U32(ctx, 31, 0x20D618u);
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x20D610u, 0x20D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D618u;
label_20d618:
    // 0x20d618: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D618u;
    {
        const bool branch_taken_0x20d618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d618) {
            ctx->pc = 0x20D61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D618u;
            // 0x20d61c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D640u;
            goto label_20d640;
        }
    }
    ctx->pc = 0x20D620u;
    // 0x20d620: 0xc083072  jal         func_20C1C8
    ctx->pc = 0x20D620u;
    SET_GPR_U32(ctx, 31, 0x20D628u);
    ctx->pc = 0x20D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D620u;
    // 0x20d624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x20D620u, 0x20D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D628u;
label_20d628:
    // 0x20d628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d62c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D62Cu;
    {
        const bool branch_taken_0x20d62c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D62Cu;
        // 0x20d630: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d62c) {
            ctx->pc = 0x20D63Cu;
            goto label_20d63c;
        }
    }
    ctx->pc = 0x20D634u;
    // 0x20d634: 0xc083942  jal         func_20E508
    ctx->pc = 0x20D634u;
    SET_GPR_U32(ctx, 31, 0x20D63Cu);
    ctx->pc = 0x20D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D634u;
    // 0x20d638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x20D634u, 0x20D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D63Cu;
label_20d63c:
    // 0x20d63c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20d63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d640:
    // 0x20d640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20d640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20d644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d64c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D64Cu;
        // 0x20d650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D654u;
    // 0x20d654: 0x0  nop
    ctx->pc = 0x20d654u;
    // NOP
    ctx->pc = 0x20d658u;
}
