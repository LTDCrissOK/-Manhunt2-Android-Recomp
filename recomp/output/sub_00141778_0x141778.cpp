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

// Function: sub_00141778
// Address: 0x141778 - 0x1417e8
void sub_00141778_0x141778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141778_0x141778");
#endif

    switch (ctx->pc) {
        case 0x141798u: goto label_141798;
        case 0x1417d0u: goto label_1417d0;
        default: break;
    }

    ctx->pc = 0x141778u;

    // 0x141778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14177c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141780: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x141780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141788: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x141788u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14178c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x141790: 0xc04e866  jal         func_13A198
    ctx->pc = 0x141790u;
    SET_GPR_U32(ctx, 31, 0x141798u);
    ctx->pc = 0x141794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141790u;
    // 0x141794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x141790u, 0x141798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141798u;
label_141798:
    // 0x141798: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x141798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14179c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1417a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1417A0u;
    {
        const bool branch_taken_0x1417a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1417A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417A0u;
        // 0x1417a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417a0) {
            ctx->pc = 0x1417B0u;
            goto label_1417b0;
        }
    }
    ctx->pc = 0x1417A8u;
    // 0x1417a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1417A8u;
    {
        const bool branch_taken_0x1417a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1417ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417A8u;
        // 0x1417ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1417a8) {
            ctx->pc = 0x1417C4u;
            goto label_1417c4;
        }
    }
    ctx->pc = 0x1417B0u;
label_1417b0:
    // 0x1417b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1417b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1417b4: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x1417b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1417b8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1417b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1417bc: 0xac400b10  sw          $zero, 0xB10($v0)
    ctx->pc = 0x1417bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2832), GPR_U32(ctx, 0));
    // 0x1417c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1417c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1417c4:
    // 0x1417c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1417c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417c8: 0xc04e820  jal         func_13A080
    ctx->pc = 0x1417C8u;
    SET_GPR_U32(ctx, 31, 0x1417D0u);
    ctx->pc = 0x1417CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417C8u;
    // 0x1417cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A080u, 0x1417C8u, 0x1417D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417D0u;
label_1417d0:
    // 0x1417d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1417d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1417d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1417d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1417d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1417d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1417dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1417DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1417E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417DCu;
        // 0x1417e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1417DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1417E4u;
    // 0x1417e4: 0x0  nop
    ctx->pc = 0x1417e4u;
    // NOP
    ctx->pc = 0x1417e8u;
}
