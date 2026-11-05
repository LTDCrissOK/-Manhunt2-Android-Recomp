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

// Function: sub_00139BC0
// Address: 0x139bc0 - 0x139c68
void sub_00139BC0_0x139bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139BC0_0x139bc0");
#endif

    switch (ctx->pc) {
        case 0x139c04u: goto label_139c04;
        case 0x139c24u: goto label_139c24;
        case 0x139c34u: goto label_139c34;
        case 0x139c4cu: goto label_139c4c;
        default: break;
    }

    ctx->pc = 0x139bc0u;

    // 0x139bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139bc4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x139bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x139bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139bcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139bd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x139bd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bd8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x139bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x139bdc: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x139bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x139be0: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x139be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x139be4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x139be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x139be8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x139be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139bec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x139becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x139bf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x139bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139bf4: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x139bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139bf8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x139bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x139bfc: 0xc09526c  jal         func_2549B0
    ctx->pc = 0x139BFCu;
    SET_GPR_U32(ctx, 31, 0x139C04u);
    ctx->pc = 0x139C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139BFCu;
    // 0x139c00: 0x8c440108  lw          $a0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549B0u, 0x139BFCu, 0x139C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C04u;
label_139c04:
    // 0x139c04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x139C04u;
    {
        const bool branch_taken_0x139c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C04u;
        // 0x139c08: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c04) {
            ctx->pc = 0x139C4Cu;
            goto label_139c4c;
        }
    }
    ctx->pc = 0x139C0Cu;
    // 0x139c0c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x139c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x139c10: 0x8c7200b0  lw          $s2, 0xB0($v1)
    ctx->pc = 0x139c10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x139c14: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x139C14u;
    {
        const bool branch_taken_0x139c14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C14u;
        // 0x139c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c14) {
            ctx->pc = 0x139C4Cu;
            goto label_139c4c;
        }
    }
    ctx->pc = 0x139C1Cu;
    // 0x139c1c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x139C1Cu;
    SET_GPR_U32(ctx, 31, 0x139C24u);
    ctx->pc = 0x139C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C1Cu;
    // 0x139c20: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x139C1Cu, 0x139C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C24u;
label_139c24:
    // 0x139c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x139c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x139c2c: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x139C2Cu;
    SET_GPR_U32(ctx, 31, 0x139C34u);
    ctx->pc = 0x139C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C2Cu;
    // 0x139c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x139C2Cu, 0x139C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C34u;
label_139c34:
    // 0x139c34: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x139c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x139c38: 0x8e260ab0  lw          $a2, 0xAB0($s1)
    ctx->pc = 0x139c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x139c3c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x139c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x139c40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c44: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x139C44u;
    SET_GPR_U32(ctx, 31, 0x139C4Cu);
    ctx->pc = 0x139C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C44u;
    // 0x139c48: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x139C44u, 0x139C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C4Cu;
label_139c4c:
    // 0x139c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139c50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139c54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139c58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x139c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x139C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C5Cu;
        // 0x139c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139C64u;
    // 0x139c64: 0x0  nop
    ctx->pc = 0x139c64u;
    // NOP
    ctx->pc = 0x139c68u;
}
