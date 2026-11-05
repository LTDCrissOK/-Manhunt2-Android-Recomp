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

// Function: sub_0010AB18
// Address: 0x10ab18 - 0x10abc0
void sub_0010AB18_0x10ab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AB18_0x10ab18");
#endif

    switch (ctx->pc) {
        case 0x10ab40u: goto label_10ab40;
        case 0x10ab6cu: goto label_10ab6c;
        case 0x10ab90u: goto label_10ab90;
        case 0x10aba4u: goto label_10aba4;
        default: break;
    }

    ctx->pc = 0x10ab18u;

    // 0x10ab18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ab1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ab20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ab24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ab24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10ab28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ab30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10ab34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10ab34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab38: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AB38u;
    SET_GPR_U32(ctx, 31, 0x10AB40u);
    ctx->pc = 0x10AB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB38u;
    // 0x10ab3c: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AB38u, 0x10AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB40u;
label_10ab40:
    // 0x10ab40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ab44: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10ab48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ab4c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x10ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10ab50: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x10ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x10ab54: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10AB54u;
    {
        const bool branch_taken_0x10ab54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB54u;
        // 0x10ab58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab54) {
            ctx->pc = 0x10ABA8u;
            goto label_10aba8;
        }
    }
    ctx->pc = 0x10AB5Cu;
    // 0x10ab5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab60: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x10ab64: 0xc04338a  jal         func_10CE28
    ctx->pc = 0x10AB64u;
    SET_GPR_U32(ctx, 31, 0x10AB6Cu);
    ctx->pc = 0x10AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB64u;
    // 0x10ab68: 0x8c700010  lw          $s0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CE28u, 0x10AB64u, 0x10AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB6Cu;
label_10ab6c:
    // 0x10ab6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ab70: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10ab74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ab78: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10ab7c: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x10ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x10ab80: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10AB80u;
    {
        const bool branch_taken_0x10ab80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ab80) {
            ctx->pc = 0x10AB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AB80u;
            // 0x10ab84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ABA8u;
            goto label_10aba8;
        }
    }
    ctx->pc = 0x10AB88u;
    // 0x10ab88: 0xc044158  jal         func_110560
    ctx->pc = 0x10AB88u;
    SET_GPR_U32(ctx, 31, 0x10AB90u);
    ctx->pc = 0x10AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB88u;
    // 0x10ab8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110560u, 0x10AB88u, 0x10AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB90u;
label_10ab90:
    // 0x10ab90: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10ab94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab98: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x10ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x10ab9c: 0xc047890  jal         func_11E240
    ctx->pc = 0x10AB9Cu;
    SET_GPR_U32(ctx, 31, 0x10ABA4u);
    ctx->pc = 0x10ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB9Cu;
    // 0x10aba0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E240u, 0x10AB9Cu, 0x10ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABA4u;
label_10aba4:
    // 0x10aba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10aba8:
    // 0x10aba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10aba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10abac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10abacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10abb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10abb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10abb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10abb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10abb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB8u;
        // 0x10abbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ABC0u;
}
