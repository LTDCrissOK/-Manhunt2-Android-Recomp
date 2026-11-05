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

// Function: sub_001458C8
// Address: 0x1458c8 - 0x145918
void sub_001458C8_0x1458c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001458C8_0x1458c8");
#endif

    switch (ctx->pc) {
        case 0x1458e4u: goto label_1458e4;
        case 0x1458ecu: goto label_1458ec;
        case 0x145900u: goto label_145900;
        default: break;
    }

    ctx->pc = 0x1458c8u;

    // 0x1458c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1458c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1458cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1458ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1458d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1458d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1458d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1458d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1458d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1458d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1458dc: 0xc0516ca  jal         func_145B28
    ctx->pc = 0x1458DCu;
    SET_GPR_U32(ctx, 31, 0x1458E4u);
    ctx->pc = 0x1458E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1458DCu;
    // 0x1458e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145B28u, 0x1458DCu, 0x1458E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458E4u;
label_1458e4:
    // 0x1458e4: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x1458E4u;
    SET_GPR_U32(ctx, 31, 0x1458ECu);
    ctx->pc = 0x1458E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1458E4u;
    // 0x1458e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x1458E4u, 0x1458ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458ECu;
label_1458ec:
    // 0x1458ec: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x1458ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x1458f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1458f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1458f4: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x1458f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x1458f8: 0xc04d89a  jal         func_136268
    ctx->pc = 0x1458F8u;
    SET_GPR_U32(ctx, 31, 0x145900u);
    ctx->pc = 0x1458FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1458F8u;
    // 0x1458fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x1458F8u, 0x145900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145900u;
label_145900:
    // 0x145900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14590c: 0x3e00008  jr          $ra
    ctx->pc = 0x14590Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14590Cu;
        // 0x145910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14590Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145914u;
    // 0x145914: 0x0  nop
    ctx->pc = 0x145914u;
    // NOP
    ctx->pc = 0x145918u;
}
