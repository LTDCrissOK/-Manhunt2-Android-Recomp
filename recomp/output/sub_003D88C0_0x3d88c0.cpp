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

// Function: sub_003D88C0
// Address: 0x3d88c0 - 0x3d8950
void sub_003D88C0_0x3d88c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D88C0_0x3d88c0");
#endif

    switch (ctx->pc) {
        case 0x3d88ecu: goto label_3d88ec;
        case 0x3d890cu: goto label_3d890c;
        default: break;
    }

    ctx->pc = 0x3d88c0u;

    // 0x3d88c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d88c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d88c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d88c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d88c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d88c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d88cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d88ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d88d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d88d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d88d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3d88d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3d88d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d88dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D88DCu;
    {
        const bool branch_taken_0x3d88dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D88DCu;
        // 0x3d88e0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d88dc) {
            ctx->pc = 0x3D8900u;
            goto label_3d8900;
        }
    }
    ctx->pc = 0x3D88E4u;
    // 0x3d88e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D88E4u;
    SET_GPR_U32(ctx, 31, 0x3D88ECu);
    ctx->pc = 0x3D88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D88E4u;
    // 0x3d88e8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D88E4u, 0x3D88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D88ECu;
label_3d88ec:
    // 0x3d88ec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3d88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3d88f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3d88f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3d88f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3d88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3d88f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D88F8u;
    {
        const bool branch_taken_0x3d88f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D88F8u;
        // 0x3d88fc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d88f8) {
            ctx->pc = 0x3D891Cu;
            goto label_3d891c;
        }
    }
    ctx->pc = 0x3D8900u;
label_3d8900:
    // 0x3d8900: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x3d8900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3d8904: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D8904u;
    SET_GPR_U32(ctx, 31, 0x3D890Cu);
    ctx->pc = 0x3D8908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8904u;
    // 0x3d8908: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D8904u, 0x3D890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D890Cu;
label_3d890c:
    // 0x3d890c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3d890cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3d8910: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3d8910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3d8914: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x3d8914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x3d8918: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3d8918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3d891c:
    // 0x3d891c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3d891cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3d8920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d8920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8924: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3d8924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3d8928: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d8928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d892c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d8930: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3d8930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3d8934: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d8934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d8938: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3d8938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d893c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d893cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3d8940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d8940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d8944: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8944u;
        // 0x3d8948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D894Cu;
    // 0x3d894c: 0x0  nop
    ctx->pc = 0x3d894cu;
    // NOP
    ctx->pc = 0x3d8950u;
}
