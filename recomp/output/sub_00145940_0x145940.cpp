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

// Function: sub_00145940
// Address: 0x145940 - 0x1459a0
void sub_00145940_0x145940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145940_0x145940");
#endif

    switch (ctx->pc) {
        case 0x145964u: goto label_145964;
        case 0x145970u: goto label_145970;
        case 0x14597cu: goto label_14597c;
        case 0x14598cu: goto label_14598c;
        default: break;
    }

    ctx->pc = 0x145940u;

    // 0x145940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14594c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14594cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145954: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145958: 0xae260468  sw          $a2, 0x468($s1)
    ctx->pc = 0x145958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 6));
    // 0x14595c: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x14595Cu;
    SET_GPR_U32(ctx, 31, 0x145964u);
    ctx->pc = 0x145960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14595Cu;
    // 0x145960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x14595Cu, 0x145964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145964u;
label_145964:
    // 0x145964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145968: 0xc04611e  jal         func_118478
    ctx->pc = 0x145968u;
    SET_GPR_U32(ctx, 31, 0x145970u);
    ctx->pc = 0x14596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145968u;
    // 0x14596c: 0xae220520  sw          $v0, 0x520($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x145968u, 0x145970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145970u;
label_145970:
    // 0x145970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145974: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x145974u;
    SET_GPR_U32(ctx, 31, 0x14597Cu);
    ctx->pc = 0x145978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145974u;
    // 0x145978: 0xae220524  sw          $v0, 0x524($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x145974u, 0x14597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14597Cu;
label_14597c:
    // 0x14597c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14597cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x145980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x145980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145984: 0xc042136  jal         func_1084D8
    ctx->pc = 0x145984u;
    SET_GPR_U32(ctx, 31, 0x14598Cu);
    ctx->pc = 0x145988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145984u;
    // 0x145988: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x145984u, 0x14598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14598Cu;
label_14598c:
    // 0x14598c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14598cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145998: 0x3e00008  jr          $ra
    ctx->pc = 0x145998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145998u;
        // 0x14599c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1459A0u;
}
