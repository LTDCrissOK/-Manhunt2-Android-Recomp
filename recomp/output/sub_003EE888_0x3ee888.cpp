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

// Function: sub_003EE888
// Address: 0x3ee888 - 0x3ee918
void sub_003EE888_0x3ee888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE888_0x3ee888");
#endif

    switch (ctx->pc) {
        case 0x3ee8b4u: goto label_3ee8b4;
        case 0x3ee8d4u: goto label_3ee8d4;
        default: break;
    }

    ctx->pc = 0x3ee888u;

    // 0x3ee888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ee888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ee88c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ee88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ee890: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ee890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ee894: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ee894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ee898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ee89c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ee89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ee8a0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3ee8a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ee8a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE8A4u;
    {
        const bool branch_taken_0x3ee8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE8A4u;
        // 0x3ee8a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee8a4) {
            ctx->pc = 0x3EE8C8u;
            goto label_3ee8c8;
        }
    }
    ctx->pc = 0x3EE8ACu;
    // 0x3ee8ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EE8ACu;
    SET_GPR_U32(ctx, 31, 0x3EE8B4u);
    ctx->pc = 0x3EE8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE8ACu;
    // 0x3ee8b0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EE8ACu, 0x3EE8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE8B4u;
label_3ee8b4:
    // 0x3ee8b4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ee8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ee8b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ee8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ee8bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ee8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ee8c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE8C0u;
    {
        const bool branch_taken_0x3ee8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE8C0u;
        // 0x3ee8c4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee8c0) {
            ctx->pc = 0x3EE8E4u;
            goto label_3ee8e4;
        }
    }
    ctx->pc = 0x3EE8C8u;
label_3ee8c8:
    // 0x3ee8c8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ee8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee8cc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EE8CCu;
    SET_GPR_U32(ctx, 31, 0x3EE8D4u);
    ctx->pc = 0x3EE8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE8CCu;
    // 0x3ee8d0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EE8CCu, 0x3EE8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE8D4u;
label_3ee8d4:
    // 0x3ee8d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ee8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ee8d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ee8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ee8dc: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3ee8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3ee8e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ee8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ee8e4:
    // 0x3ee8e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ee8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ee8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee8ec: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ee8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ee8f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ee8f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee8f4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3ee8f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ee8f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ee8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee8fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ee8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ee900: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ee900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ee904: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x3ee904u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ee908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ee908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ee90c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE90Cu;
        // 0x3ee910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE914u;
    // 0x3ee914: 0x0  nop
    ctx->pc = 0x3ee914u;
    // NOP
    ctx->pc = 0x3ee918u;
}
