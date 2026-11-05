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

// Function: sub_00172360
// Address: 0x172360 - 0x1723c8
void sub_00172360_0x172360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172360_0x172360");
#endif

    switch (ctx->pc) {
        case 0x172360u: goto label_172360;
        case 0x172364u: goto label_172364;
        case 0x172368u: goto label_172368;
        case 0x17236cu: goto label_17236c;
        case 0x172370u: goto label_172370;
        case 0x172374u: goto label_172374;
        case 0x172378u: goto label_172378;
        case 0x17237cu: goto label_17237c;
        case 0x172380u: goto label_172380;
        case 0x172384u: goto label_172384;
        case 0x172388u: goto label_172388;
        case 0x17238cu: goto label_17238c;
        case 0x172390u: goto label_172390;
        case 0x172394u: goto label_172394;
        case 0x172398u: goto label_172398;
        case 0x17239cu: goto label_17239c;
        case 0x1723a0u: goto label_1723a0;
        case 0x1723a4u: goto label_1723a4;
        case 0x1723a8u: goto label_1723a8;
        case 0x1723acu: goto label_1723ac;
        case 0x1723b0u: goto label_1723b0;
        case 0x1723b4u: goto label_1723b4;
        case 0x1723b8u: goto label_1723b8;
        case 0x1723bcu: goto label_1723bc;
        case 0x1723c0u: goto label_1723c0;
        case 0x1723c4u: goto label_1723c4;
        default: break;
    }

    ctx->pc = 0x172360u;

label_172360:
    // 0x172360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_172364:
    // 0x172364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_172368:
    // 0x172368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17236c:
    // 0x17236c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_172370:
    // 0x172370: 0xc04f968  jal         func_13E5A0
label_172374:
    if (ctx->pc == 0x172374u) {
        ctx->pc = 0x172374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172370u;
        // 0x172374: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172378u;
        goto label_172378;
    }
    ctx->pc = 0x172370u;
    SET_GPR_U32(ctx, 31, 0x172378u);
    ctx->pc = 0x172374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172370u;
    // 0x172374: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5A0u, 0x172370u, 0x172378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172378u;
label_172378:
    // 0x172378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17237c:
    // 0x17237c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17237cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172380:
    // 0x172380: 0xc058642  jal         func_161908
label_172384:
    if (ctx->pc == 0x172384u) {
        ctx->pc = 0x172384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172380u;
        // 0x172384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172388u;
        goto label_172388;
    }
    ctx->pc = 0x172380u;
    SET_GPR_U32(ctx, 31, 0x172388u);
    ctx->pc = 0x172384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172380u;
    // 0x172384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161908u, 0x172380u, 0x172388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172388u;
label_172388:
    // 0x172388: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x172388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17238c:
    // 0x17238c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17238cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172390:
    // 0x172390: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x172390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_172394:
    // 0x172394: 0x40f809  jalr        $v0
label_172398:
    if (ctx->pc == 0x172398u) {
        ctx->pc = 0x172398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172394u;
        // 0x172398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17239Cu;
        goto label_17239c;
    }
    ctx->pc = 0x172394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17239Cu);
        ctx->pc = 0x172398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172394u;
        // 0x172398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172394u, 0x17239Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17239Cu;
label_17239c:
    // 0x17239c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17239cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1723a0:
    // 0x1723a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1723a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1723a4:
    // 0x1723a4: 0xc04201c  jal         func_108070
label_1723a8:
    if (ctx->pc == 0x1723A8u) {
        ctx->pc = 0x1723A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723A4u;
        // 0x1723a8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1723ACu;
        goto label_1723ac;
    }
    ctx->pc = 0x1723A4u;
    SET_GPR_U32(ctx, 31, 0x1723ACu);
    ctx->pc = 0x1723A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723A4u;
    // 0x1723a8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108070u, 0x1723A4u, 0x1723ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723ACu;
label_1723ac:
    // 0x1723ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1723acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1723b0:
    // 0x1723b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1723b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1723b4:
    // 0x1723b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1723b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1723b8:
    // 0x1723b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1723b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1723bc:
    // 0x1723bc: 0x3e00008  jr          $ra
label_1723c0:
    if (ctx->pc == 0x1723C0u) {
        ctx->pc = 0x1723C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723BCu;
        // 0x1723c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1723C4u;
        goto label_1723c4;
    }
    ctx->pc = 0x1723BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1723C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1723BCu;
        // 0x1723c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1723BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1723C4u;
label_1723c4:
    // 0x1723c4: 0x0  nop
    ctx->pc = 0x1723c4u;
    // NOP
    ctx->pc = 0x1723c8u;
}
