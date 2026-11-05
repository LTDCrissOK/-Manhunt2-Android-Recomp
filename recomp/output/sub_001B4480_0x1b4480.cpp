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

// Function: sub_001B4480
// Address: 0x1b4480 - 0x1b4558
void sub_001B4480_0x1b4480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4480_0x1b4480");
#endif

    switch (ctx->pc) {
        case 0x1b44a0u: goto label_1b44a0;
        case 0x1b44c8u: goto label_1b44c8;
        case 0x1b44d8u: goto label_1b44d8;
        case 0x1b44fcu: goto label_1b44fc;
        case 0x1b450cu: goto label_1b450c;
        case 0x1b452cu: goto label_1b452c;
        default: break;
    }

    ctx->pc = 0x1b4480u;

    // 0x1b4480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b448c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b448cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4490: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b4490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b4494: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b4494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b4498: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B4498u;
    SET_GPR_U32(ctx, 31, 0x1B44A0u);
    ctx->pc = 0x1B449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4498u;
    // 0x1b449c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B4498u, 0x1B44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44A0u;
label_1b44a0:
    // 0x1b44a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b44a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44a4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1b44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1b44a8: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1b44a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1b44ac: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1b44acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1b44b0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B44B0u;
    {
        const bool branch_taken_0x1b44b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44B0u;
        // 0x1b44b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44b0) {
            ctx->pc = 0x1B453Cu;
            goto label_1b453c;
        }
    }
    ctx->pc = 0x1B44B8u;
    // 0x1b44b8: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x1b44b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x1b44bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b44bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44c0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1B44C0u;
    SET_GPR_U32(ctx, 31, 0x1B44C8u);
    ctx->pc = 0x1B44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44C0u;
    // 0x1b44c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1B44C0u, 0x1B44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44C8u;
label_1b44c8:
    // 0x1b44c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B44C8u;
    {
        const bool branch_taken_0x1b44c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44c8) {
            ctx->pc = 0x1B44CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B44C8u;
            // 0x1b44cc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B44E4u;
            goto label_1b44e4;
        }
    }
    ctx->pc = 0x1B44D0u;
    // 0x1b44d0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1B44D0u;
    SET_GPR_U32(ctx, 31, 0x1B44D8u);
    ctx->pc = 0x1B44D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44D0u;
    // 0x1b44d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1B44D0u, 0x1B44D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44D8u;
label_1b44d8:
    // 0x1b44d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b44dc: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B44DCu;
    {
        const bool branch_taken_0x1b44dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b44dc) {
            ctx->pc = 0x1B44E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B44DCu;
            // 0x1b44e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B44E4u;
            goto label_1b44e4;
        }
    }
    ctx->pc = 0x1B44E4u;
label_1b44e4:
    // 0x1b44e4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B44E4u;
    {
        const bool branch_taken_0x1b44e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44E4u;
        // 0x1b44e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44e4) {
            ctx->pc = 0x1B4504u;
            goto label_1b4504;
        }
    }
    ctx->pc = 0x1B44ECu;
    // 0x1b44ec: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b44f0: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x1b44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1b44f4: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1B44F4u;
    SET_GPR_U32(ctx, 31, 0x1B44FCu);
    ctx->pc = 0x1B44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44F4u;
    // 0x1b44f8: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1B44F4u, 0x1B44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44FCu;
label_1b44fc:
    // 0x1b44fc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B44FCu;
    {
        const bool branch_taken_0x1b44fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44FCu;
        // 0x1b4500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44fc) {
            ctx->pc = 0x1B453Cu;
            goto label_1b453c;
        }
    }
    ctx->pc = 0x1B4504u;
label_1b4504:
    // 0x1b4504: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1B4504u;
    SET_GPR_U32(ctx, 31, 0x1B450Cu);
    ctx->pc = 0x1B4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4504u;
    // 0x1b4508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1B4504u, 0x1B450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B450Cu;
label_1b450c:
    // 0x1b450c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1b450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1b4510: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4510u;
    {
        const bool branch_taken_0x1b4510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4510) {
            ctx->pc = 0x1B4514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4510u;
            // 0x1b4514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B453Cu;
            goto label_1b453c;
        }
    }
    ctx->pc = 0x1B4518u;
    // 0x1b4518: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b451c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4520: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x1b4520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1b4524: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1B4524u;
    SET_GPR_U32(ctx, 31, 0x1B452Cu);
    ctx->pc = 0x1B4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4524u;
    // 0x1b4528: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1B4524u, 0x1B452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B452Cu;
label_1b452c:
    // 0x1b452c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b452cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4530: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4530u;
    {
        const bool branch_taken_0x1b4530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4530u;
        // 0x1b4534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4530) {
            ctx->pc = 0x1B453Cu;
            goto label_1b453c;
        }
    }
    ctx->pc = 0x1B4538u;
    // 0x1b4538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b453c:
    // 0x1b453c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b453cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4544: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b4544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4548: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b4548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b454c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B454Cu;
        // 0x1b4550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B454Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4554u;
    // 0x1b4554: 0x0  nop
    ctx->pc = 0x1b4554u;
    // NOP
    ctx->pc = 0x1b4558u;
}
