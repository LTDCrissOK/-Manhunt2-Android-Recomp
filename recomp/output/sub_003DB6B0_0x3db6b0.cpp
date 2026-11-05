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

// Function: sub_003DB6B0
// Address: 0x3db6b0 - 0x3db740
void sub_003DB6B0_0x3db6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB6B0_0x3db6b0");
#endif

    switch (ctx->pc) {
        case 0x3db6dcu: goto label_3db6dc;
        case 0x3db6fcu: goto label_3db6fc;
        default: break;
    }

    ctx->pc = 0x3db6b0u;

    // 0x3db6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3db6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3db6b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3db6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3db6b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3db6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3db6bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3db6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db6c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3db6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3db6c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3db6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3db6c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3db6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3db6cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DB6CCu;
    {
        const bool branch_taken_0x3db6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB6CCu;
        // 0x3db6d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db6cc) {
            ctx->pc = 0x3DB6F0u;
            goto label_3db6f0;
        }
    }
    ctx->pc = 0x3DB6D4u;
    // 0x3db6d4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB6D4u;
    SET_GPR_U32(ctx, 31, 0x3DB6DCu);
    ctx->pc = 0x3DB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB6D4u;
    // 0x3db6d8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB6D4u, 0x3DB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB6DCu;
label_3db6dc:
    // 0x3db6dc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3db6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3db6e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3db6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3db6e4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3db6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3db6e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DB6E8u;
    {
        const bool branch_taken_0x3db6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB6E8u;
        // 0x3db6ec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db6e8) {
            ctx->pc = 0x3DB70Cu;
            goto label_3db70c;
        }
    }
    ctx->pc = 0x3DB6F0u;
label_3db6f0:
    // 0x3db6f0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x3db6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3db6f4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB6F4u;
    SET_GPR_U32(ctx, 31, 0x3DB6FCu);
    ctx->pc = 0x3DB6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB6F4u;
    // 0x3db6f8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB6F4u, 0x3DB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB6FCu;
label_3db6fc:
    // 0x3db6fc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3db6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3db700: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3db700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3db704: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x3db704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x3db708: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3db708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3db70c:
    // 0x3db70c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3db70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3db710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3db710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db714: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3db714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3db718: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3db718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db71c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3db71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3db720: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3db720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3db724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3db724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3db728: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3db728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3db72c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3db72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3db730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3db730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3db734: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB734u;
        // 0x3db738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB73Cu;
    // 0x3db73c: 0x0  nop
    ctx->pc = 0x3db73cu;
    // NOP
    ctx->pc = 0x3db740u;
}
