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

// Function: sub_00317898
// Address: 0x317898 - 0x317940
void sub_00317898_0x317898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317898_0x317898");
#endif

    switch (ctx->pc) {
        case 0x317898u: goto label_317898;
        case 0x31789cu: goto label_31789c;
        case 0x3178a0u: goto label_3178a0;
        case 0x3178a4u: goto label_3178a4;
        case 0x3178a8u: goto label_3178a8;
        case 0x3178acu: goto label_3178ac;
        case 0x3178b0u: goto label_3178b0;
        case 0x3178b4u: goto label_3178b4;
        case 0x3178b8u: goto label_3178b8;
        case 0x3178bcu: goto label_3178bc;
        case 0x3178c0u: goto label_3178c0;
        case 0x3178c4u: goto label_3178c4;
        case 0x3178c8u: goto label_3178c8;
        case 0x3178ccu: goto label_3178cc;
        case 0x3178d0u: goto label_3178d0;
        case 0x3178d4u: goto label_3178d4;
        case 0x3178d8u: goto label_3178d8;
        case 0x3178dcu: goto label_3178dc;
        case 0x3178e0u: goto label_3178e0;
        case 0x3178e4u: goto label_3178e4;
        case 0x3178e8u: goto label_3178e8;
        case 0x3178ecu: goto label_3178ec;
        case 0x3178f0u: goto label_3178f0;
        case 0x3178f4u: goto label_3178f4;
        case 0x3178f8u: goto label_3178f8;
        case 0x3178fcu: goto label_3178fc;
        case 0x317900u: goto label_317900;
        case 0x317904u: goto label_317904;
        case 0x317908u: goto label_317908;
        case 0x31790cu: goto label_31790c;
        case 0x317910u: goto label_317910;
        case 0x317914u: goto label_317914;
        case 0x317918u: goto label_317918;
        case 0x31791cu: goto label_31791c;
        case 0x317920u: goto label_317920;
        case 0x317924u: goto label_317924;
        case 0x317928u: goto label_317928;
        case 0x31792cu: goto label_31792c;
        case 0x317930u: goto label_317930;
        case 0x317934u: goto label_317934;
        case 0x317938u: goto label_317938;
        case 0x31793cu: goto label_31793c;
        default: break;
    }

    ctx->pc = 0x317898u;

label_317898:
    // 0x317898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31789c:
    // 0x31789c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3178a0:
    // 0x3178a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3178a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3178a4:
    // 0x3178a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3178a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3178a8:
    // 0x3178a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3178a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3178ac:
    // 0x3178ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3178acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3178b0:
    // 0x3178b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3178b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3178b4:
    // 0x3178b4: 0x8c44bcf0  lw          $a0, -0x4310($v0)
    ctx->pc = 0x3178b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
label_3178b8:
    // 0x3178b8: 0x8c70bd50  lw          $s0, -0x42B0($v1)
    ctx->pc = 0x3178b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
label_3178bc:
    // 0x3178bc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3178bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3178c0:
    // 0x3178c0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3178c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_3178c4:
    // 0x3178c4: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x3178c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_3178c8:
    // 0x3178c8: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x3178c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3178cc:
    // 0x3178cc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3178ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3178d0:
    // 0x3178d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3178d4:
    if (ctx->pc == 0x3178D4u) {
        ctx->pc = 0x3178D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178D0u;
        // 0x3178d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3178D8u;
        goto label_3178d8;
    }
    ctx->pc = 0x3178D0u;
    {
        const bool branch_taken_0x3178d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3178D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178D0u;
        // 0x3178d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3178d0) {
            ctx->pc = 0x3178E4u;
            goto label_3178e4;
        }
    }
    ctx->pc = 0x3178D8u;
label_3178d8:
    // 0x3178d8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3178d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3178dc:
    // 0x3178dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3178e0:
    if (ctx->pc == 0x3178E0u) {
        ctx->pc = 0x3178E4u;
        goto label_3178e4;
    }
    ctx->pc = 0x3178DCu;
    {
        const bool branch_taken_0x3178dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3178dc) {
            ctx->pc = 0x3178E8u;
            goto label_3178e8;
        }
    }
    ctx->pc = 0x3178E4u;
label_3178e4:
    // 0x3178e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3178e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3178e8:
    // 0x3178e8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_3178ec:
    if (ctx->pc == 0x3178ECu) {
        ctx->pc = 0x3178ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178E8u;
        // 0x3178ec: 0x8e24bcf0  lw          $a0, -0x4310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3178F0u;
        goto label_3178f0;
    }
    ctx->pc = 0x3178E8u;
    {
        const bool branch_taken_0x3178e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3178ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178E8u;
        // 0x3178ec: 0x8e24bcf0  lw          $a0, -0x4310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3178e8) {
            ctx->pc = 0x317914u;
            goto label_317914;
        }
    }
    ctx->pc = 0x3178F0u;
label_3178f0:
    // 0x3178f0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x3178f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_3178f4:
    // 0x3178f4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3178f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_3178f8:
    // 0x3178f8: 0x40f809  jalr        $v0
label_3178fc:
    if (ctx->pc == 0x3178FCu) {
        ctx->pc = 0x3178FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178F8u;
        // 0x3178fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317900u;
        goto label_317900;
    }
    ctx->pc = 0x3178F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317900u);
        ctx->pc = 0x3178FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178F8u;
        // 0x3178fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3178F8u, 0x317900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317900u;
label_317900:
    // 0x317900: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x317900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_317904:
    // 0x317904: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x317904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_317908:
    // 0x317908: 0x40f809  jalr        $v0
label_31790c:
    if (ctx->pc == 0x31790Cu) {
        ctx->pc = 0x31790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317908u;
        // 0x31790c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317910u;
        goto label_317910;
    }
    ctx->pc = 0x317908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317910u);
        ctx->pc = 0x31790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317908u;
        // 0x31790c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317908u, 0x317910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317910u;
label_317910:
    // 0x317910: 0x8e24bcf0  lw          $a0, -0x4310($s1)
    ctx->pc = 0x317910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
label_317914:
    // 0x317914: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x317914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_317918:
    // 0x317918: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x317918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_31791c:
    // 0x31791c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31791cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_317920:
    // 0x317920: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x317920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_317924:
    // 0x317924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x317924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_317928:
    // 0x317928: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x317928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31792c:
    // 0x31792c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31792cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_317930:
    // 0x317930: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x317930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_317934:
    // 0x317934: 0x3e00008  jr          $ra
label_317938:
    if (ctx->pc == 0x317938u) {
        ctx->pc = 0x317938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317934u;
        // 0x317938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31793Cu;
        goto label_31793c;
    }
    ctx->pc = 0x317934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317934u;
        // 0x317938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31793Cu;
label_31793c:
    // 0x31793c: 0x0  nop
    ctx->pc = 0x31793cu;
    // NOP
    ctx->pc = 0x317940u;
}
