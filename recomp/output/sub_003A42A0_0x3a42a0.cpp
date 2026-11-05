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

// Function: sub_003A42A0
// Address: 0x3a42a0 - 0x3a4360
void sub_003A42A0_0x3a42a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A42A0_0x3a42a0");
#endif

    switch (ctx->pc) {
        case 0x3a42d0u: goto label_3a42d0;
        case 0x3a42f0u: goto label_3a42f0;
        case 0x3a42f8u: goto label_3a42f8;
        case 0x3a4300u: goto label_3a4300;
        case 0x3a4308u: goto label_3a4308;
        case 0x3a4314u: goto label_3a4314;
        case 0x3a432cu: goto label_3a432c;
        case 0x3a4340u: goto label_3a4340;
        default: break;
    }

    ctx->pc = 0x3a42a0u;

    // 0x3a42a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a42a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a42a4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a42a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3a42a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a42a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a42ac: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3a42acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3a42b0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A42B0u;
    {
        const bool branch_taken_0x3a42b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42B0u;
        // 0x3a42b4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42b0) {
            ctx->pc = 0x3A42C8u;
            goto label_3a42c8;
        }
    }
    ctx->pc = 0x3A42B8u;
    // 0x3a42b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a42b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a42bc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3A42BCu;
    {
        const bool branch_taken_0x3a42bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A42C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42BCu;
        // 0x3a42c0: 0x24a5d768  addiu       $a1, $a1, -0x2898 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42bc) {
            ctx->pc = 0x3A4338u;
            goto label_3a4338;
        }
    }
    ctx->pc = 0x3A42C4u;
    // 0x3a42c4: 0x0  nop
    ctx->pc = 0x3a42c4u;
    // NOP
label_3a42c8:
    // 0x3a42c8: 0xc0e9508  jal         func_3A5420
    ctx->pc = 0x3A42C8u;
    SET_GPR_U32(ctx, 31, 0x3A42D0u);
    ctx->pc = 0x3A42CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A42C8u;
    // 0x3a42cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5420u, 0x3A42C8u, 0x3A42D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A42D0u;
label_3a42d0:
    // 0x3a42d0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a42d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a42d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a42d8: 0x24713650  addiu       $s1, $v1, 0x3650
    ctx->pc = 0x3a42d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 13904));
    // 0x3a42dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a42dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a42e0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A42E0u;
    {
        const bool branch_taken_0x3a42e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42E0u;
        // 0x3a42e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42e0) {
            ctx->pc = 0x3A434Cu;
            goto label_3a434c;
        }
    }
    ctx->pc = 0x3A42E8u;
    // 0x3a42e8: 0xc0e92ec  jal         func_3A4BB0
    ctx->pc = 0x3A42E8u;
    SET_GPR_U32(ctx, 31, 0x3A42F0u);
    ctx->pc = 0x3A4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BB0u, 0x3A42E8u, 0x3A42F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A42F0u;
label_3a42f0:
    // 0x3a42f0: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A42F0u;
    SET_GPR_U32(ctx, 31, 0x3A42F8u);
    ctx->pc = 0x3A42F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A42F0u;
    // 0x3a42f4: 0x34048200  ori         $a0, $zero, 0x8200 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A42F0u, 0x3A42F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A42F8u;
label_3a42f8:
    // 0x3a42f8: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A42F8u;
    SET_GPR_U32(ctx, 31, 0x3A4300u);
    ctx->pc = 0x3A42FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A42F8u;
    // 0x3a42fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A42F8u, 0x3A4300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4300u;
label_3a4300:
    // 0x3a4300: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A4300u;
    SET_GPR_U32(ctx, 31, 0x3A4308u);
    ctx->pc = 0x3A4304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4300u;
    // 0x3a4304: 0x34048201  ori         $a0, $zero, 0x8201 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33281);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A4300u, 0x3A4308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4308u;
label_3a4308:
    // 0x3a4308: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a4308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a430c: 0xc0e8ffc  jal         func_3A3FF0
    ctx->pc = 0x3A430Cu;
    SET_GPR_U32(ctx, 31, 0x3A4314u);
    ctx->pc = 0x3A4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A430Cu;
    // 0x3a4310: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FF0u, 0x3A430Cu, 0x3A4314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4314u;
label_3a4314:
    // 0x3a4314: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a4314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a4318: 0x2484d798  addiu       $a0, $a0, -0x2868
    ctx->pc = 0x3a4318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956952));
    // 0x3a431c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A431Cu;
    {
        const bool branch_taken_0x3a431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A431Cu;
        // 0x3a4320: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a431c) {
            ctx->pc = 0x3A4348u;
            goto label_3a4348;
        }
    }
    ctx->pc = 0x3A4324u;
    // 0x3a4324: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A4324u;
    SET_GPR_U32(ctx, 31, 0x3A432Cu);
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A4324u, 0x3A432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A432Cu;
label_3a432c:
    // 0x3a432c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a432cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a4330: 0x24a5d7c0  addiu       $a1, $a1, -0x2840
    ctx->pc = 0x3a4330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956992));
    // 0x3a4334: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a4334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4338:
    // 0x3a4338: 0xc0e8ff0  jal         func_3A3FC0
    ctx->pc = 0x3A4338u;
    SET_GPR_U32(ctx, 31, 0x3A4340u);
    ctx->pc = 0x3A3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FC0u, 0x3A4338u, 0x3A4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4340u;
label_3a4340:
    // 0x3a4340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4340u;
    {
        const bool branch_taken_0x3a4340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4340u;
        // 0x3a4344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4340) {
            ctx->pc = 0x3A434Cu;
            goto label_3a434c;
        }
    }
    ctx->pc = 0x3A4348u;
label_3a4348:
    // 0x3a4348: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a4348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a434c:
    // 0x3a434c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a434cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4350: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3a4350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a4354: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a4354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4358: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4358u;
        // 0x3a435c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4360u;
}
