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

// Function: sub_0010AA08
// Address: 0x10aa08 - 0x10aaa0
void sub_0010AA08_0x10aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AA08_0x10aa08");
#endif

    switch (ctx->pc) {
        case 0x10aa2cu: goto label_10aa2c;
        case 0x10aa6cu: goto label_10aa6c;
        case 0x10aa7cu: goto label_10aa7c;
        default: break;
    }

    ctx->pc = 0x10aa08u;

    // 0x10aa08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10aa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10aa0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aa10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10aa14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10aa14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10aa1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10aa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa20: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10aa24: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AA24u;
    SET_GPR_U32(ctx, 31, 0x10AA2Cu);
    ctx->pc = 0x10AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA24u;
    // 0x10aa28: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AA24u, 0x10AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA2Cu;
label_10aa2c:
    // 0x10aa2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10aa2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa30: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10aa34: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10AA34u;
    {
        const bool branch_taken_0x10aa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA34u;
        // 0x10aa38: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa34) {
            ctx->pc = 0x10AA84u;
            goto label_10aa84;
        }
    }
    ctx->pc = 0x10AA3Cu;
    // 0x10aa3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10aa40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10aa44: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10aa44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10aa48: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x10AA48u;
    {
        const bool branch_taken_0x10aa48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA48u;
        // 0x10aa4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa48) {
            ctx->pc = 0x10AA88u;
            goto label_10aa88;
        }
    }
    ctx->pc = 0x10AA50u;
    // 0x10aa50: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x10aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10aa54: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x10AA54u;
    {
        const bool branch_taken_0x10aa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10aa54) {
            ctx->pc = 0x10AA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AA54u;
            // 0x10aa58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AA88u;
            goto label_10aa88;
        }
    }
    ctx->pc = 0x10AA5Cu;
    // 0x10aa5c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10aa60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10aa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa64: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10AA64u;
    SET_GPR_U32(ctx, 31, 0x10AA6Cu);
    ctx->pc = 0x10AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA64u;
    // 0x10aa68: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10AA64u, 0x10AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA6Cu;
label_10aa6c:
    // 0x10aa6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10aa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa74: 0xc044204  jal         func_110810
    ctx->pc = 0x10AA74u;
    SET_GPR_U32(ctx, 31, 0x10AA7Cu);
    ctx->pc = 0x10AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA74u;
    // 0x10aa78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110810u, 0x10AA74u, 0x10AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA7Cu;
label_10aa7c:
    // 0x10aa7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10AA7Cu;
    {
        const bool branch_taken_0x10aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA7Cu;
        // 0x10aa80: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa7c) {
            ctx->pc = 0x10AA88u;
            goto label_10aa88;
        }
    }
    ctx->pc = 0x10AA84u;
label_10aa84:
    // 0x10aa84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10aa84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10aa88:
    // 0x10aa88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10aa88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aa8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10aa8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10aa90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10aa90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aa94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10aa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10aa98: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA98u;
        // 0x10aa9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AAA0u;
}
