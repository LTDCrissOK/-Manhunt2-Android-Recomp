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

// Function: sub_00126868
// Address: 0x126868 - 0x1268d0
void sub_00126868_0x126868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126868_0x126868");
#endif

    switch (ctx->pc) {
        case 0x126888u: goto label_126888;
        case 0x126898u: goto label_126898;
        case 0x1268bcu: goto label_1268bc;
        default: break;
    }

    ctx->pc = 0x126868u;

    // 0x126868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12686c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126870: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126874: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x126874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12687c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12687cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126880: 0x102940  sll         $a1, $s0, 5
    ctx->pc = 0x126880u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x126884: 0x0  nop
    ctx->pc = 0x126884u;
    // NOP
label_126888:
    // 0x126888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12688c: 0x24a50324  addiu       $a1, $a1, 0x324
    ctx->pc = 0x12688cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 804));
    // 0x126890: 0xc049a34  jal         func_1268D0
    ctx->pc = 0x126890u;
    SET_GPR_U32(ctx, 31, 0x126898u);
    ctx->pc = 0x126894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126890u;
    // 0x126894: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268D0u, 0x126890u, 0x126898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126898u;
label_126898:
    // 0x126898: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x126898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12689c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12689cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1268a0: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x1268a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1268a4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1268A4u;
    {
        const bool branch_taken_0x1268a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268A4u;
        // 0x1268a8: 0x102940  sll         $a1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268a4) {
            ctx->pc = 0x126888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126888;
        }
    }
    ctx->pc = 0x1268ACu;
    // 0x1268ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1268acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1268b0: 0xa2200424  sb          $zero, 0x424($s1)
    ctx->pc = 0x1268b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1060), (uint8_t)GPR_U32(ctx, 0));
    // 0x1268b4: 0xc049a34  jal         func_1268D0
    ctx->pc = 0x1268B4u;
    SET_GPR_U32(ctx, 31, 0x1268BCu);
    ctx->pc = 0x1268B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268B4u;
    // 0x1268b8: 0x24850304  addiu       $a1, $a0, 0x304 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268D0u, 0x1268B4u, 0x1268BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268BCu;
label_1268bc:
    // 0x1268bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1268bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1268c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1268c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1268c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1268c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1268c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1268C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1268CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268C8u;
        // 0x1268cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1268C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1268D0u;
}
