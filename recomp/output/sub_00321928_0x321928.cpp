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

// Function: sub_00321928
// Address: 0x321928 - 0x3219b8
void sub_00321928_0x321928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321928_0x321928");
#endif

    switch (ctx->pc) {
        case 0x321948u: goto label_321948;
        case 0x321974u: goto label_321974;
        case 0x321984u: goto label_321984;
        case 0x3219a0u: goto label_3219a0;
        default: break;
    }

    ctx->pc = 0x321928u;

    // 0x321928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x321928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32192c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32192cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321930: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x321930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x321934: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x321934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321938: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x321938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x32193c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x321940: 0xc09dc30  jal         func_2770C0
    ctx->pc = 0x321940u;
    SET_GPR_U32(ctx, 31, 0x321948u);
    ctx->pc = 0x321944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321940u;
    // 0x321944: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2770C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2770C0u, 0x321940u, 0x321948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321948u;
label_321948:
    // 0x321948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32194c: 0x3c03434c  lui         $v1, 0x434C
    ctx->pc = 0x32194cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17228 << 16));
    // 0x321950: 0x34634d50  ori         $v1, $v1, 0x4D50
    ctx->pc = 0x321950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19792);
    // 0x321954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321958: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x321958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32195c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32195cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321960: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x321960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
    // 0x321964: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x321964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321968: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x321968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x32196c: 0xc0dc12a  jal         func_3704A8
    ctx->pc = 0x32196Cu;
    SET_GPR_U32(ctx, 31, 0x321974u);
    ctx->pc = 0x321970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32196Cu;
    // 0x321970: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3704A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3704A8u, 0x32196Cu, 0x321974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321974u;
label_321974:
    // 0x321974: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x321974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321978: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x321978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32197c: 0xc0dc17a  jal         func_3705E8
    ctx->pc = 0x32197Cu;
    SET_GPR_U32(ctx, 31, 0x321984u);
    ctx->pc = 0x321980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32197Cu;
    // 0x321980: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3705E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3705E8u, 0x32197Cu, 0x321984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321984u;
label_321984:
    // 0x321984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321988: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x321988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x32198c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32198cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321990: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x321990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
    // 0x321994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321998: 0xc0c34c2  jal         func_30D308
    ctx->pc = 0x321998u;
    SET_GPR_U32(ctx, 31, 0x3219A0u);
    ctx->pc = 0x32199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321998u;
    // 0x32199c: 0x24a51890  addiu       $a1, $a1, 0x1890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D308u, 0x321998u, 0x3219A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3219A0u;
label_3219a0:
    // 0x3219a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3219a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3219a4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3219a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3219a8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3219a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3219ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3219acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3219b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3219B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3219B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219B0u;
        // 0x3219b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3219B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3219B8u;
}
