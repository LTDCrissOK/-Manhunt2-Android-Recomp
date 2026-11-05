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

// Function: sub_00164320
// Address: 0x164320 - 0x1643a8
void sub_00164320_0x164320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164320_0x164320");
#endif

    switch (ctx->pc) {
        case 0x164334u: goto label_164334;
        case 0x164348u: goto label_164348;
        case 0x164378u: goto label_164378;
        case 0x164380u: goto label_164380;
        case 0x164388u: goto label_164388;
        case 0x164394u: goto label_164394;
        default: break;
    }

    ctx->pc = 0x164320u;

    // 0x164320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164328: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x164328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16432c: 0xc04ef70  jal         func_13BDC0
    ctx->pc = 0x16432Cu;
    SET_GPR_U32(ctx, 31, 0x164334u);
    ctx->pc = 0x164330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16432Cu;
    // 0x164330: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BDC0u, 0x16432Cu, 0x164334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164334u;
label_164334:
    // 0x164334: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x164334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x164338: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x164338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x16433c: 0x24630d80  addiu       $v1, $v1, 0xD80
    ctx->pc = 0x16433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3456));
    // 0x164340: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x164340u;
    SET_GPR_U32(ctx, 31, 0x164348u);
    ctx->pc = 0x164344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164340u;
    // 0x164344: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x164340u, 0x164348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164348u;
label_164348:
    // 0x164348: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x164348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    // 0x16434c: 0x260403d0  addiu       $a0, $s0, 0x3D0
    ctx->pc = 0x16434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x164350: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x164350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x164354: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x164354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x164358: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x164358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x16435c: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x16435cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
    // 0x164360: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x164360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
    // 0x164364: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x164364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x164368: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x164368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x16436c: 0xae0003bc  sw          $zero, 0x3BC($s0)
    ctx->pc = 0x16436cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 0));
    // 0x164370: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x164370u;
    SET_GPR_U32(ctx, 31, 0x164378u);
    ctx->pc = 0x164374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164370u;
    // 0x164374: 0xae0003c0  sw          $zero, 0x3C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x164370u, 0x164378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164378u;
label_164378:
    // 0x164378: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x164378u;
    SET_GPR_U32(ctx, 31, 0x164380u);
    ctx->pc = 0x16437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164378u;
    // 0x16437c: 0x260403e0  addiu       $a0, $s0, 0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x164378u, 0x164380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164380u;
label_164380:
    // 0x164380: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x164380u;
    SET_GPR_U32(ctx, 31, 0x164388u);
    ctx->pc = 0x164384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164380u;
    // 0x164384: 0x26040400  addiu       $a0, $s0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x164380u, 0x164388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164388u;
label_164388:
    // 0x164388: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x164388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x16438c: 0xc059208  jal         func_164820
    ctx->pc = 0x16438Cu;
    SET_GPR_U32(ctx, 31, 0x164394u);
    ctx->pc = 0x164390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16438Cu;
    // 0x164390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164820u, 0x16438Cu, 0x164394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164394u;
label_164394:
    // 0x164394: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x164394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164398: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x164398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16439c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16439cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1643a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1643A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1643A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643A0u;
        // 0x1643a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1643A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1643A8u;
}
