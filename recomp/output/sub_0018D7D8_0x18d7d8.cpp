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

// Function: sub_0018D7D8
// Address: 0x18d7d8 - 0x18d858
void sub_0018D7D8_0x18d7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D7D8_0x18d7d8");
#endif

    switch (ctx->pc) {
        case 0x18d7d8u: goto label_18d7d8;
        case 0x18d7dcu: goto label_18d7dc;
        case 0x18d7e0u: goto label_18d7e0;
        case 0x18d7e4u: goto label_18d7e4;
        case 0x18d7e8u: goto label_18d7e8;
        case 0x18d7ecu: goto label_18d7ec;
        case 0x18d7f0u: goto label_18d7f0;
        case 0x18d7f4u: goto label_18d7f4;
        case 0x18d7f8u: goto label_18d7f8;
        case 0x18d7fcu: goto label_18d7fc;
        case 0x18d800u: goto label_18d800;
        case 0x18d804u: goto label_18d804;
        case 0x18d808u: goto label_18d808;
        case 0x18d80cu: goto label_18d80c;
        case 0x18d810u: goto label_18d810;
        case 0x18d814u: goto label_18d814;
        case 0x18d818u: goto label_18d818;
        case 0x18d81cu: goto label_18d81c;
        case 0x18d820u: goto label_18d820;
        case 0x18d824u: goto label_18d824;
        case 0x18d828u: goto label_18d828;
        case 0x18d82cu: goto label_18d82c;
        case 0x18d830u: goto label_18d830;
        case 0x18d834u: goto label_18d834;
        case 0x18d838u: goto label_18d838;
        case 0x18d83cu: goto label_18d83c;
        case 0x18d840u: goto label_18d840;
        case 0x18d844u: goto label_18d844;
        case 0x18d848u: goto label_18d848;
        case 0x18d84cu: goto label_18d84c;
        case 0x18d850u: goto label_18d850;
        case 0x18d854u: goto label_18d854;
        default: break;
    }

    ctx->pc = 0x18d7d8u;

label_18d7d8:
    // 0x18d7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18d7dc:
    // 0x18d7dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x18d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_18d7e0:
    // 0x18d7e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18d7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18d7e4:
    // 0x18d7e4: 0x24421138  addiu       $v0, $v0, 0x1138
    ctx->pc = 0x18d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4408));
label_18d7e8:
    // 0x18d7e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18d7ec:
    // 0x18d7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18d7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d7f0:
    // 0x18d7f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18d7f4:
    // 0x18d7f4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_18d7f8:
    // 0x18d7f8: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x18d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_18d7fc:
    // 0x18d7fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18d800:
    if (ctx->pc == 0x18D800u) {
        ctx->pc = 0x18D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7FCu;
        // 0x18d800: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D804u;
        goto label_18d804;
    }
    ctx->pc = 0x18D7FCu;
    {
        const bool branch_taken_0x18d7fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7FCu;
        // 0x18d800: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7fc) {
            ctx->pc = 0x18D814u;
            goto label_18d814;
        }
    }
    ctx->pc = 0x18D804u;
label_18d804:
    // 0x18d804: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18d804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18d808:
    // 0x18d808: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18d80c:
    // 0x18d80c: 0x40f809  jalr        $v0
label_18d810:
    if (ctx->pc == 0x18D810u) {
        ctx->pc = 0x18D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D80Cu;
        // 0x18d810: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D814u;
        goto label_18d814;
    }
    ctx->pc = 0x18D80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D814u);
        ctx->pc = 0x18D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D80Cu;
        // 0x18d810: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D80Cu, 0x18D814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D814u;
label_18d814:
    // 0x18d814: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x18d814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_18d818:
    // 0x18d818: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x18d818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_18d81c:
    // 0x18d81c: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_18d820:
    // 0x18d820: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x18d820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_18d824:
    // 0x18d824: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x18d824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_18d828:
    // 0x18d828: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x18d828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_18d82c:
    // 0x18d82c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_18d830:
    // 0x18d830: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18d834:
    if (ctx->pc == 0x18D834u) {
        ctx->pc = 0x18D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D830u;
        // 0x18d834: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D838u;
        goto label_18d838;
    }
    ctx->pc = 0x18D830u;
    {
        const bool branch_taken_0x18d830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D830u;
        // 0x18d834: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d830) {
            ctx->pc = 0x18D840u;
            goto label_18d840;
        }
    }
    ctx->pc = 0x18D838u;
label_18d838:
    // 0x18d838: 0xc0f5222  jal         func_3D4888
label_18d83c:
    if (ctx->pc == 0x18D83Cu) {
        ctx->pc = 0x18D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D838u;
        // 0x18d83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D840u;
        goto label_18d840;
    }
    ctx->pc = 0x18D838u;
    SET_GPR_U32(ctx, 31, 0x18D840u);
    ctx->pc = 0x18D83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D838u;
    // 0x18d83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x18D838u, 0x18D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D840u;
label_18d840:
    // 0x18d840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18d840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18d844:
    // 0x18d844: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18d844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18d848:
    // 0x18d848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d84c:
    // 0x18d84c: 0x3e00008  jr          $ra
label_18d850:
    if (ctx->pc == 0x18D850u) {
        ctx->pc = 0x18D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D84Cu;
        // 0x18d850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D854u;
        goto label_18d854;
    }
    ctx->pc = 0x18D84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D84Cu;
        // 0x18d850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D854u;
label_18d854:
    // 0x18d854: 0x0  nop
    ctx->pc = 0x18d854u;
    // NOP
    ctx->pc = 0x18d858u;
}
