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

// Function: sub_001605C8
// Address: 0x1605c8 - 0x160628
void sub_001605C8_0x1605c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001605C8_0x1605c8");
#endif

    switch (ctx->pc) {
        case 0x1605e4u: goto label_1605e4;
        case 0x1605ecu: goto label_1605ec;
        case 0x1605f8u: goto label_1605f8;
        case 0x160608u: goto label_160608;
        case 0x160610u: goto label_160610;
        default: break;
    }

    ctx->pc = 0x1605c8u;

    // 0x1605c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1605c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1605cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1605ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1605d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1605d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1605d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1605d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1605d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1605dc: 0xc05829e  jal         func_160A78
    ctx->pc = 0x1605DCu;
    SET_GPR_U32(ctx, 31, 0x1605E4u);
    ctx->pc = 0x1605E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605DCu;
    // 0x1605e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160A78u, 0x1605DCu, 0x1605E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605E4u;
label_1605e4:
    // 0x1605e4: 0xc04f032  jal         func_13C0C8
    ctx->pc = 0x1605E4u;
    SET_GPR_U32(ctx, 31, 0x1605ECu);
    ctx->pc = 0x1605E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605E4u;
    // 0x1605e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0C8u, 0x1605E4u, 0x1605ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605ECu;
label_1605ec:
    // 0x1605ec: 0xae110214  sw          $s1, 0x214($s0)
    ctx->pc = 0x1605ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 17));
    // 0x1605f0: 0xc04f320  jal         func_13CC80
    ctx->pc = 0x1605F0u;
    SET_GPR_U32(ctx, 31, 0x1605F8u);
    ctx->pc = 0x1605F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605F0u;
    // 0x1605f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC80u, 0x1605F0u, 0x1605F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605F8u;
label_1605f8:
    // 0x1605f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1605f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1605fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1605fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160600: 0xc04f0c8  jal         func_13C320
    ctx->pc = 0x160600u;
    SET_GPR_U32(ctx, 31, 0x160608u);
    ctx->pc = 0x160604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160600u;
    // 0x160604: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C320u, 0x160600u, 0x160608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160608u;
label_160608:
    // 0x160608: 0xc058430  jal         func_1610C0
    ctx->pc = 0x160608u;
    SET_GPR_U32(ctx, 31, 0x160610u);
    ctx->pc = 0x16060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160608u;
    // 0x16060c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1610C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1610C0u, 0x160608u, 0x160610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160610u;
label_160610:
    // 0x160610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16061c: 0x3e00008  jr          $ra
    ctx->pc = 0x16061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16061Cu;
        // 0x160620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16061Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160624u;
    // 0x160624: 0x0  nop
    ctx->pc = 0x160624u;
    // NOP
    ctx->pc = 0x160628u;
}
