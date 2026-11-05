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

// Function: sub_00140970
// Address: 0x140970 - 0x1409c0
void sub_00140970_0x140970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140970_0x140970");
#endif

    switch (ctx->pc) {
        case 0x14098cu: goto label_14098c;
        case 0x140994u: goto label_140994;
        case 0x1409a8u: goto label_1409a8;
        default: break;
    }

    ctx->pc = 0x140970u;

    // 0x140970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14097c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140984: 0xc050316  jal         func_140C58
    ctx->pc = 0x140984u;
    SET_GPR_U32(ctx, 31, 0x14098Cu);
    ctx->pc = 0x140988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140984u;
    // 0x140988: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140C58u, 0x140984u, 0x14098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14098Cu;
label_14098c:
    // 0x14098c: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x14098Cu;
    SET_GPR_U32(ctx, 31, 0x140994u);
    ctx->pc = 0x140990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14098Cu;
    // 0x140990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x14098Cu, 0x140994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140994u;
label_140994:
    // 0x140994: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x140994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x140998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14099c: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x14099cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x1409a0: 0xc04d89a  jal         func_136268
    ctx->pc = 0x1409A0u;
    SET_GPR_U32(ctx, 31, 0x1409A8u);
    ctx->pc = 0x1409A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1409A0u;
    // 0x1409a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x1409A0u, 0x1409A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1409A8u;
label_1409a8:
    // 0x1409a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1409a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1409ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1409acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1409b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1409b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1409b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1409B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1409B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409B4u;
        // 0x1409b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1409B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1409BCu;
    // 0x1409bc: 0x0  nop
    ctx->pc = 0x1409bcu;
    // NOP
    ctx->pc = 0x1409c0u;
}
