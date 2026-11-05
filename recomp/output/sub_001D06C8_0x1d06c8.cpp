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

// Function: sub_001D06C8
// Address: 0x1d06c8 - 0x1d07d8
void sub_001D06C8_0x1d06c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D06C8_0x1d06c8");
#endif

    switch (ctx->pc) {
        case 0x1d0718u: goto label_1d0718;
        case 0x1d0738u: goto label_1d0738;
        case 0x1d074cu: goto label_1d074c;
        case 0x1d0760u: goto label_1d0760;
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0790u: goto label_1d0790;
        default: break;
    }

    ctx->pc = 0x1d06c8u;

    // 0x1d06c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d06c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d06cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d06ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d06d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d06d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d06d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d06d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d06d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d06d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d06dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d06dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d06e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d06e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d06e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d06e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d06e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d06ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d06ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d06f0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1d06f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d06f4: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D06F4u;
    {
        const bool branch_taken_0x1d06f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06F4u;
        // 0x1d06f8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06f4) {
            ctx->pc = 0x1D0738u;
            goto label_1d0738;
        }
    }
    ctx->pc = 0x1D06FCu;
    // 0x1d06fc: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d0700: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0704: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1d0704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d0708: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1d0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d070c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D070Cu;
    {
        const bool branch_taken_0x1d070c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D070Cu;
        // 0x1d0710: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d070c) {
            ctx->pc = 0x1D0730u;
            goto label_1d0730;
        }
    }
    ctx->pc = 0x1D0714u;
    // 0x1d0714: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1d0714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1d0718:
    // 0x1d0718: 0x0  nop
    ctx->pc = 0x1d0718u;
    // NOP
    // 0x1d071c: 0x0  nop
    ctx->pc = 0x1d071cu;
    // NOP
    // 0x1d0720: 0x0  nop
    ctx->pc = 0x1d0720u;
    // NOP
    // 0x1d0724: 0x0  nop
    ctx->pc = 0x1d0724u;
    // NOP
    // 0x1d0728: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0728u;
    {
        const bool branch_taken_0x1d0728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0728u;
        // 0x1d072c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0728) {
            ctx->pc = 0x1D0718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0718;
        }
    }
    ctx->pc = 0x1D0730u;
label_1d0730:
    // 0x1d0730: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D0730u;
    SET_GPR_U32(ctx, 31, 0x1D0738u);
    ctx->pc = 0x1D0734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0730u;
    // 0x1d0734: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D0730u, 0x1D0738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0738u;
label_1d0738:
    // 0x1d0738: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1d0738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d073c: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x1d073cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d0740: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1d0740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d0744: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1D0744u;
    SET_GPR_U32(ctx, 31, 0x1D074Cu);
    ctx->pc = 0x1D0748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0744u;
    // 0x1d0748: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1D0744u, 0x1D074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D074Cu;
label_1d074c:
    // 0x1d074c: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x1d074cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d0750: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1d0750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1d0754: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0754u;
    {
        const bool branch_taken_0x1d0754 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0754u;
        // 0x1d0758: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0754) {
            ctx->pc = 0x1D0778u;
            goto label_1d0778;
        }
    }
    ctx->pc = 0x1D075Cu;
    // 0x1d075c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1d075cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0760:
    // 0x1d0760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0764: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D0764u;
    SET_GPR_U32(ctx, 31, 0x1D076Cu);
    ctx->pc = 0x1D0768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0764u;
    // 0x1d0768: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D0764u, 0x1D076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D076Cu;
label_1d076c:
    // 0x1d076c: 0x0  nop
    ctx->pc = 0x1d076cu;
    // NOP
    // 0x1d0770: 0x1635fffb  bne         $s1, $s5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0770u;
    {
        const bool branch_taken_0x1d0770 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x1D0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0770u;
        // 0x1d0774: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0770) {
            ctx->pc = 0x1D0760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0760;
        }
    }
    ctx->pc = 0x1D0778u;
label_1d0778:
    // 0x1d0778: 0xae74000c  sw          $s4, 0xC($s3)
    ctx->pc = 0x1d0778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 20));
    // 0x1d077c: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1D077Cu;
    {
        const bool branch_taken_0x1d077c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1D0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D077Cu;
        // 0x1d0780: 0xa6720004  sh          $s2, 0x4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d077c) {
            ctx->pc = 0x1D07B4u;
            goto label_1d07b4;
        }
    }
    ctx->pc = 0x1D0784u;
    // 0x1d0784: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d0784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0788: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d0788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d078c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d078cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0790:
    // 0x1d0790: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1d0790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d0794: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d0794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d0798: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d0798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d079c: 0xa0600020  sb          $zero, 0x20($v1)
    ctx->pc = 0x1d079cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d07a0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1d07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d07a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1d07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d07a8: 0xa0440021  sb          $a0, 0x21($v0)
    ctx->pc = 0x1d07a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d07ac: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D07ACu;
    {
        const bool branch_taken_0x1d07ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07ACu;
        // 0x1d07b0: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07ac) {
            ctx->pc = 0x1D0790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0790;
        }
    }
    ctx->pc = 0x1D07B4u;
label_1d07b4:
    // 0x1d07b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d07b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d07b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d07b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d07bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d07bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d07c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d07c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d07c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d07c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d07c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d07c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d07cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d07ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d07d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D07D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07D0u;
        // 0x1d07d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D07D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D07D8u;
}
