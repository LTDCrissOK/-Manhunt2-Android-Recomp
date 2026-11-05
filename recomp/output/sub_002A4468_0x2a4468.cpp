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

// Function: sub_002A4468
// Address: 0x2a4468 - 0x2a4550
void sub_002A4468_0x2a4468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4468_0x2a4468");
#endif

    switch (ctx->pc) {
        case 0x2a44a4u: goto label_2a44a4;
        case 0x2a44b0u: goto label_2a44b0;
        case 0x2a44c8u: goto label_2a44c8;
        case 0x2a44d4u: goto label_2a44d4;
        case 0x2a44ecu: goto label_2a44ec;
        case 0x2a4500u: goto label_2a4500;
        case 0x2a450cu: goto label_2a450c;
        case 0x2a4518u: goto label_2a4518;
        case 0x2a452cu: goto label_2a452c;
        default: break;
    }

    ctx->pc = 0x2a4468u;

    // 0x2a4468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a4468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a446c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a446cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a4470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a4470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a4474: 0x244236c0  addiu       $v0, $v0, 0x36C0
    ctx->pc = 0x2a4474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14016));
    // 0x2a4478: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a4478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a447c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a447cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4480: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a4480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a4484: 0x3c130043  lui         $s3, 0x43
    ctx->pc = 0x2a4484u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)67 << 16));
    // 0x2a4488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a448c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a448cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4490: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a4490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a4494: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2a4494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2a4498: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2a4498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x2a449c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A449Cu;
    SET_GPR_U32(ctx, 31, 0x2A44A4u);
    ctx->pc = 0x2A44A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A449Cu;
    // 0x2a44a0: 0x8e2401ac  lw          $a0, 0x1AC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A449Cu, 0x2A44A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44A4u;
label_2a44a4:
    // 0x2a44a4: 0x2624017c  addiu       $a0, $s1, 0x17C
    ctx->pc = 0x2a44a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
    // 0x2a44a8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A44A8u;
    SET_GPR_U32(ctx, 31, 0x2A44B0u);
    ctx->pc = 0x2A44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A44A8u;
    // 0x2a44ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A44A8u, 0x2A44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44B0u;
label_2a44b0:
    // 0x2a44b0: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x2a44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2a44b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A44B4u;
    {
        const bool branch_taken_0x2a44b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44B4u;
        // 0x2a44b8: 0x26300170  addiu       $s0, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44b4) {
            ctx->pc = 0x2A44E0u;
            goto label_2a44e0;
        }
    }
    ctx->pc = 0x2A44BCu;
    // 0x2a44bc: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A44BCu;
    {
        const bool branch_taken_0x2a44bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A44C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44BCu;
        // 0x2a44c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44bc) {
            ctx->pc = 0x2A44E0u;
            goto label_2a44e0;
        }
    }
    ctx->pc = 0x2A44C4u;
    // 0x2a44c4: 0x2610ffb0  addiu       $s0, $s0, -0x50
    ctx->pc = 0x2a44c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
label_2a44c8:
    // 0x2a44c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a44c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a44cc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A44CCu;
    SET_GPR_U32(ctx, 31, 0x2A44D4u);
    ctx->pc = 0x2A44D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A44CCu;
    // 0x2a44d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A44CCu, 0x2A44D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44D4u;
label_2a44d4:
    // 0x2a44d4: 0x0  nop
    ctx->pc = 0x2a44d4u;
    // NOP
    // 0x2a44d8: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A44D8u;
    {
        const bool branch_taken_0x2a44d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2A44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44D8u;
        // 0x2a44dc: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44d8) {
            ctx->pc = 0x2A44C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a44c8;
        }
    }
    ctx->pc = 0x2A44E0u;
label_2a44e0:
    // 0x2a44e0: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2a44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2a44e4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A44E4u;
    SET_GPR_U32(ctx, 31, 0x2A44ECu);
    ctx->pc = 0x2A44E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A44E4u;
    // 0x2a44e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A44E4u, 0x2A44ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44ECu;
label_2a44ec:
    // 0x2a44ec: 0x26623300  addiu       $v0, $s3, 0x3300
    ctx->pc = 0x2a44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13056));
    // 0x2a44f0: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x2a44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2a44f4: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2a44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x2a44f8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A44F8u;
    SET_GPR_U32(ctx, 31, 0x2A4500u);
    ctx->pc = 0x2A44FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A44F8u;
    // 0x2a44fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A44F8u, 0x2A4500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4500u;
label_2a4500:
    // 0x2a4500: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x2a4500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a4504: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A4504u;
    SET_GPR_U32(ctx, 31, 0x2A450Cu);
    ctx->pc = 0x2A4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4504u;
    // 0x2a4508: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A4504u, 0x2A450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A450Cu;
label_2a450c:
    // 0x2a450c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4510: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A4510u;
    SET_GPR_U32(ctx, 31, 0x2A4518u);
    ctx->pc = 0x2A4514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4510u;
    // 0x2a4514: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A4510u, 0x2A4518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4518u;
label_2a4518:
    // 0x2a4518: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2a4518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2a451c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A451Cu;
    {
        const bool branch_taken_0x2a451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A451Cu;
        // 0x2a4520: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a451c) {
            ctx->pc = 0x2A4530u;
            goto label_2a4530;
        }
    }
    ctx->pc = 0x2A4524u;
    // 0x2a4524: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A4524u;
    SET_GPR_U32(ctx, 31, 0x2A452Cu);
    ctx->pc = 0x2A4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4524u;
    // 0x2a4528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A4524u, 0x2A452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A452Cu;
label_2a452c:
    // 0x2a452c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a452cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4530:
    // 0x2a4530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a4530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a4534: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a4534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4538: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a4538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a453c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a453cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4540: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a4540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a4544: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4544u;
        // 0x2a4548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A454Cu;
    // 0x2a454c: 0x0  nop
    ctx->pc = 0x2a454cu;
    // NOP
    ctx->pc = 0x2a4550u;
}
