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

// Function: sub_003A3570
// Address: 0x3a3570 - 0x3a3628
void sub_003A3570_0x3a3570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3570_0x3a3570");
#endif

    switch (ctx->pc) {
        case 0x3a3594u: goto label_3a3594;
        case 0x3a35bcu: goto label_3a35bc;
        case 0x3a35d8u: goto label_3a35d8;
        case 0x3a35e8u: goto label_3a35e8;
        case 0x3a3604u: goto label_3a3604;
        case 0x3a360cu: goto label_3a360c;
        default: break;
    }

    ctx->pc = 0x3a3570u;

    // 0x3a3570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a3574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a3574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a3578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a357c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a3580: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a3580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a3584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a3588: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a3588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a358c: 0xc0e8d3e  jal         func_3A34F8
    ctx->pc = 0x3A358Cu;
    SET_GPR_U32(ctx, 31, 0x3A3594u);
    ctx->pc = 0x3A3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A358Cu;
    // 0x3a3590: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34F8u, 0x3A358Cu, 0x3A3594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3594u;
label_3a3594:
    // 0x3a3594: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a359c: 0x8c471e38  lw          $a3, 0x1E38($v0)
    ctx->pc = 0x3a359cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x411E38u));
    // 0x3a35a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a35a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a35a4: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x3a35a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3a35a8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3a35a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3a35ac: 0x14e3000c  bne         $a3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A35ACu;
    {
        const bool branch_taken_0x3a35ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35ACu;
        // 0x3a35b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35ac) {
            ctx->pc = 0x3A35E0u;
            goto label_3a35e0;
        }
    }
    ctx->pc = 0x3A35B4u;
    // 0x3a35b4: 0xc0f3d4e  jal         func_3CF538
    ctx->pc = 0x3A35B4u;
    SET_GPR_U32(ctx, 31, 0x3A35BCu);
    ctx->pc = 0x3A35B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A35B4u;
    // 0x3a35b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF538u, 0x3A35B4u, 0x3A35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A35BCu;
label_3a35bc:
    // 0x3a35bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a35c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a35c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a35c4: 0x2484d540  addiu       $a0, $a0, -0x2AC0
    ctx->pc = 0x3a35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956352));
    // 0x3a35c8: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A35C8u;
    {
        const bool branch_taken_0x3a35c8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35C8u;
        // 0x3a35cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35c8) {
            ctx->pc = 0x3A3604u;
            goto label_3a3604;
        }
    }
    ctx->pc = 0x3A35D0u;
    // 0x3a35d0: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A35D0u;
    SET_GPR_U32(ctx, 31, 0x3A35D8u);
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A35D0u, 0x3A35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A35D8u;
label_3a35d8:
    // 0x3a35d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A35D8u;
    {
        const bool branch_taken_0x3a35d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a35d8) {
            ctx->pc = 0x3A3604u;
            goto label_3a3604;
        }
    }
    ctx->pc = 0x3A35E0u;
label_3a35e0:
    // 0x3a35e0: 0xc0f3974  jal         func_3CE5D0
    ctx->pc = 0x3A35E0u;
    SET_GPR_U32(ctx, 31, 0x3A35E8u);
    ctx->pc = 0x3CE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE5D0u, 0x3A35E0u, 0x3A35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A35E8u;
label_3a35e8:
    // 0x3a35e8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a35ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a35ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a35f0: 0x2484d560  addiu       $a0, $a0, -0x2AA0
    ctx->pc = 0x3a35f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956384));
    // 0x3a35f4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A35F4u;
    {
        const bool branch_taken_0x3a35f4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35F4u;
        // 0x3a35f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35f4) {
            ctx->pc = 0x3A3604u;
            goto label_3a3604;
        }
    }
    ctx->pc = 0x3A35FCu;
    // 0x3a35fc: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A35FCu;
    SET_GPR_U32(ctx, 31, 0x3A3604u);
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A35FCu, 0x3A3604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3604u;
label_3a3604:
    // 0x3a3604: 0xc0e8d4c  jal         func_3A3530
    ctx->pc = 0x3A3604u;
    SET_GPR_U32(ctx, 31, 0x3A360Cu);
    ctx->pc = 0x3A3530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3530u, 0x3A3604u, 0x3A360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A360Cu;
label_3a360c:
    // 0x3a360c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a360cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a3610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a3614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a3618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a361c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a361cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a3620: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3620u;
        // 0x3a3624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3628u;
}
