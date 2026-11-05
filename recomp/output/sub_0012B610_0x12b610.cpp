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

// Function: sub_0012B610
// Address: 0x12b610 - 0x12b658
void sub_0012B610_0x12b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B610_0x12b610");
#endif

    switch (ctx->pc) {
        case 0x12b62cu: goto label_12b62c;
        case 0x12b638u: goto label_12b638;
        default: break;
    }

    ctx->pc = 0x12b610u;

    // 0x12b610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b624: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B624u;
    SET_GPR_U32(ctx, 31, 0x12B62Cu);
    ctx->pc = 0x12B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B624u;
    // 0x12b628: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B624u, 0x12B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B62Cu;
label_12b62c:
    // 0x12b62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b630: 0xc04b1ba  jal         func_12C6E8
    ctx->pc = 0x12B630u;
    SET_GPR_U32(ctx, 31, 0x12B638u);
    ctx->pc = 0x12B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B630u;
    // 0x12b634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C6E8u, 0x12B630u, 0x12B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B638u;
label_12b638:
    // 0x12b638: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x12b638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12b63c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x12b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12b640: 0xa2020085  sb          $v0, 0x85($s0)
    ctx->pc = 0x12b640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 2));
    // 0x12b644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b64c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b650: 0x3e00008  jr          $ra
    ctx->pc = 0x12B650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B650u;
        // 0x12b654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B658u;
}
