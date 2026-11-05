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

// Function: sub_00191378
// Address: 0x191378 - 0x191410
void sub_00191378_0x191378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191378_0x191378");
#endif

    switch (ctx->pc) {
        case 0x191390u: goto label_191390;
        case 0x1913a8u: goto label_1913a8;
        case 0x1913d4u: goto label_1913d4;
        case 0x1913dcu: goto label_1913dc;
        case 0x1913e4u: goto label_1913e4;
        default: break;
    }

    ctx->pc = 0x191378u;

    // 0x191378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19137c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x191380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x191384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x191384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191388: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x191388u;
    SET_GPR_U32(ctx, 31, 0x191390u);
    ctx->pc = 0x19138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191388u;
    // 0x19138c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x191388u, 0x191390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191390u;
label_191390:
    // 0x191390: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x191390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x191394: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x191394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x191398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19139c: 0x24631050  addiu       $v1, $v1, 0x1050
    ctx->pc = 0x19139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4176));
    // 0x1913a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1913A0u;
    SET_GPR_U32(ctx, 31, 0x1913A8u);
    ctx->pc = 0x1913A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913A0u;
    // 0x1913a4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1913A0u, 0x1913A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913A8u;
label_1913a8:
    // 0x1913a8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1913a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1913ac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1913acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1913b0: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1913b4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1913b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1913b8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1913b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1913bc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1913bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1913c0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1913c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1913c4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1913c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1913c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1913c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1913cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1913CCu;
    SET_GPR_U32(ctx, 31, 0x1913D4u);
    ctx->pc = 0x1913D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913CCu;
    // 0x1913d0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1913CCu, 0x1913D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913D4u;
label_1913d4:
    // 0x1913d4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1913D4u;
    SET_GPR_U32(ctx, 31, 0x1913DCu);
    ctx->pc = 0x1913D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913D4u;
    // 0x1913d8: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1913D4u, 0x1913DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913DCu;
label_1913dc:
    // 0x1913dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1913DCu;
    SET_GPR_U32(ctx, 31, 0x1913E4u);
    ctx->pc = 0x1913E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913DCu;
    // 0x1913e0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1913DCu, 0x1913E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913E4u;
label_1913e4:
    // 0x1913e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1913e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1913e8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1913e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1913ec: 0x24421018  addiu       $v0, $v0, 0x1018
    ctx->pc = 0x1913ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4120));
    // 0x1913f0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1913f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1913f4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1913f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1913f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1913f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1913fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x191400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x191404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191408: 0x3e00008  jr          $ra
    ctx->pc = 0x191408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191408u;
        // 0x19140c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191410u;
}
