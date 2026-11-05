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

// Function: sub_001615E8
// Address: 0x1615e8 - 0x161650
void sub_001615E8_0x1615e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001615E8_0x1615e8");
#endif

    switch (ctx->pc) {
        case 0x161604u: goto label_161604;
        case 0x16160cu: goto label_16160c;
        case 0x161618u: goto label_161618;
        case 0x161620u: goto label_161620;
        case 0x161630u: goto label_161630;
        case 0x161638u: goto label_161638;
        default: break;
    }

    ctx->pc = 0x1615e8u;

    // 0x1615e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1615e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1615ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1615ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1615f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1615f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1615f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1615f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1615f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1615fc: 0xc058668  jal         func_1619A0
    ctx->pc = 0x1615FCu;
    SET_GPR_U32(ctx, 31, 0x161604u);
    ctx->pc = 0x161600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615FCu;
    // 0x161600: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1619A0u, 0x1615FCu, 0x161604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161604u;
label_161604:
    // 0x161604: 0xc04f032  jal         func_13C0C8
    ctx->pc = 0x161604u;
    SET_GPR_U32(ctx, 31, 0x16160Cu);
    ctx->pc = 0x161608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161604u;
    // 0x161608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0C8u, 0x161604u, 0x16160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16160Cu;
label_16160c:
    // 0x16160c: 0xae110214  sw          $s1, 0x214($s0)
    ctx->pc = 0x16160cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 17));
    // 0x161610: 0xc04f320  jal         func_13CC80
    ctx->pc = 0x161610u;
    SET_GPR_U32(ctx, 31, 0x161618u);
    ctx->pc = 0x161614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161610u;
    // 0x161614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC80u, 0x161610u, 0x161618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161618u;
label_161618:
    // 0x161618: 0xc058c56  jal         func_163158
    ctx->pc = 0x161618u;
    SET_GPR_U32(ctx, 31, 0x161620u);
    ctx->pc = 0x16161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161618u;
    // 0x16161c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163158u, 0x161618u, 0x161620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161620u;
label_161620:
    // 0x161620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161628: 0xc04f0c8  jal         func_13C320
    ctx->pc = 0x161628u;
    SET_GPR_U32(ctx, 31, 0x161630u);
    ctx->pc = 0x16162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161628u;
    // 0x16162c: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C320u, 0x161628u, 0x161630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161630u;
label_161630:
    // 0x161630: 0xc058cb6  jal         func_1632D8
    ctx->pc = 0x161630u;
    SET_GPR_U32(ctx, 31, 0x161638u);
    ctx->pc = 0x161634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161630u;
    // 0x161634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1632D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1632D8u, 0x161630u, 0x161638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161638u;
label_161638:
    // 0x161638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16163c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16163cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161644: 0x3e00008  jr          $ra
    ctx->pc = 0x161644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161644u;
        // 0x161648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16164Cu;
    // 0x16164c: 0x0  nop
    ctx->pc = 0x16164cu;
    // NOP
    ctx->pc = 0x161650u;
}
