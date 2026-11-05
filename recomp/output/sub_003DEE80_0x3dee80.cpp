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

// Function: sub_003DEE80
// Address: 0x3dee80 - 0x3def08
void sub_003DEE80_0x3dee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEE80_0x3dee80");
#endif

    switch (ctx->pc) {
        case 0x3deeb0u: goto label_3deeb0;
        case 0x3deebcu: goto label_3deebc;
        case 0x3deec8u: goto label_3deec8;
        case 0x3deed4u: goto label_3deed4;
        case 0x3deee8u: goto label_3deee8;
        default: break;
    }

    ctx->pc = 0x3dee80u;

    // 0x3dee80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dee84: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dee88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dee8c: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x3dee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
    // 0x3dee90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dee94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dee94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dee9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dee9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deea0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3deea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x3deea4: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x3deea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x3deea8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEEA8u;
    SET_GPR_U32(ctx, 31, 0x3DEEB0u);
    ctx->pc = 0x3DEEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEEA8u;
    // 0x3deeac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEEA8u, 0x3DEEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEEB0u;
label_3deeb0:
    // 0x3deeb0: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x3deeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3deeb4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEEB4u;
    SET_GPR_U32(ctx, 31, 0x3DEEBCu);
    ctx->pc = 0x3DEEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEEB4u;
    // 0x3deeb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEEB4u, 0x3DEEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEEBCu;
label_3deebc:
    // 0x3deebc: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3deebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3deec0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEEC0u;
    SET_GPR_U32(ctx, 31, 0x3DEEC8u);
    ctx->pc = 0x3DEEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEEC0u;
    // 0x3deec4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEEC0u, 0x3DEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEEC8u;
label_3deec8:
    // 0x3deec8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3deec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3deecc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEECCu;
    SET_GPR_U32(ctx, 31, 0x3DEED4u);
    ctx->pc = 0x3DEED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEECCu;
    // 0x3deed0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEECCu, 0x3DEED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEED4u;
label_3deed4:
    // 0x3deed4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3deed4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3deed8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DEED8u;
    {
        const bool branch_taken_0x3deed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEED8u;
        // 0x3deedc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deed8) {
            ctx->pc = 0x3DEEECu;
            goto label_3deeec;
        }
    }
    ctx->pc = 0x3DEEE0u;
    // 0x3deee0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DEEE0u;
    SET_GPR_U32(ctx, 31, 0x3DEEE8u);
    ctx->pc = 0x3DEEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEEE0u;
    // 0x3deee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DEEE0u, 0x3DEEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEEE8u;
label_3deee8:
    // 0x3deee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3deee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3deeec:
    // 0x3deeec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3deeecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3deef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3deef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3deef4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DEEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEEF4u;
        // 0x3deef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEEFCu;
    // 0x3deefc: 0x0  nop
    ctx->pc = 0x3deefcu;
    // NOP
    // 0x3def00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3def00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3def04: 0x0  nop
    ctx->pc = 0x3def04u;
    // NOP
    ctx->pc = 0x3def08u;
}
