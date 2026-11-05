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

// Function: sub_00175568
// Address: 0x175568 - 0x1755b8
void sub_00175568_0x175568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175568_0x175568");
#endif

    switch (ctx->pc) {
        case 0x175588u: goto label_175588;
        case 0x175594u: goto label_175594;
        case 0x1755a4u: goto label_1755a4;
        default: break;
    }

    ctx->pc = 0x175568u;

    // 0x175568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17556c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175574: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x175578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17557c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175580: 0xc04621e  jal         func_118878
    ctx->pc = 0x175580u;
    SET_GPR_U32(ctx, 31, 0x175588u);
    ctx->pc = 0x175584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175580u;
    // 0x175584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118878u, 0x175580u, 0x175588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175588u;
label_175588:
    // 0x175588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17558c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x17558Cu;
    SET_GPR_U32(ctx, 31, 0x175594u);
    ctx->pc = 0x175590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17558Cu;
    // 0x175590: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x17558Cu, 0x175594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175594u;
label_175594:
    // 0x175594: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x175594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x175598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17559c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x17559Cu;
    SET_GPR_U32(ctx, 31, 0x1755A4u);
    ctx->pc = 0x1755A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17559Cu;
    // 0x1755a0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x17559Cu, 0x1755A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755A4u;
label_1755a4:
    // 0x1755a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1755a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1755a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1755a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1755ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1755acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1755b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1755B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1755B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B0u;
        // 0x1755b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1755B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1755B8u;
}
