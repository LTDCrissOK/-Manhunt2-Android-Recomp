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

// Function: sub_001604F0
// Address: 0x1604f0 - 0x1605c8
void sub_001604F0_0x1604f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001604F0_0x1604f0");
#endif

    switch (ctx->pc) {
        case 0x160524u: goto label_160524;
        case 0x160550u: goto label_160550;
        case 0x160588u: goto label_160588;
        case 0x1605b4u: goto label_1605b4;
        default: break;
    }

    ctx->pc = 0x1604f0u;

    // 0x1604f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1604f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1604f4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1604f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1604f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1604f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1604fc: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1604fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x160500: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x160500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x160504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16050c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x16050cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x160510: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x160510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x160514: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160514u;
    {
        const bool branch_taken_0x160514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160514u;
        // 0x160518: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160514) {
            ctx->pc = 0x160524u;
            goto label_160524;
        }
    }
    ctx->pc = 0x16051Cu;
    // 0x16051c: 0xc05818a  jal         func_160628
    ctx->pc = 0x16051Cu;
    SET_GPR_U32(ctx, 31, 0x160524u);
    ctx->pc = 0x160628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160628u, 0x16051Cu, 0x160524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160524u;
label_160524:
    // 0x160524: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x160524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x160528: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x160528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x16052c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16052cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x160530: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x160530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x160534: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x160534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x160538: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x160538u;
    {
        const bool branch_taken_0x160538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160538u;
        // 0x16053c: 0x3c080043  lui         $t0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160538) {
            ctx->pc = 0x160568u;
            goto label_160568;
        }
    }
    ctx->pc = 0x160540u;
    // 0x160540: 0x26030320  addiu       $v1, $s0, 0x320
    ctx->pc = 0x160540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x160544: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x160544u;
    {
        const bool branch_taken_0x160544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x160544) {
            ctx->pc = 0x160548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160544u;
            // 0x160548: 0x24420698  addiu       $v0, $v0, 0x698 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16056Cu;
            goto label_16056c;
        }
    }
    ctx->pc = 0x16054Cu;
    // 0x16054c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x16054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_160550:
    // 0x160550: 0x0  nop
    ctx->pc = 0x160550u;
    // NOP
    // 0x160554: 0x0  nop
    ctx->pc = 0x160554u;
    // NOP
    // 0x160558: 0x0  nop
    ctx->pc = 0x160558u;
    // NOP
    // 0x16055c: 0x0  nop
    ctx->pc = 0x16055cu;
    // NOP
    // 0x160560: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x160560u;
    {
        const bool branch_taken_0x160560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x160560) {
            ctx->pc = 0x160564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160560u;
            // 0x160564: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160550;
        }
    }
    ctx->pc = 0x160568u;
label_160568:
    // 0x160568: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x160568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
label_16056c:
    // 0x16056c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x16056Cu;
    {
        const bool branch_taken_0x16056c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16056Cu;
        // 0x160570: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16056c) {
            ctx->pc = 0x1605A0u;
            goto label_1605a0;
        }
    }
    ctx->pc = 0x160574u;
    // 0x160574: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x160574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160578: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x160578u;
    {
        const bool branch_taken_0x160578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x160578) {
            ctx->pc = 0x16057Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160578u;
            // 0x16057c: 0x25020638  addiu       $v0, $t0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1605A4u;
            goto label_1605a4;
        }
    }
    ctx->pc = 0x160580u;
    // 0x160580: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x160580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160584: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x160584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_160588:
    // 0x160588: 0x0  nop
    ctx->pc = 0x160588u;
    // NOP
    // 0x16058c: 0x0  nop
    ctx->pc = 0x16058cu;
    // NOP
    // 0x160590: 0x0  nop
    ctx->pc = 0x160590u;
    // NOP
    // 0x160594: 0x0  nop
    ctx->pc = 0x160594u;
    // NOP
    // 0x160598: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x160598u;
    {
        const bool branch_taken_0x160598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160598u;
        // 0x16059c: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160598) {
            ctx->pc = 0x160588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160588;
        }
    }
    ctx->pc = 0x1605A0u;
label_1605a0:
    // 0x1605a0: 0x25020638  addiu       $v0, $t0, 0x638
    ctx->pc = 0x1605a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1592));
label_1605a4:
    // 0x1605a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1605A4u;
    {
        const bool branch_taken_0x1605a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A4u;
        // 0x1605a8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605a4) {
            ctx->pc = 0x1605B4u;
            goto label_1605b4;
        }
    }
    ctx->pc = 0x1605ACu;
    // 0x1605ac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1605ACu;
    SET_GPR_U32(ctx, 31, 0x1605B4u);
    ctx->pc = 0x1605B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605ACu;
    // 0x1605b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1605ACu, 0x1605B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605B4u;
label_1605b4:
    // 0x1605b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1605b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1605b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1605b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1605bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1605bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1605c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1605C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1605C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605C0u;
        // 0x1605c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1605C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1605C8u;
}
