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

// Function: sub_00161528
// Address: 0x161528 - 0x1615e8
void sub_00161528_0x161528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161528_0x161528");
#endif

    switch (ctx->pc) {
        case 0x161564u: goto label_161564;
        case 0x161570u: goto label_161570;
        case 0x1615a0u: goto label_1615a0;
        case 0x1615ccu: goto label_1615cc;
        default: break;
    }

    ctx->pc = 0x161528u;

    // 0x161528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16152c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16152cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x161530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161534: 0x24420d38  addiu       $v0, $v0, 0xD38
    ctx->pc = 0x161534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3384));
    // 0x161538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x161538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16153c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16153cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161540: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x161540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x161544: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x161544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161548: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x161548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16154c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x16154cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x161550: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x161550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x161554: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x161554u;
    {
        const bool branch_taken_0x161554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161554u;
        // 0x161558: 0x26120210  addiu       $s2, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161554) {
            ctx->pc = 0x161564u;
            goto label_161564;
        }
    }
    ctx->pc = 0x16155Cu;
    // 0x16155c: 0xc058594  jal         func_161650
    ctx->pc = 0x16155Cu;
    SET_GPR_U32(ctx, 31, 0x161564u);
    ctx->pc = 0x161650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161650u, 0x16155Cu, 0x161564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161564u;
label_161564:
    // 0x161564: 0x26040378  addiu       $a0, $s0, 0x378
    ctx->pc = 0x161564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 888));
    // 0x161568: 0xc045e7a  jal         func_1179E8
    ctx->pc = 0x161568u;
    SET_GPR_U32(ctx, 31, 0x161570u);
    ctx->pc = 0x16156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161568u;
    // 0x16156c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1179E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179E8u, 0x161568u, 0x161570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161570u;
label_161570:
    // 0x161570: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x161570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x161574: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x161574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x161578: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x161578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x16157c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x16157cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x161580: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x161580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x161584: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x161584u;
    {
        const bool branch_taken_0x161584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161584u;
        // 0x161588: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161584) {
            ctx->pc = 0x1615B8u;
            goto label_1615b8;
        }
    }
    ctx->pc = 0x16158Cu;
    // 0x16158c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16158cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161590: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x161590u;
    {
        const bool branch_taken_0x161590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161590) {
            ctx->pc = 0x161594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161590u;
            // 0x161594: 0x24820638  addiu       $v0, $a0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1615BCu;
            goto label_1615bc;
        }
    }
    ctx->pc = 0x161598u;
    // 0x161598: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x161598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x16159c: 0x0  nop
    ctx->pc = 0x16159cu;
    // NOP
label_1615a0:
    // 0x1615a0: 0x0  nop
    ctx->pc = 0x1615a0u;
    // NOP
    // 0x1615a4: 0x0  nop
    ctx->pc = 0x1615a4u;
    // NOP
    // 0x1615a8: 0x0  nop
    ctx->pc = 0x1615a8u;
    // NOP
    // 0x1615ac: 0x0  nop
    ctx->pc = 0x1615acu;
    // NOP
    // 0x1615b0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1615B0u;
    {
        const bool branch_taken_0x1615b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1615B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615B0u;
        // 0x1615b4: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615b0) {
            ctx->pc = 0x1615A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1615a0;
        }
    }
    ctx->pc = 0x1615B8u;
label_1615b8:
    // 0x1615b8: 0x24820638  addiu       $v0, $a0, 0x638
    ctx->pc = 0x1615b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1592));
label_1615bc:
    // 0x1615bc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1615BCu;
    {
        const bool branch_taken_0x1615bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1615C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615BCu;
        // 0x1615c0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615bc) {
            ctx->pc = 0x1615CCu;
            goto label_1615cc;
        }
    }
    ctx->pc = 0x1615C4u;
    // 0x1615c4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1615C4u;
    SET_GPR_U32(ctx, 31, 0x1615CCu);
    ctx->pc = 0x1615C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615C4u;
    // 0x1615c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1615C4u, 0x1615CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615CCu;
label_1615cc:
    // 0x1615cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1615ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1615d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1615d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1615d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1615d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1615d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1615d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1615dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1615DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1615E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615DCu;
        // 0x1615e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1615DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1615E4u;
    // 0x1615e4: 0x0  nop
    ctx->pc = 0x1615e4u;
    // NOP
    ctx->pc = 0x1615e8u;
}
